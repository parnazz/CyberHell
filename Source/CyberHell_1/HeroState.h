// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Class.h"
#include "GameFramework/PlayerController.h"
#include "CyberHell_1Character.h"

/**
 *
 */
class CYBERHELL_1_API FHeroState
{
public:
	FHeroState();
	virtual ~FHeroState();

	virtual void Tick(ACyberHell_1Character& Character, float DeltaTime) = 0;
	virtual FHeroState* HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController) = 0;
	virtual void OnEnterState(ACyberHell_1Character& Character) = 0;
	virtual void OnExitState(ACyberHell_1Character& Character) = 0;

protected:
	float AngleBetweenVectors(FVector FirstVector, FVector SecondVector);
	
	bool CheckCanMoveLeft(ACyberHell_1Character& Character);
	bool CheckCanMoveRight(ACyberHell_1Character& Character);

	bool GetForwardVector(ACyberHell_1Character& Character, FVector& Location, FVector& Normal);
	bool GetUpwardVector(ACyberHell_1Character& Character, FVector& Height);
	bool CheckCanHang(ACyberHell_1Character& Character, FVector& Location, FVector& Normal, FVector& Height);

	bool CheckCanTurnLeft(ACyberHell_1Character& Character);
	bool CheckCanTurnRight(ACyberHell_1Character& Character);

	bool CheckCanJumpLeft(ACyberHell_1Character& Character);
	bool CheckCanJumpRight(ACyberHell_1Character& Character);

	bool CheckLeftWall(ACyberHell_1Character& Character);
	bool CheckRightWall(ACyberHell_1Character& Character);

	void EquipWeapon(ACyberHell_1Character& Character);
	void UnequipWeapon(ACyberHell_1Character& Character);

	bool FindEnemyToLockOn(ACyberHell_1Character& Character);

	FVector WallLocation;
	FVector WallNormal;
	FVector WallHeight;
};

class FHeroModeRun : public FHeroState
{
public:
	FHeroModeRun() {}
	virtual ~FHeroModeRun() {}

	virtual void Tick(ACyberHell_1Character& Character, float DeltaTime) override;
	virtual FHeroState* HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController) override;
	virtual void OnEnterState(ACyberHell_1Character& Character) override;
	virtual void OnExitState(ACyberHell_1Character& Character) override;

private:
	bool CheckCorners(ACyberHell_1Character& Character);

	void AttachWeaponToPlayer(ACyberHell_1Character& Character);

	float CooldownHangingState = 1.f;
	float CurrentCooldownHangingStateTime;
};

class FHeroModeHang : public FHeroState
{
public:
	FHeroModeHang() {}
	virtual ~FHeroModeHang() {}

	virtual void Tick(ACyberHell_1Character& Character, float DeltaTime) override;
	virtual FHeroState* HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController) override;
	virtual void OnEnterState(ACyberHell_1Character& Character) override;
	virtual void OnExitState(ACyberHell_1Character& Character) override;

private:
	bool CheckMoveLeftInput(ACyberHell_1Character& Character);
	bool CheckMoveRightInput(ACyberHell_1Character& Character);
	bool CheckTurnBackInput(ACyberHell_1Character& Character);
};

class FHeroModeClimbing : public FHeroState
{
public:
	FHeroModeClimbing() {}
	virtual ~FHeroModeClimbing() {}

	virtual void Tick(ACyberHell_1Character& Character, float DeltaTime) override;
	virtual FHeroState* HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController) override;
	virtual void OnEnterState(ACyberHell_1Character& Character) override;
	virtual void OnExitState(ACyberHell_1Character& Character) override;

private:
	float AnimationDuration;
	float CurrentAnimationTime;
};

class FHeroModeMoveLeftInLedge : public FHeroState
{
public:
	FHeroModeMoveLeftInLedge() {}
	virtual ~FHeroModeMoveLeftInLedge() {}

	virtual void Tick(ACyberHell_1Character& Character, float DeltaTime) override;
	virtual FHeroState* HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController) override;
	virtual void OnEnterState(ACyberHell_1Character& Character) override;
	virtual void OnExitState(ACyberHell_1Character& Character) override;
};

class FHeroModeMoveRightInLedge : public FHeroState
{
public:
	FHeroModeMoveRightInLedge() {}
	virtual ~FHeroModeMoveRightInLedge() {}

	virtual void Tick(ACyberHell_1Character& Character, float DeltaTime) override;
	virtual FHeroState* HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController) override;
	virtual void OnEnterState(ACyberHell_1Character& Character) override;
	virtual void OnExitState(ACyberHell_1Character& Character) override;
};

class FHeroModeJumpLeftFromLedge : public FHeroState
{
public:
	FHeroModeJumpLeftFromLedge() {}
	virtual ~FHeroModeJumpLeftFromLedge() {}

	virtual void Tick(ACyberHell_1Character& Character, float DeltaTime) override;
	virtual FHeroState* HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController) override;
	virtual void OnEnterState(ACyberHell_1Character& Character) override;
	virtual void OnExitState(ACyberHell_1Character& Character) override;

private:
	float AnimationDuration;
	float CurrentAnimationTime;
};

class FHeroModeJumpRightFromLedge : public FHeroState
{
public:
	FHeroModeJumpRightFromLedge() {}
	virtual ~FHeroModeJumpRightFromLedge() {}

