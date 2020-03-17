// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroState.h"
#include "Animation/AnimInstance.h"
#include "Base_Weapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/ArrowComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerController.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Kismet/KismetSystemLibrary.h"
#include "DrawDebugHelpers.h"


FHeroState::FHeroState()
{
}

FHeroState::~FHeroState()
{
}

bool FHeroState::CheckCanMoveLeft(ACyberHell_1Character& Character)
{
	FHitResult Hit = FHitResult();
	if (!Character.CanMoveLeftInLedgeArrow) { return false; }

	FVector Start = Character.CanMoveLeftInLedgeArrow->GetComponentLocation();
	FVector End = Start + Character.CanMoveLeftInLedgeArrow->GetForwardVector() * 50;
	ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(Character.GetTraceChannel());
	FCollisionQueryParams TraceParams(FName(TEXT("ObstacleDetection Trace")), true, &Character);
	TraceParams.bTraceComplex = true;
	TraceParams.bIgnoreTouches = true;
	TraceParams.bReturnPhysicalMaterial = false;

	bool isHitReturned = Character.GetWorld()->SweepSingleByChannel(
		Hit,
		Start,
		End,
		Character.CanMoveLeftInLedgeArrow->GetComponentQuat().Identity,
		CollisionChannel,
		FCollisionShape::MakeCapsule(20.f, 60.f),
		TraceParams
	);

	return isHitReturned;
}

bool FHeroState::CheckCanMoveRight(ACyberHell_1Character& Character)
{
	FHitResult Hit = FHitResult();
	if (!Character.CanMoveRightInLedgeArrow) { return false; }

	FVector Start = Character.CanMoveRightInLedgeArrow->GetComponentLocation();
	FVector End = Start + Character.CanMoveRightInLedgeArrow->GetForwardVector() * 50;
	ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(Character.GetTraceChannel());
	FCollisionQueryParams TraceParams(FName(TEXT("ObstacleDetection Trace")), true, &Character);
	TraceParams.bTraceComplex = true;
	TraceParams.bIgnoreTouches = true;
	TraceParams.bReturnPhysicalMaterial = false;

	bool isHitReturned = Character.GetWorld()->SweepSingleByChannel(
		Hit,
		Start,
		End,
		Character.CanMoveRightInLedgeArrow->GetComponentQuat().Identity,
		CollisionChannel,
		FCollisionShape::MakeCapsule(20.f, 60.f),
		TraceParams
	);

	return isHitReturned;
}

bool FHeroState::GetForwardVector(ACyberHell_1Character& Character, FVector& Location, FVector& Normal)
{
	FHitResult Hit = FHitResult();
	FVector Start = Character.GetActorLocation();
	FVector End = Start + (Character.GetActorForwardVector() * 500.f);
	FCollisionQueryParams TraceParams(FName(TEXT("ObstacleDetection Trace")), true, &Character);
	TraceParams.bTraceComplex = true;
	TraceParams.bIgnoreTouches = true;
	TraceParams.bReturnPhysicalMaterial = false;
	TraceParams.AddIgnoredActor(&Character);
	ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(Character.GetTraceChannel());

	bool isHitReturned = Character.GetWorld()->SweepSingleByChannel(
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
		DrawDebugSphere(Character.GetWorld(), Hit.Location, 20.f, 16, FColor(255, 0, 0), false, -1.0f, 0, 0.5f);
		Location = Hit.Location;
		Normal = Hit.Normal;

		return true;
	}

	return false;
}

bool FHeroState::GetUpwardVector(ACyberHell_1Character& Character, FVector& Height)
{
	USkeletalMeshComponent* CharacterMesh = Character.GetMesh();

	FHitResult Hit = FHitResult();
	FVector Start = Character.GetActorLocation();
	Start.Z += 500.f;
	Start += Character.GetActorForwardVector() * 60;
	FVector End = Start;
	End.Z -= 500.f;
	FCollisionQueryParams TraceParams(FName(TEXT("ObstacleDetection Trace")), true, &Character);
	TraceParams.bTraceComplex = true;
	TraceParams.bIgnoreTouches = true;
	TraceParams.bReturnPhysicalMaterial = false;
	TraceParams.AddIgnoredActor(&Character);
	ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(Character.GetTraceChannel());

	bool isHitReturned = Character.GetWorld()->SweepSingleByChannel(
		Hit,
		Start,
		End,
		FQuat(),
		CollisionChannel,
		FCollisionShape::MakeSphere(5.f),
		TraceParams
	);

	FVector ClimbingCheckVector = FVector(0.f, 0.f, 0.f);

	if (CharacterMesh && isHitReturned)
	{
		DrawDebugSphere(Character.GetWorld(), Hit.Location, 5.f, 16, FColor(255, 0, 0), false, -1.0f, 0, 0.5f);
		Height = Hit.Location;
		ClimbingCheckVector.Z = WallHeight.Z - CharacterMesh->GetSocketLocation(Character.GetPelvisSocket()).Z;

		if (ClimbingCheckVector.Z > Character.GetMinClimbHeight() && ClimbingCheckVector.Z < Character.GetMaxClimbHeight())
		{
			return true;
		}
	}

	return false;
}

