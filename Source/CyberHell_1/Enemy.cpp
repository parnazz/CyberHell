// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "EnemyAIController.h"
#include "Base_Weapon.h"
#include "EventHandler.h"
#include "CyberHell_1Character.h"
#include "CyberHellGameState.h"
#include "Engine/Engine.h"
#include "Perception/PawnSensingComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/PawnMovementComponent.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	RootComponent = StaticMesh;

	SenseComponent = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("Sense Component"));
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();

	if (GetMovementComponent())
	{
		GetMovementComponent()->NavAgentProps.AgentRadius = 42.f;
		GetMovementComponent()->NavAgentProps.AgentHeight = 192.f;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Not OK"));
	}

	if (GetWorld())
	{
		GameState = Cast<ACyberHellGameState>(GetWorld()->GetGameState());
	}

	//if (GameState)
	//{
	//	GameState->EventHandler->OnEnemyDamaged.AddDynamic(this, &AEnemy::UpdateCurrentHealth);
	//}

	MaxHealth = 100.f;
	CurrentHealth = MaxHealth;

	if (SenseComponent)
	{
		SenseComponent->OnSeePawn.AddDynamic(this, &AEnemy::OnSeePlayer);
		SenseComponent->OnHearNoise.AddDynamic(this, &AEnemy::OnHearPlayer);
	}

	AIController = Cast<AEnemyAIController>(GetController());
}

void AEnemy::OnSeePlayer(APawn* Pawn)
{
	GEngine->AddOnScreenDebugMessage(1, 1.f, FColor::Green, FString("I see you!"));
	ACyberHell_1Character* Player = Cast<ACyberHell_1Character>(Pawn);

	if (AIController && Player)
	{
		AIController->SetMoveToTarget(Player);
	}
}

void AEnemy::OnHearPlayer(APawn* Pawn, const FVector& Location, float Volume)
{
	GEngine->AddOnScreenDebugMessage(2, 1.f, FColor::Blue, FString("I hear you!"));
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemy::UpdateCurrentHealth(AActor* Actor, float Damage)
{
	if (Actor == this)
	{
		CurrentHealth += Damage;
		UE_LOG(LogTemp, Warning, TEXT("Enemy health is %f"), CurrentHealth);

		if (CurrentHealth <= 0)
		{
			this->Destroy();
		}
	}
}

