// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Base_Weapon.h"
#include "CyberHell_1Character.generated.h"

UCLASS()
class ACyberHell_1Character : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	UPROPERTY()
	USkeletalMeshComponent* SkeletalMeshComponent;

	UPROPERTY(VisibleAnywhere)
	UArrowComponent* LeftArrow;

	UPROPERTY(VisibleAnywhere)
	UArrowComponent* RightArrow;

	UPROPERTY(VisibleAnywhere)
	UArrowComponent* LeftLedge;

	UPROPERTY(VisibleAnywhere)
	UArrowComponent* RightLedge;

	UPROPERTY(VisibleAnywhere)
	UArrowComponent* LeftCornerCheck;

	UPROPERTY(VisibleAnywhere)
	UArrowComponent* RightCornerCheck;

	UPROPERTY(VisibleAnywhere)
	UArrowComponent* LeftWallCheck;

	UPROPERTY(VisibleAnywhere)
	UArrowComponent* RightWallCheck;

	UPROPERTY(EditAnywhere)
	UAnimMontage* ClimbMontage;

	UPROPERTY(EditAnywhere)
	UAnimMontage* JumpRightFromLedgeMontage;

	UPROPERTY(EditAnywhere)
	UAnimMontage* JumpLeftFromLedgeMontage;

	UPROPERTY(EditAnywhere)
	UAnimMontage* TurnLeftMontage;

	UPROPERTY(EditAnywhere)
	UAnimMontage* TurnRightMontage;

	UPROPERTY(VisibleAnywhere)
	ABase_Weapon* EquippedWeapon;

public:
	ACyberHell_1Character();

	virtual void Tick( float DeltaSeconds ) override;

	virtual void BeginPlay() override;

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

protected:

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

	virtual void Landed(const FHitResult& Hit) override;

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	/** Allows the character to jump when "SpaceBar" is pressed. If character is hanging invoke Climb function **/
	void DoubleJump();

	void JumpCooldown();

	/** Increase movement speed of character when "LShift" is pressed **/
	void Sprint();

	/** Set movement speed of character to default **/
	void Walk();

	/** Allows the character to dash when "LAlt" is pressed **/
	void Dash();

	/** Start countdown timer for DashCooldown **/
	void StopDashing();

	/** Set bCanDash to true **/
	void DashCooldown();

	/** Launch sphere tracer in front of character each frame. Also set WallLocation and WallNormal if this trace hit climable wall **/
	void GetForwardTrace();

	/** Launch sphere tracer from top to bottom each frame. Also set HeightLocation if this trace hit climable wall **/
	/** If character jump in front of this wall invokes GrabLedge function **/
	void GetUpTrace();

	/** Calculate location where the character will move while grabbing the ledge. Also set bHanging to true **/
	/** Animation for GrabLedge set in AnimBlueprint **/
	void GrabLedge();

	/** Running when "S" is pressed **/
	void UnGrabLedge();

	/** Invokes StopMovementImmediately function **/
	UFUNCTION()
	void StopMovement();

	/** Launch AnimMontage when "SpaceBar" is pressed **/
	void OnClimbLedgeStart();

	/** Stops ClimbLedge AnimMontage when OnClimbLedgeStart finished **/
	void OnClimbLedgeEnd();

	/** Check can character go left **/
	void LeftTracer();

	/** Check can character go right **/
	void RightTracer();

	void MoveLeftInLedge();

	void MoveRightInLedge();

	void StopMoveInLedge();

	void JumpLeftTracer();

	void JumpRightTracer();

	void JumpLeftLedge();

	void JumpRightLedge();

	void OnJumpRightFromLedgeStart();

	void OnJumpLeftFromLedgeStart();

	void OnJumpRightFromLedgeEnd();

	void OnJumpLeftFromLedgeEnd();

	void TurnLeftTracer();

	void TurnRightTracer();

	void OnTurnEnd();

	void TurnLeft();

	void TurnRight();

	void CornerCheckTracers();

	float AngleBetweenVectors(FVector FirstVector, FVector SecondVector);

	void TestFunction();

	void WallCheckTracers();

	void TurnBack();

	void StopJump();

	void PickUpItem();

	void AttachWeaponToPlayer();

	UFUNCTION(BlueprintCallable)
	void Equip();

	UFUNCTION(BlueprintCallable)
	void Unequip();

	void DrawSheathWeapon();

	void OnAnimationEnd();

	void UpdateCurrentHealth(float Amount);

	void UpdateCurrentEnergy(float Amount);

	UFUNCTION()
	void TestMessage();

	UFUNCTION(BlueprintCallable)
	bool IsHanging() { return bHanging; }

	UFUNCTION(BlueprintCallable)
	bool IsClimbing() { return bClimbing; }

	UFUNCTION(BlueprintCallable)
	bool CanMoveLeft() { return bCanMoveLeft; }

	UFUNCTION(BlueprintCallable)
	bool CanMoveRight() { return bCanMoveRight; }

	UFUNCTION(BlueprintCallable)
	bool IsMovingLeft() { return bMovingLeft; }

	UFUNCTION(BlueprintCallable)
	bool IsMovingRight() { return bMovingRight; }

	UFUNCTION(BlueprintCallable)
	bool IsTurnedBack() { return bIsTurnedBack; }

	UFUNCTION(BlueprintCallable)
	bool IsJumpPressed() { return bIsJumpPressed; }

	UFUNCTION(BlueprintCallable)
	bool IsWeaponEquipped() { return bIsWeaponEquipped; }

	UFUNCTION(BlueprintCallable)
	float GetCurrentHealth() { return CurrentHealth; }

	UFUNCTION(BlueprintCallable)
	float GetMaxHealth() { return MaxHealth; }

	UFUNCTION(BlueprintCallable)
	float GetCurrentEnergy() { return CurrentEnergy; }

	UFUNCTION(BlueprintCallable)
	float GetMaxEnergy() { return MaxEnergy; }

	UPROPERTY(VisibleAnywhere)
	ABase_Weapon* AttachedWeapon;