bool FHeroState::CheckCanHang(ACyberHell_1Character& Character, FVector& Location, FVector& Normal, FVector& Height)
{
	if (GetForwardVector(Character, Location, Normal) && GetUpwardVector(Character, Height))
	{
		return true;
	}

	return false;
}

bool FHeroState::CheckCanTurnLeft(ACyberHell_1Character& Character)
{
	FHitResult Hit = FHitResult();
	if (!Character.LeftJumpFromLedgeCheckArrow) { return true; }

	FVector Start = Character.LeftJumpFromLedgeCheckArrow->GetComponentLocation();
	Start.Z += 60.f;
	FVector End = Start + Character.LeftJumpFromLedgeCheckArrow->GetForwardVector() * 70;
	ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(Character.GetTraceChannel());
	FCollisionQueryParams TraceParams(FName(TEXT("ObstacleDetection Trace")), true, &Character);
	TraceParams.bTraceComplex = true;
	TraceParams.bIgnoreTouches = true;
	TraceParams.bReturnPhysicalMaterial = false;

	bool isHitReturned = Character.GetWorld()->SweepSingleByChannel(
		Hit,
		Start,
		End,
		Character.LeftJumpFromLedgeCheckArrow->GetComponentQuat().Identity,
		CollisionChannel,
		FCollisionShape::MakeSphere(20.f),
		TraceParams
	);

	if (isHitReturned)
	{
		return false;
	}

	return true;
}

bool FHeroState::CheckCanTurnRight(ACyberHell_1Character& Character)
{
	FHitResult Hit = FHitResult();
	if (!Character.RightJumpFromLedgeCheckArrow) { return true; }

	FVector Start = Character.RightJumpFromLedgeCheckArrow->GetComponentLocation();
	Start.Z += 60.f;
	FVector End = Start + Character.RightJumpFromLedgeCheckArrow->GetForwardVector() * 70;
	ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(Character.GetTraceChannel());
	FCollisionQueryParams TraceParams(FName(TEXT("ObstacleDetection Trace")), true, &Character);
	TraceParams.bTraceComplex = true;
	TraceParams.bIgnoreTouches = true;
	TraceParams.bReturnPhysicalMaterial = false;

	bool isHitReturned = Character.GetWorld()->SweepSingleByChannel(
		Hit,
		Start,
		End,
		Character.RightJumpFromLedgeCheckArrow->GetComponentQuat().Identity,
		CollisionChannel,
		FCollisionShape::MakeSphere(20.f),
		TraceParams
	);

	if (isHitReturned)
	{
		return false;
	}

	return true;
}

bool FHeroState::CheckCanJumpLeft(ACyberHell_1Character& Character)
{
	FHitResult Hit = FHitResult();
	if (!Character.LeftJumpFromLedgeCheckArrow) { return false; }

	FVector Start = Character.LeftJumpFromLedgeCheckArrow->GetComponentLocation();
	FVector End = Start + Character.LeftJumpFromLedgeCheckArrow->GetForwardVector() * 50;
	ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(Character.GetTraceChannel());
	FCollisionQueryParams TraceParams(FName(TEXT("ObstacleDetection Trace")), true, &Character);
	TraceParams.bTraceComplex = true;
	TraceParams.bIgnoreTouches = true;
	TraceParams.bReturnPhysicalMaterial = false;

	bool isHitReturned = Character.GetWorld()->SweepSingleByChannel(
		Hit,
		Start,
		End,
		Character.LeftJumpFromLedgeCheckArrow->GetComponentQuat().Identity,
		CollisionChannel,
		FCollisionShape::MakeCapsule(25.f, 60.f),
		TraceParams
	);

	if (isHitReturned)
	{
		return true;
	}

	return false;
}

bool FHeroState::CheckCanJumpRight(ACyberHell_1Character& Character)
{
	FHitResult Hit = FHitResult();
	if (!Character.RightJumpFromLedgeCheckArrow) { return false; }

	FVector Start = Character.RightJumpFromLedgeCheckArrow->GetComponentLocation();
	FVector End = Start + Character.RightJumpFromLedgeCheckArrow->GetForwardVector() * 50;
	ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(Character.GetTraceChannel());
	FCollisionQueryParams TraceParams(FName(TEXT("ObstacleDetection Trace")), true, &Character);
	TraceParams.bTraceComplex = true;
	TraceParams.bIgnoreTouches = true;
	TraceParams.bReturnPhysicalMaterial = false;

	bool isHitReturned = Character.GetWorld()->SweepSingleByChannel(
		Hit,
		Start,
		End,
		Character.RightJumpFromLedgeCheckArrow->GetComponentQuat().Identity,
		CollisionChannel,
		FCollisionShape::MakeCapsule(25.f, 60.f),
		TraceParams
	);

	if (isHitReturned)
	{
		return true;
	}

	return false;
}

