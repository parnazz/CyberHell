// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CyberHell_1Character.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/PawnNoiseEmitterComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/DamageType.h"
#include "HeroState.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"

//////////////////////////////////////////////////////////////////////////
// ACyberHell_1Character

ACyberHell_1Character::ACyberHell_1Character()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

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

	State = new FHeroModeRun();

	WallCheckArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("WallCheckArrow"));
	WallCheckArrow->SetupAttachment(RootComponent);

	// Check for movement in ledge
	CanMoveLeftInLedgeArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("MoveLeftInLedgeArrow"));
	CanMoveLeftInLedgeArrow->SetupAttachment(RootComponent);
	CanMoveRightInLedgeArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("MoveRightInLedgeArrow"));
	CanMoveRightInLedgeArrow->SetupAttachment(RootComponent);

	// Check to prevent player grab ledge from corners
	LeftCornerCheckArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("LeftCornerCheckArrow"));
	LeftCornerCheckArrow->SetupAttachment(RootComponent);
	RightCornerCheckArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("RightCornerCheckArrow"));
	RightCornerCheckArrow->SetupAttachment(RootComponent);

	// Check: can player jump to another grabable object?
	LeftJumpFromLedgeCheckArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("LeftJumpFromLedgeCheckArrow"));
	LeftJumpFromLedgeCheckArrow->SetupAttachment(RootComponent);
	RightJumpFromLedgeCheckArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("RightJumpFromLedgeCheckArrow"));
	RightJumpFromLedgeCheckArrow->SetupAttachment(RootComponent);

	// Check: is there a wall to the left/right? If it is, then prevent to move in this direction
	LeftWallCheckArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("LeftWallCheckArrow"));
	LeftWallCheckArrow->SetupAttachment(RootComponent);
	RightWallCheckArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("RightWallCheckArrow"));
	RightWallCheckArrow->SetupAttachment(RootComponent);

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bEnableCameraLag = false;
	//CameraBoom->CameraLagSpeed = 3.0f;

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	NoiseEmitter = CreateDefaultSubobject<UPawnNoiseEmitterComponent>(TEXT("Noise Emitter Component"));
}

//////////////////////////////////////////////////////////////////////////
// Input

void ACyberHell_1Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACyberHell_1Character::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACyberHell_1Character::StopJumping);
	
	//Set up Pause Menu button
	PlayerInputComponent->BindAction("Pause", IE_Pressed, this, &ACyberHell_1Character::Pause).bExecuteWhenPaused = true;

	PlayerInputComponent->BindAxis("MoveForward", this, &ACyberHell_1Character::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACyberHell_1Character::MoveRight);
	

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &ACyberHell_1Character::CameraYaw);
	//PlayerInputComponent->BindAxis("TurnRate", this, &ACyberHell_1Character::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &ACyberHell_1Character::CameraPitch);
	//PlayerInputComponent->BindAxis("LookUpRate", this, &ACyberHell_1Character::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ACyberHell_1Character::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ACyberHell_1Character::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ACyberHell_1Character::OnResetVR);
}

void ACyberHell_1Character::BeginPlay()
{
	Super::BeginPlay();

	PlayerController = Cast<APlayerController>(GetController());

	if (PlayerController == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(0, 5.f, FColor().Red, "PlayerController = nullptr");
	}

	CurrentEnergy = MaxEnergy;
	CurrentHealth = MaxHealth;
}

void ACyberHell_1Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	State->Tick(*this, DeltaTime);
	FHeroState* State_ = State->HandleInput(*this, PlayerController);

	if (State_ != nullptr)
	{
		State->OnExitState(*this);
		delete State;
		State = State_;
		State->OnEnterState(*this);
	}

	UpdateCamera(CameraInput);
}

void ACyberHell_1Character::Jump()
{
	if (bCanMove)
	{
		Super::Jump();
	}

}void ACyberHell_1Character::Pause()
{
	if (UGameplayStatics::IsGamePaused(this)) {
		UGameplayStatics::SetGamePaused(this, false);
	}
	else
	{
		UGameplayStatics::SetGamePaused(this, true);
	}
}

