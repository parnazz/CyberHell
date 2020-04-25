// Fill out your copyright notice in the Description page of Project Settings.


#include "..\Public\EnemyCharacterStateMachine.h"
#include "EnemyAIController.h"
#include "CyberHell_1Character.h"
#include "Animation/AnimInstance.h"
#include "Components/SkeletalMeshComponent.h"


float UEnemyCharacterStateMachine::DistanceToPlayer(AEnemyCharacter& Character)
{
	FVector PlayerLocation = Character.PlayerCharacter->GetActorLocation();
	FVector EnemyLocation = Character.GetActorLocation();

	return (EnemyLocation - PlayerLocation).Size();
}

/////////////////////////////////
///NORMAL_STATE_SECTION/////////
///////////////////////////////

void UEnemyCharacterNormalState::Tick(AEnemyCharacter& Character, float DeltaTime)
{

}

UEnemyCharacterStateMachine* UEnemyCharacterNormalState::HandleInput(AEnemyCharacter& Character)
{
	if (Character.bSensedPlayer)
	{
		return NewObject<UEnemyCharacterDrawingWeapon>();
	}

	return nullptr;
}

void UEnemyCharacterNormalState::OnEnterState(AEnemyCharacter& Character)
{
	Character.AIController->SetMoveToTarget(nullptr);
	Character.bSensedPlayer = false;
	Character.EnemyState = CurrentEnemyState::NormalState;
	Character.AIController->SetEnemyCharacterState(Character.EnemyState);
}

void UEnemyCharacterNormalState::OnExitState(AEnemyCharacter& Character)
{
	UE_LOG(LogTemp, Warning, TEXT("Exit Normal State"));
}

///////////////////////////////////
///DRAWING_WEAPON_STATE_SECTION///
/////////////////////////////////

void UEnemyCharacterDrawingWeapon::Tick(AEnemyCharacter& Character, float DeltaTime)
{
	CurrentAnimationTime += DeltaTime;
}

UEnemyCharacterStateMachine* UEnemyCharacterDrawingWeapon::HandleInput(AEnemyCharacter& Character)
{
	if (CurrentAnimationTime >= AnimationDuration)
	{
		return NewObject<UEnemyCharacterChasePlayer>();
	}

	return nullptr;
}

void UEnemyCharacterDrawingWeapon::OnEnterState(AEnemyCharacter& Character)
{
	Character.EnemyState = CurrentEnemyState::DrawingWeapon;
	Character.AIController->SetEnemyCharacterState(Character.EnemyState);
	CurrentAnimationTime = 0.f;

	if (Character.GetMesh()->GetAnimInstance() && Character.DrawWeaponMontage)
	{
		AnimationDuration = Character.GetMesh()->GetAnimInstance()->Montage_Play(Character.DrawWeaponMontage);
	}
}

void UEnemyCharacterDrawingWeapon::OnExitState(AEnemyCharacter& Character)
{
	UE_LOG(LogTemp, Warning, TEXT("Exit Draw Weapon State"));
}

/////////////////////////////////
///CHASE_PLAYER_STATE_SECTION///
///////////////////////////////

void UEnemyCharacterChasePlayer::Tick(AEnemyCharacter& Character, float DeltaTime)
{
	CurrentTime = Character.World->GetTimeSeconds();

	Distance = DistanceToPlayer(Character);
}

UEnemyCharacterStateMachine* UEnemyCharacterChasePlayer::HandleInput(AEnemyCharacter& Character)
{
	if (Character.bSensedPlayer && CurrentTime > Character.LastSensedPlayer + Character.TimeToReturnToPatrolling)
	{
		return NewObject<UEnemyCharacterNormalState>();
	}

	if (Distance <= Character.MeleeCombatRange)
	{
		return NewObject<UEnemyCharacterBattleState>();
	}

	return nullptr;
}

void UEnemyCharacterChasePlayer::OnEnterState(AEnemyCharacter& Character)
{
	Character.EnemyState = CurrentEnemyState::ChasingPlayer;
	Character.AIController->SetEnemyCharacterState(Character.EnemyState);
}

void UEnemyCharacterChasePlayer::OnExitState(AEnemyCharacter& Character)
{
	
}

/////////////////////////////////
///BATTLE_STATE_SECTION/////////
///////////////////////////////

void UEnemyCharacterBattleState::Tick(AEnemyCharacter& Character, float DeltaTime)
{
	Distance = DistanceToPlayer(Character);

	CurrentTime = Character.World->GetTimeSeconds();

	if (CurrentTime >= LastTimeActionChanged + TimeToChangeAction)
	{
		Character.ChooseRandomBattleAction();
		Character.AIController->SetEnemyBattleState(Character.BattleState);

		TimeToChangeAction = TimeToChangeAction = FMath::FRandRange(1.f, 5.f);
		LastTimeActionChanged += TimeToChangeAction;
	}
}

UEnemyCharacterStateMachine* UEnemyCharacterBattleState::HandleInput(AEnemyCharacter& Character)
{
	if (Distance >= Character.OutOfMeleeCombatRange)
	{
		return NewObject<UEnemyCharacterChasePlayer>();
	}

	return nullptr;
}

void UEnemyCharacterBattleState::OnEnterState(AEnemyCharacter& Character)
{
	Character.EnemyState = CurrentEnemyState::BattleState;
	Character.AIController->SetEnemyCharacterState(Character.EnemyState);
	Character.AIController->SetEnemyBattleState(EnemyBattleState::BattleIdle);
	LastTimeActionChanged = Character.World->GetTimeSeconds();
	TimeToChangeAction = FMath::FRandRange(1.f, 5.f);
}

void UEnemyCharacterBattleState::OnExitState(AEnemyCharacter& Character)
{
	Character.AIController->SetEnemyBattleState(EnemyBattleState::Defualt);
}