bool FHeroState::CheckLeftWall(ACyberHell_1Character& Character)
{
	FHitResult Hit = FHitResult();
	if (!Character.LeftWallCheckArrow) { return true; }

	FVector Start = Character.LeftWallCheckArrow->GetComponentLocation();
	FVector End = Start + Character.LeftWallCheckArrow->GetForwardVector() * 100;
	FCollisionQueryParams TraceParams(FName(TEXT("ObstacleDetection Trace")), true, &Character);
	TraceParams.bTraceComplex = true;
	TraceParams.bIgnoreTouches = true;
	TraceParams.bReturnPhysicalMaterial = false;
	ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(Character.GetTraceChannel());

	bool isHitReturned = Character.GetWorld()->LineTraceSingleByChannel(
		Hit,
		Start,
		End,
		CollisionChannel,
		TraceParams
	);

	if (isHitReturned)
	{
		DrawDebugLine(Character.GetWorld(), Start, End, FColor(255, 0, 255), false, -1.f, 0, 1.f);
		return false;
	}

	return true;
}

bool FHeroState::CheckRightWall(ACyberHell_1Character& Character)
{
	FHitResult Hit = FHitResult();
	if (!Character.RightWallCheckArrow) { return true; }

	FVector Start = Character.RightWallCheckArrow->GetComponentLocation();
	FVector End = Start + Character.RightWallCheckArrow->GetForwardVector() * 100;
	FCollisionQueryParams TraceParams(FName(TEXT("ObstacleDetection Trace")), true, &Character);
	TraceParams.bTraceComplex = true;
	TraceParams.bIgnoreTouches = true;
	TraceParams.bReturnPhysicalMaterial = false;
	ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(Character.GetTraceChannel());

	bool isHitReturned = Character.GetWorld()->LineTraceSingleByChannel(
		Hit,
		Start,
		End,
		CollisionChannel,
		TraceParams
	);

	if (isHitReturned)
	{
		DrawDebugLine(Character.GetWorld(), Start, End, FColor(255, 0, 255), false, -1.f, 0, 1.f);
		return false;
	}

	return true;
}

void FHeroState::EquipWeapon(ACyberHell_1Character& Character)
{
	FAttachmentTransformRules TransformRules = FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true);
	if (Character.GetEquippedWeapon() != nullptr)
	{
		Character.GetEquippedWeapon()->AttachToComponent(Character.GetMesh(),
			TransformRules,
			Character.GetEquippedWeapon()->EquipSocket);
	}
}

void FHeroState::UnequipWeapon(ACyberHell_1Character& Character)
{
	FAttachmentTransformRules TransformRules = FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true);
	if (Character.GetEquippedWeapon() != nullptr)
	{
		Character.GetEquippedWeapon()->AttachToComponent(Character.GetMesh(),
			TransformRules,
			Character.GetEquippedWeapon()->UnequipSocket);
	}
}

/////////////////////////////////
///RUN_STATE_SECTION////////////
///////////////////////////////

void FHeroModeRun::Tick(ACyberHell_1Character& Character, float DeltaTime)
{
	if (CurrentCooldownHangingStateTime < CooldownHangingState)
	{
		CurrentCooldownHangingStateTime += DeltaTime;
	}
}

FHeroState* FHeroModeRun::HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController)
{
	if (PlayerController == nullptr)
	{
		return nullptr;
	}

	if (CheckCanHang(Character, WallLocation, WallNormal, WallHeight) && CheckCorners(Character) && CurrentCooldownHangingStateTime >= CooldownHangingState)
	{
		return new FHeroModeHang();
	}

	if (Character.GetCanEquipWeapon() && PlayerController->WasInputKeyJustPressed(EKeys::E))
	{
		if (Character.GetEquippedWeapon() == nullptr && Character.AttachedWeapon != nullptr)
		{
			AttachWeaponToPlayer(Character);
			return new FHeroModeRunWithWeapon();
		}
	}

	if (Character.GetEquippedWeapon() != nullptr && PlayerController->WasInputKeyJustPressed(EKeys::Tab))
	{
		return new FHeroModeDrawingWeapon();
	}

	return nullptr;
}

void FHeroModeRun::OnEnterState(ACyberHell_1Character& Character)
{
	CurrentCooldownHangingStateTime = 0.f;
	Character.GetCharacterMovement()->SetMovementMode(MOVE_Walking);
	Character.GetCharacterMovement()->MaxWalkSpeed = 600;
}

void FHeroModeRun::OnExitState(ACyberHell_1Character& Character)
{

}

