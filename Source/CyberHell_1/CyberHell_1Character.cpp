// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CyberHell_1Character.h"
#include "CollisionShape.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Math/UnrealMathUtility.h"
#include "Engine/World.h"
#include "Engine/EngineTypes.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "Components/InputComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "Animation/AnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Controller.h"
#include "GameFramework/Actor.h"
#include "GameFramework/SpringArmComponent.h"
#include "TimerManager.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetSystemLibrary.h"

//////////////////////////////////////////////////////////////////////////
// ACyberHell_1Character

ACyberHell_1Character::ACyberHell_1Character()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
	
	PrimaryActorTick.bCanEverTick = true;

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Initialize variable for MeshComponent
	SkeletalMeshComponent = GetMesh();

	// Create arrows for left/right movement on ledge
	LeftArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Left Arrow"));
	LeftArrow->SetupAttachment(RootComponent);
	RightArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Right Arrow"));
	RightArrow->SetupAttachment(RootComponent);

	// Create arrows for side jumps
	LeftLedge = CreateDefaultSubobject<UArrowComponent>(TEXT("Left Ledge"));
	LeftLedge->SetupAttachment(RootComponent);
	RightLedge = CreateDefaultSubobject<UArrowComponent>(TEXT("Right Ledge"));
	RightLedge->SetupAttachment(RootComponent);

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

	JumpHeight = 420.0f;
	WalkingSpeed = 600.0f;
	SprintingSpeed = 1000.0f;

	bCanDash = true;
	DashDistance = 6000.0f;
	DashCooldownTimer = 2.0f;
	DashStop = 0.1f;
}

//////////////////////////////////////////////////////////////////////////
// Input

void ACyberHell_1Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACyberHell_1Character::DoubleJump);

	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &ACyberHell_1Character::Sprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &ACyberHell_1Character::Walk);

	PlayerInputComponent->BindAction("Dash", IE_Pressed, this, &ACyberHell_1Character::Dash);

	PlayerInputComponent->BindAction("UnGrabLedge", IE_Pressed, this, &ACyberHell_1Character::UnGrabLedge);

	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACyberHell_1Character::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACyberHell_1Character::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ACyberHell_1Character::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ACyberHell_1Character::LookUpAtRate);
}

void ACyberHell_1Character::Tick( float DeltaTime )
{
	Super::Tick(DeltaTime);

	GetForwardTrace();
	GetUpTrace();
	
	if (GetMesh()->GetAnimInstance()->Montage_GetIsStopped(ClimbMontage) && bClimbing && !bHanging)
	{
		OnClimbLedgeEnd();
	}

	if (bHanging)
	{
		if (LeftArrow)
		{
			LeftTracer();
		}

		if (RightArrow)
		{
			RightTracer();
		}

		MoveLeftInLedge();
		MoveRightInLedge();
		StopMoveInLedge();

		if (!bCanMoveLeft)
		{
			JumpLeftTracer();
		}

		if (!bCanMoveRight)
		{
			JumpRightTracer();
		}
	}
}

void ACyberHell_1Character::GetForwardTrace()
{
	FHitResult Hit = FHitResult();
	
	FVector Start = GetActorLocation();
  	FVector End = Start + (GetActorForwardVector() * 500.f);
	FCollisionQueryParams TraceParams(FName(TEXT("ObstacleDetection Trace")), true, this);
	TraceParams.bTraceComplex = true;
	TraceParams.bIgnoreTouches = true;
	TraceParams.bReturnPhysicalMaterial = false;

	ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(TraceChannel);

	if(Super::GetOwner()!=nullptr)
    	TraceParams.AddIgnoredActor(Super::GetOwner());
	
	bool isHitReturned;

	isHitReturned = GetWorld()->SweepSingleByChannel(
		Hit,
		Start,
		End,
		FQuat(),
		CollisionChannel,
		FCollisionShape::MakeSphere(30.f),
		TraceParams
	);
	
	if (isHitReturned)
	{
		DrawDebugSphere(GetWorld(), Hit.Location, 30.f, 16, FColor(255, 0, 0), false, 0.01f, 0, 0.5f);	
		WallLocation = Hit.Location;
		WallNormal = Hit.Normal;
	}
}

