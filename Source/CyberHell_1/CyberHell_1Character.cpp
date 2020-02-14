// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CyberHell_1Character.h"
#include "CollisionShape.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Math/UnrealMathUtility.h"
#include "Engine/Engine.h"
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
#include "Delegates/DelegateInstancesImpl.h"

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

	// Create arrows for corner check
	LeftCornerCheck = CreateDefaultSubobject<UArrowComponent>(TEXT("Left Corner Check"));
	LeftCornerCheck->SetupAttachment(RootComponent);
	RightCornerCheck = CreateDefaultSubobject<UArrowComponent>(TEXT("Right Corner Check"));
	RightCornerCheck->SetupAttachment(RootComponent);

	// Create arrows for wall check
	LeftWallCheck = CreateDefaultSubobject<UArrowComponent>(TEXT("Left Wall Check"));
	LeftWallCheck->SetupAttachment(RootComponent);
	RightWallCheck = CreateDefaultSubobject<UArrowComponent>(TEXT("Right Wall Check"));
	RightWallCheck->SetupAttachment(RootComponent);

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

	// Default values for basic mechanics
	JumpHeight = 420.0f;
	WalkingSpeed = 600.0f;
	SprintingSpeed = 1000.0f;

	bCanJump = true;
	JumpCooldownTime = 0.1f;
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
	PlayerInputComponent->BindAction("TurnBack", IE_Pressed, this, &ACyberHell_1Character::TurnBack);
	PlayerInputComponent->BindAction("TurnLeft", IE_Pressed, this, &ACyberHell_1Character::TurnLeft);
	PlayerInputComponent->BindAction("TurnRight", IE_Pressed, this, &ACyberHell_1Character::TurnRight);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACyberHell_1Character::StopJump);
	PlayerInputComponent->BindAction("Equip", IE_Pressed, this, &ACyberHell_1Character::PickUpItem);
	PlayerInputComponent->BindAction("TestFunction", IE_Released, this, &ACyberHell_1Character::TestFunction);
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
	CornerCheckTracers();
	
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
		
		if (!bCanMoveLeft)
		{
			JumpLeftTracer();

			if (bCanJumpLeft)
			{
				bCanTurnLeft = false;
			}
			else
			{
				TurnLeftTracer();
			}
		}
		else
		{
			bCanTurnLeft = false;
		}

		if (!bCanMoveRight)
		{
			JumpRightTracer();

			if (bCanJumpRight)
			{
				bCanTurnRight = false;
			}
			else
			{
				TurnRightTracer();
			}
		}
		else
		{
			bCanTurnRight = false;
		}

		WallCheckTracers();
		MoveLeftInLedge();
		MoveRightInLedge();
		StopMoveInLedge();
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
	
	bool isHitReturned = GetWorld()->SweepSingleByChannel(
		Hit,
		Start,
		End,
		FQuat(),
		CollisionChannel,
		FCollisionShape::MakeSphere(20.f),
		TraceParams
	);

	if (isHitReturned)
	{
		DrawDebugSphere(GetWorld(), Hit.Location, 20.f, 16, FColor(255, 0, 0), false, -1.0f, 0, 0.5f);
		WallLocation = Hit.Location;
		WallNormal = Hit.Normal;
	}
}