bool FHeroModeRun::CheckCorners(ACyberHell_1Character& Character)
{
	FHitResult LeftHit = FHitResult();
	FHitResult RightHit = FHitResult();
	FVector LeftStart = Character.LeftCornerCheckArrow->GetComponentLocation();
	FVector LeftEnd = LeftStart + Character.LeftCornerCheckArrow->GetForwardVector() * 100;
	FVector RightStart = Character.RightCornerCheckArrow->GetComponentLocation();
	FVector RightEnd = RightStart + Character.RightCornerCheckArrow->GetForwardVector() * 100;
	FCollisionQueryParams TraceParams(FName(TEXT("ObstacleDetection Trace")), true, &Character);
	TraceParams.bTraceComplex = true;
	TraceParams.bIgnoreTouches = true;
	TraceParams.bReturnPhysicalMaterial = false;
	TraceParams.AddIgnoredActor(&Character);
	ECollisionChannel CollisionChannel = UEngineTypes::ConvertToCollisionChannel(Character.GetTraceChannel());

	bool isLeftHitReturned = Character.GetWorld()->LineTraceSingleByChannel(
		LeftHit,
		LeftStart,
		LeftEnd,
		CollisionChannel,
		TraceParams
	);

	bool isRightHitReturned = Character.GetWorld()->LineTraceSingleByChannel(
		RightHit,
		RightStart,
		RightEnd,
		CollisionChannel,
		TraceParams
	);

	if (isLeftHitReturned && isRightHitReturned)
	{
		FVector LeftNormal = LeftHit.Location + LeftHit.Normal * 100;
		FVector RightNormal = RightHit.Location + RightHit.Normal * 100;

		FVector FromPlayerLeft = (LeftEnd - LeftStart).GetSafeNormal();
		FVector FromPlayerRight = (RightEnd - RightStart).GetSafeNormal();

		float LeftAngle = AngleBetweenVectors(FromPlayerLeft, LeftHit.Normal);
		float RightAngle = AngleBetweenVectors(FromPlayerRight, RightHit.Normal);

		if (LeftAngle == RightAngle)
		{
			return true;
		}
	}
	return false;
}

float FHeroModeRun::AngleBetweenVectors(FVector FirstVector, FVector SecondVector)
{
	float Product = FVector::DotProduct(FirstVector, SecondVector);
	float FirstMod = FirstVector.Size();
	float SecondMod = SecondVector.Size();
	float Cosine = Product / (FirstMod * SecondMod);
	float Angle = FMath::RadiansToDegrees((FMath::Acos(Cosine)));

	return Angle;
}

void FHeroModeRun::AttachWeaponToPlayer(ACyberHell_1Character& Character)
{
	Character.SetRunWithWeapon(true);
	FTransform SpawnTransform = Character.GetMesh()->GetSocketTransform(Character.AttachedWeapon->EquipSocket);
	ABase_Weapon* Weapon = Character.GetWorld()->SpawnActor<ABase_Weapon>(Character.AttachedWeapon->GetClass(), SpawnTransform);
	Character.SetEquippedWeapon(Weapon);
	EquipWeapon(Character);
}

/////////////////////////////////
///HANG_STATE_SECTION///////////
///////////////////////////////

void FHeroModeHang::Tick(ACyberHell_1Character& Character, float DeltaTime)
{

}

FHeroState* FHeroModeHang::HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController)
{
	if (PlayerController == nullptr)
	{
		return nullptr;
	}

	if (PlayerController->WasInputKeyJustPressed(EKeys::C))
	{
		return new FHeroModeRun();
	}

	if (Character.GetInputAxisValue("MoveRight") == 0 && PlayerController->WasInputKeyJustPressed(EKeys::SpaceBar))
	{
		return new FHeroModeClimbing();
	}

	if (Character.GetInputAxisValue("MoveRight") < 0)
	{
		if (CheckCanMoveLeft(Character) && CheckLeftWall(Character))
		{
			return new FHeroModeMoveLeftInLedge();
		}
		else if (CheckCanTurnLeft(Character) && !CheckCanJumpLeft(Character))
		{
			return new FHeroModeTurnLeftInLedge();
		}
		else if (CheckCanJumpLeft(Character) && PlayerController->WasInputKeyJustPressed(EKeys::SpaceBar))
		{
			return new FHeroModeJumpLeftFromLedge();
		}
	}

	if (Character.GetInputAxisValue("MoveRight") > 0)
	{
		if (CheckCanMoveRight(Character) && CheckRightWall(Character))
		{
			return new FHeroModeMoveRightInLedge();
		}
		else if (CheckCanTurnRight(Character) && !CheckCanJumpRight(Character))
		{
			return new FHeroModeTurnRightInLedge();
		}
		else if (CheckCanJumpRight(Character) && PlayerController->WasInputKeyJustPressed(EKeys::SpaceBar))
		{
			return new FHeroModeJumpRightFromLedge();
		}
	}

	if (Character.GetInputAxisValue("MoveForward") < 0)
	{
		return new FHeroModeTurnBackInLedge();
	}

	return nullptr;
}

