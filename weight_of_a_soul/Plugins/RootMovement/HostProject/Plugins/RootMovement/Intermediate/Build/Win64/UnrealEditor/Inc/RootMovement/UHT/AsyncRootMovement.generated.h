// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncRootMovement.h"

#ifdef ROOTMOVEMENT_AsyncRootMovement_generated_h
#error "AsyncRootMovement.generated.h already included, missing '#pragma once' in AsyncRootMovement.h"
#endif
#define ROOTMOVEMENT_AsyncRootMovement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAsyncRootMovement;
class UCharacterMovementComponent;
class UCurveFloat;
class UObject;
enum class ERootMotionFinishVelocityMode : uint8;

// ********** Begin Delegate FMovementEvent ********************************************************
#define FID_Users_malid_Documents_Unreal_Projects_weight_of_a_soul_weight_of_a_soul_weight_of_a_soul_Plugins_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h_9_DELEGATE \
ROOTMOVEMENT_API void FMovementEvent_DelegateWrapper(const FMulticastScriptDelegate& MovementEvent);


// ********** End Delegate FMovementEvent **********************************************************

// ********** Begin Class UAsyncRootMovement *******************************************************
#define FID_Users_malid_Documents_Unreal_Projects_weight_of_a_soul_weight_of_a_soul_weight_of_a_soul_Plugins_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAsyncRootMovement);


ROOTMOVEMENT_API UClass* Z_Construct_UClass_UAsyncRootMovement_NoRegister();

#define FID_Users_malid_Documents_Unreal_Projects_weight_of_a_soul_weight_of_a_soul_weight_of_a_soul_Plugins_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncRootMovement(); \
	friend struct Z_Construct_UClass_UAsyncRootMovement_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ROOTMOVEMENT_API UClass* Z_Construct_UClass_UAsyncRootMovement_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncRootMovement, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RootMovement"), Z_Construct_UClass_UAsyncRootMovement_NoRegister) \
	DECLARE_SERIALIZER(UAsyncRootMovement)


#define FID_Users_malid_Documents_Unreal_Projects_weight_of_a_soul_weight_of_a_soul_weight_of_a_soul_Plugins_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncRootMovement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncRootMovement(UAsyncRootMovement&&) = delete; \
	UAsyncRootMovement(const UAsyncRootMovement&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncRootMovement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncRootMovement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncRootMovement) \
	NO_API virtual ~UAsyncRootMovement();


#define FID_Users_malid_Documents_Unreal_Projects_weight_of_a_soul_weight_of_a_soul_weight_of_a_soul_Plugins_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h_14_PROLOG
#define FID_Users_malid_Documents_Unreal_Projects_weight_of_a_soul_weight_of_a_soul_weight_of_a_soul_Plugins_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_malid_Documents_Unreal_Projects_weight_of_a_soul_weight_of_a_soul_weight_of_a_soul_Plugins_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_malid_Documents_Unreal_Projects_weight_of_a_soul_weight_of_a_soul_weight_of_a_soul_Plugins_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_malid_Documents_Unreal_Projects_weight_of_a_soul_weight_of_a_soul_weight_of_a_soul_Plugins_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncRootMovement;

// ********** End Class UAsyncRootMovement *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_malid_Documents_Unreal_Projects_weight_of_a_soul_weight_of_a_soul_weight_of_a_soul_Plugins_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
