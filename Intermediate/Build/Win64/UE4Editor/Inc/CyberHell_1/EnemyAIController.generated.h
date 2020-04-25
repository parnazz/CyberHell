// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CYBERHELL_1_EnemyAIController_generated_h
#error "EnemyAIController.generated.h already included, missing '#pragma once' in EnemyAIController.h"
#endif
#define CYBERHELL_1_EnemyAIController_generated_h

#define CyberHell_Source_CyberHell_1_EnemyAIController_h_16_RPC_WRAPPERS
#define CyberHell_Source_CyberHell_1_EnemyAIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define CyberHell_Source_CyberHell_1_EnemyAIController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyAIController(); \
	friend struct Z_Construct_UClass_AEnemyAIController_Statics; \
public: \
	DECLARE_CLASS(AEnemyAIController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CyberHell_1"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAIController)


#define CyberHell_Source_CyberHell_1_EnemyAIController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyAIController(); \
	friend struct Z_Construct_UClass_AEnemyAIController_Statics; \
public: \
	DECLARE_CLASS(AEnemyAIController, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CyberHell_1"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAIController)


#define CyberHell_Source_CyberHell_1_EnemyAIController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyAIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAIController(AEnemyAIController&&); \
	NO_API AEnemyAIController(const AEnemyAIController&); \
public:


#define CyberHell_Source_CyberHell_1_EnemyAIController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAIController(AEnemyAIController&&); \
	NO_API AEnemyAIController(const AEnemyAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyAIController)


#define CyberHell_Source_CyberHell_1_EnemyAIController_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TargetLocationKeyName() { return STRUCT_OFFSET(AEnemyAIController, TargetLocationKeyName); } \
	FORCEINLINE static uint32 __PPO__TargetPlayerKeyName() { return STRUCT_OFFSET(AEnemyAIController, TargetPlayerKeyName); } \
	FORCEINLINE static uint32 __PPO__PatrolLocationKeyName() { return STRUCT_OFFSET(AEnemyAIController, PatrolLocationKeyName); } \
	FORCEINLINE static uint32 __PPO__CurrentWaypointKeyName() { return STRUCT_OFFSET(AEnemyAIController, CurrentWaypointKeyName); } \
	FORCEINLINE static uint32 __PPO__EnemyCharacterStateKeyName() { return STRUCT_OFFSET(AEnemyAIController, EnemyCharacterStateKeyName); } \
	FORCEINLINE static uint32 __PPO__EnemyBattleStateKeyName() { return STRUCT_OFFSET(AEnemyAIController, EnemyBattleStateKeyName); }


#define CyberHell_Source_CyberHell_1_EnemyAIController_h_13_PROLOG
#define CyberHell_Source_CyberHell_1_EnemyAIController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CyberHell_Source_CyberHell_1_EnemyAIController_h_16_PRIVATE_PROPERTY_OFFSET \
	CyberHell_Source_CyberHell_1_EnemyAIController_h_16_RPC_WRAPPERS \
	CyberHell_Source_CyberHell_1_EnemyAIController_h_16_INCLASS \
	CyberHell_Source_CyberHell_1_EnemyAIController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CyberHell_Source_CyberHell_1_EnemyAIController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CyberHell_Source_CyberHell_1_EnemyAIController_h_16_PRIVATE_PROPERTY_OFFSET \
	CyberHell_Source_CyberHell_1_EnemyAIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CyberHell_Source_CyberHell_1_EnemyAIController_h_16_INCLASS_NO_PURE_DECLS \
	CyberHell_Source_CyberHell_1_EnemyAIController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CYBERHELL_1_API UClass* StaticClass<class AEnemyAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CyberHell_Source_CyberHell_1_EnemyAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
