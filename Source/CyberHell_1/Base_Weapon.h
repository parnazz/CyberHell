// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Base_Weapon.generated.h"

USTRUCT()
struct FComboMove
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	class UAnimMontage* ComboMoveAnimation;

	UPROPERTY(EditAnywhere)
	float ComboMoveDamage;

	UPROPERTY(EditAnywhere)
	float StartNewComboTime;

	UPROPERTY(EditAnywhere)
	float StartApplyDamageTime;

	UPROPERTY(EditAnywhere)
	float EndApplyDamageTime;

	UPROPERTY(EditAnywhere)
	float EnergyDrain;
};

UCLASS()
class CYBERHELL_1_API ABase_Weapon : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ABase_Weapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	void Attack(bool IsAttacking);

	void SetCurrentComboMove(FComboMove Move) { CurrentComboMove = Move; }

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(VisibleAnywhere)
	class ACyberHellGameState* GameState;

	UPROPERTY(EditAnywhere)
	class UAnimMontage* DrawWeaponMontage;

	UPROPERTY(EditAnywhere)
	class UAnimMontage* SheathWeaponMontage;

	UPROPERTY(EditAnywhere)
	FName EquipSocket;

	UPROPERTY(EditAnywhere)
	FName UnequipSocket;

	UPROPERTY(EditAnywhere)
	TArray<FComboMove> LightCombo;

	UPROPERTY(EditAnywhere)
	TArray<FComboMove> HeavyCombo;

private:
	UPROPERTY(EditAnywhere)
	class UCapsuleComponent* CapsuleComponent;

	UPROPERTY()
	class ACyberHell_1Character* PlayerCharacter;

	FComboMove CurrentComboMove;
};
