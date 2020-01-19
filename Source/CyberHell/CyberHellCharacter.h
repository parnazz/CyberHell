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

public:
	ACyberHellCharacter();

	virtual void Tick( float DeltaSeconds ) override;

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	// UFUNCTION()
	// void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// UFUNCTION()
	// void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

protected:

	/** Resets HMD orientation in VR. */
	void OnResetVR();

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

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

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

	// DoubleJump section
	UFUNCTION()
	void DoubleJump();

	UPROPERTY()
	int DoubleJumpCounter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float JumpHeight;

	// Sprint section
	UFUNCTION()
	void Sprint();

	UFUNCTION()
	void Walk();

	UPROPERTY(EditAnywhere)
	float WalkingSpeed;

	UPROPERTY(EditAnywhere)
	float SprintingSpeed;

	// Dash section
	UFUNCTION()
	void Dash();

	UFUNCTION()
	void StopDashing();

	UFUNCTION()
	void DashCooldown();

	UPROPERTY(EditAnywhere)
	float DashDistance;

	UPROPERTY(EditAnywhere)
	float DashCooldownTimer;

	UPROPERTY()
	bool bCanDash;

	UPROPERTY()
	float DashStop;

	UPROPERTY()
	FTimerHandle UnuseHandle;

	// Climbing section
	UFUNCTION()
	FHitResult GetForwardTrace();

	UFUNCTION()
	FHitResult GetUpTrace();

	UFUNCTION()
	void GrabLedge(const FVector& WallNormal, const FVector& WallLocation, const FVector& HeightLocation);

	UFUNCTION()
	void UnGrabLedge();

	UFUNCTION()
	void StopMovement();

	UFUNCTION(BlueprintCallable)
	void OnClimbLedgeStart();

	UFUNCTION(BlueprintCallable)
	void OnClimbLedgeEnd();

	UFUNCTION(BlueprintCallable)
	bool IsHanging() { return bHanging; }

	UFUNCTION(BlueprintCallable)
	bool IsClimbing() { return bClimbing; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanGrab = false;

	UPROPERTY(VisibleAnywhere)
	bool bIsClimbingLedge = false;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<ETraceTypeQuery> TraceChannel;

	UPROPERTY(EditAnywhere)
	FName PelvisSocket = FName(TEXT("PelvisSocket"));

	UPROPERTY()
	USkeletalMeshComponent* SkeletalMeshComponent;

	UPROPERTY()
	FVector UpwardVector;

	UPROPERTY()
	FVector ForwardVector;

	UPROPERTY()
	FVector ForwardNormal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Climbing)
	bool bHanging;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Climbing)
	bool bClimbing = false;

	UPROPERTY(EditAnywhere)
	UAnimMontage* ClimbMontage;
};