void FHeroModeHang::OnEnterState(ACyberHell_1Character& Character)
{
	CheckCanHang(Character, WallLocation, WallNormal, WallHeight);
	Character.GetCharacterMovement()->SetMovementMode(MOVE_Flying);
	Character.SetHangingIdle(true);

	float XLocation = WallNormal.X * 30 + WallLocation.X;
	float YLocation = WallNormal.Y * 30 + WallLocation.Y;
	float ZLocation = WallHeight.Z - 100.f;
	FLatentActionInfo Info;
	Info.CallbackTarget = &Character;
	Info.ExecutionFunction = FName("StopMovement");
	Info.UUID = 1;
	Info.Linkage = 0;

	UKismetSystemLibrary::MoveComponentTo(
		Character.GetCapsuleComponent(),
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

void FHeroModeHang::OnExitState(ACyberHell_1Character& Character)
{
	Character.SetHangingIdle(false);
}

/////////////////////////////////
///CLIMBING_STATE_SECTION///////
///////////////////////////////

void FHeroModeClimbing::Tick(ACyberHell_1Character& Character, float DeltaTime)
{
	CurrentAnimationTime += DeltaTime;
}

FHeroState* FHeroModeClimbing::HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController)
{
	if (CurrentAnimationTime >= AnimationDuration)
	{
		return new FHeroModeRun();
	}

	return nullptr;
}

void FHeroModeClimbing::OnEnterState(ACyberHell_1Character& Character)
{
	CurrentAnimationTime = 0.f;
	Character.DisableInput(Character.GetWorld()->GetFirstPlayerController());

	if (Character.GetMesh()->GetAnimInstance() && Character.GetClimbMontage())
	{
		AnimationDuration = Character.GetMesh()->GetAnimInstance()->Montage_Play(Character.GetClimbMontage());
	}
}

void FHeroModeClimbing::OnExitState(ACyberHell_1Character& Character)
{
	Character.GetCharacterMovement()->SetMovementMode(MOVE_Walking);
	Character.EnableInput(Character.GetWorld()->GetFirstPlayerController());
}

///////////////////////////////////////
///MOVE_LEFT_IN_LEDGE_STATE_SECTION///
/////////////////////////////////////

void FHeroModeMoveLeftInLedge::Tick(ACyberHell_1Character& Character, float DeltaTime)
{
	FVector Current = Character.GetActorLocation();
	FVector Target = Current - Character.GetActorQuat().GetRightVector() * 20.f;
	FVector NewLocation = FMath::VInterpTo(Current, Target, Character.GetWorld()->GetDeltaSeconds(), 5.f);
	Character.SetActorLocation(NewLocation);
}

FHeroState* FHeroModeMoveLeftInLedge::HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController)
{
	if (Character.GetInputAxisValue("MoveRight") == 0 || !CheckCanMoveLeft(Character) || !CheckLeftWall(Character))
	{
		return new FHeroModeHang();
	}

	if (CheckCanJumpLeft(Character) && PlayerController->WasInputKeyJustPressed(EKeys::SpaceBar))
	{
		return new FHeroModeJumpLeftFromLedge();
	}

	return nullptr;
}

void FHeroModeMoveLeftInLedge::OnEnterState(ACyberHell_1Character& Character)
{
	Character.SetHangingIdle(true);
	Character.SetMovingLeftInLedge(true);
}

void FHeroModeMoveLeftInLedge::OnExitState(ACyberHell_1Character& Character)
{
	Character.SetHangingIdle(false);
	Character.SetMovingLeftInLedge(false);
}

///////////////////////////////////////
///MOVE_RIGHT_IN_LEDGE_STATE_SECTION//
/////////////////////////////////////

void FHeroModeMoveRightInLedge::Tick(ACyberHell_1Character& Character, float DeltaTime)
{
	FVector Current = Character.GetActorLocation();
	FVector Target = Current + Character.GetActorQuat().GetRightVector() * 20.f;
	FVector NewLocation = FMath::VInterpTo(Current, Target, Character.GetWorld()->GetDeltaSeconds(), 5.f);
	Character.SetActorLocation(NewLocation);
}

FHeroState* FHeroModeMoveRightInLedge::HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController)
{
	if (Character.GetInputAxisValue("MoveRight") == 0 || !CheckCanMoveRight(Character) || !CheckRightWall(Character))
	{
		return new FHeroModeHang();
	}

	if (CheckCanJumpRight(Character) && PlayerController->WasInputKeyJustPressed(EKeys::SpaceBar))
	{
		return new FHeroModeJumpRightFromLedge();
	}

	return nullptr;
}

void FHeroModeMoveRightInLedge::OnEnterState(ACyberHell_1Character& Character)
{
	Character.SetHangingIdle(true);
	Character.SetMovingRightInLedge(true);
}

void FHeroModeMoveRightInLedge::OnExitState(ACyberHell_1Character& Character)
{
	Character.SetHangingIdle(false);
	Character.SetMovingRightInLedge(false);
}

///////////////////////////////////////
///JUMP_LEFT_FROM_LEDGE_STATE_SECTION/
/////////////////////////////////////

void FHeroModeJumpLeftFromLedge::Tick(ACyberHell_1Character& Character, float DeltaTime)
{
	CurrentAnimationTime += DeltaTime;
}

FHeroState* FHeroModeJumpLeftFromLedge::HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController)
{
	if (CurrentAnimationTime >= AnimationDuration)
	{
		return new FHeroModeHang();
	}

	return nullptr;
}

