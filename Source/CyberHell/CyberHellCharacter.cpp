// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CyberHellCharacter.h"
#include "CollisionShape.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Engine/World.h"
#include "Engine/EngineTypes.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "Components/InputComponent.h"
#include "Components/SkeletalMeshComponent.h"
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
// ACyberHellCharacter

ACyberHellCharacter::ACyberHellCharacter()
{
	if (GetWorld())
	{
		GetWorld()->bDebugDrawAllTraceTags = true;
	}
	
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

	// Initialize AnimInstance
	// if (!SkeletalMeshComponent) return;
	// Animation = Cast<UMyAnimInstance>(SkeletalMeshComponent->GetAnimInstance());

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

void ACyberHellCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACyberHellCharacter::DoubleJump);

	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &ACyberHellCharacter::Sprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &ACyberHellCharacter::Walk);

	PlayerInputComponent->BindAction("Dash", IE_Pressed, this, &ACyberHellCharacter::Dash);

	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACyberHellCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACyberHellCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ACyberHellCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ACyberHellCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ACyberHellCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ACyberHellCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ACyberHellCharacter::OnResetVR);
}

void ACyberHellCharacter::Tick( float DeltaTime )
{
	Super::Tick(DeltaTime);

	GetForwardTrace();
	GetUpTrace();
}

FHitResult ACyberHellCharacter::GetForwardTrace()
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
		//UE_LOG(LogTemp, Warning, TEXT("overlaping %s"), *Hit.GetActor()->GetName());
		
		DrawDebugSphere(GetWorld(), Hit.Location, 30.f, 16, FColor(255, 0, 0), false, 0.01f, 0, 0.5f);	
		ForwardVector = Hit.Location;
		ForwardNormal = Hit.Normal;
	}
	
	return Hit;
}

FHitResult ACyberHellCharacter::GetUpTrace()
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
		//UE_LOG(LogTemp, Warning, TEXT("overlaping %s"), *Hit.GetActor()->GetName());
		
		DrawDebugSphere(GetWorld(), Hit.Location, 30.f, 16, FColor(255, 0, 0), false, 0.01f, 0, 0.5f);
		UpwardVector = Hit.Location;
		if (SkeletalMeshComponent)
		{
			ClimbingCheckVector.Z = UpwardVector.Z - SkeletalMeshComponent->GetSocketLocation(PelvisSocket).Z;
			//UE_LOG(LogTemp, Warning, TEXT("PelvisSocketLocation: %s"), *SkeletalMeshComponent->GetSocketLocation(PelvisSocket).ToString());
			//UE_LOG(LogTemp, Warning, TEXT("ClimbingCheckVector: %s"), *ClimbingCheckVector.ToString());

			if (ClimbingCheckVector.Z > 0.f && ClimbingCheckVector.Z < 50.f)
			{
				if (!bIsClimbingLedge)
				{
					GrabLedge(ForwardNormal, ForwardVector, UpwardVector);
				}
			}
		}
	}

	return Hit;
}

void ACyberHellCharacter::GrabLedge(const FVector& WallNormal, const FVector& WallLocation, const FVector& HeightLocation)
{
	GetCharacterMovement()->SetMovementMode(MOVE_Flying);
	bIsHanging = true;
	float XLocation = WallNormal.X * 22.f + WallLocation.X;
	float YLocation = WallNormal.Y * 22.f + WallLocation.Y;
	float ZLocation = HeightLocation.Z - 120.f;
	//UE_LOG(LogTemp, Warning, TEXT("MoveComponentVector: %s"), *FVector(XLocation, YLocation, ZLocation).ToString());
	UE_LOG(LogTemp, Warning, TEXT("WallNormal: %s"), *WallNormal.ToString());
	UE_LOG(LogTemp, Warning, TEXT("WallNormalRotation: %s"), *WallNormal.Rotation().ToString());

	FLatentActionInfo Info;
	Info.CallbackTarget = this;
	Info.ExecutionFunction = FName("StopMovement");
	Info.UUID = 1;
	Info.Linkage = 0;

	// if(!Animation) return;
	// UE_LOG(LogTemp, Warning, TEXT("Hanging: %i"), Animation->bHanging);

	if (bIsHanging)
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

void ACyberHellCharacter::StopMovement()
{
	GetCharacterMovement()->StopMovementImmediately();
	UE_LOG(LogTemp, Warning, TEXT("Running StopMovemet"));
}


// void ACyberHellCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
// {
// 	if (OtherActor && (OtherActor != this) && OtherComp)
// 	{
// 		UE_LOG(LogTemp, Warning, TEXT("%s overlapped %s"), *OverlappedComp->GetName(), *OtherActor->GetName());
// 	}
// }

// void ACyberHellCharacter::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
// {
// 	UE_LOG(LogTemp, Warning, TEXT("Overlap stopped!"));
// }



void ACyberHellCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ACyberHellCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
	Jump();
}

void ACyberHellCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void ACyberHellCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ACyberHellCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ACyberHellCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ACyberHellCharacter::MoveRight(float Value)
{
	if ( (Controller != NULL) && (Value != 0.0f) )
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

void ACyberHellCharacter::DoubleJump()
{
	if (DoubleJumpCounter <= 1)
	{
		LaunchCharacter(FVector(0.0f, 0.0f, JumpHeight), false, true);
		DoubleJumpCounter++;
	}
}

void ACyberHellCharacter::Landed(const FHitResult& Hit)
{
	DoubleJumpCounter = 0;
}

void ACyberHellCharacter::Sprint()
{
	GetCharacterMovement()->MaxWalkSpeed = SprintingSpeed;
}

void ACyberHellCharacter::Walk()
{
	GetCharacterMovement()->MaxWalkSpeed = WalkingSpeed;
}

void ACyberHellCharacter::Dash()
{
	if (bCanDash)
	{
		GetCharacterMovement()->BrakingFriction = 0.0f;
		LaunchCharacter(FVector(FollowCamera->GetForwardVector().X, FollowCamera->GetForwardVector().Y, 0.0f) * DashDistance, true, true);
		bCanDash = false;
		GetWorldTimerManager().SetTimer(UnuseHandle, this, &ACyberHellCharacter::StopDashing, DashStop, false);
	}
}

void ACyberHellCharacter::StopDashing()
{
	GetCharacterMovement()->StopMovementImmediately();
	GetCharacterMovement()->BrakingFriction = 2.0f;
	GetWorldTimerManager().SetTimer(UnuseHandle, this, &ACyberHellCharacter::DashCooldown, DashCooldownTimer, false);
}

void ACyberHellCharacter::DashCooldown()
{
	bCanDash = true;
}