void ACyberHell_1Character::GetUpTrace()
{
	FHitResult Hit = FHitResult();

	FVector Start = GetActorLocation();
	Start.Z += 500.f;
	Start += GetActorForwardVector() * 70.f;
  	FVector End = Start;
	End.Z -= 500.f;

	FCollisionQueryParams TraceParams(FName(TEXT("ObstacleDetection Trace")), true, this);
	TraceParams.bTraceComplex = true;
	TraceParams.bIgnoreTouches = true;
	TraceParams.bReturnPhysicalMaterial = false;

	ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(TraceChannel);

	if(Super::GetOwner()!=nullptr)
    	TraceParams.AddIgnoredActor(Super::GetOwner());
	
	bool isHitReturned;

	isHitReturned = GetWorld()->SweepSingleByChannel(
		Hit,
		Start,
		End,
		FQuat(),
		CollisionChannel,
		FCollisionShape::MakeSphere(30.f),
		TraceParams
	);

	FVector ClimbingCheckVector = FVector(0.f, 0.f, 0.f);
	
	if (isHitReturned)
	{
		DrawDebugSphere(GetWorld(), Hit.Location, 30.f, 16, FColor(255, 0, 0), false, 0.01f, 0, 0.5f);
		HeightLocation = Hit.Location;

		if (SkeletalMeshComponent)
		{
			ClimbingCheckVector.Z = HeightLocation.Z - SkeletalMeshComponent->GetSocketLocation(PelvisSocket).Z;

			if (ClimbingCheckVector.Z > 0.f && ClimbingCheckVector.Z < ClimbHeight)
			{
				if (!bClimbing && !bIsJumpingFromLedge)
				{
					GrabLedge();
				}
			}
		}
	}
}

void ACyberHell_1Character::GrabLedge()
{
	GetCharacterMovement()->SetMovementMode(MOVE_Flying);
	bHanging = true;
	
	float XLocation = WallNormal.X * 22.f + WallLocation.X;
	float YLocation = WallNormal.Y * 22.f + WallLocation.Y;
	float ZLocation = HeightLocation.Z - 130.f;

	FLatentActionInfo Info;
	Info.CallbackTarget = this;
	Info.ExecutionFunction = FName("StopMovement");
	Info.UUID = 1;
	Info.Linkage = 0;

	if (bHanging)
	{
		UKismetSystemLibrary::MoveComponentTo(
		GetCapsuleComponent(),
		FVector(XLocation, YLocation, ZLocation),
		FRotator(WallNormal.Rotation().Pitch, WallNormal.Rotation().Yaw - 180.f, WallNormal.Rotation().Roll),
		false,
		false,
		0.13f,
		false,
		EMoveComponentAction::Move,
		Info
		);
	}
}

void ACyberHell_1Character::StopMovement()
{
	GetCharacterMovement()->StopMovementImmediately();
}

void ACyberHell_1Character::UnGrabLedge()
{
	if (bHanging)
	{
		GetCharacterMovement()->SetMovementMode(MOVE_Walking);
		bHanging = false;
	}
}

void ACyberHell_1Character::OnClimbLedgeStart()
{
	if (!bClimbing && bHanging)
	{
		bClimbing = true;
		bHanging = false;
		if (GetMesh()->GetAnimInstance() && ClimbMontage)
		{
			GetMesh()->GetAnimInstance()->Montage_Play(ClimbMontage);
		}
	}
}

void ACyberHell_1Character::OnClimbLedgeEnd()
{
	if (bClimbing)
	{
		GetCharacterMovement()->SetMovementMode(MOVE_Walking);
		bClimbing = false;
		DoubleJumpCounter = 0;
	}
}

void ACyberHell_1Character::LeftTracer()
{
	FHitResult Hit = FHitResult();
	if (!LeftArrow) { return; }

	FVector Start = LeftArrow->GetComponentLocation();
	FVector End = Start + LeftArrow->GetForwardVector() * 50;
	ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(TraceChannel);

	FCollisionQueryParams TraceParams(FName(TEXT("ObstacleDetection Trace")), true, this);
	TraceParams.bTraceComplex = true;
	TraceParams.bIgnoreTouches = true;
	TraceParams.bReturnPhysicalMaterial = false;

	bool isHitReturned = GetWorld()->SweepSingleByChannel(
		Hit,
		Start,
		End,
		LeftArrow->GetComponentQuat().Identity,
		CollisionChannel,
		FCollisionShape::MakeCapsule(20.f, 60.f),
		TraceParams
	);

	if (isHitReturned)
	{
		if (GetWorld())
		{
			DrawDebugCapsule(GetWorld(), Hit.Location, 60.f, 20.f, LeftArrow->GetComponentQuat().Identity, FColor(0, 0, 255), false, -1.0F, 0, 0.5f);
		}

		bCanMoveLeft = true;
		bCanJumpLeft = false;
	}
	else
	{
		bCanMoveLeft = false;
	}
}

