// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef CYBERHELL_1_EventHandler_generated_h
#error "EventHandler.generated.h already included, missing '#pragma once' in EventHandler.h"
#endif
#define CYBERHELL_1_EventHandler_generated_h

#define CyberHell_Source_CyberHell_1_EventHandler_h_26_DELEGATE \
struct EventHandler_eventApplyDamageDelegate_Parms \
{ \
	AActor* Actor; \
	float Damage; \
}; \
static inline void FApplyDamageDelegate_DelegateWrapper(const FMulticastScriptDelegate& ApplyDamageDelegate, AActor* Actor, float Damage) \
{ \
	EventHandler_eventApplyDamageDelegate_Parms Parms; \
	Parms.Actor=Actor; \
	Parms.Damage=Damage; \
	ApplyDamageDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define CyberHell_Source_CyberHell_1_EventHandler_h_12_RPC_WRAPPERS
#define CyberHell_Source_CyberHell_1_EventHandler_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define CyberHell_Source_CyberHell_1_EventHandler_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEventHandler(); \
	friend struct Z_Construct_UClass_UEventHandler_Statics; \
public: \
	DECLARE_CLASS(UEventHandler, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CyberHell_1"), NO_API) \
	DECLARE_SERIALIZER(UEventHandler)


#define CyberHell_Source_CyberHell_1_EventHandler_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUEventHandler(); \
	friend struct Z_Construct_UClass_UEventHandler_Statics; \
public: \
	DECLARE_CLASS(UEventHandler, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CyberHell_1"), NO_API) \
	DECLARE_SERIALIZER(UEventHandler)


#define CyberHell_Source_CyberHell_1_EventHandler_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEventHandler(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEventHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventHandler(UEventHandler&&); \
	NO_API UEventHandler(const UEventHandler&); \
public:


#define CyberHell_Source_CyberHell_1_EventHandler_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEventHandler(UEventHandler&&); \
	NO_API UEventHandler(const UEventHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEventHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEventHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEventHandler)


#define CyberHell_Source_CyberHell_1_EventHandler_h_12_PRIVATE_PROPERTY_OFFSET
#define CyberHell_Source_CyberHell_1_EventHandler_h_9_PROLOG
#define CyberHell_Source_CyberHell_1_EventHandler_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CyberHell_Source_CyberHell_1_EventHandler_h_12_PRIVATE_PROPERTY_OFFSET \
	CyberHell_Source_CyberHell_1_EventHandler_h_12_RPC_WRAPPERS \
	CyberHell_Source_CyberHell_1_EventHandler_h_12_INCLASS \
	CyberHell_Source_CyberHell_1_EventHandler_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CyberHell_Source_CyberHell_1_EventHandler_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CyberHell_Source_CyberHell_1_EventHandler_h_12_PRIVATE_PROPERTY_OFFSET \
	CyberHell_Source_CyberHell_1_EventHandler_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CyberHell_Source_CyberHell_1_EventHandler_h_12_INCLASS_NO_PURE_DECLS \
	CyberHell_Source_CyberHell_1_EventHandler_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CYBERHELL_1_API UClass* StaticClass<class UEventHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CyberHell_Source_CyberHell_1_EventHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
