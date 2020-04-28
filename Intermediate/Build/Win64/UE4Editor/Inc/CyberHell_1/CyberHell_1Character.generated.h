// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UUserWidget;
#ifdef CYBERHELL_1_CyberHell_1Character_generated_h
#error "CyberHell_1Character.generated.h already included, missing '#pragma once' in CyberHell_1Character.h"
#endif
#define CYBERHELL_1_CyberHell_1Character_generated_h

#define CyberHell_Source_CyberHell_1_CyberHell_1Character_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRunWithWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetRunWithWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTurnBackInLedge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetTurnBackInLedge(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTempStateForHanging) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetTempStateForHanging(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovingRightInLedge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetMovingRightInLedge(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovingLeftInLedge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetMovingLeftInLedge(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHangingIdle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetHangingIdle(); \
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
	DECLARE_FUNCTION(execMakeCharacterNoise) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_loudness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MakeCharacterNoise(Z_Param_loudness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCurrentEnergy) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateCurrentEnergy(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCurrentHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateCurrentHealth(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInflictDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ImpactActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageAmount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InflictDamage(Z_Param_ImpactActor,Z_Param_DamageAmount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWidget) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWidget(Z_Param_NewWidgetClass); \
		P_NATIVE_END; \
	}


#define CyberHell_Source_CyberHell_1_CyberHell_1Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRunWithWeapon) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetRunWithWeapon(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTurnBackInLedge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetTurnBackInLedge(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTempStateForHanging) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetTempStateForHanging(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovingRightInLedge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetMovingRightInLedge(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMovingLeftInLedge) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetMovingLeftInLedge(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHangingIdle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetHangingIdle(); \
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
	DECLARE_FUNCTION(execMakeCharacterNoise) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_loudness); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MakeCharacterNoise(Z_Param_loudness); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCurrentEnergy) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateCurrentEnergy(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCurrentHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateCurrentHealth(Z_Param_amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInflictDamage) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ImpactActor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageAmount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InflictDamage(Z_Param_ImpactActor,Z_Param_DamageAmount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopMovement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopMovement(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWidget) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWidget(Z_Param_NewWidgetClass); \
		P_NATIVE_END; \
	}


#define CyberHell_Source_CyberHell_1_CyberHell_1Character_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACyberHell_1Character(); \
	friend struct Z_Construct_UClass_ACyberHell_1Character_Statics; \
public: \
	DECLARE_CLASS(ACyberHell_1Character, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CyberHell_1"), NO_API) \
	DECLARE_SERIALIZER(ACyberHell_1Character)


#define CyberHell_Source_CyberHell_1_CyberHell_1Character_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACyberHell_1Character(); \
	friend struct Z_Construct_UClass_ACyberHell_1Character_Statics; \
public: \
	DECLARE_CLASS(ACyberHell_1Character, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CyberHell_1"), NO_API) \
	DECLARE_SERIALIZER(ACyberHell_1Character)


#define CyberHell_Source_CyberHell_1_CyberHell_1Character_h_14_STANDARD_CONSTRUCTORS \
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


#define CyberHell_Source_CyberHell_1_CyberHell_1Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACyberHell_1Character(ACyberHell_1Character&&); \
	NO_API ACyberHell_1Character(const ACyberHell_1Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACyberHell_1Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACyberHell_1Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACyberHell_1Character)


#define CyberHell_Source_CyberHell_1_CyberHell_1Character_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ACyberHell_1Character, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ACyberHell_1Character, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__NoiseEmitter() { return STRUCT_OFFSET(ACyberHell_1Character, NoiseEmitter); } \
	FORCEINLINE static uint32 __PPO__UI_InGame() { return STRUCT_OFFSET(ACyberHell_1Character, UI_InGame); } \
	FORCEINLINE static uint32 __PPO__PauseWidget() { return STRUCT_OFFSET(ACyberHell_1Character, PauseWidget); } \
	FORCEINLINE static uint32 __PPO__PlayerController() { return STRUCT_OFFSET(ACyberHell_1Character, PlayerController); } \
	FORCEINLINE static uint32 __PPO__ClimbMontage() { return STRUCT_OFFSET(ACyberHell_1Character, ClimbMontage); } \
	FORCEINLINE static uint32 __PPO__JumpLeftFromLedgeMontage() { return STRUCT_OFFSET(ACyberHell_1Character, JumpLeftFromLedgeMontage); } \
	FORCEINLINE static uint32 __PPO__JumpRightFromLedgeMontage() { return STRUCT_OFFSET(ACyberHell_1Character, JumpRightFromLedgeMontage); } \
	FORCEINLINE static uint32 __PPO__TurnLeftInLedgeMontage() { return STRUCT_OFFSET(ACyberHell_1Character, TurnLeftInLedgeMontage); } \
	FORCEINLINE static uint32 __PPO__TurnRightInLedgeMontage() { return STRUCT_OFFSET(ACyberHell_1Character, TurnRightInLedgeMontage); } \
	FORCEINLINE static uint32 __PPO__EquippedWeapon() { return STRUCT_OFFSET(ACyberHell_1Character, EquippedWeapon); } \
	FORCEINLINE static uint32 __PPO__TraceChannel() { return STRUCT_OFFSET(ACyberHell_1Character, TraceChannel); } \
	FORCEINLINE static uint32 __PPO__PelvisSocket() { return STRUCT_OFFSET(ACyberHell_1Character, PelvisSocket); } \
	FORCEINLINE static uint32 __PPO__CameraInput() { return STRUCT_OFFSET(ACyberHell_1Character, CameraInput); } \
	FORCEINLINE static uint32 __PPO__MovementInput() { return STRUCT_OFFSET(ACyberHell_1Character, MovementInput); } \
	FORCEINLINE static uint32 __PPO__MinClimbHeight() { return STRUCT_OFFSET(ACyberHell_1Character, MinClimbHeight); } \
	FORCEINLINE static uint32 __PPO__MaxClimbHeight() { return STRUCT_OFFSET(ACyberHell_1Character, MaxClimbHeight); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(ACyberHell_1Character, MaxHealth); } \
	FORCEINLINE static uint32 __PPO__CurrentHealth() { return STRUCT_OFFSET(ACyberHell_1Character, CurrentHealth); } \
	FORCEINLINE static uint32 __PPO__MaxEnergy() { return STRUCT_OFFSET(ACyberHell_1Character, MaxEnergy); } \
	FORCEINLINE static uint32 __PPO__CurrentEnergy() { return STRUCT_OFFSET(ACyberHell_1Character, CurrentEnergy); } \
	FORCEINLINE static uint32 __PPO__bCanMove() { return STRUCT_OFFSET(ACyberHell_1Character, bCanMove); } \
	FORCEINLINE static uint32 __PPO__bCanEquipWeapon() { return STRUCT_OFFSET(ACyberHell_1Character, bCanEquipWeapon); } \
	FORCEINLINE static uint32 __PPO__bIsCameraTurningToDefualt() { return STRUCT_OFFSET(ACyberHell_1Character, bIsCameraTurningToDefualt); } \
	FORCEINLINE static uint32 __PPO__bCanPlayerRotateCamera() { return STRUCT_OFFSET(ACyberHell_1Character, bCanPlayerRotateCamera); }


#define CyberHell_Source_CyberHell_1_CyberHell_1Character_h_11_PROLOG
#define CyberHell_Source_CyberHell_1_CyberHell_1Character_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CyberHell_Source_CyberHell_1_CyberHell_1Character_h_14_PRIVATE_PROPERTY_OFFSET \
	CyberHell_Source_CyberHell_1_CyberHell_1Character_h_14_RPC_WRAPPERS \
	CyberHell_Source_CyberHell_1_CyberHell_1Character_h_14_INCLASS \
	CyberHell_Source_CyberHell_1_CyberHell_1Character_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CyberHell_Source_CyberHell_1_CyberHell_1Character_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CyberHell_Source_CyberHell_1_CyberHell_1Character_h_14_PRIVATE_PROPERTY_OFFSET \
	CyberHell_Source_CyberHell_1_CyberHell_1Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	CyberHell_Source_CyberHell_1_CyberHell_1Character_h_14_INCLASS_NO_PURE_DECLS \
	CyberHell_Source_CyberHell_1_CyberHell_1Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CYBERHELL_1_API UClass* StaticClass<class ACyberHell_1Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CyberHell_Source_CyberHell_1_CyberHell_1Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
