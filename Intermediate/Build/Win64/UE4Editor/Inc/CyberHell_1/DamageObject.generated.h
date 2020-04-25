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
#ifdef CYBERHELL_1_DamageObject_generated_h
#error "DamageObject.generated.h already included, missing '#pragma once' in DamageObject.h"
#endif
#define CYBERHELL_1_DamageObject_generated_h

#define CyberHell_rebuild_Source_CyberHell_1_DamageObject_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
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


#define CyberHell_rebuild_Source_CyberHell_1_DamageObject_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
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


#define CyberHell_rebuild_Source_CyberHell_1_DamageObject_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADamageObject(); \
	friend struct Z_Construct_UClass_ADamageObject_Statics; \
public: \
	DECLARE_CLASS(ADamageObject, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CyberHell_1"), NO_API) \
	DECLARE_SERIALIZER(ADamageObject)


#define CyberHell_rebuild_Source_CyberHell_1_DamageObject_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADamageObject(); \
	friend struct Z_Construct_UClass_ADamageObject_Statics; \
public: \
	DECLARE_CLASS(ADamageObject, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CyberHell_1"), NO_API) \
	DECLARE_SERIALIZER(ADamageObject)


#define CyberHell_rebuild_Source_CyberHell_1_DamageObject_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADamageObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADamageObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADamageObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADamageObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADamageObject(ADamageObject&&); \
	NO_API ADamageObject(const ADamageObject&); \
public:


#define CyberHell_rebuild_Source_CyberHell_1_DamageObject_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADamageObject(ADamageObject&&); \
	NO_API ADamageObject(const ADamageObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADamageObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADamageObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADamageObject)


#define CyberHell_rebuild_Source_CyberHell_1_DamageObject_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DamageAmount() { return STRUCT_OFFSET(ADamageObject, DamageAmount); } \
	FORCEINLINE static uint32 __PPO__SphereComponent() { return STRUCT_OFFSET(ADamageObject, SphereComponent); }


#define CyberHell_rebuild_Source_CyberHell_1_DamageObject_h_9_PROLOG
#define CyberHell_rebuild_Source_CyberHell_1_DamageObject_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CyberHell_rebuild_Source_CyberHell_1_DamageObject_h_12_PRIVATE_PROPERTY_OFFSET \
	CyberHell_rebuild_Source_CyberHell_1_DamageObject_h_12_RPC_WRAPPERS \
	CyberHell_rebuild_Source_CyberHell_1_DamageObject_h_12_INCLASS \
	CyberHell_rebuild_Source_CyberHell_1_DamageObject_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CyberHell_rebuild_Source_CyberHell_1_DamageObject_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CyberHell_rebuild_Source_CyberHell_1_DamageObject_h_12_PRIVATE_PROPERTY_OFFSET \
	CyberHell_rebuild_Source_CyberHell_1_DamageObject_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CyberHell_rebuild_Source_CyberHell_1_DamageObject_h_12_INCLASS_NO_PURE_DECLS \
	CyberHell_rebuild_Source_CyberHell_1_DamageObject_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CYBERHELL_1_API UClass* StaticClass<class ADamageObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CyberHell_rebuild_Source_CyberHell_1_DamageObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS