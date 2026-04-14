// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Task4_Week5/Interactable_Actor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInteractable_Actor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
TASK4_WEEK5_API UClass* Z_Construct_UClass_AInteractable_Actor();
TASK4_WEEK5_API UClass* Z_Construct_UClass_AInteractable_Actor_NoRegister();
TASK4_WEEK5_API UClass* Z_Construct_UClass_UMyInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Task4_Week5();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AInteractable_Actor ******************************************************
void AInteractable_Actor::StaticRegisterNativesAInteractable_Actor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AInteractable_Actor;
UClass* AInteractable_Actor::GetPrivateStaticClass()
{
	using TClass = AInteractable_Actor;
	if (!Z_Registration_Info_UClass_AInteractable_Actor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Interactable_Actor"),
			Z_Registration_Info_UClass_AInteractable_Actor.InnerSingleton,
			StaticRegisterNativesAInteractable_Actor,
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
	return Z_Registration_Info_UClass_AInteractable_Actor.InnerSingleton;
}
UClass* Z_Construct_UClass_AInteractable_Actor_NoRegister()
{
	return AInteractable_Actor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AInteractable_Actor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Interactable_Actor.h" },
		{ "ModuleRelativePath", "Interactable_Actor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractable_Actor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AInteractable_Actor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Task4_Week5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Actor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInteractable_Actor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMyInterface_NoRegister, (int32)VTABLE_OFFSET(AInteractable_Actor, IMyInterface), false },  // 4199395586
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractable_Actor_Statics::ClassParams = {
	&AInteractable_Actor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Actor_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractable_Actor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInteractable_Actor()
{
	if (!Z_Registration_Info_UClass_AInteractable_Actor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractable_Actor.OuterSingleton, Z_Construct_UClass_AInteractable_Actor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInteractable_Actor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractable_Actor);
AInteractable_Actor::~AInteractable_Actor() {}
// ********** End Class AInteractable_Actor ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_2506784_Documents_Unreal_Projects_Task4_5_Task4_Week5_Source_Task4_Week5_Interactable_Actor_h__Script_Task4_Week5_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInteractable_Actor, AInteractable_Actor::StaticClass, TEXT("AInteractable_Actor"), &Z_Registration_Info_UClass_AInteractable_Actor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractable_Actor), 3694111515U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2506784_Documents_Unreal_Projects_Task4_5_Task4_Week5_Source_Task4_Week5_Interactable_Actor_h__Script_Task4_Week5_2501949883(TEXT("/Script/Task4_Week5"),
	Z_CompiledInDeferFile_FID_Users_2506784_Documents_Unreal_Projects_Task4_5_Task4_Week5_Source_Task4_Week5_Interactable_Actor_h__Script_Task4_Week5_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2506784_Documents_Unreal_Projects_Task4_5_Task4_Week5_Source_Task4_Week5_Interactable_Actor_h__Script_Task4_Week5_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
