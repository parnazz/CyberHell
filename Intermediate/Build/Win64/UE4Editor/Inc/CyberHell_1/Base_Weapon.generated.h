// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef CYBERHELL_1_Base_Weapon_generated_h
#error "Base_Weapon.generated.h already included, missing '#pragma once' in Base_Weapon.h"
#endif
#define CYBERHELL_1_Base_Weapon_generated_h

#define CyberHell_Source_CyberHell_1_Base_Weapon_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComboMove_Statics; \
	CYBERHELL_1_API static class UScriptStruct* StaticStruct();


template<> CYBERHELL_1_API UScriptStruct* StaticStruct<struct FComboMove>();

#define CyberHell_Source_CyberHell_1_Base_Weapon_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define CyberHell_Source_CyberHell_1_Base_Weapon_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define CyberHell_Source_CyberHell_1_Base_Weapon_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABase_Weapon(); \
	friend struct Z_Construct_UClass_ABase_Weapon_Statics; \
public: \
	DECLARE_CLASS(ABase_Weapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CyberHell_1"), NO_API) \
	DECLARE_SERIALIZER(ABase_Weapon)


#define CyberHell_Source_CyberHell_1_Base_Weapon_h_37_INCLASS \
private: \
	static void StaticRegisterNativesABase_Weapon(); \
	friend struct Z_Construct_UClass_ABase_Weapon_Statics; \
public: \
	DECLARE_CLASS(ABase_Weapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CyberHell_1"), NO_API) \
	DECLARE_SERIALIZER(ABase_Weapon)


#define CyberHell_Source_CyberHell_1_Base_Weapon_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABase_Weapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABase_Weapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABase_Weapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABase_Weapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABase_Weapon(ABase_Weapon&&); \
	NO_API ABase_Weapon(const ABase_Weapon&); \
public:


#define CyberHell_Source_CyberHell_1_Base_Weapon_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABase_Weapon(ABase_Weapon&&); \
	NO_API ABase_Weapon(const ABase_Weapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABase_Weapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABase_Weapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABase_Weapon)


#define CyberHell_Source_CyberHell_1_Base_Weapon_h_37_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CapsuleComponent() { return STRUCT_OFFSET(ABase_Weapon, CapsuleComponent); } \
	FORCEINLINE static uint32 __PPO__PlayerCharacter() { return STRUCT_OFFSET(ABase_Weapon, PlayerCharacter); }


#define CyberHell_Source_CyberHell_1_Base_Weapon_h_34_PROLOG
#define CyberHell_Source_CyberHell_1_Base_Weapon_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CyberHell_Source_CyberHell_1_Base_Weapon_h_37_PRIVATE_PROPERTY_OFFSET \
	CyberHell_Source_CyberHell_1_Base_Weapon_h_37_RPC_WRAPPERS \
	CyberHell_Source_CyberHell_1_Base_Weapon_h_37_INCLASS \
	CyberHell_Source_CyberHell_1_Base_Weapon_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CyberHell_Source_CyberHell_1_Base_Weapon_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CyberHell_Source_CyberHell_1_Base_Weapon_h_37_PRIVATE_PROPERTY_OFFSET \
	CyberHell_Source_CyberHell_1_Base_Weapon_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	CyberHell_Source_CyberHell_1_Base_Weapon_h_37_INCLASS_NO_PURE_DECLS \
	CyberHell_Source_CyberHell_1_Base_Weapon_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CYBERHELL_1_API UClass* StaticClass<class ABase_Weapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CyberHell_Source_CyberHell_1_Base_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
