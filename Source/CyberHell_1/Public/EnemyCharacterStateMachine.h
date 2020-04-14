// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyCharacter.h"
#include "UObject/NoExportTypes.h"
#include "EnemyCharacterStateMachine.generated.h"

/**
 * 
 */
UCLASS()
class CYBERHELL_1_API UEnemyCharacterStateMachine : public UObject
{
	GENERATED_BODY()
	
public:
	UEnemyCharacterStateMachine() {}
	virtual ~UEnemyCharacterStateMachine() {}

	virtual void Tick(AEnemyCharacter& Character, float DeltaTime) {}
	virtual UEnemyCharacterStateMachine* HandleInput(AEnemyCharacter& Character) { return nullptr; }
	virtual void OnEnterState(AEnemyCharacter& Character) {}
	virtual void OnExitState(AEnemyCharacter& Character) {}

protected:
	float DistanceToPlayer(AEnemyCharacter& Character);

	float Distance;
};

UCLASS()
class CYBERHELL_1_API UEnemyCharacterNormalState : public UEnemyCharacterStateMachine
{
	GENERATED_BODY()

public:
	UEnemyCharacterNormalState() {}
	virtual ~UEnemyCharacterNormalState() {}

	virtual void Tick(AEnemyCharacter& Character, float DeltaTime) override;
	virtual UEnemyCharacterStateMachine* HandleInput(AEnemyCharacter& Character) override;
	virtual void OnEnterState(AEnemyCharacter& Character) override;
	virtual void OnExitState(AEnemyCharacter& Character) override;
};

UCLASS()
class UEnemyCharacterDrawingWeapon : public UEnemyCharacterStateMachine
{
	GENERATED_BODY()

public:
	UEnemyCharacterDrawingWeapon() {}
	virtual ~UEnemyCharacterDrawingWeapon() {}

	virtual void Tick(AEnemyCharacter& Character, float DeltaTime) override;
	virtual UEnemyCharacterStateMachine* HandleInput(AEnemyCharacter& Character) override;
	virtual void OnEnterState(AEnemyCharacter& Character) override;
	virtual void OnExitState(AEnemyCharacter& Character) override;

private:
	float AnimationDuration;
	float CurrentAnimationTime;
};

UCLASS()
class UEnemyCharacterChasePlayer : public UEnemyCharacterStateMachine
{
	GENERATED_BODY()

public:
	UEnemyCharacterChasePlayer() {}
	virtual ~UEnemyCharacterChasePlayer() {}

	virtual void Tick(AEnemyCharacter& Character, float DeltaTime) override;
	virtual UEnemyCharacterStateMachine* HandleInput(AEnemyCharacter& Character) override;
	virtual void OnEnterState(AEnemyCharacter& Character) override;
	virtual void OnExitState(AEnemyCharacter& Character) override;

private:
	float CurrentTime;
};

UCLASS()
class UEnemyCharacterBattleState : public UEnemyCharacterStateMachine
{
	GENERATED_BODY()

public:
	UEnemyCharacterBattleState() {}
	virtual ~UEnemyCharacterBattleState() {}

	virtual void Tick(AEnemyCharacter& Character, float DeltaTime) override;
	virtual UEnemyCharacterStateMachine* HandleInput(AEnemyCharacter& Character) override;
	virtual void OnEnterState(AEnemyCharacter& Character) override;
	virtual void OnExitState(AEnemyCharacter& Character) override;

private:
	float TimeToChangeAction, CurrentTime, LastTimeActionChanged;

};