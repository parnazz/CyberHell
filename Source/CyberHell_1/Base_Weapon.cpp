// Fill out your copyright notice in the Description page of Project Settings.


#include "Base_Weapon.h"
#include "Components/StaticMeshComponent.h"
#include "CyberHell_1Character.h"
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

}

// Called when the game starts or when spawned
void ABase_Weapon::BeginPlay()
{
	Super::BeginPlay();

	Player = Cast<ACyberHell_1Character>(UGameplayStatics::GetPlayerCharacter(this, 0));
}

// Called every frame
void ABase_Weapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABase_Weapon::LightAttack()
{
	if (Player == nullptr) { return; }

	FTimerHandle AnimHandle;

	if ((Player->GetChainLightAttacks() + 1) == LightAttacks.Num())
	{
		Player->bLastAttack = true;
	}

	switch (Player->GetChainLightAttacks())
	{
	case 0:
	{
		if (LightAttacks[0] != nullptr)
		{
			float AnimLenght = Player->PlayAnimMontage(LightAttacks[0]);
			GEngine->AddOnScreenDebugMessage(0, 5.f, FColor().Red, "First hit");
			GetWorldTimerManager().SetTimer(AnimHandle, this, &ABase_Weapon::IncrementChainLightAttack, AnimLenght, false);
		}
		break;
	}
	case 1:
	{
		if (LightAttacks[1] != nullptr)
		{
			float AnimLenght = Player->PlayAnimMontage(LightAttacks[1]);
			GEngine->AddOnScreenDebugMessage(1, 5.f, FColor().Green, "Second hit");
			GetWorldTimerManager().SetTimer(AnimHandle, this, &ABase_Weapon::IncrementChainLightAttack, AnimLenght, false);
		}
		break;
	}
	default:
		break;
	}
}

void ABase_Weapon::HeavyAttack()
{
	if (Player == nullptr) { return; }

	FTimerHandle AnimHandle;

	if ((Player->GetChainHeavyAttacks() + 1) == HeavyAttacks.Num())
	{
		Player->bLastAttack = true;
	}

	switch (Player->GetChainHeavyAttacks())
	{
	case 0:
	{
		if (HeavyAttacks[0] != nullptr)
		{
			float AnimLenght = Player->PlayAnimMontage(LightAttacks[0]);
			
			GetWorldTimerManager().SetTimer(AnimHandle, this, &ABase_Weapon::IncrementChainHeavyAttack, AnimLenght, false);
		}
		break;
	}
	case 1:
	{
		if (HeavyAttacks[1] != nullptr)
		{
			float AnimLenght = Player->PlayAnimMontage(HeavyAttacks[1]);
			GetWorldTimerManager().SetTimer(AnimHandle, this, &ABase_Weapon::IncrementChainHeavyAttack, AnimLenght, false);
		}
		break;
	}
	default:
		break;
	}
}

void ABase_Weapon::IncrementChainLightAttack()
{
	if ((Player->GetChainLightAttacks() + 1) != LightAttacks.Num())
	{
		Player->ChainLightAttack++;
	}
	else
	{
		Player->ChainLightAttack = 0;
	}
}

void ABase_Weapon::IncrementChainHeavyAttack()
{
	if ((Player->GetChainHeavyAttacks() + 1) != HeavyAttacks.Num())
	{
		Player->ChainHeavyAttack++;
	}
	else
	{
		Player->ChainHeavyAttack = 0;
	}
}