void ACyberHell_1Character::CornerCheckTracers()
{
	FHitResult LeftHit = FHitResult();
	FHitResult RightHit = FHitResult();
	FVector LeftStart = LeftCornerCheck->GetComponentLocation();
	FVector LeftEnd = LeftStart + LeftCornerCheck->GetForwardVector() * 100;
	FVector RightStart = RightCornerCheck->GetComponentLocation();
	FVector RightEnd = RightStart + RightCornerCheck->GetForwardVector() * 100;
	FCollisionQueryParams TraceParams(FName(TEXT("ObstacleDetection Trace")), true, this);
	TraceParams.bTraceComplex = true;
	TraceParams.bIgnoreTouches = true;
	TraceParams.bReturnPhysicalMaterial = false;
	ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(TraceChannel);

	if (Super::GetOwner() != nullptr)
		TraceParams.AddIgnoredActor(Super::GetOwner());

	bool isLeftHitReturned = GetWorld()->LineTraceSingleByChannel(
		LeftHit,
		LeftStart,
		LeftEnd,
		CollisionChannel,
		TraceParams
	);

	bool isRightHitReturned = GetWorld()->LineTraceSingleByChannel(
		RightHit,
		RightStart,
		RightEnd,
		CollisionChannel,
		TraceParams
	);

	if (isLeftHitReturned && isRightHitReturned)
	{
		DrawDebugLine(GetWorld(), LeftStart, LeftEnd, FColor(255, 0, 255), false, -1.f, 0, 1.f);
		FVector LeftNormal = LeftHit.Location + LeftHit.Normal * 100;
		DrawDebugLine(GetWorld(), LeftHit.Location, LeftNormal, FColor(255, 0, 255), false, -1.f, 0, 1.f);
		DrawDebugLine(GetWorld(), RightStart, RightEnd, FColor(255, 0, 255), false, -1.f, 0, 1.f);
		FVector RightNormal = RightHit.Location + RightHit.Normal * 100;
		DrawDebugLine(GetWorld(), RightHit.Location, RightNormal, FColor(255, 0, 255), false, -1.f, 0, 1.f);

		FVector FromPlayerLeft = (LeftEnd - LeftStart).GetSafeNormal();
		FVector FromPlayerRight = (RightEnd - RightStart).GetSafeNormal();

		float LeftAngle = AngleBetweenVectors(FromPlayerLeft, LeftHit.Normal);
		float RightAngle = AngleBetweenVectors(FromPlayerRight, RightHit.Normal);

		if (LeftAngle == RightAngle)
		{
			bCanHang = true;
		}
		else
		{
			bCanHang = false;
		}
	}
	else
	{
		bCanHang = false;
	}
}

float ACyberHell_1Character::AngleBetweenVectors(FVector FirstVector, FVector SecondVector)
{
	float Product = FVector::DotProduct(FirstVector, SecondVector);
	float FirstMod = FirstVector.Size();
	float SecondMod = SecondVector.Size();
	float Cosine = Product / (FirstMod * SecondMod);
	float Angle = FMath::RadiansToDegrees((FMath::Acos(Cosine)));

	return Angle;
}

void ACyberHell_1Character::TestFunction()
{
	if (GetMesh()->GetAnimInstance() && TurnLeftMontage)
	{
		GetMesh()->GetAnimInstance()->Montage_Play(TurnLeftMontage);
	}
}

void ACyberHell_1Character::WallCheckTracers()
{
	FHitResult LeftHit = FHitResult();
	FHitResult RightHit = FHitResult();
	FVector LeftStart = LeftWallCheck->GetComponentLocation();
	FVector LeftEnd = LeftStart + LeftWallCheck->GetForwardVector() * 100;
	FVector RightStart = RightWallCheck->GetComponentLocation();
	FVector RightEnd = RightStart + RightWallCheck->GetForwardVector() * 100;
	FCollisionQueryParams TraceParams(FName(TEXT("ObstacleDetection Trace")), true, this);
	TraceParams.bTraceComplex = true;
	TraceParams.bIgnoreTouches = true;
	TraceParams.bReturnPhysicalMaterial = false;
	ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(TraceChannel);

	if (Super::GetOwner() != nullptr)
		TraceParams.AddIgnoredActor(Super::GetOwner());

	bool isLeftHitReturned = GetWorld()->LineTraceSingleByChannel(
		LeftHit,
		LeftStart,
		LeftEnd,
		CollisionChannel,
		TraceParams
	);

	bool isRightHitReturned = GetWorld()->LineTraceSingleByChannel(
		RightHit,
		RightStart,
		RightEnd,
		CollisionChannel,
		TraceParams
	);

	if (isLeftHitReturned)
	{
		DrawDebugLine(GetWorld(), LeftStart, LeftEnd, FColor(255, 0, 255), false, -1.f, 0, 1.f);
		bCanMoveLeft = false;
		bCanJumpLeft = false;
	}

	if (isRightHitReturned)
	{
		DrawDebugLine(GetWorld(), RightStart, RightEnd, FColor(255, 0, 255), false, -1.f, 0, 1.f);
		bCanMoveRight = false;
		bCanJumpRight = false;
	}
	
}

void ACyberHell_1Character::TurnBack()
{
	if (bHanging)
	{
		if (bIsTurnedBack)
		{
			bIsTurnedBack = false;
		}
		else
		{
			bIsTurnedBack = true;
		}
	}
}

