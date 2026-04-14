// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Task4_Week5/MyInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
TASK4_WEEK5_API UClass* Z_Construct_UClass_UMyInterface();
TASK4_WEEK5_API UClass* Z_Construct_UClass_UMyInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Task4_Week5();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UMyInterface *********************************************************
void UMyInterface::StaticRegisterNativesUMyInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMyInterface;
UClass* UMyInterface::GetPrivateStaticClass()
{
	using TClass = UMyInterface;
	if (!Z_Registration_Info_UClass_UMyInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyInterface"),
			Z_Registration_Info_UClass_UMyInterface.InnerSingleton,
			StaticRegisterNativesUMyInterface,
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
	return Z_Registration_Info_UClass_UMyInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UMyInterface_NoRegister()
{
	return UMyInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMyInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMyInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Task4_Week5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyInterface_Statics::ClassParams = {
	&UMyInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyInterface()
{
	if (!Z_Registration_Info_UClass_UMyInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyInterface.OuterSingleton, Z_Construct_UClass_UMyInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyInterface.OuterSingleton;
}
UMyInterface::UMyInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyInterface);
// ********** End Interface UMyInterface ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_2506784_Documents_Unreal_Projects_Task4_5_Task4_Week5_Source_Task4_Week5_MyInterface_h__Script_Task4_Week5_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyInterface, UMyInterface::StaticClass, TEXT("UMyInterface"), &Z_Registration_Info_UClass_UMyInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyInterface), 4199395586U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2506784_Documents_Unreal_Projects_Task4_5_Task4_Week5_Source_Task4_Week5_MyInterface_h__Script_Task4_Week5_3084718563(TEXT("/Script/Task4_Week5"),
	Z_CompiledInDeferFile_FID_Users_2506784_Documents_Unreal_Projects_Task4_5_Task4_Week5_Source_Task4_Week5_MyInterface_h__Script_Task4_Week5_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2506784_Documents_Unreal_Projects_Task4_5_Task4_Week5_Source_Task4_Week5_MyInterface_h__Script_Task4_Week5_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
