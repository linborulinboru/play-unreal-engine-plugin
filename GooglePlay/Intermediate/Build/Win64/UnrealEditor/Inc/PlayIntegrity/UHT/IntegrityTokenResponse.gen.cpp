// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayIntegrity/Public/IntegrityTokenResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntegrityTokenResponse() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
PLAYINTEGRITY_API UClass* Z_Construct_UClass_UIntegrityTokenResponse();
PLAYINTEGRITY_API UClass* Z_Construct_UClass_UIntegrityTokenResponse_NoRegister();
PLAYINTEGRITY_API UEnum* Z_Construct_UEnum_PlayIntegrity_EIntegrityDialogResponseCode();
PLAYINTEGRITY_API UEnum* Z_Construct_UEnum_PlayIntegrity_EIntegrityErrorCode();
PLAYINTEGRITY_API UFunction* Z_Construct_UDelegateFunction_PlayIntegrity_ShowDialogOperationCompletedDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_PlayIntegrity();
// End Cross Module References

// Begin Delegate FShowDialogOperationCompletedDelegate
struct Z_Construct_UDelegateFunction_PlayIntegrity_ShowDialogOperationCompletedDelegate__DelegateSignature_Statics
{
	struct _Script_PlayIntegrity_eventShowDialogOperationCompletedDelegate_Parms
	{
		EIntegrityErrorCode Error;
		EIntegrityDialogResponseCode Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @private\n *\n * The delegate used to handle the completion of a show dialog operation.\n *\n * @param Error The error code of the operation.\n * @param Response The dialog response code of the operation.\n */" },
#endif
		{ "ModuleRelativePath", "Public/IntegrityTokenResponse.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@private\n\nThe delegate used to handle the completion of a show dialog operation.\n\n@param Error The error code of the operation.\n@param Response The dialog response code of the operation." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Error_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Error;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Response_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PlayIntegrity_ShowDialogOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PlayIntegrity_ShowDialogOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PlayIntegrity_eventShowDialogOperationCompletedDelegate_Parms, Error), Z_Construct_UEnum_PlayIntegrity_EIntegrityErrorCode, METADATA_PARAMS(0, nullptr) }; // 3262675816
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PlayIntegrity_ShowDialogOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Response_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PlayIntegrity_ShowDialogOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PlayIntegrity_eventShowDialogOperationCompletedDelegate_Parms, Response), Z_Construct_UEnum_PlayIntegrity_EIntegrityDialogResponseCode, METADATA_PARAMS(0, nullptr) }; // 3150421823
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PlayIntegrity_ShowDialogOperationCompletedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayIntegrity_ShowDialogOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayIntegrity_ShowDialogOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayIntegrity_ShowDialogOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Response_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayIntegrity_ShowDialogOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayIntegrity_ShowDialogOperationCompletedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PlayIntegrity_ShowDialogOperationCompletedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PlayIntegrity, nullptr, "ShowDialogOperationCompletedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_PlayIntegrity_ShowDialogOperationCompletedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayIntegrity_ShowDialogOperationCompletedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PlayIntegrity_ShowDialogOperationCompletedDelegate__DelegateSignature_Statics::_Script_PlayIntegrity_eventShowDialogOperationCompletedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayIntegrity_ShowDialogOperationCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PlayIntegrity_ShowDialogOperationCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_PlayIntegrity_ShowDialogOperationCompletedDelegate__DelegateSignature_Statics::_Script_PlayIntegrity_eventShowDialogOperationCompletedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PlayIntegrity_ShowDialogOperationCompletedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PlayIntegrity_ShowDialogOperationCompletedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FShowDialogOperationCompletedDelegate_DelegateWrapper(const FScriptDelegate& ShowDialogOperationCompletedDelegate, EIntegrityErrorCode Error, EIntegrityDialogResponseCode Response)
{
	struct _Script_PlayIntegrity_eventShowDialogOperationCompletedDelegate_Parms
	{
		EIntegrityErrorCode Error;
		EIntegrityDialogResponseCode Response;
	};
	_Script_PlayIntegrity_eventShowDialogOperationCompletedDelegate_Parms Parms;
	Parms.Error=Error;
	Parms.Response=Response;
	ShowDialogOperationCompletedDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FShowDialogOperationCompletedDelegate

// Begin Class UIntegrityTokenResponse Function ShowDialog
struct Z_Construct_UFunction_UIntegrityTokenResponse_ShowDialog_Statics
{
	struct IntegrityTokenResponse_eventShowDialog_Parms
	{
		int32 TypeCode;
		FScriptDelegate InOnShowDialogOperationCompleted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Google Play Integrity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Displays a dialog to the user. This method can only be called once per\n\x09 * Integrity API response. This is a non-blocking call and it will return\n\x09 * immediately.\n\x09 *\n\x09 * Refer to https://developer.android.com/google/play/integrity/remediation\n\x09 * for more details.\n\x09 *\n\x09 * @param TypeCode The type code of the dialog to show. Refer to\n\x09 * https://developer.android.com/google/play/integrity/reference/com/google/android/play/core/integrity/model/IntegrityDialogTypeCode\n\x09 * for more details.\n\x09 * @param InOnShowDialogOperationCompleted The delegate to call when the\n\x09 * dialog is closed.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/IntegrityTokenResponse.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Displays a dialog to the user. This method can only be called once per\nIntegrity API response. This is a non-blocking call and it will return\nimmediately.\n\nRefer to https://developer.android.com/google/play/integrity/remediation\nfor more details.\n\n@param TypeCode The type code of the dialog to show. Refer to\nhttps://developer.android.com/google/play/integrity/reference/com/google/android/play/core/integrity/model/IntegrityDialogTypeCode\nfor more details.\n@param InOnShowDialogOperationCompleted The delegate to call when the\ndialog is closed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TypeCode;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InOnShowDialogOperationCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIntegrityTokenResponse_ShowDialog_Statics::NewProp_TypeCode = { "TypeCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IntegrityTokenResponse_eventShowDialog_Parms, TypeCode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UIntegrityTokenResponse_ShowDialog_Statics::NewProp_InOnShowDialogOperationCompleted = { "InOnShowDialogOperationCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IntegrityTokenResponse_eventShowDialog_Parms, InOnShowDialogOperationCompleted), Z_Construct_UDelegateFunction_PlayIntegrity_ShowDialogOperationCompletedDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 948539647
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIntegrityTokenResponse_ShowDialog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntegrityTokenResponse_ShowDialog_Statics::NewProp_TypeCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIntegrityTokenResponse_ShowDialog_Statics::NewProp_InOnShowDialogOperationCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntegrityTokenResponse_ShowDialog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIntegrityTokenResponse_ShowDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIntegrityTokenResponse, nullptr, "ShowDialog", nullptr, nullptr, Z_Construct_UFunction_UIntegrityTokenResponse_ShowDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIntegrityTokenResponse_ShowDialog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIntegrityTokenResponse_ShowDialog_Statics::IntegrityTokenResponse_eventShowDialog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIntegrityTokenResponse_ShowDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIntegrityTokenResponse_ShowDialog_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIntegrityTokenResponse_ShowDialog_Statics::IntegrityTokenResponse_eventShowDialog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIntegrityTokenResponse_ShowDialog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIntegrityTokenResponse_ShowDialog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIntegrityTokenResponse::execShowDialog)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TypeCode);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_InOnShowDialogOperationCompleted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowDialog(Z_Param_TypeCode,FShowDialogOperationCompletedDelegate(Z_Param_InOnShowDialogOperationCompleted));
	P_NATIVE_END;
}
// End Class UIntegrityTokenResponse Function ShowDialog

