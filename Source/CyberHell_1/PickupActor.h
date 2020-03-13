// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Base_Weapon.h"
#include "GameFramework/Actor.h"
#include "CyberHell_1Character.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "Blueprint/UserWidget.h"
#include "PickupActor.generated.h"

UCLASS()
class CYBERHELL_1_API APickupActor : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	APickupActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UPROPERTY(EditAnywhere)
	USphereComponent* SphereComponent;

	UPROPERTY(VisibleAnywhere)
	UWidgetComponent* WidgetComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ABase_Weapon> WeaponClass;

	UPROPERTY()
	ABase_Weapon* WeaponToAdd;
};
