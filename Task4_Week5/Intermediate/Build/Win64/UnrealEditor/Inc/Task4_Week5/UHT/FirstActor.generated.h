// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FirstActor.h"

#ifdef TASK4_WEEK5_FirstActor_generated_h
#error "FirstActor.generated.h already included, missing '#pragma once' in FirstActor.h"
#endif
#define TASK4_WEEK5_FirstActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AFirstActor **************************************************************
#define FID_Users_2506784_Documents_Unreal_Projects_Task4_5_Task4_Week5_Source_Task4_Week5_FirstActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


TASK4_WEEK5_API UClass* Z_Construct_UClass_AFirstActor_NoRegister();

#define FID_Users_2506784_Documents_Unreal_Projects_Task4_5_Task4_Week5_Source_Task4_Week5_FirstActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstActor(); \
	friend struct Z_Construct_UClass_AFirstActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TASK4_WEEK5_API UClass* Z_Construct_UClass_AFirstActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AFirstActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Task4_Week5"), Z_Construct_UClass_AFirstActor_NoRegister) \
	DECLARE_SERIALIZER(AFirstActor)


#define FID_Users_2506784_Documents_Unreal_Projects_Task4_5_Task4_Week5_Source_Task4_Week5_FirstActor_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFirstActor(AFirstActor&&) = delete; \
	AFirstActor(const AFirstActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstActor) \
	NO_API virtual ~AFirstActor();


#define FID_Users_2506784_Documents_Unreal_Projects_Task4_5_Task4_Week5_Source_Task4_Week5_FirstActor_h_10_PROLOG
#define FID_Users_2506784_Documents_Unreal_Projects_Task4_5_Task4_Week5_Source_Task4_Week5_FirstActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_2506784_Documents_Unreal_Projects_Task4_5_Task4_Week5_Source_Task4_Week5_FirstActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_2506784_Documents_Unreal_Projects_Task4_5_Task4_Week5_Source_Task4_Week5_FirstActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_2506784_Documents_Unreal_Projects_Task4_5_Task4_Week5_Source_Task4_Week5_FirstActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFirstActor;

// ********** End Class AFirstActor ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_2506784_Documents_Unreal_Projects_Task4_5_Task4_Week5_Source_Task4_Week5_FirstActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
