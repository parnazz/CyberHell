// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Enemy.generated.h"

UCLASS()
class CYBERHELL_1_API AEnemy : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void OnSeePlayer(APawn* Pawn);

	UFUNCTION()
	virtual void OnHearPlayer(APawn* Pawn, const FVector& Location, float Volume);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void UpdateCurrentHealth(AActor* Actor, float Damage);

	UPROPERTY(EditAnywhere, Category = "AI")
	class UPawnSensingComponent* SenseComponent;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	class UBehaviorTree* BehaviorTree;

private:
	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* StaticMesh;

	UPROPERTY(VisibleAnywhere)
	class ACyberHellGameState* GameState;

	UPROPERTY()
	class AEnemyAIController* AIController;

	float CurrentHealth;
	float MaxHealth;
};