void FHeroModeJumpLeftFromLedge::OnEnterState(ACyberHell_1Character& Character)
{
	Character.SetTempStateForHanging(true);
	CurrentAnimationTime = 0.f;
	Character.DisableInput(Character.GetWorld()->GetFirstPlayerController());

	if (Character.GetMesh()->GetAnimInstance() && Character.GetJumpLeftFromLedgeMontage())
	{
		AnimationDuration = Character.GetMesh()->GetAnimInstance()->Montage_Play(Character.GetJumpLeftFromLedgeMontage());
	}
}

void FHeroModeJumpLeftFromLedge::OnExitState(ACyberHell_1Character& Character)
{
	Character.SetTempStateForHanging(false);
	Character.EnableInput(Character.GetWorld()->GetFirstPlayerController());
}

////////////////////////////////////////
///JUMP_RIGHT_FROM_LEDGE_STATE_SECTION/
//////////////////////////////////////

void FHeroModeJumpRightFromLedge::Tick(ACyberHell_1Character& Character, float DeltaTime)
{
	CurrentAnimationTime += DeltaTime;
}

FHeroState* FHeroModeJumpRightFromLedge::HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController)
{
	if (CurrentAnimationTime >= AnimationDuration)
	{
		return new FHeroModeHang();
	}

	return nullptr;
}

void FHeroModeJumpRightFromLedge::OnEnterState(ACyberHell_1Character& Character)
{
	Character.SetTempStateForHanging(true);
	CurrentAnimationTime = 0.f;
	Character.DisableInput(Character.GetWorld()->GetFirstPlayerController());

	if (Character.GetMesh()->GetAnimInstance() && Character.GetJumpRightFromLedgeMontage())
	{
		AnimationDuration = Character.GetMesh()->GetAnimInstance()->Montage_Play(Character.GetJumpRightFromLedgeMontage());
	}
}

void FHeroModeJumpRightFromLedge::OnExitState(ACyberHell_1Character& Character)
{
	Character.SetTempStateForHanging(false);
	Character.EnableInput(Character.GetWorld()->GetFirstPlayerController());
}

////////////////////////////////////////
///TURN_LEFT_IN_LEDGE_STATE_SECTION////
//////////////////////////////////////

void FHeroModeTurnLeftInLedge::Tick(ACyberHell_1Character& Character, float DeltaTime)
{
	CurrentAnimationTime += DeltaTime;
}

FHeroState* FHeroModeTurnLeftInLedge::HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController)
{
	if (CurrentAnimationTime >= AnimationDuration)
	{
		return new FHeroModeHang();
	}

	return nullptr;
}

void FHeroModeTurnLeftInLedge::OnEnterState(ACyberHell_1Character& Character)
{
	Character.SetHangingIdle(true);
	Character.SetTempStateForHanging(true);
	CurrentAnimationTime = 0.f;
	Character.DisableInput(Character.GetWorld()->GetFirstPlayerController());

	if (Character.GetMesh()->GetAnimInstance() && Character.GetTurnLeftInLedgeMontage())
	{
		AnimationDuration = Character.GetMesh()->GetAnimInstance()->Montage_Play(Character.GetTurnLeftInLedgeMontage());
	}
}

void FHeroModeTurnLeftInLedge::OnExitState(ACyberHell_1Character& Character)
{
	Character.SetHangingIdle(false);
	Character.SetTempStateForHanging(false);
	Character.EnableInput(Character.GetWorld()->GetFirstPlayerController());
}

////////////////////////////////////////
///TURN_RIGHT_IN_LEDGE_STATE_SECTION///
//////////////////////////////////////

void FHeroModeTurnRightInLedge::Tick(ACyberHell_1Character& Character, float DeltaTime)
{
	CurrentAnimationTime += DeltaTime;
}

FHeroState* FHeroModeTurnRightInLedge::HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController)
{
	if (CurrentAnimationTime >= AnimationDuration)
	{
		return new FHeroModeHang();
	}

	return nullptr;
}

void FHeroModeTurnRightInLedge::OnEnterState(ACyberHell_1Character& Character)
{
	Character.SetHangingIdle(true);
	Character.SetTempStateForHanging(true);
	CurrentAnimationTime = 0.f;
	Character.DisableInput(Character.GetWorld()->GetFirstPlayerController());

	if (Character.GetMesh()->GetAnimInstance() && Character.GetTurnRightInLedgeMontage())
	{
		AnimationDuration = Character.GetMesh()->GetAnimInstance()->Montage_Play(Character.GetTurnRightInLedgeMontage());
	}
}

void FHeroModeTurnRightInLedge::OnExitState(ACyberHell_1Character& Character)
{
	Character.SetHangingIdle(false);
	Character.SetTempStateForHanging(false);
	Character.EnableInput(Character.GetWorld()->GetFirstPlayerController());
}

////////////////////////////////////////
///TURN_BACK_IN_LEDGE_STATE_SECTION////
//////////////////////////////////////

