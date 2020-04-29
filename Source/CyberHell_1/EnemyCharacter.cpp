// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacter.h"
#include "EnemyAIController.h"
#include "..\Public\EnemyCharacterStateMachine.h"
#include "Animation/AnimInstance.h"
#include "Base_Weapon.h"
#include "EventHandler.h"
#include "CyberHell_1Character.h"
#include "CyberHellGameState.h"
#include "TimerManager.h"
#include "DamageComponent.h"
#include "Engine/Engine.h"
#include "Perception/PawnSensingComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/PawnMovementComponent.h"

// Sets default values
AEnemyCharacter::AEnemyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SenseComponent = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("Sense Component"));
	DamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("Damage Component"));

	MeleeCombatRange = 250.f;
	OutOfMeleeCombatRange = 300.f;
}

// Called when the game starts or when spawned
void AEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if (GetMovementComponent())
	{
		GetMovementComponent()->NavAgentProps.AgentRadius = 42.f;
		GetMovementComponent()->NavAgentProps.AgentHeight = 192.f;
	}

	if (GetWorld())
	{
		GameState = Cast<ACyberHellGameState>(GetWorld()->GetGameState());
	}

	MaxHealth = 100.f;
	CurrentHealth = MaxHealth;

	TimeToReturnToPatrolling = 3.f;

	if (SenseComponent)
	{
		SenseComponent->OnSeePawn.AddDynamic(this, &AEnemyCharacter::OnSeePlayer);
		SenseComponent->OnHearNoise.AddDynamic(this, &AEnemyCharacter::OnHearPlayer);
	}

	AIController = Cast<AEnemyAIController>(GetController());

	World = GetWorld();
	PlayerCharacter = Cast<ACyberHell_1Character>(GetWorld()->GetFirstPlayerController()->GetCharacter());

	StateMachine = NewObject<UEnemyCharacterNormalState>();

	BattleState = EnemyBattleState::Default;
}

void AEnemyCharacter::OnSeePlayer(APawn* Pawn)
{
	ACyberHell_1Character* Player = Cast<ACyberHell_1Character>(Pawn);
	

	if (AIController && Player)
	{
		AIController->SetMoveToTarget(Player);
		LastSensedPlayer = GetWorld()->GetTimeSeconds();
		bSensedPlayer = true;
	}
}

void AEnemyCharacter::OnHearPlayer(APawn* Pawn, const FVector& Location, float Volume)
{
	ACyberHell_1Character* Player = Cast<ACyberHell_1Character>(Pawn);

	if (AIController && Player)
	{
		AIController->SetMoveToTarget(Player);
		LastSensedPlayer = GetWorld()->GetTimeSeconds();
		bSensedPlayer = true;
	}
}

// Called every frame
void AEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	StateMachine->Tick(*this, DeltaTime);
	UEnemyCharacterStateMachine* State_ = StateMachine->HandleInput(*this);

	if (State_ != nullptr)
	{
		StateMachine->OnExitState(*this);
		StateMachine = State_;
		StateMachine->OnEnterState(*this);
	}
}

// Called to bind functionality to input
void AEnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

ATargetPoint* AEnemyCharacter::GetNextWaypoint()
{
	if (AllWaypoints.Num() > 0)
	{
		ATargetPoint* TempPoint = AllWaypoints.Top();
		AllWaypoints.Pop();
		AllWaypoints.Insert(TempPoint, 0);
		return TempPoint;
	}

	return nullptr;
}

void AEnemyCharacter::ChooseRandomBattleAction()
{
	int32 Index = FMath::RandRange(EnemyBattleState::Guard, EnemyBattleState::BattleIdle);

	switch (Index)
	{
	case EnemyBattleState::Guard:
		BattleState = EnemyBattleState::Guard;
		break;
	case EnemyBattleState::Attack:
		BattleState = EnemyBattleState::Attack;
		break;
	case EnemyBattleState::BattleIdle:
		BattleState = EnemyBattleState::BattleIdle;
		break;
	}
}
