// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef BATTLEFORTHESPACE_BattleForTheSpaceProjectile_generated_h
#error "BattleForTheSpaceProjectile.generated.h already included, missing '#pragma once' in BattleForTheSpaceProjectile.h"
#endif
#define BATTLEFORTHESPACE_BattleForTheSpaceProjectile_generated_h

#define BattleForTheSpace_Source_BattleForTheSpace_BattleForTheSpaceProjectile_h_15_SPARSE_DATA
#define BattleForTheSpace_Source_BattleForTheSpace_BattleForTheSpaceProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define BattleForTheSpace_Source_BattleForTheSpace_BattleForTheSpaceProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define BattleForTheSpace_Source_BattleForTheSpace_BattleForTheSpaceProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABattleForTheSpaceProjectile(); \
	friend struct Z_Construct_UClass_ABattleForTheSpaceProjectile_Statics; \
public: \
	DECLARE_CLASS(ABattleForTheSpaceProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleForTheSpace"), NO_API) \
	DECLARE_SERIALIZER(ABattleForTheSpaceProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define BattleForTheSpace_Source_BattleForTheSpace_BattleForTheSpaceProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABattleForTheSpaceProjectile(); \
	friend struct Z_Construct_UClass_ABattleForTheSpaceProjectile_Statics; \
public: \
	DECLARE_CLASS(ABattleForTheSpaceProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleForTheSpace"), NO_API) \
	DECLARE_SERIALIZER(ABattleForTheSpaceProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define BattleForTheSpace_Source_BattleForTheSpace_BattleForTheSpaceProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABattleForTheSpaceProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABattleForTheSpaceProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABattleForTheSpaceProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABattleForTheSpaceProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABattleForTheSpaceProjectile(ABattleForTheSpaceProjectile&&); \
	NO_API ABattleForTheSpaceProjectile(const ABattleForTheSpaceProjectile&); \
public:


#define BattleForTheSpace_Source_BattleForTheSpace_BattleForTheSpaceProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABattleForTheSpaceProjectile(ABattleForTheSpaceProjectile&&); \
	NO_API ABattleForTheSpaceProjectile(const ABattleForTheSpaceProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABattleForTheSpaceProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABattleForTheSpaceProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABattleForTheSpaceProjectile)


#define BattleForTheSpace_Source_BattleForTheSpace_BattleForTheSpaceProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ABattleForTheSpaceProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ABattleForTheSpaceProjectile, ProjectileMovement); }


#define BattleForTheSpace_Source_BattleForTheSpace_BattleForTheSpaceProjectile_h_12_PROLOG
#define BattleForTheSpace_Source_BattleForTheSpace_BattleForTheSpaceProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleForTheSpace_Source_BattleForTheSpace_BattleForTheSpaceProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	BattleForTheSpace_Source_BattleForTheSpace_BattleForTheSpaceProjectile_h_15_SPARSE_DATA \
	BattleForTheSpace_Source_BattleForTheSpace_BattleForTheSpaceProjectile_h_15_RPC_WRAPPERS \
	BattleForTheSpace_Source_BattleForTheSpace_BattleForTheSpaceProjectile_h_15_INCLASS \
	BattleForTheSpace_Source_BattleForTheSpace_BattleForTheSpaceProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleForTheSpace_Source_BattleForTheSpace_BattleForTheSpaceProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleForTheSpace_Source_BattleForTheSpace_BattleForTheSpaceProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	BattleForTheSpace_Source_BattleForTheSpace_BattleForTheSpaceProjectile_h_15_SPARSE_DATA \
	BattleForTheSpace_Source_BattleForTheSpace_BattleForTheSpaceProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleForTheSpace_Source_BattleForTheSpace_BattleForTheSpaceProjectile_h_15_INCLASS_NO_PURE_DECLS \
	BattleForTheSpace_Source_BattleForTheSpace_BattleForTheSpaceProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTLEFORTHESPACE_API UClass* StaticClass<class ABattleForTheSpaceProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleForTheSpace_Source_BattleForTheSpace_BattleForTheSpaceProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