void FHeroModeTurnBackInLedge::Tick(ACyberHell_1Character& Character, float DeltaTime)
{

}

FHeroState* FHeroModeTurnBackInLedge::HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController)
{
	if (Character.GetInputAxisValue("MoveForward") == 0)
	{
		return new FHeroModeHang();
	}

	if (PlayerController->WasInputKeyJustPressed(EKeys::SpaceBar))
	{
		JumpFromLedge(Character);
		return new FHeroModeRun();
	}

	return nullptr;
}

void FHeroModeTurnBackInLedge::OnEnterState(ACyberHell_1Character& Character)
{
	Character.SetTurnBackInLedge(true);
	Character.SetHangingIdle(true);
}

void FHeroModeTurnBackInLedge::OnExitState(ACyberHell_1Character& Character)
{
	Character.SetTurnBackInLedge(false);
	Character.SetHangingIdle(false);
}

void FHeroModeTurnBackInLedge::JumpFromLedge(ACyberHell_1Character& Character)
{
	FVector VectorVelocity = Character.GetActorForwardVector() * (-500) + FVector(0, 0, 700.f);
	Character.LaunchCharacter(VectorVelocity, false, false);
	FRotator CharacterRotation = Character.GetActorRotation();
	Character.SetActorRotation(FRotator(CharacterRotation.Pitch, CharacterRotation.Yaw + 120, CharacterRotation.Roll));
}

////////////////////////////////////////
///RUN_WITH_WEAPON_STATE_SECTION///////
//////////////////////////////////////

void FHeroModeRunWithWeapon::Tick(ACyberHell_1Character& Character, float DeltaTime)
{

}

FHeroState* FHeroModeRunWithWeapon::HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController)
{
	if (PlayerController->WasInputKeyJustPressed(EKeys::Tab))
	{
		return new FHeroModeSheathingWeapon();
	}

	if (PlayerController->WasInputKeyJustPressed(EKeys::LeftMouseButton) && Character.GetCurrentEnergy() > 0)
	{
		return new FHeroModeLightCombo(0);
	}

	if (PlayerController->WasInputKeyJustPressed(EKeys::RightMouseButton) && Character.GetCurrentEnergy() > 0)
	{
		return new FHeroModeHeavyCombo(0);
	}

	return nullptr;
}

void FHeroModeRunWithWeapon::OnEnterState(ACyberHell_1Character& Character)
{
	Character.GetCharacterMovement()->SetMovementMode(MOVE_Walking);
}

void FHeroModeRunWithWeapon::OnExitState(ACyberHell_1Character& Character)
{

}

////////////////////////////////////////
///SHEATH_WEAPON_STATE_SECTION/////////
//////////////////////////////////////

void FHeroModeSheathingWeapon::Tick(ACyberHell_1Character& Character, float DeltaTime)
{
	CurrentAnimationTime += DeltaTime;
}

FHeroState* FHeroModeSheathingWeapon::HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController)
{
	if (CurrentAnimationTime >= AnimationDuration)
	{
		return new FHeroModeRun();
	}

	return nullptr;
}

void FHeroModeSheathingWeapon::OnEnterState(ACyberHell_1Character& Character)
{
	Character.SetRunWithWeapon(false);
	CurrentAnimationTime = 0.f;
	Character.DisableInput(Character.GetWorld()->GetFirstPlayerController());

	if (Character.GetMesh()->GetAnimInstance() && Character.GetEquippedWeapon()->SheathWeaponMontage)
	{
		AnimationDuration = Character.GetMesh()->GetAnimInstance()->Montage_Play(Character.GetEquippedWeapon()->SheathWeaponMontage);
	}
}

void FHeroModeSheathingWeapon::OnExitState(ACyberHell_1Character& Character)
{
	UnequipWeapon(Character);
	Character.EnableInput(Character.GetWorld()->GetFirstPlayerController());
}

////////////////////////////////////////
///DRAW_WEAPON_STATE_SECTION///////////
//////////////////////////////////////

void FHeroModeDrawingWeapon::Tick(ACyberHell_1Character& Character, float DeltaTime)
{
	CurrentAnimationTime += DeltaTime;
}

FHeroState* FHeroModeDrawingWeapon::HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController)
{
	if (CurrentAnimationTime >= AnimationDuration)
	{
		return new FHeroModeRunWithWeapon();
	}

	return nullptr;
}

void FHeroModeDrawingWeapon::OnEnterState(ACyberHell_1Character& Character)
{
	Character.SetRunWithWeapon(true);
	EquipWeapon(Character);
	CurrentAnimationTime = 0.f;
	Character.DisableInput(Character.GetWorld()->GetFirstPlayerController());

	if (Character.GetMesh()->GetAnimInstance() && Character.GetEquippedWeapon()->DrawWeaponMontage)
	{
		AnimationDuration = Character.GetMesh()->GetAnimInstance()->Montage_Play(Character.GetEquippedWeapon()->DrawWeaponMontage);
	}
}

