// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef CYBERHELL_1_CyberHell_1GameMode_generated_h
#error "CyberHell_1GameMode.generated.h already included, missing '#pragma once' in CyberHell_1GameMode.h"
#endif
#define CYBERHELL_1_CyberHell_1GameMode_generated_h

#define CyberHell_Source_CyberHell_1_CyberHell_1GameMode_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetWidget) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWidget(Z_Param_NewWidgetClass); \
		P_NATIVE_END; \
	}


#define CyberHell_Source_CyberHell_1_CyberHell_1GameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetWidget) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWidget(Z_Param_NewWidgetClass); \
		P_NATIVE_END; \
	}


#define CyberHell_Source_CyberHell_1_CyberHell_1GameMode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACyberHell_1GameMode(); \
	friend struct Z_Construct_UClass_ACyberHell_1GameMode_Statics; \
public: \
	DECLARE_CLASS(ACyberHell_1GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CyberHell_1"), CYBERHELL_1_API) \
	DECLARE_SERIALIZER(ACyberHell_1GameMode)


#define CyberHell_Source_CyberHell_1_CyberHell_1GameMode_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACyberHell_1GameMode(); \
	friend struct Z_Construct_UClass_ACyberHell_1GameMode_Statics; \
public: \
	DECLARE_CLASS(ACyberHell_1GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CyberHell_1"), CYBERHELL_1_API) \
	DECLARE_SERIALIZER(ACyberHell_1GameMode)


#define CyberHell_Source_CyberHell_1_CyberHell_1GameMode_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CYBERHELL_1_API ACyberHell_1GameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACyberHell_1GameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CYBERHELL_1_API, ACyberHell_1GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACyberHell_1GameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CYBERHELL_1_API ACyberHell_1GameMode(ACyberHell_1GameMode&&); \
	CYBERHELL_1_API ACyberHell_1GameMode(const ACyberHell_1GameMode&); \
public:


#define CyberHell_Source_CyberHell_1_CyberHell_1GameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CYBERHELL_1_API ACyberHell_1GameMode(ACyberHell_1GameMode&&); \
	CYBERHELL_1_API ACyberHell_1GameMode(const ACyberHell_1GameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CYBERHELL_1_API, ACyberHell_1GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACyberHell_1GameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACyberHell_1GameMode)


#define CyberHell_Source_CyberHell_1_CyberHell_1GameMode_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthAndEnergyWidget() { return STRUCT_OFFSET(ACyberHell_1GameMode, HealthAndEnergyWidget); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(ACyberHell_1GameMode, CurrentWidget); } \
	FORCEINLINE static uint32 __PPO__Player() { return STRUCT_OFFSET(ACyberHell_1GameMode, Player); }


#define CyberHell_Source_CyberHell_1_CyberHell_1GameMode_h_10_PROLOG
#define CyberHell_Source_CyberHell_1_CyberHell_1GameMode_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CyberHell_Source_CyberHell_1_CyberHell_1GameMode_h_13_PRIVATE_PROPERTY_OFFSET \
	CyberHell_Source_CyberHell_1_CyberHell_1GameMode_h_13_RPC_WRAPPERS \
	CyberHell_Source_CyberHell_1_CyberHell_1GameMode_h_13_INCLASS \
	CyberHell_Source_CyberHell_1_CyberHell_1GameMode_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CyberHell_Source_CyberHell_1_CyberHell_1GameMode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CyberHell_Source_CyberHell_1_CyberHell_1GameMode_h_13_PRIVATE_PROPERTY_OFFSET \
	CyberHell_Source_CyberHell_1_CyberHell_1GameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CyberHell_Source_CyberHell_1_CyberHell_1GameMode_h_13_INCLASS_NO_PURE_DECLS \
	CyberHell_Source_CyberHell_1_CyberHell_1GameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CYBERHELL_1_API UClass* StaticClass<class ACyberHell_1GameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CyberHell_Source_CyberHell_1_CyberHell_1GameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