void ACyberHell_1Character::GetUpTrace()
{
	FHitResult Hit = FHitResult();
	FVector Start = GetActorLocation();
	Start.Z += 500.f;
	Start += GetActorForwardVector() * 60;
  	FVector End = Start;
	End.Z -= 500.f;
	FCollisionQueryParams TraceParams(FName(TEXT("ObstacleDetection Trace")), true, this);
	TraceParams.bTraceComplex = true;
	TraceParams.bIgnoreTouches = true;
	TraceParams.bReturnPhysicalMaterial = false;
	ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(TraceChannel);

	if(Super::GetOwner()!=nullptr)
    	TraceParams.AddIgnoredActor(Super::GetOwner());
	
	bool isHitReturned = GetWorld()->SweepSingleByChannel(
		Hit,
		Start,
		End,
		FQuat(),
		CollisionChannel,
		FCollisionShape::MakeSphere(5.f),
		TraceParams
	);

	FVector ClimbingCheckVector = FVector(0.f, 0.f, 0.f);
	
	if (isHitReturned && SkeletalMeshComponent)
	{
		DrawDebugSphere(GetWorld(), Hit.Location, 5.f, 16, FColor(255, 0, 0), false, -1.0f, 0, 0.5f);
		HeightLocation = Hit.Location;
		ClimbingCheckVector.Z = HeightLocation.Z - SkeletalMeshComponent->GetSocketLocation(PelvisSocket).Z;

		if (ClimbingCheckVector.Z > 50.f && ClimbingCheckVector.Z < ClimbHeight)
		{
			if (!bClimbing && !bIsJumpingFromLedge && !bIsTurning && bCanHang)
			{
				GrabLedge();
			}
		}
	}
}

void ACyberHell_1Character::GrabLedge()
{
	GetCharacterMovement()->SetMovementMode(MOVE_Flying);
	bHanging = true;
	float XLocation = WallNormal.X * 30 + WallLocation.X;
	float YLocation = WallNormal.Y * 30 + WallLocation.Y;
	float ZLocation = HeightLocation.Z - 100.f;
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
		0.01f,
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
		bCanJumpLeft = false;
		bCanJumpRight = false;
		bCanTurnLeft = false;
		bCanTurnRight = false;
		bIsTurnedBack = false;
	}
}

void ACyberHell_1Character::OnClimbLedgeStart()
{
	if (!bClimbing && bHanging && !bIsTurnedBack)
	{
		bClimbing = true;
		bHanging = false;
		DisableInput(GetWorld()->GetFirstPlayerController());

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
		bCanJumpLeft = false;
		bCanJumpRight = false;
		bCanTurnLeft = false;
		bCanTurnRight = false;
		bIsTurnedBack = false;
		EnableInput(GetWorld()->GetFirstPlayerController());
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
		DrawDebugCapsule(GetWorld(), Hit.Location, 60.f, 20.f, LeftArrow->GetComponentQuat().Identity, FColor(0, 0, 255), false, -1.0F, 0, 0.5f);
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
		DrawDebugCapsule(GetWorld(), Hit.Location, 60.f, 20.f, RightArrow->GetComponentQuat().Identity, FColor(0, 0, 255), false, -1.0F, 0, 0.5f);
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
	if (bCanMoveLeft && GetInputAxisValue("MoveRight") < 0 && !bIsTurnedBack)
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
	if (bCanMoveRight && GetInputAxisValue("MoveRight") > 0 && !bIsTurnedBack)
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

void ACyberHell_1Character::TurnLeftTracer()
{
	FHitResult Hit = FHitResult();
	if (!LeftArrow) { return; }

	GetCharacterMovement()->StopMovementImmediately();
	FVector Start = LeftArrow->GetComponentLocation();
	Start.Z += 60.f;
	FVector End = Start + LeftArrow->GetForwardVector() * 70;
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
		FCollisionShape::MakeSphere(20.f),
		TraceParams
	);

	if (isHitReturned)
	{
		bCanTurnLeft = false;
		DrawDebugSphere(GetWorld(), Hit.Location, 20.f, 16, FColor(0, 255, 0), false, -1.0f, 0, 0.5f);
	}
	else
	{
		bCanTurnLeft = true;
	}
}

void ACyberHell_1Character::TurnRightTracer()
{
	FHitResult Hit = FHitResult();
	if (!RightArrow) { return; }

	GetCharacterMovement()->StopMovementImmediately();
	FVector Start = RightArrow->GetComponentLocation();
	Start.Z += 60.f;
	FVector End = Start + RightArrow->GetForwardVector() * 70;
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
		FCollisionShape::MakeSphere(20.f),
		TraceParams
	);

	if (isHitReturned)
	{
		bCanTurnRight = false;
		DrawDebugSphere(GetWorld(), Hit.Location, 20.f, 16, FColor(0, 255, 0), false, -1.0f, 0, 0.5f);
	}
	else
	{
		bCanTurnRight = true;
	}
}

