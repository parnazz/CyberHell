// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "Base_Weapon.h"
#include "EventHandler.h"
#include "CyberHellGameState.h"
#include "Engine/Engine.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	RootComponent = StaticMesh;
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();

	if (GetWorld())
	{
		GameState = Cast<ACyberHellGameState>(GetWorld()->GetGameState());
	}

	if (GameState)
	{
		GameState->EventHandler->OnEnemyDamaged.AddDynamic(this, &AEnemy::UpdateCurrentHealth);
	}

	MaxHealth = 100.f;
	CurrentHealth = MaxHealth;
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
	CurrentHealth += Damage;
	UE_LOG(LogTemp, Warning, TEXT("Enemy health is %f"), CurrentHealth);

	if (CurrentHealth <= 0)
	{
		this->Destroy();
	}
}

