// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATargetPoint;
class APawn;
struct FVector;
#ifdef CYBERHELL_1_EnemyCharacter_generated_h
#error "EnemyCharacter.generated.h already included, missing '#pragma once' in EnemyCharacter.h"
#endif
#define CYBERHELL_1_EnemyCharacter_generated_h

#define CyberHell_rebuild_Source_CyberHell_1_EnemyCharacter_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEnemyBattleState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EnemyBattleState>*)Z_Param__Result=P_THIS->GetEnemyBattleState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentEnemyState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<CurrentEnemyState>*)Z_Param__Result=P_THIS->GetCurrentEnemyState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsPlayerSensed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsPlayerSensed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChooseRandomBattleAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChooseRandomBattleAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextWaypoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATargetPoint**)Z_Param__Result=P_THIS->GetNextWaypoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHearPlayer) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHearPlayer(Z_Param_Pawn,Z_Param_Out_Location,Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSeePlayer) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSeePlayer(Z_Param_Pawn); \
		P_NATIVE_END; \
	}


#define CyberHell_rebuild_Source_CyberHell_1_EnemyCharacter_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEnemyBattleState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EnemyBattleState>*)Z_Param__Result=P_THIS->GetEnemyBattleState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentEnemyState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<CurrentEnemyState>*)Z_Param__Result=P_THIS->GetCurrentEnemyState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsPlayerSensed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsPlayerSensed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChooseRandomBattleAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChooseRandomBattleAction(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNextWaypoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ATargetPoint**)Z_Param__Result=P_THIS->GetNextWaypoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHearPlayer) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHearPlayer(Z_Param_Pawn,Z_Param_Out_Location,Z_Param_Volume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSeePlayer) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSeePlayer(Z_Param_Pawn); \
		P_NATIVE_END; \
	}


#define CyberHell_rebuild_Source_CyberHell_1_EnemyCharacter_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend struct Z_Construct_UClass_AEnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(AEnemyCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CyberHell_1"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacter)


#define CyberHell_rebuild_Source_CyberHell_1_EnemyCharacter_h_32_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend struct Z_Construct_UClass_AEnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(AEnemyCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CyberHell_1"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacter)


#define CyberHell_rebuild_Source_CyberHell_1_EnemyCharacter_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyCharacter(AEnemyCharacter&&); \
	NO_API AEnemyCharacter(const AEnemyCharacter&); \
public:


#define CyberHell_rebuild_Source_CyberHell_1_EnemyCharacter_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyCharacter(AEnemyCharacter&&); \
	NO_API AEnemyCharacter(const AEnemyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyCharacter)


#define CyberHell_rebuild_Source_CyberHell_1_EnemyCharacter_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StaticMesh() { return STRUCT_OFFSET(AEnemyCharacter, StaticMesh); } \
	FORCEINLINE static uint32 __PPO__GameState() { return STRUCT_OFFSET(AEnemyCharacter, GameState); }


#define CyberHell_rebuild_Source_CyberHell_1_EnemyCharacter_h_29_PROLOG
#define CyberHell_rebuild_Source_CyberHell_1_EnemyCharacter_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CyberHell_rebuild_Source_CyberHell_1_EnemyCharacter_h_32_PRIVATE_PROPERTY_OFFSET \
	CyberHell_rebuild_Source_CyberHell_1_EnemyCharacter_h_32_RPC_WRAPPERS \
	CyberHell_rebuild_Source_CyberHell_1_EnemyCharacter_h_32_INCLASS \
	CyberHell_rebuild_Source_CyberHell_1_EnemyCharacter_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CyberHell_rebuild_Source_CyberHell_1_EnemyCharacter_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CyberHell_rebuild_Source_CyberHell_1_EnemyCharacter_h_32_PRIVATE_PROPERTY_OFFSET \
	CyberHell_rebuild_Source_CyberHell_1_EnemyCharacter_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	CyberHell_rebuild_Source_CyberHell_1_EnemyCharacter_h_32_INCLASS_NO_PURE_DECLS \
	CyberHell_rebuild_Source_CyberHell_1_EnemyCharacter_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CYBERHELL_1_API UClass* StaticClass<class AEnemyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CyberHell_rebuild_Source_CyberHell_1_EnemyCharacter_h


#define FOREACH_ENUM_ENEMYBATTLESTATE(op) \
	op(Guard) \
	op(Attack) \
	op(BattleIdle) \
	op(Default) 
#define FOREACH_ENUM_CURRENTENEMYSTATE(op) \
	op(NormalState) \
	op(DrawingWeapon) \
	op(ChasingPlayer) \
	op(BattleState) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
