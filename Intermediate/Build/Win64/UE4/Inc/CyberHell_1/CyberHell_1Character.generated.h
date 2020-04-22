// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CYBERHELL_1_CyberHell_1Character_generated_h
#error "CyberHell_1Character.generated.h already included, missing '#pragma once' in CyberHell_1Character.h"
#endif
#define CYBERHELL_1_CyberHell_1Character_generated_h

#define CyberHell_rebuild_Source_CyberHell_1_CyberHell_1Character_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetChainHeavyAttacks) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetChainHeavyAttacks(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChainLightAttacks) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetChainLightAttacks(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxEnergy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxEnergy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentEnergy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentEnergy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWeaponEquipped) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsWeaponEquipped(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsJumpPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsJumpPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTurnedBack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTurnedBack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMovingRight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMovingRight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMovingLeft) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMovingLeft(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanMoveRight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanMoveRight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanMoveLeft) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanMoveLeft(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsClimbing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsClimbing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHanging) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHanging(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTestMessage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TestMessage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChainAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChainAttack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetAttack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnequip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Unequip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Equip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopMovement(); \
		P_NATIVE_END; \
	}


#define CyberHell_rebuild_Source_CyberHell_1_CyberHell_1Character_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetChainHeavyAttacks) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetChainHeavyAttacks(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetChainLightAttacks) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetChainLightAttacks(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxEnergy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxEnergy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentEnergy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentEnergy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWeaponEquipped) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsWeaponEquipped(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsJumpPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsJumpPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTurnedBack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsTurnedBack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMovingRight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMovingRight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMovingLeft) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMovingLeft(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanMoveRight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanMoveRight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanMoveLeft) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanMoveLeft(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsClimbing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsClimbing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHanging) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsHanging(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTestMessage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TestMessage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChainAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChainAttack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetAttack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnequip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Unequip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Equip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopMovement(); \
		P_NATIVE_END; \
	}


#define CyberHell_rebuild_Source_CyberHell_1_CyberHell_1Character_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACyberHell_1Character(); \
	friend struct Z_Construct_UClass_ACyberHell_1Character_Statics; \
