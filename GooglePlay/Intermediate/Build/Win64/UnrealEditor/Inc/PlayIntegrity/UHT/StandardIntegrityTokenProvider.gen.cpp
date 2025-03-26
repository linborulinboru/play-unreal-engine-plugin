// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayIntegrity/Public/StandardIntegrityTokenProvider.h"
#include "PlayIntegrity/Public/StandardIntegrityTokenRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStandardIntegrityTokenProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PLAYINTEGRITY_API UClass* Z_Construct_UClass_UStandardIntegrityToken_NoRegister();
PLAYINTEGRITY_API UClass* Z_Construct_UClass_UStandardIntegrityTokenProvider();
PLAYINTEGRITY_API UClass* Z_Construct_UClass_UStandardIntegrityTokenProvider_NoRegister();
PLAYINTEGRITY_API UEnum* Z_Construct_UEnum_PlayIntegrity_EStandardIntegrityErrorCode();
PLAYINTEGRITY_API UFunction* Z_Construct_UDelegateFunction_PlayIntegrity_StandardRequestOperationCompletedDelegate__DelegateSignature();
PLAYINTEGRITY_API UScriptStruct* Z_Construct_UScriptStruct_FStandardIntegrityTokenRequest();
UPackage* Z_Construct_UPackage__Script_PlayIntegrity();
// End Cross Module References

