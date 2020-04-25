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
	class UPawnNoiseEmitterComponent* NoiseEmitter;

public:
	ACyberHell_1Character();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;

protected:

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	void CameraPitch(float AxisValue);

	void CameraYaw(float AxisValue);

	void UpdateCamera(FVector2D Input);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	virtual void Jump() override;
	virtual void StopJumping() override;

	UFUNCTION()
	void StopMovement();

	void EnableMovement(bool value);

	void EnableCameraRotationByPlayer(bool value) { bCanPlayerRotateCamera = value; }

	void ResetCamera(float DeltaTime);
	void Pause();

	void ShouldResetCamera(bool value) { bIsCameraTurningToDefualt = value; }

	UFUNCTION()
	void InflictDamage(class AActor* ImpactActor, float DamageAmount);

	UFUNCTION(BlueprintCallable)
	void UpdateCurrentHealth(float amount);

	UFUNCTION(BlueprintCallable)
	void UpdateCurrentEnergy(float amount);

	UFUNCTION(BlueprintCallable)
	void MakeCharacterNoise(float loudness);

	UFUNCTION(BlueprintCallable)
	float GetCurrentHealth() { return CurrentHealth; }

	UFUNCTION(BlueprintCallable)
	float GetMaxHealth() { return MaxHealth; }

	UFUNCTION(BlueprintCallable)
	float GetCurrentEnergy() { return CurrentEnergy; }

	UFUNCTION(BlueprintCallable)
	float GetMaxEnergy() { return MaxEnergy; }

	UPROPERTY(EditAnywhere)
	UArrowComponent* WallCheckArrow;

	UPROPERTY(EditAnywhere)
	UArrowComponent* CanMoveLeftInLedgeArrow;

	UPROPERTY(EditAnywhere)
	UArrowComponent* CanMoveRightInLedgeArrow;

	/** Needed to prevent player grab ledge from corners. */
	UPROPERTY(EditAnywhere)
	UArrowComponent* LeftCornerCheckArrow;

	/** Needed to prevent player grab ledge from corners. */
	UPROPERTY(EditAnywhere)
	UArrowComponent* RightCornerCheckArrow;

	UPROPERTY(EditAnywhere)
	UArrowComponent* LeftJumpFromLedgeCheckArrow;

	UPROPERTY(EditAnywhere)
	UArrowComponent* RightJumpFromLedgeCheckArrow;

	UPROPERTY(EditAnywhere)
	UArrowComponent* LeftWallCheckArrow;

	UPROPERTY(EditAnywhere)
	UArrowComponent* RightWallCheckArrow;

	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	class FHeroState* GetHeroState() const { return State; }

	class UAnimMontage* GetClimbMontage() const { return ClimbMontage; }
	class UAnimMontage* GetJumpLeftFromLedgeMontage() const { return JumpLeftFromLedgeMontage; }
	class UAnimMontage* GetJumpRightFromLedgeMontage() const { return JumpRightFromLedgeMontage; }
	class UAnimMontage* GetTurnLeftInLedgeMontage() const { return TurnLeftInLedgeMontage; }
	class UAnimMontage* GetTurnRightInLedgeMontage() const { return TurnRightInLedgeMontage; }

	class ABase_Weapon* GetEquippedWeapon() const { return EquippedWeapon; }

	void SetEquippedWeapon(ABase_Weapon* Weapon) { EquippedWeapon = Weapon; }

	UPROPERTY(VisibleAnywhere, Category = "Combat")
	class ABase_Weapon* AttachedWeapon;

	TEnumAsByte<ETraceTypeQuery> GetTraceChannel() const { return TraceChannel; }

	FName GetPelvisSocket() const { return PelvisSocket; }

	void SetCanEquipWeapon(bool value) { bCanEquipWeapon = value; }

	float GetMinClimbHeight() const { return MinClimbHeight; }
	float GetMaxClimbHeight() const { return MaxClimbHeight; }
	bool GetCanEquipWeapon() const { return bCanEquipWeapon; }

	/////////////////////////////////
	///Setters for AnimGraph flags//
	///////////////////////////////
	void SetHangingIdle(bool value) { bHangingIdle = value; }
	void SetMovingLeftInLedge(bool value) { bMovingLeftInLedge = value; }
	void SetMovingRightInLedge(bool value) { bMovingRightInLedge = value; }
	void SetTempStateForHanging(bool value) { bTempStateForHanging = value; }
	void SetTurnBackInLedge(bool value) { bTurnBackInLedge = value; }
	void SetRunWithWeapon(bool value) { bRunWithWeapon = value; }

	/////////////////////////////////
	///Getters for AnimGraph flags//
	///////////////////////////////
	UFUNCTION(BlueprintCallable)
	bool GetHangingIdle() { return bHangingIdle; }

	UFUNCTION(BlueprintCallable)
	bool GetMovingLeftInLedge() { return bMovingLeftInLedge; }

	UFUNCTION(BlueprintCallable)
	bool GetMovingRightInLedge() { return bMovingRightInLedge; }

	UFUNCTION(BlueprintCallable)
	bool GetTempStateForHanging() { return bTempStateForHanging; }

	UFUNCTION(BlueprintCallable)
	bool GetTurnBackInLedge() { return bTurnBackInLedge; }

	UFUNCTION(BlueprintCallable)
	bool GetRunWithWeapon() { return bRunWithWeapon; }

private:
	class FHeroState* State;

	UPROPERTY()
	class APlayerController* PlayerController;

	UPROPERTY(EditAnywhere, Category = "Climbing")
	class UAnimMontage* ClimbMontage;

	UPROPERTY(EditAnywhere, Category = "Climbing")
	class UAnimMontage* JumpLeftFromLedgeMontage;

	UPROPERTY(EditAnywhere, Category = "Climbing")
	class UAnimMontage* JumpRightFromLedgeMontage;

	UPROPERTY(EditAnywhere, Category = "Climbing")
	class UAnimMontage* TurnLeftInLedgeMontage;

	UPROPERTY(EditAnywhere, Category = "Climbing")
	class UAnimMontage* TurnRightInLedgeMontage;

	UPROPERTY(VisibleAnywhere, Category = "Combat")
	class ABase_Weapon* EquippedWeapon;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<ETraceTypeQuery> TraceChannel;

	UPROPERTY(EditAnywhere)
	FName PelvisSocket = FName(TEXT("PelvisSocket"));

	UPROPERTY()
	FVector2D CameraInput;

	UPROPERTY()
	FVector2D MovementInput;

	UPROPERTY(EditAnywhere, Category = "Climbing")
	float MinClimbHeight;

	UPROPERTY(EditAnywhere, Category = "Climbing")
	float MaxClimbHeight;

	UPROPERTY(EditAnywhere, Category = "HUD")
	float MaxHealth;

	UPROPERTY()
	float CurrentHealth;

	UPROPERTY(EditAnywhere, Category = "HUD")
	float MaxEnergy;

	UPROPERTY()
	float CurrentEnergy;

	UPROPERTY()
	bool bCanMove = true;

	UPROPERTY()
	bool bCanEquipWeapon = false;

	UPROPERTY()
	bool bIsCameraTurningToDefualt = false;

	UPROPERTY()
	bool bCanPlayerRotateCamera = true;

	/////////////////////////////////
	///AnimGraph flags//////////////
	///////////////////////////////
	bool bHangingIdle = false;
	bool bMovingLeftInLedge = false;
	bool bMovingRightInLedge = false;
	bool bTempStateForHanging = false;
	bool bTurnBackInLedge = false;
	bool bRunWithWeapon = false;
};

