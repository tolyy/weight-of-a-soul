// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "weight_of_a_soul/EnemyCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnemyCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PAPERZD_API UClass* Z_Construct_UClass_APaperZDCharacter();
UPackage* Z_Construct_UPackage__Script_weight_of_a_soul();
WEIGHT_OF_A_SOUL_API UClass* Z_Construct_UClass_AEnemyCharacter();
WEIGHT_OF_A_SOUL_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEnemyCharacter Function OnAggroEnd **************************************
static FName NAME_AEnemyCharacter_OnAggroEnd = FName(TEXT("OnAggroEnd"));
void AEnemyCharacter::OnAggroEnd()
{
	UFunction* Func = FindFunctionChecked(NAME_AEnemyCharacter_OnAggroEnd);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AEnemyCharacter_OnAggroEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_OnAggroEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter, nullptr, "OnAggroEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_OnAggroEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyCharacter_OnAggroEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AEnemyCharacter_OnAggroEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_OnAggroEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AEnemyCharacter Function OnAggroEnd ****************************************

// ********** Begin Class AEnemyCharacter Function OnAggroStart ************************************
static FName NAME_AEnemyCharacter_OnAggroStart = FName(TEXT("OnAggroStart"));
void AEnemyCharacter::OnAggroStart()
{
	UFunction* Func = FindFunctionChecked(NAME_AEnemyCharacter_OnAggroStart);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AEnemyCharacter_OnAggroStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_OnAggroStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter, nullptr, "OnAggroStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_OnAggroStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyCharacter_OnAggroStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AEnemyCharacter_OnAggroStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_OnAggroStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AEnemyCharacter Function OnAggroStart **************************************

// ********** Begin Class AEnemyCharacter Function TryAttack ***************************************
static FName NAME_AEnemyCharacter_TryAttack = FName(TEXT("TryAttack"));
void AEnemyCharacter::TryAttack()
{
	UFunction* Func = FindFunctionChecked(NAME_AEnemyCharacter_TryAttack);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AEnemyCharacter_TryAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Events to hook animations & patrol in BP\n" },
#endif
		{ "ModuleRelativePath", "EnemyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events to hook animations & patrol in BP" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_TryAttack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter, nullptr, "TryAttack", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_TryAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyCharacter_TryAttack_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AEnemyCharacter_TryAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_TryAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class AEnemyCharacter Function TryAttack *****************************************

// ********** Begin Class AEnemyCharacter **********************************************************
void AEnemyCharacter::StaticRegisterNativesAEnemyCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AEnemyCharacter;
UClass* AEnemyCharacter::GetPrivateStaticClass()
{
	using TClass = AEnemyCharacter;
	if (!Z_Registration_Info_UClass_AEnemyCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EnemyCharacter"),
			Z_Registration_Info_UClass_AEnemyCharacter.InnerSingleton,
			StaticRegisterNativesAEnemyCharacter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AEnemyCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister()
{
	return AEnemyCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEnemyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyCharacter.h" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "AI|Tuning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Editable AI variables\n" },
#endif
		{ "ModuleRelativePath", "EnemyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Editable AI variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[] = {
		{ "Category", "AI|Tuning" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AggroRange_MetaData[] = {
		{ "Category", "AI|Tuning" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoseAggroTime_MetaData[] = {
		{ "Category", "AI|Tuning" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
		{ "Category", "AI|Tuning" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontLeadDist_MetaData[] = {
		{ "Category", "AI|Tuning" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAggroed_MetaData[] = {
		{ "Category", "AI|State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// States\n" },
#endif
		{ "ModuleRelativePath", "EnemyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "States" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttacking_MetaData[] = {
		{ "Category", "AI|State" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDead_MetaData[] = {
		{ "Category", "AI|State" },
		{ "ModuleRelativePath", "EnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPlayer_MetaData[] = {
		{ "Category", "AI|Target" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Target\n" },
#endif
		{ "ModuleRelativePath", "EnemyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AggroRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoseAggroTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrontLeadDist;
	static void NewProp_bIsAggroed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAggroed;
	static void NewProp_bIsAttacking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttacking;
	static void NewProp_bDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDead;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyCharacter_OnAggroEnd, "OnAggroEnd" }, // 2864881084
		{ &Z_Construct_UFunction_AEnemyCharacter_OnAggroStart, "OnAggroStart" }, // 1136528381
		{ &Z_Construct_UFunction_AEnemyCharacter_TryAttack, "TryAttack" }, // 2002800467
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter, RunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunSpeed_MetaData), NewProp_RunSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_AggroRange = { "AggroRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter, AggroRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AggroRange_MetaData), NewProp_AggroRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_LoseAggroTime = { "LoseAggroTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter, LoseAggroTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoseAggroTime_MetaData), NewProp_LoseAggroTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRange_MetaData), NewProp_AttackRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_FrontLeadDist = { "FrontLeadDist", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter, FrontLeadDist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontLeadDist_MetaData), NewProp_FrontLeadDist_MetaData) };
void Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_bIsAggroed_SetBit(void* Obj)
{
	((AEnemyCharacter*)Obj)->bIsAggroed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_bIsAggroed = { "bIsAggroed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEnemyCharacter), &Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_bIsAggroed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAggroed_MetaData), NewProp_bIsAggroed_MetaData) };
void Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_bIsAttacking_SetBit(void* Obj)
{
	((AEnemyCharacter*)Obj)->bIsAttacking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_bIsAttacking = { "bIsAttacking", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEnemyCharacter), &Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_bIsAttacking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAttacking_MetaData), NewProp_bIsAttacking_MetaData) };
void Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_bDead_SetBit(void* Obj)
{
	((AEnemyCharacter*)Obj)->bDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_bDead = { "bDead", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEnemyCharacter), &Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_bDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDead_MetaData), NewProp_bDead_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_TargetPlayer = { "TargetPlayer", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter, TargetPlayer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPlayer_MetaData), NewProp_TargetPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_RunSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_AggroRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_LoseAggroTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_AttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_FrontLeadDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_bIsAggroed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_bIsAttacking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_bDead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_TargetPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APaperZDCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_weight_of_a_soul,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyCharacter_Statics::ClassParams = {
	&AEnemyCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyCharacter()
{
	if (!Z_Registration_Info_UClass_AEnemyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyCharacter.OuterSingleton, Z_Construct_UClass_AEnemyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyCharacter);
AEnemyCharacter::~AEnemyCharacter() {}
// ********** End Class AEnemyCharacter ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_malid_Documents_Unreal_Projects_weight_of_a_soul_weight_of_a_soul_weight_of_a_soul_Source_weight_of_a_soul_EnemyCharacter_h__Script_weight_of_a_soul_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyCharacter, AEnemyCharacter::StaticClass, TEXT("AEnemyCharacter"), &Z_Registration_Info_UClass_AEnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyCharacter), 1749234177U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_malid_Documents_Unreal_Projects_weight_of_a_soul_weight_of_a_soul_weight_of_a_soul_Source_weight_of_a_soul_EnemyCharacter_h__Script_weight_of_a_soul_312379927(TEXT("/Script/weight_of_a_soul"),
	Z_CompiledInDeferFile_FID_Users_malid_Documents_Unreal_Projects_weight_of_a_soul_weight_of_a_soul_weight_of_a_soul_Source_weight_of_a_soul_EnemyCharacter_h__Script_weight_of_a_soul_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_malid_Documents_Unreal_Projects_weight_of_a_soul_weight_of_a_soul_weight_of_a_soul_Source_weight_of_a_soul_EnemyCharacter_h__Script_weight_of_a_soul_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