void ACyberHell_1Character::RightTracer()
{
	FHitResult Hit = FHitResult();
	if (!RightArrow) { return; }

	FVector Start = RightArrow->GetComponentLocation();
	FVector End = Start + RightArrow->GetForwardVector() * 50;
	ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(TraceChannel);

	FCollisionQueryParams TraceParams(FName(TEXT("ObstacleDetection Trace")), true, this);
	TraceParams.bTraceComplex = true;
	TraceParams.bIgnoreTouches = true;
	TraceParams.bReturnPhysicalMaterial = false;
	

	bool isHitReturned = GetWorld()->SweepSingleByChannel(
		Hit,
		Start,
		End,
		RightArrow->GetComponentQuat().Identity,
		CollisionChannel,
		FCollisionShape::MakeCapsule(20.f, 60.f),
		TraceParams
	);

	if (isHitReturned)
	{
		if (GetWorld())
		{
			DrawDebugCapsule(GetWorld(), Hit.Location, 60.f, 20.f, RightArrow->GetComponentQuat().Identity, FColor(0, 0, 255), false, -1.0F, 0, 0.5f);
		}

		bCanMoveRight = true;
		bCanJumpRight = false;
	}
	else
	{
		bCanMoveRight = false;
	}
}

void ACyberHell_1Character::MoveLeftInLedge()
{
	if (bCanMoveLeft && GetInputAxisValue("MoveRight") < 0)
	{
		FVector Current = GetActorLocation();
		FVector Target = Current - GetActorQuat().GetRightVector() * 20.f;
		FVector NewLocation = FMath::VInterpTo(Current, Target, GetWorld()->GetDeltaSeconds(), 5.f);

		this->SetActorLocation(NewLocation);
		bMovingRight = false;
		bMovingLeft = true;
	}
}

void ACyberHell_1Character::MoveRightInLedge()
{
	if (bCanMoveRight && GetInputAxisValue("MoveRight") > 0)
	{
		FVector Current = GetActorLocation();
		FVector Target = Current + GetActorQuat().GetRightVector() * 20.f;
		FVector NewLocation = FMath::VInterpTo(Current, Target, GetWorld()->GetDeltaSeconds(), 5.f);

		this->SetActorLocation(NewLocation);
		bMovingRight = true;
		bMovingLeft = false;
	}
}

void ACyberHell_1Character::StopMoveInLedge()
{
	if (GetInputAxisValue("MoveRight") == 0)
	{
		bMovingRight = false;
		bMovingLeft = false;
	}
}

void ACyberHell_1Character::JumpLeftTracer()
{
	FHitResult Hit = FHitResult();
	if (!LeftLedge) { return; }

	FVector Start = LeftLedge->GetComponentLocation();
	FVector End = Start + LeftLedge->GetForwardVector() * 50;
	ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(TraceChannel);

	FCollisionQueryParams TraceParams(FName(TEXT("ObstacleDetection Trace")), true, this);
	TraceParams.bTraceComplex = true;
	TraceParams.bIgnoreTouches = true;
	TraceParams.bReturnPhysicalMaterial = false;


	bool isHitReturned = GetWorld()->SweepSingleByChannel(
		Hit,
		Start,
		End,
		LeftLedge->GetComponentQuat().Identity,
		CollisionChannel,
		FCollisionShape::MakeCapsule(25.f, 60.f),
		TraceParams
	);

	if (isHitReturned)
	{
		if (bCanMoveLeft)
		{
			bCanJumpLeft = false;
		}
		else
		{
			bCanJumpLeft = true;
			DrawDebugCapsule(GetWorld(), Hit.Location, 60.f, 25.f, LeftLedge->GetComponentQuat().Identity, FColor(0, 0, 255), false, -1.0F, 0, 0.5f);
		}
	}
	else
	{
		bCanJumpLeft = false;
	}
}

void ACyberHell_1Character::JumpRightTracer()
{
	FHitResult Hit = FHitResult();
	if (!RightLedge) { return; }

	FVector Start = RightLedge->GetComponentLocation();
	FVector End = Start + RightLedge->GetForwardVector() * 50;
	ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(TraceChannel);

	FCollisionQueryParams TraceParams(FName(TEXT("ObstacleDetection Trace")), true, this);
	TraceParams.bTraceComplex = true;
	TraceParams.bIgnoreTouches = true;
	TraceParams.bReturnPhysicalMaterial = false;


	bool isHitReturned = GetWorld()->SweepSingleByChannel(
		Hit,
		Start,
		End,
		RightLedge->GetComponentQuat().Identity,
		CollisionChannel,
		FCollisionShape::MakeCapsule(25.f, 60.f),
		TraceParams
	);

	if (isHitReturned)
	{
		if (bCanMoveRight)
		{
			bCanJumpRight = false;
		}
		else
		{
			bCanJumpRight = true;
			DrawDebugCapsule(GetWorld(), Hit.Location, 60.f, 25.f, RightLedge->GetComponentQuat().Identity, FColor(0, 0, 255), false, -1.0F, 0, 0.5f);
		}
	}
	else
	{
		bCanJumpRight = false;
	}
}

