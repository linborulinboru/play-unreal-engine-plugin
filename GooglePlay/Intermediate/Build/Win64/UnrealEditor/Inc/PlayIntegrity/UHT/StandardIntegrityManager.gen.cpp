// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayIntegrity/Public/StandardIntegrityManager.h"
#include "PlayIntegrity/Public/PrepareIntegrityTokenRequest.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStandardIntegrityManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
PLAYINTEGRITY_API UClass* Z_Construct_UClass_UStandardIntegrityManager();
PLAYINTEGRITY_API UClass* Z_Construct_UClass_UStandardIntegrityManager_NoRegister();
PLAYINTEGRITY_API UClass* Z_Construct_UClass_UStandardIntegrityTokenProvider_NoRegister();
PLAYINTEGRITY_API UEnum* Z_Construct_UEnum_PlayIntegrity_EStandardIntegrityErrorCode();
PLAYINTEGRITY_API UFunction* Z_Construct_UDelegateFunction_PlayIntegrity_PrepareIntegrityOperationCompletedDelegate__DelegateSignature();
PLAYINTEGRITY_API UScriptStruct* Z_Construct_UScriptStruct_FPrepareIntegrityTokenRequest();
UPackage* Z_Construct_UPackage__Script_PlayIntegrity();
// End Cross Module References

