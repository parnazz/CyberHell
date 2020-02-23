// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupActor.h"
#include "CyberHell_1Character.h"
#include "Engine/Engine.h"

// Sets default values
APickupActor::APickupActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComponent = CreateDefaultSubobject<USphereComponent>("Root Component");
	RootComponent = SphereComponent;

	WidgetComponent = CreateDefaultSubobject<UWidgetComponent>("Widget");
	WidgetComponent->SetupAttachment(SphereComponent);

	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &APickupActor::OnOverlapBegin);
	SphereComponent->OnComponentEndOverlap.AddDynamic(this, &APickupActor::OnOverlapEnd);
}

// Called when the game starts or when spawned
void APickupActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickupActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APickupActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor != nullptr && OtherActor != this && OtherComp != nullptr)
	{
		WidgetComponent->SetVisibility(true);
		ACyberHell_1Character* Character = Cast<ACyberHell_1Character>(OtherActor);
		if (Character != nullptr && WeaponClass->GetDefaultObject<ABase_Weapon>() != nullptr)
		{
			Character->AttachedWeapon = WeaponClass->GetDefaultObject<ABase_Weapon>();
		}
	}
}

void APickupActor::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor != nullptr && OtherActor != this && OtherComp != nullptr)
	{
		WidgetComponent->SetVisibility(false);
		ACyberHell_1Character* Character = Cast<ACyberHell_1Character>(OtherActor);
		if (Character != nullptr)
		{
			Character->AttachedWeapon = nullptr;
		}
	}
}