void ACyberHell_1Character::JumpLeftLedge()
{
	if (!bIsJumpingFromLedge)
	{
		GetCharacterMovement()->SetMovementMode(MOVE_Flying);
		bIsJumpingFromLedge = true;
		bJumpingLeftFromLedge = true;
		bHanging = true;

		OnJumpLeftFromLedgeStart();

		GetWorldTimerManager().SetTimer(UnuseHandle, this, &ACyberHell_1Character::OnJumpLeftFromLedgeEnd, 0.7f, false);
	}
}

void ACyberHell_1Character::JumpRightLedge()
{
	if (!bIsJumpingFromLedge)
	{
		GetCharacterMovement()->SetMovementMode(MOVE_Flying);
		bIsJumpingFromLedge = true;
		bJumpingRightFromLedge = true;
		bHanging = true;

		OnJumpRightFromLedgeStart();

		GetWorldTimerManager().SetTimer(UnuseHandle, this, &ACyberHell_1Character::OnJumpRightFromLedgeEnd, 0.7f, false);
	}
}

void ACyberHell_1Character::OnJumpRightFromLedgeStart()
{
	if (GetMesh()->GetAnimInstance() && JumpRightFromLedgeMontage)
	{
		GetMesh()->GetAnimInstance()->Montage_Play(JumpRightFromLedgeMontage);
	}
}

void ACyberHell_1Character::OnJumpLeftFromLedgeStart()
{
	if (GetMesh()->GetAnimInstance() && JumpLeftFromLedgeMontage)
	{
		GetMesh()->GetAnimInstance()->Montage_Play(JumpLeftFromLedgeMontage);
	}
}

void ACyberHell_1Character::OnJumpRightFromLedgeEnd()
{
	if (GetMesh()->GetAnimInstance()->Montage_GetIsStopped(JumpRightFromLedgeMontage))
	{
		bJumpingRightFromLedge = false;
		GetCharacterMovement()->StopMovementImmediately();
		bIsJumpingFromLedge = false;
	}
}

void ACyberHell_1Character::OnJumpLeftFromLedgeEnd()
{
	if (GetMesh()->GetAnimInstance()->Montage_GetIsStopped(JumpLeftFromLedgeMontage))
	{
		bJumpingLeftFromLedge = false;
		GetCharacterMovement()->StopMovementImmediately();
		bIsJumpingFromLedge = false;
	}
}

/// DON`T FORGET TO DELETE ME
void ACyberHell_1Character::TestMessage()
{
	UE_LOG(LogTemp, Warning, TEXT("Test"));
}

void ACyberHell_1Character::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ACyberHell_1Character::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ACyberHell_1Character::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f) && !bHanging)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ACyberHell_1Character::MoveRight(float Value)
{
	if ( (Controller != NULL) && (Value != 0.0f) && !bHanging)
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

void ACyberHell_1Character::DoubleJump()
{
	if (!bHanging)
	{
		if (DoubleJumpCounter <= 1)
		{
			LaunchCharacter(FVector(0.0f, 0.0f, JumpHeight), false, true);
			DoubleJumpCounter++;
		}
	}
	else
	{
		if (bCanJumpRight)
		{
			if (GetInputAxisValue("MoveRight") > 0)
			{
				JumpRightLedge();
			}
			else
			{
				OnClimbLedgeStart();
			}
		}
		else if (bCanJumpLeft)
		{
			if (GetInputAxisValue("MoveRight") < 0)
			{
				JumpLeftLedge();
			}
			else
			{
				OnClimbLedgeStart();
			}
		}
		else
		{
			OnClimbLedgeStart();
		}
	}
}

void ACyberHell_1Character::Landed(const FHitResult& Hit)
{
	DoubleJumpCounter = 0;
}

void ACyberHell_1Character::Sprint()
{
	GetCharacterMovement()->MaxWalkSpeed = SprintingSpeed;
}

void ACyberHell_1Character::Walk()
{
	GetCharacterMovement()->MaxWalkSpeed = WalkingSpeed;
}

void ACyberHell_1Character::Dash()
{
	if (bCanDash)
	{
		GetCharacterMovement()->BrakingFriction = 0.0f;
		LaunchCharacter(FVector(FollowCamera->GetForwardVector().X, FollowCamera->GetForwardVector().Y, 0.0f) * DashDistance, true, true);
		bCanDash = false;
		GetWorldTimerManager().SetTimer(UnuseHandle, this, &ACyberHell_1Character::StopDashing, DashStop, false);
	}
}

void ACyberHell_1Character::StopDashing()
{
	GetCharacterMovement()->StopMovementImmediately();
	GetCharacterMovement()->BrakingFriction = 2.0f;
	GetWorldTimerManager().SetTimer(UnuseHandle, this, &ACyberHell_1Character::DashCooldown, DashCooldownTimer, false);
}

void ACyberHell_1Character::DashCooldown()
{
	bCanDash = true;
}

