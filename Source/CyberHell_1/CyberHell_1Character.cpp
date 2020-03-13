// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CyberHell_1Character.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "HeroState.h"
#include "Engine/Engine.h"

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
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm
}

//////////////////////////////////////////////////////////////////////////
// Input

void ACyberHell_1Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
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
}

void ACyberHell_1Character::StopMovement()
{
	GetCharacterMovement()->StopMovementImmediately();
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
	if ((Controller != NULL) && (Value != 0.0f) && !bHangingIdle)
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
	if ((Controller != NULL) && (Value != 0.0f) && !bHangingIdle)
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