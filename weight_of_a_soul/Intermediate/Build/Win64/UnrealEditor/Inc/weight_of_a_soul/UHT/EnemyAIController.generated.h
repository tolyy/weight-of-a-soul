// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnemyAIController.h"

#ifdef WEIGHT_OF_A_SOUL_EnemyAIController_generated_h
#error "EnemyAIController.generated.h already included, missing '#pragma once' in EnemyAIController.h"
#endif
#define WEIGHT_OF_A_SOUL_EnemyAIController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
struct FAIStimulus;

// ********** Begin Class AEnemyAIController *******************************************************
#define FID_Dev_weight_of_a_soul_weight_of_a_soul_Source_weight_of_a_soul_EnemyAIController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTargetPerceptionUpdated);


WEIGHT_OF_A_SOUL_API UClass* Z_Construct_UClass_AEnemyAIController_NoRegister();

#define FID_Dev_weight_of_a_soul_weight_of_a_soul_Source_weight_of_a_soul_EnemyAIController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyAIController(); \
	friend struct Z_Construct_UClass_AEnemyAIController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WEIGHT_OF_A_SOUL_API UClass* Z_Construct_UClass_AEnemyAIController_NoRegister(); \
public: \
	DECLARE_CLASS2(AEnemyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/weight_of_a_soul"), Z_Construct_UClass_AEnemyAIController_NoRegister) \
	DECLARE_SERIALIZER(AEnemyAIController)


#define FID_Dev_weight_of_a_soul_weight_of_a_soul_Source_weight_of_a_soul_EnemyAIController_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEnemyAIController(AEnemyAIController&&) = delete; \
	AEnemyAIController(const AEnemyAIController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyAIController) \
	NO_API virtual ~AEnemyAIController();


#define FID_Dev_weight_of_a_soul_weight_of_a_soul_Source_weight_of_a_soul_EnemyAIController_h_16_PROLOG
#define FID_Dev_weight_of_a_soul_weight_of_a_soul_Source_weight_of_a_soul_EnemyAIController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_weight_of_a_soul_weight_of_a_soul_Source_weight_of_a_soul_EnemyAIController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Dev_weight_of_a_soul_weight_of_a_soul_Source_weight_of_a_soul_EnemyAIController_h_19_INCLASS_NO_PURE_DECLS \
	FID_Dev_weight_of_a_soul_weight_of_a_soul_Source_weight_of_a_soul_EnemyAIController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEnemyAIController;

// ********** End Class AEnemyAIController *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Dev_weight_of_a_soul_weight_of_a_soul_Source_weight_of_a_soul_EnemyAIController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
