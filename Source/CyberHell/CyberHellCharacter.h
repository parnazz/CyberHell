// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "MyAnimInstance.h"
#include "GameFramework/Character.h"
#include "CyberHellCharacter.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ACyberHellCharacter : public ACharacter
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

	UPROPERTY(EditAnywhere)
	UAnimMontage* ClimbMontage;

public:
	ACyberHellCharacter();

	virtual void Tick( float DeltaSeconds ) override;

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
	UFUNCTION()
	void DoubleJump();

	/** Increase movement speed of character when "LShift" is pressed **/
	UFUNCTION()
	void Sprint();

	/** Set movement speed of character to default **/
	UFUNCTION()
	void Walk();

	/** Allows the character to dash when "LAlt" is pressed **/
	UFUNCTION()
	void Dash();

	/** Start countdown timer for DashCooldown **/
	UFUNCTION()
	void StopDashing();

	/** Set bCanDash to true **/
	UFUNCTION()
	void DashCooldown();

	/** Launch sphere tracer in front of character each frame. Also set WallLocation and WallNormal if this trace hit climable wall **/
	UFUNCTION()
	void GetForwardTrace();

	/** Launch sphere tracer from top to bottom each frame. Also set HeightLocation if this trace hit climable wall **/
	/** If character jump in front of this wall invokes GrabLedge function **/
	UFUNCTION()
	void GetUpTrace();

	/** Calculate location where the character will move while grabbing the ledge. Also set bHanging to true **/
	/** Animation for GrabLedge set in AnimBlueprint **/
	UFUNCTION()
	void GrabLedge(const FVector& WallNormal, const FVector& WallLocation, const FVector& HeightLocation);

	/** Running when "S" is pressed **/
	UFUNCTION()
	void UnGrabLedge();

	/** Invokes StopMovementImmediately function **/
	UFUNCTION()
	void StopMovement();

	/** Launch AnimMontage when "SpaceBar" is pressed **/
	UFUNCTION(BlueprintCallable)
	void OnClimbLedgeStart();

	/** Stops ClimbLedge AnimMontage when OnClimbLedgeStart finished **/
	UFUNCTION(BlueprintCallable)
	void OnClimbLedgeEnd();

	UFUNCTION(BlueprintCallable)
	bool IsHanging() { return bHanging; }

	UFUNCTION(BlueprintCallable)
	bool IsClimbing() { return bClimbing; }

private:
	UPROPERTY()
	int32 DoubleJumpCounter;

	UPROPERTY(EditAnywhere)
	float JumpHeight;

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
	float ClimbHeight = 50.f;

	UPROPERTY()
	bool bCanDash;

	UPROPERTY(EditAnywhere, Category=Climbing)
	bool bHanging;

	UPROPERTY(EditAnywhere, Category=Climbing)
	bool bClimbing = false;

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