void ACyberHell_1Character::StopJumping()
{
	Super::StopJumping();
}

void ACyberHell_1Character::StopMovement()
{
	GetCharacterMovement()->StopMovementImmediately();
}

void ACyberHell_1Character::EnableMovement(bool value)
{
	bCanMove = value;
}

void ACyberHell_1Character::ResetCamera(float DeltaTime)
{
	EnableCameraRotationByPlayer(false);

	if (bIsCameraTurningToDefualt)
	{
		FRotator CurrentCameraRotation = CameraBoom->GetRelativeTransform().GetRotation().Rotator();
		FRotator TargetRotation = this->GetActorRotation();
		
		if (!CurrentCameraRotation.Equals(TargetRotation, 1.f))
		{
			FRotator NewRotation = FMath::Lerp<float>(CurrentCameraRotation, TargetRotation, 8.f * DeltaTime);
			CameraBoom->SetRelativeRotation(NewRotation);
		}
		else
		{
			ShouldResetCamera(false);
		}
	}

	EnableCameraRotationByPlayer(true);
}

void ACyberHell_1Character::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ACyberHell_1Character::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
	Jump();
}

void ACyberHell_1Character::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
	StopJumping();
}


void ACyberHell_1Character::MoveForward(float Value)
{
	if (!bHangingIdle && bCanMove)
	{
		MovementInput.X = FMath::Clamp<float>(Value, -1.0f, 1.0f);
		const FRotator Rotation = CameraBoom->GetComponentRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		this->AddMovementInput(Direction, MovementInput.X);
	}
}

void ACyberHell_1Character::MoveRight(float Value)
{
	if (!bHangingIdle && bCanMove)
	{
		MovementInput.Y = FMath::Clamp<float>(Value, -1.0f, 1.0f);
		const FRotator Rotation = CameraBoom->GetComponentRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		this->AddMovementInput(Direction, MovementInput.Y);
	}
}

void ACyberHell_1Character::CameraPitch(float AxisValue)
{
	CameraInput.Y = AxisValue;
}

void ACyberHell_1Character::CameraYaw(float AxisValue)
{
	CameraInput.X = AxisValue;
}

void ACyberHell_1Character::UpdateCamera(FVector2D Input)
{
	if (bCanPlayerRotateCamera)
	{
		FRotator NewRotation = CameraBoom->GetComponentRotation();

		if (!bHangingIdle)
		{
			NewRotation.Yaw += Input.X;
		}
		else
		{
			NewRotation.Yaw = FMath::ClampAngle(NewRotation.Yaw + Input.X,
				GetActorRotation().Yaw - 80.f,
				GetActorRotation().Yaw + 80.f);
		}

		NewRotation.Pitch = FMath::ClampAngle(NewRotation.Pitch - Input.Y, -80.f, 80.f);
		CameraBoom->SetWorldRotation(NewRotation);
	}
}

void ACyberHell_1Character::InflictDamage(AActor* ImpactActor, float DamageAmount)
{
	if (PlayerController == nullptr)
	{
		return;
	}

	if (ImpactActor == nullptr || ImpactActor == this)
	{
		return;
	}

	TSubclassOf<UDamageType> const ValidDamageTypeClass = TSubclassOf<UDamageType>(UDamageType::StaticClass());
	FDamageEvent DamageEvent(ValidDamageTypeClass);

	ImpactActor->TakeDamage(DamageAmount, DamageEvent, PlayerController, this);
}

void ACyberHell_1Character::UpdateCurrentHealth(float Amount)
{
	if (CurrentHealth > 0)
	{
		CurrentHealth += Amount;
	}
}

void ACyberHell_1Character::UpdateCurrentEnergy(float Amount)
{
	if (CurrentEnergy > 0)
	{
		CurrentEnergy += Amount;
	}
}

void ACyberHell_1Character::MakeCharacterNoise(float loudness)
{
	MakeNoise(loudness, this, GetActorLocation());
}