// Begin Delegate FPrepareIntegrityOperationCompletedDelegate
struct Z_Construct_UDelegateFunction_PlayIntegrity_PrepareIntegrityOperationCompletedDelegate__DelegateSignature_Statics
{
	struct _Script_PlayIntegrity_eventPrepareIntegrityOperationCompletedDelegate_Parms
	{
		EStandardIntegrityErrorCode Error;
		UStandardIntegrityTokenProvider* Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @private\n *\n * The delegate used to handle the completion of a prepare integrity token\n * operation.\n *\n * @param Error The error code of the operation.\n * @param Response The UStandardIntegrityTokenProvider object.\n */" },
#endif
		{ "ModuleRelativePath", "Public/StandardIntegrityManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@private\n\nThe delegate used to handle the completion of a prepare integrity token\noperation.\n\n@param Error The error code of the operation.\n@param Response The UStandardIntegrityTokenProvider object." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Error_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Error;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PlayIntegrity_PrepareIntegrityOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PlayIntegrity_PrepareIntegrityOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PlayIntegrity_eventPrepareIntegrityOperationCompletedDelegate_Parms, Error), Z_Construct_UEnum_PlayIntegrity_EStandardIntegrityErrorCode, METADATA_PARAMS(0, nullptr) }; // 1327415323
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PlayIntegrity_PrepareIntegrityOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PlayIntegrity_eventPrepareIntegrityOperationCompletedDelegate_Parms, Response), Z_Construct_UClass_UStandardIntegrityTokenProvider_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PlayIntegrity_PrepareIntegrityOperationCompletedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayIntegrity_PrepareIntegrityOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayIntegrity_PrepareIntegrityOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayIntegrity_PrepareIntegrityOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayIntegrity_PrepareIntegrityOperationCompletedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PlayIntegrity_PrepareIntegrityOperationCompletedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PlayIntegrity, nullptr, "PrepareIntegrityOperationCompletedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_PlayIntegrity_PrepareIntegrityOperationCompletedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayIntegrity_PrepareIntegrityOperationCompletedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PlayIntegrity_PrepareIntegrityOperationCompletedDelegate__DelegateSignature_Statics::_Script_PlayIntegrity_eventPrepareIntegrityOperationCompletedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayIntegrity_PrepareIntegrityOperationCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PlayIntegrity_PrepareIntegrityOperationCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_PlayIntegrity_PrepareIntegrityOperationCompletedDelegate__DelegateSignature_Statics::_Script_PlayIntegrity_eventPrepareIntegrityOperationCompletedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PlayIntegrity_PrepareIntegrityOperationCompletedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PlayIntegrity_PrepareIntegrityOperationCompletedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPrepareIntegrityOperationCompletedDelegate_DelegateWrapper(const FScriptDelegate& PrepareIntegrityOperationCompletedDelegate, EStandardIntegrityErrorCode Error, UStandardIntegrityTokenProvider* Response)
{
	struct _Script_PlayIntegrity_eventPrepareIntegrityOperationCompletedDelegate_Parms
	{
		EStandardIntegrityErrorCode Error;
		UStandardIntegrityTokenProvider* Response;
	};
	_Script_PlayIntegrity_eventPrepareIntegrityOperationCompletedDelegate_Parms Parms;
	Parms.Error=Error;
	Parms.Response=Response;
	PrepareIntegrityOperationCompletedDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FPrepareIntegrityOperationCompletedDelegate

// Begin Class UStandardIntegrityManager Function PrepareIntegrityToken
struct Z_Construct_UFunction_UStandardIntegrityManager_PrepareIntegrityToken_Statics
{
	struct StandardIntegrityManager_eventPrepareIntegrityToken_Parms
	{
		FPrepareIntegrityTokenRequest Request;
		FScriptDelegate InOnPrepareIntegrityOperationCompleted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Google Play Integrity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Prepares the integrity token and makes it available for requesting. You\n\x09 * can call this method from time to time in order to refresh the resulting\n\x09 * StandardIntegrityTokenProvider. Note that this API makes a call to Google\n\x09 * servers and hence requires a network connection.\n\x09 *\n\x09 * Refer to\n\x09 * https://developer.android.com/google/play/integrity/standard#prepare-integrity\n\x09 * for more details.\n\x09 *\n\x09 * @param Request The FPrepareIntegrityTokenRequest object.\n\x09 * @param InOnPrepareIntegrityOperationCompleted The delegate to call when\n\x09 * the operation is completed.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/StandardIntegrityManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prepares the integrity token and makes it available for requesting. You\ncan call this method from time to time in order to refresh the resulting\nStandardIntegrityTokenProvider. Note that this API makes a call to Google\nservers and hence requires a network connection.\n\nRefer to\nhttps://developer.android.com/google/play/integrity/standard#prepare-integrity\nfor more details.\n\n@param Request The FPrepareIntegrityTokenRequest object.\n@param InOnPrepareIntegrityOperationCompleted The delegate to call when\nthe operation is completed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InOnPrepareIntegrityOperationCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStandardIntegrityManager_PrepareIntegrityToken_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StandardIntegrityManager_eventPrepareIntegrityToken_Parms, Request), Z_Construct_UScriptStruct_FPrepareIntegrityTokenRequest, METADATA_PARAMS(0, nullptr) }; // 1064307080
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UStandardIntegrityManager_PrepareIntegrityToken_Statics::NewProp_InOnPrepareIntegrityOperationCompleted = { "InOnPrepareIntegrityOperationCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StandardIntegrityManager_eventPrepareIntegrityToken_Parms, InOnPrepareIntegrityOperationCompleted), Z_Construct_UDelegateFunction_PlayIntegrity_PrepareIntegrityOperationCompletedDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1752471767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStandardIntegrityManager_PrepareIntegrityToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStandardIntegrityManager_PrepareIntegrityToken_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStandardIntegrityManager_PrepareIntegrityToken_Statics::NewProp_InOnPrepareIntegrityOperationCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStandardIntegrityManager_PrepareIntegrityToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStandardIntegrityManager_PrepareIntegrityToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStandardIntegrityManager, nullptr, "PrepareIntegrityToken", nullptr, nullptr, Z_Construct_UFunction_UStandardIntegrityManager_PrepareIntegrityToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStandardIntegrityManager_PrepareIntegrityToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStandardIntegrityManager_PrepareIntegrityToken_Statics::StandardIntegrityManager_eventPrepareIntegrityToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStandardIntegrityManager_PrepareIntegrityToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStandardIntegrityManager_PrepareIntegrityToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStandardIntegrityManager_PrepareIntegrityToken_Statics::StandardIntegrityManager_eventPrepareIntegrityToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStandardIntegrityManager_PrepareIntegrityToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStandardIntegrityManager_PrepareIntegrityToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStandardIntegrityManager::execPrepareIntegrityToken)
{
	P_GET_STRUCT(FPrepareIntegrityTokenRequest,Z_Param_Request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_InOnPrepareIntegrityOperationCompleted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrepareIntegrityToken(Z_Param_Request,FPrepareIntegrityOperationCompletedDelegate(Z_Param_InOnPrepareIntegrityOperationCompleted));
	P_NATIVE_END;
}
// End Class UStandardIntegrityManager Function PrepareIntegrityToken

// Begin Class UStandardIntegrityManager
void UStandardIntegrityManager::StaticRegisterNativesUStandardIntegrityManager()
{
	UClass* Class = UStandardIntegrityManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PrepareIntegrityToken", &UStandardIntegrityManager::execPrepareIntegrityToken },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStandardIntegrityManager);
UClass* Z_Construct_UClass_UStandardIntegrityManager_NoRegister()
{
	return UStandardIntegrityManager::StaticClass();
}
struct Z_Construct_UClass_UStandardIntegrityManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The Standard Integrity Manager is used to prepare an integrity token.\n */" },
#endif
		{ "IncludePath", "StandardIntegrityManager.h" },
		{ "ModuleRelativePath", "Public/StandardIntegrityManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Standard Integrity Manager is used to prepare an integrity token." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStandardIntegrityManager_PrepareIntegrityToken, "PrepareIntegrityToken" }, // 1293357800
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStandardIntegrityManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStandardIntegrityManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayIntegrity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStandardIntegrityManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStandardIntegrityManager_Statics::ClassParams = {
	&UStandardIntegrityManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStandardIntegrityManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UStandardIntegrityManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStandardIntegrityManager()
{
	if (!Z_Registration_Info_UClass_UStandardIntegrityManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStandardIntegrityManager.OuterSingleton, Z_Construct_UClass_UStandardIntegrityManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStandardIntegrityManager.OuterSingleton;
}
template<> PLAYINTEGRITY_API UClass* StaticClass<UStandardIntegrityManager>()
{
	return UStandardIntegrityManager::StaticClass();
}
UStandardIntegrityManager::UStandardIntegrityManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStandardIntegrityManager);
UStandardIntegrityManager::~UStandardIntegrityManager() {}
// End Class UStandardIntegrityManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStandardIntegrityManager, UStandardIntegrityManager::StaticClass, TEXT("UStandardIntegrityManager"), &Z_Registration_Info_UClass_UStandardIntegrityManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStandardIntegrityManager), 3561398829U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityManager_h_31787102(TEXT("/Script/PlayIntegrity"),
	Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
