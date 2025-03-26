// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayInAppReviews/Public/InAppReviewsManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInAppReviewsManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
PLAYINAPPREVIEWS_API UClass* Z_Construct_UClass_UInAppReviewsManager();
PLAYINAPPREVIEWS_API UClass* Z_Construct_UClass_UInAppReviewsManager_NoRegister();
PLAYINAPPREVIEWS_API UEnum* Z_Construct_UEnum_PlayInAppReviews_EInAppReviewErrorCode();
PLAYINAPPREVIEWS_API UFunction* Z_Construct_UDelegateFunction_PlayInAppReviews_ReviewOperationCompletedDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_PlayInAppReviews();
// End Cross Module References

// Begin Delegate FReviewOperationCompletedDelegate
struct Z_Construct_UDelegateFunction_PlayInAppReviews_ReviewOperationCompletedDelegate__DelegateSignature_Statics
{
	struct _Script_PlayInAppReviews_eventReviewOperationCompletedDelegate_Parms
	{
		EInAppReviewErrorCode Error;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @private\n *\n * The delegate used to handle the completion of a request or launch review flow\n * operation.\n *\n * @param Error The error code of the operation.\n */" },
#endif
		{ "ModuleRelativePath", "Public/InAppReviewsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@private\n\nThe delegate used to handle the completion of a request or launch review flow\noperation.\n\n@param Error The error code of the operation." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Error_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PlayInAppReviews_ReviewOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PlayInAppReviews_ReviewOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PlayInAppReviews_eventReviewOperationCompletedDelegate_Parms, Error), Z_Construct_UEnum_PlayInAppReviews_EInAppReviewErrorCode, METADATA_PARAMS(0, nullptr) }; // 2456822082
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PlayInAppReviews_ReviewOperationCompletedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayInAppReviews_ReviewOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayInAppReviews_ReviewOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayInAppReviews_ReviewOperationCompletedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PlayInAppReviews_ReviewOperationCompletedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PlayInAppReviews, nullptr, "ReviewOperationCompletedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_PlayInAppReviews_ReviewOperationCompletedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayInAppReviews_ReviewOperationCompletedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PlayInAppReviews_ReviewOperationCompletedDelegate__DelegateSignature_Statics::_Script_PlayInAppReviews_eventReviewOperationCompletedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayInAppReviews_ReviewOperationCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PlayInAppReviews_ReviewOperationCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_PlayInAppReviews_ReviewOperationCompletedDelegate__DelegateSignature_Statics::_Script_PlayInAppReviews_eventReviewOperationCompletedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PlayInAppReviews_ReviewOperationCompletedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PlayInAppReviews_ReviewOperationCompletedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FReviewOperationCompletedDelegate_DelegateWrapper(const FScriptDelegate& ReviewOperationCompletedDelegate, EInAppReviewErrorCode Error)
{
	struct _Script_PlayInAppReviews_eventReviewOperationCompletedDelegate_Parms
	{
		EInAppReviewErrorCode Error;
	};
	_Script_PlayInAppReviews_eventReviewOperationCompletedDelegate_Parms Parms;
	Parms.Error=Error;
	ReviewOperationCompletedDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FReviewOperationCompletedDelegate

// Begin Class UInAppReviewsManager Function LaunchReviewFlow
struct Z_Construct_UFunction_UInAppReviewsManager_LaunchReviewFlow_Statics
{
	struct InAppReviewsManager_eventLaunchReviewFlow_Parms
	{
		FScriptDelegate InOnLaunchFlowOperationCompleted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Google Play In-App Reviews" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Requests to display the in-app review flow to the user.\n\x09 *\n\x09 * @param InOnLaunchFlowOperationCompleted The delegate to be called when\n\x09 * the launch flow operation completes.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/InAppReviewsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests to display the in-app review flow to the user.\n\n@param InOnLaunchFlowOperationCompleted The delegate to be called when\nthe launch flow operation completes." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InOnLaunchFlowOperationCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInAppReviewsManager_LaunchReviewFlow_Statics::NewProp_InOnLaunchFlowOperationCompleted = { "InOnLaunchFlowOperationCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppReviewsManager_eventLaunchReviewFlow_Parms, InOnLaunchFlowOperationCompleted), Z_Construct_UDelegateFunction_PlayInAppReviews_ReviewOperationCompletedDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2458340971
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppReviewsManager_LaunchReviewFlow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppReviewsManager_LaunchReviewFlow_Statics::NewProp_InOnLaunchFlowOperationCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppReviewsManager_LaunchReviewFlow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppReviewsManager_LaunchReviewFlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppReviewsManager, nullptr, "LaunchReviewFlow", nullptr, nullptr, Z_Construct_UFunction_UInAppReviewsManager_LaunchReviewFlow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppReviewsManager_LaunchReviewFlow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInAppReviewsManager_LaunchReviewFlow_Statics::InAppReviewsManager_eventLaunchReviewFlow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppReviewsManager_LaunchReviewFlow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInAppReviewsManager_LaunchReviewFlow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInAppReviewsManager_LaunchReviewFlow_Statics::InAppReviewsManager_eventLaunchReviewFlow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInAppReviewsManager_LaunchReviewFlow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInAppReviewsManager_LaunchReviewFlow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInAppReviewsManager::execLaunchReviewFlow)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_InOnLaunchFlowOperationCompleted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LaunchReviewFlow(FReviewOperationCompletedDelegate(Z_Param_InOnLaunchFlowOperationCompleted));
	P_NATIVE_END;
}
// End Class UInAppReviewsManager Function LaunchReviewFlow

// Begin Class UInAppReviewsManager Function RequestReviewFlow
struct Z_Construct_UFunction_UInAppReviewsManager_RequestReviewFlow_Statics
{
	struct InAppReviewsManager_eventRequestReviewFlow_Parms
	{
		FScriptDelegate InOnRequestFlowOperationCompleted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Google Play In-App Reviews" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Requests the information needed to launch the in-app review flow.\n\x09 *\n\x09 * @param InOnRequestFlowOperationCompleted The delegate to be called when\n\x09 * the request flow operation completes.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/InAppReviewsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests the information needed to launch the in-app review flow.\n\n@param InOnRequestFlowOperationCompleted The delegate to be called when\nthe request flow operation completes." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InOnRequestFlowOperationCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInAppReviewsManager_RequestReviewFlow_Statics::NewProp_InOnRequestFlowOperationCompleted = { "InOnRequestFlowOperationCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppReviewsManager_eventRequestReviewFlow_Parms, InOnRequestFlowOperationCompleted), Z_Construct_UDelegateFunction_PlayInAppReviews_ReviewOperationCompletedDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2458340971
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppReviewsManager_RequestReviewFlow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppReviewsManager_RequestReviewFlow_Statics::NewProp_InOnRequestFlowOperationCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppReviewsManager_RequestReviewFlow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppReviewsManager_RequestReviewFlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppReviewsManager, nullptr, "RequestReviewFlow", nullptr, nullptr, Z_Construct_UFunction_UInAppReviewsManager_RequestReviewFlow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppReviewsManager_RequestReviewFlow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInAppReviewsManager_RequestReviewFlow_Statics::InAppReviewsManager_eventRequestReviewFlow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppReviewsManager_RequestReviewFlow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInAppReviewsManager_RequestReviewFlow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInAppReviewsManager_RequestReviewFlow_Statics::InAppReviewsManager_eventRequestReviewFlow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInAppReviewsManager_RequestReviewFlow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInAppReviewsManager_RequestReviewFlow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInAppReviewsManager::execRequestReviewFlow)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_InOnRequestFlowOperationCompleted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestReviewFlow(FReviewOperationCompletedDelegate(Z_Param_InOnRequestFlowOperationCompleted));
	P_NATIVE_END;
}
// End Class UInAppReviewsManager Function RequestReviewFlow

// Begin Class UInAppReviewsManager
void UInAppReviewsManager::StaticRegisterNativesUInAppReviewsManager()
{
	UClass* Class = UInAppReviewsManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LaunchReviewFlow", &UInAppReviewsManager::execLaunchReviewFlow },
		{ "RequestReviewFlow", &UInAppReviewsManager::execRequestReviewFlow },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInAppReviewsManager);
UClass* Z_Construct_UClass_UInAppReviewsManager_NoRegister()
{
	return UInAppReviewsManager::StaticClass();
}
struct Z_Construct_UClass_UInAppReviewsManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The UInAppReviewsManager class is used to request and launch the in-app\n * review flow.\n *\n * Refer to https://developer.android.com/guide/playcore/in-app-review for\n * more information.\n */" },
#endif
		{ "IncludePath", "InAppReviewsManager.h" },
		{ "ModuleRelativePath", "Public/InAppReviewsManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The UInAppReviewsManager class is used to request and launch the in-app\nreview flow.\n\nRefer to https://developer.android.com/guide/playcore/in-app-review for\nmore information." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInAppReviewsManager_LaunchReviewFlow, "LaunchReviewFlow" }, // 3415376147
		{ &Z_Construct_UFunction_UInAppReviewsManager_RequestReviewFlow, "RequestReviewFlow" }, // 2240805887
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInAppReviewsManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInAppReviewsManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayInAppReviews,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppReviewsManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInAppReviewsManager_Statics::ClassParams = {
	&UInAppReviewsManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppReviewsManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UInAppReviewsManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInAppReviewsManager()
{
	if (!Z_Registration_Info_UClass_UInAppReviewsManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInAppReviewsManager.OuterSingleton, Z_Construct_UClass_UInAppReviewsManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInAppReviewsManager.OuterSingleton;
}
template<> PLAYINAPPREVIEWS_API UClass* StaticClass<UInAppReviewsManager>()
{
	return UInAppReviewsManager::StaticClass();
}
UInAppReviewsManager::UInAppReviewsManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInAppReviewsManager);
UInAppReviewsManager::~UInAppReviewsManager() {}
// End Class UInAppReviewsManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayInAppReviews_Public_InAppReviewsManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInAppReviewsManager, UInAppReviewsManager::StaticClass, TEXT("UInAppReviewsManager"), &Z_Registration_Info_UClass_UInAppReviewsManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInAppReviewsManager), 3722763224U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayInAppReviews_Public_InAppReviewsManager_h_1348327597(TEXT("/Script/PlayInAppReviews"),
	Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayInAppReviews_Public_InAppReviewsManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayInAppReviews_Public_InAppReviewsManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
