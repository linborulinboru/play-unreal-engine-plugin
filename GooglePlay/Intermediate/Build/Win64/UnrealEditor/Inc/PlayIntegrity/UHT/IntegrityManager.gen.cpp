// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayIntegrity/Public/IntegrityManager.h"
#include "PlayIntegrity/Public/IntegrityTokenRequest.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntegrityManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
PLAYINTEGRITY_API UClass* Z_Construct_UClass_UIntegrityManager();
PLAYINTEGRITY_API UClass* Z_Construct_UClass_UIntegrityManager_NoRegister();
PLAYINTEGRITY_API UClass* Z_Construct_UClass_UIntegrityTokenResponse_NoRegister();
PLAYINTEGRITY_API UEnum* Z_Construct_UEnum_PlayIntegrity_EIntegrityErrorCode();
PLAYINTEGRITY_API UFunction* Z_Construct_UDelegateFunction_PlayIntegrity_ClassicRequestOperationCompletedDelegate__DelegateSignature();
PLAYINTEGRITY_API UScriptStruct* Z_Construct_UScriptStruct_FIntegrityTokenRequest();
UPackage* Z_Construct_UPackage__Script_PlayIntegrity();
// End Cross Module References

// Begin Delegate FClassicRequestOperationCompletedDelegate
struct Z_Construct_UDelegateFunction_PlayIntegrity_ClassicRequestOperationCompletedDelegate__DelegateSignature_Statics
{
	struct _Script_PlayIntegrity_eventClassicRequestOperationCompletedDelegate_Parms
	{
		EIntegrityErrorCode Error;
		UIntegrityTokenResponse* Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @private\n *\n * The delegate used to handle the completion of a request integrity token\n * operation.\n *\n * @param Error The error code of the operation.\n * @param Response The UIntegrityTokenResponse object.\n */" },
#endif
		{ "ModuleRelativePath", "Public/IntegrityManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@private\n\nThe delegate used to handle the completion of a request integrity token\noperation.\n\n@param Error The error code of the operation.\n@param Response The UIntegrityTokenResponse object." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Error_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Error;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PlayIntegrity_ClassicRequestOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PlayIntegrity_ClassicRequestOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PlayIntegrity_eventClassicRequestOperationCompletedDelegate_Parms, Error), Z_Construct_UEnum_PlayIntegrity_EIntegrityErrorCode, METADATA_PARAMS(0, nullptr) }; // 3262675816
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PlayIntegrity_ClassicRequestOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PlayIntegrity_eventClassicRequestOperationCompletedDelegate_Parms, Response), Z_Construct_UClass_UIntegrityTokenResponse_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PlayIntegrity_ClassicRequestOperationCompletedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayIntegrity_ClassicRequestOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayIntegrity_ClassicRequestOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayIntegrity_ClassicRequestOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayIntegrity_ClassicRequestOperationCompletedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PlayIntegrity_ClassicRequestOperationCompletedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PlayIntegrity, nullptr, "ClassicRequestOperationCompletedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_PlayIntegrity_ClassicRequestOperationCompletedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayIntegrity_ClassicRequestOperationCompletedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PlayIntegrity_ClassicRequestOperationCompletedDelegate__DelegateSignature_Statics::_Script_PlayIntegrity_eventClassicRequestOperationCompletedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayIntegrity_ClassicRequestOperationCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PlayIntegrity_ClassicRequestOperationCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_PlayIntegrity_ClassicRequestOperationCompletedDelegate__DelegateSignature_Statics::_Script_PlayIntegrity_eventClassicRequestOperationCompletedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PlayIntegrity_ClassicRequestOperationCompletedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PlayIntegrity_ClassicRequestOperationCompletedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FClassicRequestOperationCompletedDelegate_DelegateWrapper(const FScriptDelegate& ClassicRequestOperationCompletedDelegate, EIntegrityErrorCode Error, UIntegrityTokenResponse* Response)
{
	struct _Script_PlayIntegrity_eventClassicRequestOperationCompletedDelegate_Parms
	{
		EIntegrityErrorCode Error;
		UIntegrityTokenResponse* Response;
	};
	_Script_PlayIntegrity_eventClassicRequestOperationCompletedDelegate_Parms Parms;
	Parms.Error=Error;
	Parms.Response=Response;
	ClassicRequestOperationCompletedDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FClassicRequestOperationCompletedDelegate

// Begin Class UIntegrityManager Function RequestIntegrityToken
struct Z_Construct_UFunction_UIntegrityManager_RequestIntegrityToken_Statics
{
	struct IntegrityManager_eventRequestIntegrityToken_Parms
	{
		FIntegrityTokenRequest Request;
		FScriptDelegate InOnClassicRequestOperationCompleted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Google Play Integrity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Requests an integrity token. If called while a request is pending, the\n\x09 * pending request will be cancelled.\n\x09 *\n\x09 * Refer to\n\x09 * https://developer.android.com/google/play/integrity/classic#request for\n\x09 * more details.\n\x09 *\n\x09 * @param Request The FIntegrityTokenRequest object.\n\x09 * @param InOnClassicRequestOperationCompleted The delegate to handle the\n\x09 * completion of the request.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/IntegrityManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests an integrity token. If called while a request is pending, the\npending request will be cancelled.\n\nRefer to\nhttps://developer.android.com/google/play/integrity/classic#request for\nmore details.\n\n@param Request The FIntegrityTokenRequest object.\n@param InOnClassicRequestOperationCompleted The delegate to handle the\ncompletion of the request." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InOnClassicRequestOperationCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIntegrityManager_RequestIntegrityToken_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IntegrityManager_eventRequestIntegrityToken_Parms, Request), Z_Construct_UScriptStruct_FIntegrityTokenRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 997176313
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UIntegrityManager_RequestIntegrityToken_Statics::NewProp_InOnClassicRequestOperationCompleted = { "InOnClassicRequestOperationCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IntegrityManager_eventRequestIntegrityToken_Parms, InOnClassicRequestOperationCompleted), Z_Construct_UDelegateFunction_PlayIntegrity_ClassicRequestOperationCompletedDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2484519549
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIntegrityManager_RequestIntegrityToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntegrityManager_RequestIntegrityToken_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntegrityManager_RequestIntegrityToken_Statics::NewProp_InOnClassicRequestOperationCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntegrityManager_RequestIntegrityToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIntegrityManager_RequestIntegrityToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIntegrityManager, nullptr, "RequestIntegrityToken", nullptr, nullptr, Z_Construct_UFunction_UIntegrityManager_RequestIntegrityToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIntegrityManager_RequestIntegrityToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIntegrityManager_RequestIntegrityToken_Statics::IntegrityManager_eventRequestIntegrityToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntegrityManager_RequestIntegrityToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIntegrityManager_RequestIntegrityToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIntegrityManager_RequestIntegrityToken_Statics::IntegrityManager_eventRequestIntegrityToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIntegrityManager_RequestIntegrityToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIntegrityManager_RequestIntegrityToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIntegrityManager::execRequestIntegrityToken)
{
	P_GET_STRUCT_REF(FIntegrityTokenRequest,Z_Param_Out_Request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_InOnClassicRequestOperationCompleted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestIntegrityToken(Z_Param_Out_Request,FClassicRequestOperationCompletedDelegate(Z_Param_InOnClassicRequestOperationCompleted));
	P_NATIVE_END;
}
// End Class UIntegrityManager Function RequestIntegrityToken

// Begin Class UIntegrityManager
void UIntegrityManager::StaticRegisterNativesUIntegrityManager()
{
	UClass* Class = UIntegrityManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestIntegrityToken", &UIntegrityManager::execRequestIntegrityToken },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIntegrityManager);
UClass* Z_Construct_UClass_UIntegrityManager_NoRegister()
{
	return UIntegrityManager::StaticClass();
}
struct Z_Construct_UClass_UIntegrityManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The UIntegrityManager class is used to request an integrity token.\n */" },
#endif
		{ "IncludePath", "IntegrityManager.h" },
		{ "ModuleRelativePath", "Public/IntegrityManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The UIntegrityManager class is used to request an integrity token." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIntegrityManager_RequestIntegrityToken, "RequestIntegrityToken" }, // 3025956965
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIntegrityManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIntegrityManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayIntegrity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIntegrityManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIntegrityManager_Statics::ClassParams = {
	&UIntegrityManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIntegrityManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UIntegrityManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIntegrityManager()
{
	if (!Z_Registration_Info_UClass_UIntegrityManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIntegrityManager.OuterSingleton, Z_Construct_UClass_UIntegrityManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIntegrityManager.OuterSingleton;
}
template<> PLAYINTEGRITY_API UClass* StaticClass<UIntegrityManager>()
{
	return UIntegrityManager::StaticClass();
}
UIntegrityManager::UIntegrityManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIntegrityManager);
UIntegrityManager::~UIntegrityManager() {}
// End Class UIntegrityManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIntegrityManager, UIntegrityManager::StaticClass, TEXT("UIntegrityManager"), &Z_Registration_Info_UClass_UIntegrityManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIntegrityManager), 437128976U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityManager_h_2246630302(TEXT("/Script/PlayIntegrity"),
	Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