// Begin Delegate FStandardRequestOperationCompletedDelegate
struct Z_Construct_UDelegateFunction_PlayIntegrity_StandardRequestOperationCompletedDelegate__DelegateSignature_Statics
{
	struct _Script_PlayIntegrity_eventStandardRequestOperationCompletedDelegate_Parms
	{
		EStandardIntegrityErrorCode Error;
		UStandardIntegrityToken* Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @private\n *\n * The delegate used to handle the completion of a standard integrity token\n * operation.\n *\n * @param Error The error code of the operation.\n * @param Response The token object.\n */" },
#endif
		{ "ModuleRelativePath", "Public/StandardIntegrityTokenProvider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@private\n\nThe delegate used to handle the completion of a standard integrity token\noperation.\n\n@param Error The error code of the operation.\n@param Response The token object." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Error_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Error;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PlayIntegrity_StandardRequestOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PlayIntegrity_StandardRequestOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PlayIntegrity_eventStandardRequestOperationCompletedDelegate_Parms, Error), Z_Construct_UEnum_PlayIntegrity_EStandardIntegrityErrorCode, METADATA_PARAMS(0, nullptr) }; // 1327415323
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PlayIntegrity_StandardRequestOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PlayIntegrity_eventStandardRequestOperationCompletedDelegate_Parms, Response), Z_Construct_UClass_UStandardIntegrityToken_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PlayIntegrity_StandardRequestOperationCompletedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayIntegrity_StandardRequestOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayIntegrity_StandardRequestOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayIntegrity_StandardRequestOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayIntegrity_StandardRequestOperationCompletedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PlayIntegrity_StandardRequestOperationCompletedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PlayIntegrity, nullptr, "StandardRequestOperationCompletedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_PlayIntegrity_StandardRequestOperationCompletedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayIntegrity_StandardRequestOperationCompletedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PlayIntegrity_StandardRequestOperationCompletedDelegate__DelegateSignature_Statics::_Script_PlayIntegrity_eventStandardRequestOperationCompletedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayIntegrity_StandardRequestOperationCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PlayIntegrity_StandardRequestOperationCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_PlayIntegrity_StandardRequestOperationCompletedDelegate__DelegateSignature_Statics::_Script_PlayIntegrity_eventStandardRequestOperationCompletedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PlayIntegrity_StandardRequestOperationCompletedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PlayIntegrity_StandardRequestOperationCompletedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FStandardRequestOperationCompletedDelegate_DelegateWrapper(const FScriptDelegate& StandardRequestOperationCompletedDelegate, EStandardIntegrityErrorCode Error, UStandardIntegrityToken* Response)
{
	struct _Script_PlayIntegrity_eventStandardRequestOperationCompletedDelegate_Parms
	{
		EStandardIntegrityErrorCode Error;
		UStandardIntegrityToken* Response;
	};
	_Script_PlayIntegrity_eventStandardRequestOperationCompletedDelegate_Parms Parms;
	Parms.Error=Error;
	Parms.Response=Response;
	StandardRequestOperationCompletedDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FStandardRequestOperationCompletedDelegate

// Begin Class UStandardIntegrityTokenProvider Function Request
struct Z_Construct_UFunction_UStandardIntegrityTokenProvider_Request_Statics
{
	struct StandardIntegrityTokenProvider_eventRequest_Parms
	{
		FStandardIntegrityTokenRequest Request;
		FScriptDelegate InOnStandardRequestOperationCompleted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Google Play Integrity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns a token for integrity-related enquiries. This must be called only\n\x09 * after UStandardIntegrityManager::PrepareIntegrityToken completes\n\x09 *\n\x09 * Refer to\n\x09 * https://developer.android.com/google/play/integrity/standard#request-integrity\n\x09 * for more details.\n\x09 *\n\x09 * @param Request The FStandardIntegrityTokenRequest object.\n\x09 * @param InOnStandardRequestOperationCompleted The delegate to call when\n\x09 * the operation is completed.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/StandardIntegrityTokenProvider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a token for integrity-related enquiries. This must be called only\nafter UStandardIntegrityManager::PrepareIntegrityToken completes\n\nRefer to\nhttps://developer.android.com/google/play/integrity/standard#request-integrity\nfor more details.\n\n@param Request The FStandardIntegrityTokenRequest object.\n@param InOnStandardRequestOperationCompleted The delegate to call when\nthe operation is completed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Request;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InOnStandardRequestOperationCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStandardIntegrityTokenProvider_Request_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StandardIntegrityTokenProvider_eventRequest_Parms, Request), Z_Construct_UScriptStruct_FStandardIntegrityTokenRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) }; // 26825293
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UStandardIntegrityTokenProvider_Request_Statics::NewProp_InOnStandardRequestOperationCompleted = { "InOnStandardRequestOperationCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StandardIntegrityTokenProvider_eventRequest_Parms, InOnStandardRequestOperationCompleted), Z_Construct_UDelegateFunction_PlayIntegrity_StandardRequestOperationCompletedDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 241485799
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStandardIntegrityTokenProvider_Request_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStandardIntegrityTokenProvider_Request_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStandardIntegrityTokenProvider_Request_Statics::NewProp_InOnStandardRequestOperationCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStandardIntegrityTokenProvider_Request_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStandardIntegrityTokenProvider_Request_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStandardIntegrityTokenProvider, nullptr, "Request", nullptr, nullptr, Z_Construct_UFunction_UStandardIntegrityTokenProvider_Request_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStandardIntegrityTokenProvider_Request_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStandardIntegrityTokenProvider_Request_Statics::StandardIntegrityTokenProvider_eventRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStandardIntegrityTokenProvider_Request_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStandardIntegrityTokenProvider_Request_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStandardIntegrityTokenProvider_Request_Statics::StandardIntegrityTokenProvider_eventRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStandardIntegrityTokenProvider_Request()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStandardIntegrityTokenProvider_Request_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStandardIntegrityTokenProvider::execRequest)
{
	P_GET_STRUCT_REF(FStandardIntegrityTokenRequest,Z_Param_Out_Request);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_InOnStandardRequestOperationCompleted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Request(Z_Param_Out_Request,FStandardRequestOperationCompletedDelegate(Z_Param_InOnStandardRequestOperationCompleted));
	P_NATIVE_END;
}
// End Class UStandardIntegrityTokenProvider Function Request

// Begin Class UStandardIntegrityTokenProvider
void UStandardIntegrityTokenProvider::StaticRegisterNativesUStandardIntegrityTokenProvider()
{
	UClass* Class = UStandardIntegrityTokenProvider::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Request", &UStandardIntegrityTokenProvider::execRequest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStandardIntegrityTokenProvider);
UClass* Z_Construct_UClass_UStandardIntegrityTokenProvider_NoRegister()
{
	return UStandardIntegrityTokenProvider::StaticClass();
}
struct Z_Construct_UClass_UStandardIntegrityTokenProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The Standard Integrity Token Provider is used to request an integrity token.\n */" },
#endif
		{ "IncludePath", "StandardIntegrityTokenProvider.h" },
		{ "ModuleRelativePath", "Public/StandardIntegrityTokenProvider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Standard Integrity Token Provider is used to request an integrity token." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStandardIntegrityTokenProvider_Request, "Request" }, // 246838395
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStandardIntegrityTokenProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStandardIntegrityTokenProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayIntegrity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStandardIntegrityTokenProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStandardIntegrityTokenProvider_Statics::ClassParams = {
	&UStandardIntegrityTokenProvider::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStandardIntegrityTokenProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UStandardIntegrityTokenProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStandardIntegrityTokenProvider()
{
	if (!Z_Registration_Info_UClass_UStandardIntegrityTokenProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStandardIntegrityTokenProvider.OuterSingleton, Z_Construct_UClass_UStandardIntegrityTokenProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStandardIntegrityTokenProvider.OuterSingleton;
}
template<> PLAYINTEGRITY_API UClass* StaticClass<UStandardIntegrityTokenProvider>()
{
	return UStandardIntegrityTokenProvider::StaticClass();
}
UStandardIntegrityTokenProvider::UStandardIntegrityTokenProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStandardIntegrityTokenProvider);
UStandardIntegrityTokenProvider::~UStandardIntegrityTokenProvider() {}
// End Class UStandardIntegrityTokenProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityTokenProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStandardIntegrityTokenProvider, UStandardIntegrityTokenProvider::StaticClass, TEXT("UStandardIntegrityTokenProvider"), &Z_Registration_Info_UClass_UStandardIntegrityTokenProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStandardIntegrityTokenProvider), 3962069357U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityTokenProvider_h_3464365438(TEXT("/Script/PlayIntegrity"),
	Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityTokenProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_StandardIntegrityTokenProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