public: \
	DECLARE_CLASS(ACyberHell_1Character, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CyberHell_1"), NO_API) \
	DECLARE_SERIALIZER(ACyberHell_1Character)


#define CyberHell_rebuild_Source_CyberHell_1_CyberHell_1Character_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACyberHell_1Character(); \
	friend struct Z_Construct_UClass_ACyberHell_1Character_Statics; \
public: \
	DECLARE_CLASS(ACyberHell_1Character, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CyberHell_1"), NO_API) \
	DECLARE_SERIALIZER(ACyberHell_1Character)


#define CyberHell_rebuild_Source_CyberHell_1_CyberHell_1Character_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACyberHell_1Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACyberHell_1Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACyberHell_1Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACyberHell_1Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACyberHell_1Character(ACyberHell_1Character&&); \
	NO_API ACyberHell_1Character(const ACyberHell_1Character&); \
public:


#define CyberHell_rebuild_Source_CyberHell_1_CyberHell_1Character_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACyberHell_1Character(ACyberHell_1Character&&); \
	NO_API ACyberHell_1Character(const ACyberHell_1Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACyberHell_1Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACyberHell_1Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACyberHell_1Character)


#define CyberHell_rebuild_Source_CyberHell_1_CyberHell_1Character_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ACyberHell_1Character, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ACyberHell_1Character, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__SkeletalMeshComponent() { return STRUCT_OFFSET(ACyberHell_1Character, SkeletalMeshComponent); } \
	FORCEINLINE static uint32 __PPO__LeftArrow() { return STRUCT_OFFSET(ACyberHell_1Character, LeftArrow); } \
	FORCEINLINE static uint32 __PPO__RightArrow() { return STRUCT_OFFSET(ACyberHell_1Character, RightArrow); } \
	FORCEINLINE static uint32 __PPO__LeftLedge() { return STRUCT_OFFSET(ACyberHell_1Character, LeftLedge); } \
	FORCEINLINE static uint32 __PPO__RightLedge() { return STRUCT_OFFSET(ACyberHell_1Character, RightLedge); } \
	FORCEINLINE static uint32 __PPO__LeftCornerCheck() { return STRUCT_OFFSET(ACyberHell_1Character, LeftCornerCheck); } \
	FORCEINLINE static uint32 __PPO__RightCornerCheck() { return STRUCT_OFFSET(ACyberHell_1Character, RightCornerCheck); } \
	FORCEINLINE static uint32 __PPO__LeftWallCheck() { return STRUCT_OFFSET(ACyberHell_1Character, LeftWallCheck); } \
	FORCEINLINE static uint32 __PPO__RightWallCheck() { return STRUCT_OFFSET(ACyberHell_1Character, RightWallCheck); } \
	FORCEINLINE static uint32 __PPO__ClimbMontage() { return STRUCT_OFFSET(ACyberHell_1Character, ClimbMontage); } \
	FORCEINLINE static uint32 __PPO__JumpRightFromLedgeMontage() { return STRUCT_OFFSET(ACyberHell_1Character, JumpRightFromLedgeMontage); } \
	FORCEINLINE static uint32 __PPO__JumpLeftFromLedgeMontage() { return STRUCT_OFFSET(ACyberHell_1Character, JumpLeftFromLedgeMontage); } \
	FORCEINLINE static uint32 __PPO__TurnLeftMontage() { return STRUCT_OFFSET(ACyberHell_1Character, TurnLeftMontage); } \
	FORCEINLINE static uint32 __PPO__TurnRightMontage() { return STRUCT_OFFSET(ACyberHell_1Character, TurnRightMontage); } \
	FORCEINLINE static uint32 __PPO__EquippedWeapon() { return STRUCT_OFFSET(ACyberHell_1Character, EquippedWeapon); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(ACyberHell_1Character, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__CurrentHealth() { return STRUCT_OFFSET(ACyberHell_1Character, CurrentHealth); } \
	FORCEINLINE static uint32 __PPO__MaxEnergy() { return STRUCT_OFFSET(ACyberHell_1Character, MaxEnergy); } \
	FORCEINLINE static uint32 __PPO__CurrentEnergy() { return STRUCT_OFFSET(ACyberHell_1Character, CurrentEnergy); } \
	FORCEINLINE static uint32 __PPO__DoubleJumpCounter() { return STRUCT_OFFSET(ACyberHell_1Character, DoubleJumpCounter); } \
	FORCEINLINE static uint32 __PPO__JumpHeight() { return STRUCT_OFFSET(ACyberHell_1Character, JumpHeight); } \
	FORCEINLINE static uint32 __PPO__JumpCooldownTime() { return STRUCT_OFFSET(ACyberHell_1Character, JumpCooldownTime); } \
	FORCEINLINE static uint32 __PPO__WalkingSpeed() { return STRUCT_OFFSET(ACyberHell_1Character, WalkingSpeed); } \
	FORCEINLINE static uint32 __PPO__SprintingSpeed() { return STRUCT_OFFSET(ACyberHell_1Character, SprintingSpeed); } \
	FORCEINLINE static uint32 __PPO__DashDistance() { return STRUCT_OFFSET(ACyberHell_1Character, DashDistance); } \
	FORCEINLINE static uint32 __PPO__DashCooldownTimer() { return STRUCT_OFFSET(ACyberHell_1Character, DashCooldownTimer); } \
	FORCEINLINE static uint32 __PPO__DashStop() { return STRUCT_OFFSET(ACyberHell_1Character, DashStop); } \
	FORCEINLINE static uint32 __PPO__ClimbHeight() { return STRUCT_OFFSET(ACyberHell_1Character, ClimbHeight); } \
	FORCEINLINE static uint32 __PPO__bCanJump() { return STRUCT_OFFSET(ACyberHell_1Character, bCanJump); } \
	FORCEINLINE static uint32 __PPO__bCanDash() { return STRUCT_OFFSET(ACyberHell_1Character, bCanDash); } \
	FORCEINLINE static uint32 __PPO__bHanging() { return STRUCT_OFFSET(ACyberHell_1Character, bHanging); } \
	FORCEINLINE static uint32 __PPO__bClimbing() { return STRUCT_OFFSET(ACyberHell_1Character, bClimbing); } \
	FORCEINLINE static uint32 __PPO__bCanMoveLeft() { return STRUCT_OFFSET(ACyberHell_1Character, bCanMoveLeft); } \
	FORCEINLINE static uint32 __PPO__bCanMoveRight() { return STRUCT_OFFSET(ACyberHell_1Character, bCanMoveRight); } \
	FORCEINLINE static uint32 __PPO__bMovingRight() { return STRUCT_OFFSET(ACyberHell_1Character, bMovingRight); } \
	FORCEINLINE static uint32 __PPO__bMovingLeft() { return STRUCT_OFFSET(ACyberHell_1Character, bMovingLeft); } \
	FORCEINLINE static uint32 __PPO__bCanJumpLeft() { return STRUCT_OFFSET(ACyberHell_1Character, bCanJumpLeft); } \
	FORCEINLINE static uint32 __PPO__bCanJumpRight() { return STRUCT_OFFSET(ACyberHell_1Character, bCanJumpRight); } \
	FORCEINLINE static uint32 __PPO__bIsJumpingFromLedge() { return STRUCT_OFFSET(ACyberHell_1Character, bIsJumpingFromLedge); } \
	FORCEINLINE static uint32 __PPO__bJumpingLeftFromLedge() { return STRUCT_OFFSET(ACyberHell_1Character, bJumpingLeftFromLedge); } \
	FORCEINLINE static uint32 __PPO__bJumpingRightFromLedge() { return STRUCT_OFFSET(ACyberHell_1Character, bJumpingRightFromLedge); } \
	FORCEINLINE static uint32 __PPO__bCanTurnLeft() { return STRUCT_OFFSET(ACyberHell_1Character, bCanTurnLeft); } \
	FORCEINLINE static uint32 __PPO__bCanTurnRight() { return STRUCT_OFFSET(ACyberHell_1Character, bCanTurnRight); } \
	FORCEINLINE static uint32 __PPO__bIsTurning() { return STRUCT_OFFSET(ACyberHell_1Character, bIsTurning); } \
	FORCEINLINE static uint32 __PPO__bCanHang() { return STRUCT_OFFSET(ACyberHell_1Character, bCanHang); } \
	FORCEINLINE static uint32 __PPO__bIsTurnedBack() { return STRUCT_OFFSET(ACyberHell_1Character, bIsTurnedBack); } \
	FORCEINLINE static uint32 __PPO__bIsJumpPressed() { return STRUCT_OFFSET(ACyberHell_1Character, bIsJumpPressed); } \
	FORCEINLINE static uint32 __PPO__bIsWeaponEquipped() { return STRUCT_OFFSET(ACyberHell_1Character, bIsWeaponEquipped); } \
	FORCEINLINE static uint32 __PPO__bIsWeaponSet() { return STRUCT_OFFSET(ACyberHell_1Character, bIsWeaponSet); } \
	FORCEINLINE static uint32 __PPO__bIsPlayingAnimation() { return STRUCT_OFFSET(ACyberHell_1Character, bIsPlayingAnimation); } \
	FORCEINLINE static uint32 __PPO__bCannotAttack() { return STRUCT_OFFSET(ACyberHell_1Character, bCannotAttack); } \
	FORCEINLINE static uint32 __PPO__bLightAttack() { return STRUCT_OFFSET(ACyberHell_1Character, bLightAttack); } \
	FORCEINLINE static uint32 __PPO__bHeavyAttack() { return STRUCT_OFFSET(ACyberHell_1Character, bHeavyAttack); } \
	FORCEINLINE static uint32 __PPO__bChainAttack() { return STRUCT_OFFSET(ACyberHell_1Character, bChainAttack); } \
	FORCEINLINE static uint32 __PPO__UnuseHandle() { return STRUCT_OFFSET(ACyberHell_1Character, UnuseHandle); } \
	FORCEINLINE static uint32 __PPO__TraceChannel() { return STRUCT_OFFSET(ACyberHell_1Character, TraceChannel); } \
	FORCEINLINE static uint32 __PPO__PelvisSocket() { return STRUCT_OFFSET(ACyberHell_1Character, PelvisSocket); } \
	FORCEINLINE static uint32 __PPO__HeightLocation() { return STRUCT_OFFSET(ACyberHell_1Character, HeightLocation); } \
	FORCEINLINE static uint32 __PPO__WallLocation() { return STRUCT_OFFSET(ACyberHell_1Character, WallLocation); } \
	FORCEINLINE static uint32 __PPO__WallNormal() { return STRUCT_OFFSET(ACyberHell_1Character, WallNormal); }


#define CyberHell_rebuild_Source_CyberHell_1_CyberHell_1Character_h_10_PROLOG
#define CyberHell_rebuild_Source_CyberHell_1_CyberHell_1Character_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CyberHell_rebuild_Source_CyberHell_1_CyberHell_1Character_h_13_PRIVATE_PROPERTY_OFFSET \
	CyberHell_rebuild_Source_CyberHell_1_CyberHell_1Character_h_13_RPC_WRAPPERS \
	CyberHell_rebuild_Source_CyberHell_1_CyberHell_1Character_h_13_INCLASS \
	CyberHell_rebuild_Source_CyberHell_1_CyberHell_1Character_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CyberHell_rebuild_Source_CyberHell_1_CyberHell_1Character_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CyberHell_rebuild_Source_CyberHell_1_CyberHell_1Character_h_13_PRIVATE_PROPERTY_OFFSET \
	CyberHell_rebuild_Source_CyberHell_1_CyberHell_1Character_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CyberHell_rebuild_Source_CyberHell_1_CyberHell_1Character_h_13_INCLASS_NO_PURE_DECLS \
	CyberHell_rebuild_Source_CyberHell_1_CyberHell_1Character_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CYBERHELL_1_API UClass* StaticClass<class ACyberHell_1Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CyberHell_rebuild_Source_CyberHell_1_CyberHell_1Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