void FHeroModeDrawingWeapon::OnExitState(ACyberHell_1Character& Character)
{
	Character.EnableInput(Character.GetWorld()->GetFirstPlayerController());
}

////////////////////////////////////////
///LIGHT_COMBO_STATE_SECTION///////////
//////////////////////////////////////

void FHeroModeLightCombo::Tick(ACyberHell_1Character& Character, float DeltaTime)
{
	CurrentAnimationTime += DeltaTime;

	if (CurrentAnimationTime >= Character.GetEquippedWeapon()->LightCombo[Index].StartApplyDamageTime &&
		CurrentAnimationTime <= Character.GetEquippedWeapon()->LightCombo[Index].EndApplyDamageTime)
	{
		Character.GetEquippedWeapon()->Attack(true);
	}

	if (CurrentAnimationTime >= Character.GetEquippedWeapon()->LightCombo[Index].EndApplyDamageTime)
	{
		Character.GetEquippedWeapon()->Attack(false);
	}
}

FHeroState* FHeroModeLightCombo::HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController)
{
	if (PlayerController->WasInputKeyJustPressed(EKeys::LeftMouseButton))
	{
		if (CurrentAnimationTime >= Character.GetEquippedWeapon()->LightCombo[Index].StartNewComboTime)
		{
			if (CurrentAnimationTime <= AnimationDuration && Index < (Character.GetEquippedWeapon()->LightCombo.Num() - 1))
			{
				return new FHeroModeLightCombo(++Index);
			}
		}
	}

	if (CurrentAnimationTime >= AnimationDuration)
	{
		return new FHeroModeRunWithWeapon();
	}

	return nullptr;
}

void FHeroModeLightCombo::OnEnterState(ACyberHell_1Character& Character)
{
	CurrentAnimationTime = 0.f;

	Character.UpdateCurrentEnergy(Character.GetEquippedWeapon()->LightCombo[Index].EnergyDrain);

	if (Character.GetMesh()->GetAnimInstance() && Character.GetEquippedWeapon()->LightCombo[Index].ComboMoveAnimation)
	{
		AnimationDuration = Character.GetMesh()->GetAnimInstance()->Montage_Play(
			Character.GetEquippedWeapon()->LightCombo[Index].ComboMoveAnimation);
	}

	Character.GetEquippedWeapon()->Attack(false);
	Character.GetEquippedWeapon()->SetCurrentComboMove(Character.GetEquippedWeapon()->LightCombo[Index]);
}

void FHeroModeLightCombo::OnExitState(ACyberHell_1Character& Character)
{
	Character.GetEquippedWeapon()->Attack(false);
}

////////////////////////////////////////
///HEAVY_COMBO_STATE_SECTION///////////
//////////////////////////////////////

void FHeroModeHeavyCombo::Tick(ACyberHell_1Character& Character, float DeltaTime)
{
	CurrentAnimationTime += DeltaTime;

	if (CurrentAnimationTime >= Character.GetEquippedWeapon()->HeavyCombo[Index].StartApplyDamageTime &&
		CurrentAnimationTime <= Character.GetEquippedWeapon()->HeavyCombo[Index].EndApplyDamageTime)
	{
		Character.GetEquippedWeapon()->Attack(true);
	}

	if (CurrentAnimationTime >= Character.GetEquippedWeapon()->HeavyCombo[Index].EndApplyDamageTime)
	{
		Character.GetEquippedWeapon()->Attack(false);
	}
}

FHeroState* FHeroModeHeavyCombo::HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController)
{
	if (PlayerController->WasInputKeyJustPressed(EKeys::RightMouseButton))
	{
		if (CurrentAnimationTime >= Character.GetEquippedWeapon()->HeavyCombo[Index].StartNewComboTime)
		{
			if (CurrentAnimationTime <= AnimationDuration && Index < (Character.GetEquippedWeapon()->HeavyCombo.Num() - 1))
			{
				return new FHeroModeHeavyCombo(++Index);
			}
		}
	}

	if (CurrentAnimationTime >= AnimationDuration)
	{
		return new FHeroModeRunWithWeapon();
	}

	return nullptr;
}

void FHeroModeHeavyCombo::OnEnterState(ACyberHell_1Character& Character)
{
	CurrentAnimationTime = 0.f;

	Character.UpdateCurrentEnergy(Character.GetEquippedWeapon()->HeavyCombo[Index].EnergyDrain);

	if (Character.GetMesh()->GetAnimInstance() && Character.GetEquippedWeapon()->HeavyCombo[Index].ComboMoveAnimation)
	{
		AnimationDuration = Character.GetMesh()->GetAnimInstance()->Montage_Play(
			Character.GetEquippedWeapon()->HeavyCombo[Index].ComboMoveAnimation);
	}

	Character.GetEquippedWeapon()->Attack(false);
	Character.GetEquippedWeapon()->SetCurrentComboMove(Character.GetEquippedWeapon()->HeavyCombo[Index]);
}

void FHeroModeHeavyCombo::OnExitState(ACyberHell_1Character& Character)
{
	Character.GetEquippedWeapon()->Attack(false);
}
