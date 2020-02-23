// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageObject.h"
#include "Components/SphereComponent.h"
#include "CyberHell_1Character.h"
#include "Engine/Engine.h"

// Sets default values
ADamageObject::ADamageObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComponent = CreateDefaultSubobject<USphereComponent>("Root Component");
	RootComponent = SphereComponent;

	SphereComponent->OnComponentBeginOverlap.AddDynamic(this, &ADamageObject::OnOverlapBegin);
	SphereComponent->OnComponentEndOverlap.AddDynamic(this, &ADamageObject::OnOverlapEnd);
}

// Called when the game starts or when spawned
void ADamageObject::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADamageObject::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor != nullptr && OtherActor != this && OtherComp != nullptr)
	{
		ACyberHell_1Character* Character = Cast<ACyberHell_1Character>(OtherActor);
		if (Character != nullptr)
		{
			GEngine->AddOnScreenDebugMessage(0, 5.f, FColor().Red, "Damage");
			Character->UpdateCurrentHealth(DamageAmount);
		}
	}
}

void ADamageObject::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	
}

// Called every frame
void ADamageObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