	virtual void Tick(ACyberHell_1Character& Character, float DeltaTime) override;
	virtual FHeroState* HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController) override;
	virtual void OnEnterState(ACyberHell_1Character& Character) override;
	virtual void OnExitState(ACyberHell_1Character& Character) override;

private:
	float AnimationDuration;
	float CurrentAnimationTime;
};

class FHeroModeTurnLeftInLedge : public FHeroState
{
public:
	FHeroModeTurnLeftInLedge() {}
	virtual ~FHeroModeTurnLeftInLedge() {}

	virtual void Tick(ACyberHell_1Character& Character, float DeltaTime) override;
	virtual FHeroState* HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController) override;
	virtual void OnEnterState(ACyberHell_1Character& Character) override;
	virtual void OnExitState(ACyberHell_1Character& Character) override;

private:
	float AnimationDuration;
	float CurrentAnimationTime;
};

class FHeroModeTurnRightInLedge : public FHeroState
{
public:
	FHeroModeTurnRightInLedge() {}
	virtual ~FHeroModeTurnRightInLedge() {}

	virtual void Tick(ACyberHell_1Character& Character, float DeltaTime) override;
	virtual FHeroState* HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController) override;
	virtual void OnEnterState(ACyberHell_1Character& Character) override;
	virtual void OnExitState(ACyberHell_1Character& Character) override;

private:
	float AnimationDuration;
	float CurrentAnimationTime;
};

class FHeroModeTurnBackInLedge : public FHeroState
{
public:
	FHeroModeTurnBackInLedge() {}
	virtual ~FHeroModeTurnBackInLedge() {}

	virtual void Tick(ACyberHell_1Character& Character, float DeltaTime) override;
	virtual FHeroState* HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController) override;
	virtual void OnEnterState(ACyberHell_1Character& Character) override;
	virtual void OnExitState(ACyberHell_1Character& Character) override;

private:
	void JumpFromLedge(ACyberHell_1Character& Character);
};

class FHeroModeRunWithWeapon : public FHeroState
{
public:
	FHeroModeRunWithWeapon() {}
	virtual ~FHeroModeRunWithWeapon() {}

	virtual void Tick(ACyberHell_1Character& Character, float DeltaTime) override;
	virtual FHeroState* HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController) override;
	virtual void OnEnterState(ACyberHell_1Character& Character) override;
	virtual void OnExitState(ACyberHell_1Character& Character) override;

private:

};

class FHeroModeSheathingWeapon : public FHeroState
{
public:
	FHeroModeSheathingWeapon() {}
	virtual ~FHeroModeSheathingWeapon() {}

	virtual void Tick(ACyberHell_1Character& Character, float DeltaTime) override;
	virtual FHeroState* HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController) override;
	virtual void OnEnterState(ACyberHell_1Character& Character) override;
	virtual void OnExitState(ACyberHell_1Character& Character) override;

private:
	float AnimationDuration;
	float CurrentAnimationTime;
};

class FHeroModeDrawingWeapon : public FHeroState
{
public:
	FHeroModeDrawingWeapon() {}
	virtual ~FHeroModeDrawingWeapon() {}

	virtual void Tick(ACyberHell_1Character& Character, float DeltaTime) override;
	virtual FHeroState* HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController) override;
	virtual void OnEnterState(ACyberHell_1Character& Character) override;
	virtual void OnExitState(ACyberHell_1Character& Character) override;

private:
	float AnimationDuration;
	float CurrentAnimationTime;
};

class FHeroModeLightCombo : public FHeroState
{
public:
	FHeroModeLightCombo(int32 _Index) : Index(_Index) {}
	virtual ~FHeroModeLightCombo() {}

	virtual void Tick(ACyberHell_1Character& Character, float DeltaTime) override;
	virtual FHeroState* HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController) override;
	virtual void OnEnterState(ACyberHell_1Character& Character) override;
	virtual void OnExitState(ACyberHell_1Character& Character) override;

private:
	float AnimationDuration;
	float CurrentAnimationTime;

	int32 Index;
};

class FHeroModeHeavyCombo : public FHeroState
{
public:
	FHeroModeHeavyCombo(int32 _Index) : Index(_Index) {}
	virtual ~FHeroModeHeavyCombo() {}

	virtual void Tick(ACyberHell_1Character& Character, float DeltaTime) override;
	virtual FHeroState* HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController) override;
	virtual void OnEnterState(ACyberHell_1Character& Character) override;
	virtual void OnExitState(ACyberHell_1Character& Character) override;

private:
	float AnimationDuration;
	float CurrentAnimationTime;

	int32 Index;
};

class FHeroModeLockedOn : public FHeroState
{
public:
	FHeroModeLockedOn() {}
	virtual ~FHeroModeLockedOn() {}

	virtual void Tick(ACyberHell_1Character& Character, float DeltaTime) override;
	virtual FHeroState* HandleInput(ACyberHell_1Character& Character, APlayerController* PlayerController) override;
	virtual void OnEnterState(ACyberHell_1Character& Character) override;
	virtual void OnExitState(ACyberHell_1Character& Character) override;

private:
	class AEnemyCharacter* Enemy;

};