private:
	UPROPERTY(EditAnywhere)
	float MaxHealth;

	UPROPERTY()
	float CurrentHealth;

	UPROPERTY(EditAnywhere)
	float MaxEnergy;

	UPROPERTY()
	float CurrentEnergy;
	
	UPROPERTY()
	int32 DoubleJumpCounter;

	UPROPERTY(EditAnywhere)
	float JumpHeight;

	UPROPERTY(EditAnywhere)
	float JumpCooldownTime;

	UPROPERTY(EditAnywhere)
	float WalkingSpeed;

	UPROPERTY(EditAnywhere)
	float SprintingSpeed;

	UPROPERTY(EditAnywhere)
	float DashDistance;

	UPROPERTY(EditAnywhere)
	float DashCooldownTimer;

	UPROPERTY()
	float DashStop;

	UPROPERTY(EditAnywhere)
	float ClimbHeight = 100.f;

	UPROPERTY()
	bool bCanJump;

	UPROPERTY()
	bool bCanDash;

	UPROPERTY()
	bool bHanging;

	UPROPERTY()
	bool bClimbing = false;

	UPROPERTY()
	bool bCanMoveLeft;

	UPROPERTY()
	bool bCanMoveRight;

	UPROPERTY()
	bool bMovingRight;

	UPROPERTY()
	bool bMovingLeft;

	UPROPERTY()
	bool bCanJumpLeft;

	UPROPERTY()
	bool bCanJumpRight;

	UPROPERTY()
	bool bIsJumpingFromLedge = false;

	UPROPERTY()
	bool bJumpingLeftFromLedge;

	UPROPERTY()
	bool bJumpingRightFromLedge;

	UPROPERTY()
	bool bCanTurnLeft;

	UPROPERTY()
	bool bCanTurnRight;

	UPROPERTY()
	bool bIsTurning;

	UPROPERTY()
	bool bCanHang;

	UPROPERTY()
	bool bIsTurnedBack;

	UPROPERTY()
	bool bIsJumpPressed;

	UPROPERTY()
	bool bIsWeaponEquipped;

	UPROPERTY()
	bool bIsWeaponSet;

	UPROPERTY()
	bool bIsPlayingAnimation;

	UPROPERTY()
	FTimerHandle UnuseHandle;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<ETraceTypeQuery> TraceChannel;

	UPROPERTY(EditAnywhere)
	FName PelvisSocket = FName(TEXT("PelvisSocket"));

	UPROPERTY()
	FVector HeightLocation;

	UPROPERTY()
	FVector WallLocation;

	UPROPERTY()
	FVector WallNormal;
};

