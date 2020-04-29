// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DamageComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CYBERHELL_1_API UDamageComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDamageComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere)
	class UAnimMontage* DamageAnimation;

private:
	UFUNCTION()
	void OnDamageTaken(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, 
		class AController* InstigatedBy, AActor* DamageCauser);

	UPROPERTY()
	class ACyberHellGameState* GameState;


	UPROPERTY(EditAnywhere, Category = "HUD")
	float MaxHealth;

	UPROPERTY()
	float CurrentHealth;

	UPROPERTY(EditAnywhere, Category = "HUD")
	float MaxEnergy;

	UPROPERTY()
	float CurrentEnergy;

};