// Begin Class UIntegrityTokenResponse
void UIntegrityTokenResponse::StaticRegisterNativesUIntegrityTokenResponse()
{
	UClass* Class = UIntegrityTokenResponse::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ShowDialog", &UIntegrityTokenResponse::execShowDialog },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIntegrityTokenResponse);
UClass* Z_Construct_UClass_UIntegrityTokenResponse_NoRegister()
{
	return UIntegrityTokenResponse::StaticClass();
}
struct Z_Construct_UClass_UIntegrityTokenResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The UIntegrityTokenResponse class is used to handle the response for an\n * integrity token request.\n */" },
#endif
		{ "IncludePath", "IntegrityTokenResponse.h" },
		{ "ModuleRelativePath", "Public/IntegrityTokenResponse.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The UIntegrityTokenResponse class is used to handle the response for an\nintegrity token request." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[] = {
		{ "Category", "Google Play Integrity" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The token containing the signed and encrypted JSON payload.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/IntegrityTokenResponse.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The token containing the signed and encrypted JSON payload." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Token;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIntegrityTokenResponse_ShowDialog, "ShowDialog" }, // 2376906253
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIntegrityTokenResponse>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIntegrityTokenResponse_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIntegrityTokenResponse, Token), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Token_MetaData), NewProp_Token_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIntegrityTokenResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIntegrityTokenResponse_Statics::NewProp_Token,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIntegrityTokenResponse_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIntegrityTokenResponse_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayIntegrity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIntegrityTokenResponse_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIntegrityTokenResponse_Statics::ClassParams = {
	&UIntegrityTokenResponse::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIntegrityTokenResponse_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIntegrityTokenResponse_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIntegrityTokenResponse_Statics::Class_MetaDataParams), Z_Construct_UClass_UIntegrityTokenResponse_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIntegrityTokenResponse()
{
	if (!Z_Registration_Info_UClass_UIntegrityTokenResponse.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIntegrityTokenResponse.OuterSingleton, Z_Construct_UClass_UIntegrityTokenResponse_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIntegrityTokenResponse.OuterSingleton;
}
template<> PLAYINTEGRITY_API UClass* StaticClass<UIntegrityTokenResponse>()
{
	return UIntegrityTokenResponse::StaticClass();
}
UIntegrityTokenResponse::UIntegrityTokenResponse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIntegrityTokenResponse);
UIntegrityTokenResponse::~UIntegrityTokenResponse() {}
// End Class UIntegrityTokenResponse

// Begin Registration
struct Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityTokenResponse_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIntegrityTokenResponse, UIntegrityTokenResponse::StaticClass, TEXT("UIntegrityTokenResponse"), &Z_Registration_Info_UClass_UIntegrityTokenResponse, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIntegrityTokenResponse), 1626724718U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityTokenResponse_h_3897607418(TEXT("/Script/PlayIntegrity"),
	Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityTokenResponse_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayIntegrity_Public_IntegrityTokenResponse_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
