// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Blueprint/UserWidget.h"
#include "Engine/TargetPoint.h"
#include "EnemyCharacter.generated.h"


UENUM()
enum CurrentEnemyState
{
	NormalState UMETA(DisplayName = "Normal state"),
	DrawingWeapon UMETA(DisplayName = "Drawing weapon"),
	ChasingPlayer UMETA(DisplayName = "Chasing player"),
	BattleState UMETA(DisplayName = "Battle state"),
};

UENUM()
enum EnemyBattleState
{
	Guard UMETA(DisplayName = "Guard"),
	Attack UMETA(DisplayName = "Attack"),
	BattleIdle UMETA(DisplayName = "Battle idle", ToolTip = "Player can hit an enemy"),
	Default UMETA(Hidden),
};

UCLASS()
class CYBERHELL_1_API AEnemyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyCharacter();

	UFUNCTION()
	virtual void OnSeePlayer(APawn* Pawn);

	UFUNCTION()
	virtual void OnHearPlayer(APawn* Pawn, const FVector& Location, float Volume);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PostInitializeComponents() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	ATargetPoint* GetNextWaypoint();

	UFUNCTION()
	void ChooseRandomBattleAction();

	UFUNCTION()
	void OnEnemyLockOnSet(int32 ID);

	UFUNCTION()
	void OnEnemyLockOnUnset(int32 ID);

	UFUNCTION()
	void OnEnemyDeath(int32 ID);

	UFUNCTION()
	void RotateTargetWidgetToPlayer();

	UFUNCTION()
	void SetWidget(TSubclassOf<UUserWidget> NewWidgetClass);

	UFUNCTION(BlueprintCallable)
	bool GetIsPlayerSensed() { return bSensedPlayer; }

	UPROPERTY(EditAnywhere, Category = "AI")
	class UPawnSensingComponent* SenseComponent;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	class UBehaviorTree* BehaviorTree;

	UPROPERTY(EditAnywhere)
	class UDamageComponent* DamageComponent;

	UPROPERTY()
	class UCyberHellGameInstance* GameInstance;

	UPROPERTY()
	class ALevelBaseScriptActor* LevelActor;

	UPROPERTY()
	class AEnemyAIController* AIController;

	UPROPERTY()
	class ACyberHell_1Character* PlayerCharacter;

	UPROPERTY()
	class UEnemyCharacterStateMachine* StateMachine;

	UPROPERTY()
	class UWorld* World;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> TargetArrowWidgetClass;

	UPROPERTY()
	UUserWidget* CurrentWidget;

	UPROPERTY(EditAnywhere)
	TArray<ATargetPoint*> AllWaypoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<CurrentEnemyState> EnemyState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EnemyBattleState> BattleState;

	UPROPERTY(EditAnywhere)
	class UAnimMontage* DrawWeaponMontage;

	UPROPERTY(EditAnywhere)
	class UAnimMontage* BlockingMontage;

	UPROPERTY(EditAnywhere)
	class UWidgetComponent* WidgetComponent;

	UFUNCTION(BlueprintCallable)
	CurrentEnemyState GetCurrentEnemyState() { return EnemyState; }

	UFUNCTION(BlueprintCallable)
	EnemyBattleState GetEnemyBattleState() { return BattleState; }

	void SetIsCharacterDead(bool Value) { bIsCharacterDead = Value; }
	bool GetIsCharacterDead() { return bIsCharacterDead; }

	float LastSensedPlayer;
	float TimeToReturnToPatrolling;

	UPROPERTY(EditAnywhere, Category = "AI")
		float MeleeCombatRange;

	UPROPERTY(EditAnywhere, Category = "AI")
		float OutOfMeleeCombatRange;

	bool bSensedPlayer = false;

	int32 EnemyID;

private:
	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* StaticMesh;

	UPROPERTY(VisibleAnywhere)
	class ACyberHellGameState* GameState;

	float CurrentHealth;
	float MaxHealth;

	bool bCanDrawWeapon = true;
	bool bIsCharacterDead = false;
};
