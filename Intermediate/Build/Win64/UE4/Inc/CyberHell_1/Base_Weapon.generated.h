// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CYBERHELL_1_Base_Weapon_generated_h
#error "Base_Weapon.generated.h already included, missing '#pragma once' in Base_Weapon.h"
#endif
#define CYBERHELL_1_Base_Weapon_generated_h

#define CyberHell_rebuild_Source_CyberHell_1_Base_Weapon_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHeavyAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HeavyAttack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLightAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LightAttack(); \
		P_NATIVE_END; \
	}


#define CyberHell_rebuild_Source_CyberHell_1_Base_Weapon_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHeavyAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HeavyAttack(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLightAttack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LightAttack(); \
		P_NATIVE_END; \
	}


#define CyberHell_rebuild_Source_CyberHell_1_Base_Weapon_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABase_Weapon(); \
	friend struct Z_Construct_UClass_ABase_Weapon_Statics; \
public: \
	DECLARE_CLASS(ABase_Weapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CyberHell_1"), NO_API) \
	DECLARE_SERIALIZER(ABase_Weapon)


#define CyberHell_rebuild_Source_CyberHell_1_Base_Weapon_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABase_Weapon(); \
	friend struct Z_Construct_UClass_ABase_Weapon_Statics; \
public: \
	DECLARE_CLASS(ABase_Weapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CyberHell_1"), NO_API) \
	DECLARE_SERIALIZER(ABase_Weapon)


#define CyberHell_rebuild_Source_CyberHell_1_Base_Weapon_h_12_STANDARD_CONSTRUCTORS \
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


#define CyberHell_rebuild_Source_CyberHell_1_Base_Weapon_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABase_Weapon(ABase_Weapon&&); \
	NO_API ABase_Weapon(const ABase_Weapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABase_Weapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABase_Weapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABase_Weapon)


#define CyberHell_rebuild_Source_CyberHell_1_Base_Weapon_h_12_PRIVATE_PROPERTY_OFFSET
#define CyberHell_rebuild_Source_CyberHell_1_Base_Weapon_h_9_PROLOG
#define CyberHell_rebuild_Source_CyberHell_1_Base_Weapon_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CyberHell_rebuild_Source_CyberHell_1_Base_Weapon_h_12_PRIVATE_PROPERTY_OFFSET \
	CyberHell_rebuild_Source_CyberHell_1_Base_Weapon_h_12_RPC_WRAPPERS \
	CyberHell_rebuild_Source_CyberHell_1_Base_Weapon_h_12_INCLASS \
	CyberHell_rebuild_Source_CyberHell_1_Base_Weapon_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CyberHell_rebuild_Source_CyberHell_1_Base_Weapon_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CyberHell_rebuild_Source_CyberHell_1_Base_Weapon_h_12_PRIVATE_PROPERTY_OFFSET \
	CyberHell_rebuild_Source_CyberHell_1_Base_Weapon_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CyberHell_rebuild_Source_CyberHell_1_Base_Weapon_h_12_INCLASS_NO_PURE_DECLS \
	CyberHell_rebuild_Source_CyberHell_1_Base_Weapon_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CYBERHELL_1_API UClass* StaticClass<class ABase_Weapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CyberHell_rebuild_Source_CyberHell_1_Base_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
