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

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* StaticMesh;

	UPROPERTY()
	class ACyberHell_1Character* Player;

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
};
