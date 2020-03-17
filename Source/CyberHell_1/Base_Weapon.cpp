// Fill out your copyright notice in the Description page of Project Settings.


#include "Base_Weapon.h"
#include "EventHandler.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "CyberHellGameState.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

// Sets default values
ABase_Weapon::ABase_Weapon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("Weapon Static Mesh"));
	RootComponent = StaticMesh;

	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(FName("Damage Collider"));
	CapsuleComponent->SetupAttachment(RootComponent);
	CapsuleComponent->OnComponentBeginOverlap.AddDynamic(this, &ABase_Weapon::OnOverlapBegin);
}

// Called when the game starts or when spawned
void ABase_Weapon::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABase_Weapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetWorld())
	{
		GameState = Cast<ACyberHellGameState>(GetWorld()->GetGameState());
	}
}

void ABase_Weapon::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor != nullptr && OtherActor != this && OtherComp != nullptr)
	{
		if (GameState)
		{
			GameState->EventHandler->OnEnemyDamaged.Broadcast(OtherActor, CurrentComboMove.ComboMoveDamage);
		}
	}
}

void ABase_Weapon::ApplyDamage(AActor* Actor, float Damage)
{
	UE_LOG(LogTemp, Warning, TEXT("%s is damaged"), *Actor->GetName())
}

void ABase_Weapon::Attack(bool IsAttacking)
{
	if (IsAttacking)
	{
		CapsuleComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}
	else
	{
		CapsuleComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

