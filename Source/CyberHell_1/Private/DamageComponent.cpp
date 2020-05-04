// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "Animation/AnimInstance.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "CyberHellGameInstance.h"
#include "EventSystem.h"

// Sets default values for this component's properties
UDamageComponent::UDamageComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	MaxHealth = 100.f;
	CurrentHealth = MaxHealth;

	MaxEnergy = 100.f;
	CurrentEnergy = MaxEnergy;
}


// Called when the game starts
void UDamageComponent::BeginPlay()
{
	Super::BeginPlay();

	AActor* Owner = GetOwner();
	GameInstance = GetWorld()->GetGameInstance<UCyberHellGameInstance>();

	if (Owner != nullptr)
	{
		Owner->OnTakeAnyDamage.AddDynamic(this, &UDamageComponent::OnDamageTaken);
	}
}

void UDamageComponent::OnDamageTaken(AActor* DamagedActor, float Damage, const UDamageType* DamageType, 
	AController* InstigatedBy, AActor* DamageCauser)
{
	CurrentHealth -= Damage;

	ACharacter* Character = Cast<ACharacter>(DamagedActor);
	if (Character != nullptr && DamageAnimation != nullptr)
	{
		Character->GetMesh()->GetAnimInstance()->Montage_Play(DamageAnimation);
	}

	UE_LOG(LogTemp, Warning, TEXT("Current Health: %f"), CurrentHealth);

	if (CurrentHealth <= 0)
	{
		if (GameInstance->EventHandler)
		{
			GameInstance->EventHandler->OnEnemyDeath.Broadcast(DamagedActor->GetUniqueID());
		}

		DamagedActor->Destroy();
	}
}