void ACyberHell_1Character::OnTurnEnd()
{
	EnableInput(GetWorld()->GetFirstPlayerController());
	StopMovement();
	bIsTurning = false;
}

void ACyberHell_1Character::TurnLeft()
{
	if (!bCanJumpLeft && bCanTurnLeft)
	{
		bIsTurning = true;
		bCanTurnLeft = false;
		FTimerHandle GrabHandle;
		FTimerHandle TurnEndHandle;
		DisableInput(GetWorld()->GetFirstPlayerController());

		if (GetMesh()->GetAnimInstance() && TurnLeftMontage)
		{
			GetMesh()->GetAnimInstance()->Montage_Play(TurnLeftMontage);
		}

		GetWorldTimerManager().SetTimer(GrabHandle, this, &ACyberHell_1Character::GrabLedge, 1.167f, false);
		GetWorldTimerManager().SetTimer(TurnEndHandle, this, &ACyberHell_1Character::OnTurnEnd, 1.167f, false);
	}
}

void ACyberHell_1Character::TurnRight()
{
	if (!bCanJumpRight && bCanTurnRight)
	{
		bIsTurning = true;
		bCanTurnRight = false;
		FTimerHandle GrabHandle;
		FTimerHandle TurnEndHandle;
		DisableInput(GetWorld()->GetFirstPlayerController());

		if (GetMesh()->GetAnimInstance() && TurnRightMontage)
		{
			GetMesh()->GetAnimInstance()->Montage_Play(TurnRightMontage);
		}

		GetWorldTimerManager().SetTimer(GrabHandle, this, &ACyberHell_1Character::GrabLedge, 1.167f, false);
		GetWorldTimerManager().SetTimer(TurnEndHandle, this, &ACyberHell_1Character::OnTurnEnd, 1.167f, false);
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
		if (DoubleJumpCounter <= 1 && bCanJump)
		{
			LaunchCharacter(FVector(0.0f, 0.0f, JumpHeight), false, true);
			DoubleJumpCounter++;
			bIsJumpPressed = true;
			bCanJump = false;
			FTimerHandle JumpTimerHandle;
			GetWorldTimerManager().SetTimer(JumpTimerHandle, this, &ACyberHell_1Character::JumpCooldown, JumpCooldownTime, false);
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
		else if (bIsTurnedBack && !bIsJumpingFromLedge)
		{
			FVector VectorVelocity = GetActorForwardVector() * (-500) + FVector(0, 0, 700.f);
			LaunchCharacter(VectorVelocity, false, false);
			UnGrabLedge();
			bIsTurnedBack = false;
			FRotator CharacterRotation = GetActorRotation();
			SetActorRotation(FRotator(CharacterRotation.Pitch, CharacterRotation.Yaw - 180, CharacterRotation.Roll));
		}
		else
		{
			OnClimbLedgeStart();
		}
	}
}

void ACyberHell_1Character::StopJump()
{
	bIsJumpPressed = false;
}

void ACyberHell_1Character::JumpCooldown()
{
	bCanJump = true;
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

void ACyberHell_1Character::PickUpItem()
{
	if (AttachedWeapon != nullptr)
	{
		if (EquippedWeapon == nullptr)
		{
			FTransform SpawnTransform = SkeletalMeshComponent->GetSocketTransform("WeaponSocket");
			EquippedWeapon = GetWorld()->SpawnActor<ABase_Weapon>(AttachedWeapon->GetClass(), SpawnTransform);
			Equip();
		}
		else
		{
			EquippedWeapon->Destroy();
		}
	}
}

void ACyberHell_1Character::Equip()
{
	FAttachmentTransformRules TransformRules = FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true);
	if (EquippedWeapon != nullptr)
	{
		EquippedWeapon->AttachToComponent(SkeletalMeshComponent, TransformRules, EquippedWeapon->EquipSocket);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(0, 5.f, FColor().Red, "Wrong");
	}
}
