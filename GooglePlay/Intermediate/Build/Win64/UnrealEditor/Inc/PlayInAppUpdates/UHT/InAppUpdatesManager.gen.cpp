// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayInAppUpdates/Public/InAppUpdatesManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInAppUpdatesManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
PLAYINAPPUPDATES_API UClass* Z_Construct_UClass_UAppUpdateInfo_NoRegister();
PLAYINAPPUPDATES_API UClass* Z_Construct_UClass_UAppUpdateOptions_NoRegister();
PLAYINAPPUPDATES_API UClass* Z_Construct_UClass_UInAppUpdatesManager();
PLAYINAPPUPDATES_API UClass* Z_Construct_UClass_UInAppUpdatesManager_NoRegister();
PLAYINAPPUPDATES_API UEnum* Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateErrorCode();
PLAYINAPPUPDATES_API UFunction* Z_Construct_UDelegateFunction_PlayInAppUpdates_RequestInfoOperationCompletedDelegate__DelegateSignature();
PLAYINAPPUPDATES_API UFunction* Z_Construct_UDelegateFunction_PlayInAppUpdates_UpdateOperationCompletedDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_PlayInAppUpdates();
// End Cross Module References

// Begin Delegate FRequestInfoOperationCompletedDelegate
struct Z_Construct_UDelegateFunction_PlayInAppUpdates_RequestInfoOperationCompletedDelegate__DelegateSignature_Statics
{
	struct _Script_PlayInAppUpdates_eventRequestInfoOperationCompletedDelegate_Parms
	{
		EAppUpdateErrorCode Error;
		UAppUpdateInfo* Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @private\n *\n * The delegate used to handle the completion of a request info\n * operation.\n *\n * @param Error The error code of the operation.\n * @param Response The UAppUpdateInfo object containing information about the\n * update.\n */" },
#endif
		{ "ModuleRelativePath", "Public/InAppUpdatesManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@private\n\nThe delegate used to handle the completion of a request info\noperation.\n\n@param Error The error code of the operation.\n@param Response The UAppUpdateInfo object containing information about the\nupdate." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Error_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Error;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PlayInAppUpdates_RequestInfoOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PlayInAppUpdates_RequestInfoOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PlayInAppUpdates_eventRequestInfoOperationCompletedDelegate_Parms, Error), Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateErrorCode, METADATA_PARAMS(0, nullptr) }; // 1214535262
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_PlayInAppUpdates_RequestInfoOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PlayInAppUpdates_eventRequestInfoOperationCompletedDelegate_Parms, Response), Z_Construct_UClass_UAppUpdateInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PlayInAppUpdates_RequestInfoOperationCompletedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayInAppUpdates_RequestInfoOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayInAppUpdates_RequestInfoOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayInAppUpdates_RequestInfoOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayInAppUpdates_RequestInfoOperationCompletedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PlayInAppUpdates_RequestInfoOperationCompletedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PlayInAppUpdates, nullptr, "RequestInfoOperationCompletedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_PlayInAppUpdates_RequestInfoOperationCompletedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayInAppUpdates_RequestInfoOperationCompletedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PlayInAppUpdates_RequestInfoOperationCompletedDelegate__DelegateSignature_Statics::_Script_PlayInAppUpdates_eventRequestInfoOperationCompletedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayInAppUpdates_RequestInfoOperationCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PlayInAppUpdates_RequestInfoOperationCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_PlayInAppUpdates_RequestInfoOperationCompletedDelegate__DelegateSignature_Statics::_Script_PlayInAppUpdates_eventRequestInfoOperationCompletedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PlayInAppUpdates_RequestInfoOperationCompletedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PlayInAppUpdates_RequestInfoOperationCompletedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRequestInfoOperationCompletedDelegate_DelegateWrapper(const FScriptDelegate& RequestInfoOperationCompletedDelegate, EAppUpdateErrorCode Error, UAppUpdateInfo* Response)
{
	struct _Script_PlayInAppUpdates_eventRequestInfoOperationCompletedDelegate_Parms
	{
		EAppUpdateErrorCode Error;
		UAppUpdateInfo* Response;
	};
	_Script_PlayInAppUpdates_eventRequestInfoOperationCompletedDelegate_Parms Parms;
	Parms.Error=Error;
	Parms.Response=Response;
	RequestInfoOperationCompletedDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FRequestInfoOperationCompletedDelegate

// Begin Delegate FUpdateOperationCompletedDelegate
struct Z_Construct_UDelegateFunction_PlayInAppUpdates_UpdateOperationCompletedDelegate__DelegateSignature_Statics
{
	struct _Script_PlayInAppUpdates_eventUpdateOperationCompletedDelegate_Parms
	{
		EAppUpdateErrorCode Error;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @private\n *\n * The delegate used to handle the completion of a start update\n * operation.\n *\n * @param Error The error code of the operation.\n */" },
#endif
		{ "ModuleRelativePath", "Public/InAppUpdatesManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@private\n\nThe delegate used to handle the completion of a start update\noperation.\n\n@param Error The error code of the operation." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Error_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_PlayInAppUpdates_UpdateOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_PlayInAppUpdates_UpdateOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_PlayInAppUpdates_eventUpdateOperationCompletedDelegate_Parms, Error), Z_Construct_UEnum_PlayInAppUpdates_EAppUpdateErrorCode, METADATA_PARAMS(0, nullptr) }; // 1214535262
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PlayInAppUpdates_UpdateOperationCompletedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayInAppUpdates_UpdateOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PlayInAppUpdates_UpdateOperationCompletedDelegate__DelegateSignature_Statics::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayInAppUpdates_UpdateOperationCompletedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PlayInAppUpdates_UpdateOperationCompletedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PlayInAppUpdates, nullptr, "UpdateOperationCompletedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_PlayInAppUpdates_UpdateOperationCompletedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayInAppUpdates_UpdateOperationCompletedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_PlayInAppUpdates_UpdateOperationCompletedDelegate__DelegateSignature_Statics::_Script_PlayInAppUpdates_eventUpdateOperationCompletedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PlayInAppUpdates_UpdateOperationCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PlayInAppUpdates_UpdateOperationCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_PlayInAppUpdates_UpdateOperationCompletedDelegate__DelegateSignature_Statics::_Script_PlayInAppUpdates_eventUpdateOperationCompletedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_PlayInAppUpdates_UpdateOperationCompletedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PlayInAppUpdates_UpdateOperationCompletedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FUpdateOperationCompletedDelegate_DelegateWrapper(const FScriptDelegate& UpdateOperationCompletedDelegate, EAppUpdateErrorCode Error)
{
	struct _Script_PlayInAppUpdates_eventUpdateOperationCompletedDelegate_Parms
	{
		EAppUpdateErrorCode Error;
	};
	_Script_PlayInAppUpdates_eventUpdateOperationCompletedDelegate_Parms Parms;
	Parms.Error=Error;
	UpdateOperationCompletedDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FUpdateOperationCompletedDelegate

// Begin Class UInAppUpdatesManager Function CompleteUpdate
struct Z_Construct_UFunction_UInAppUpdatesManager_CompleteUpdate_Statics
{
	struct InAppUpdatesManager_eventCompleteUpdate_Parms
	{
		FScriptDelegate InOnStartUpdateOperationCompleted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Google Play In-App Updates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Requests to complete a flexible in-app update flow that was started via\n\x09 * the StartUpdate() function.\n\x09 *\n\x09 * @param InOnStartUpdateOperationCompleted The delegate to handle the\n\x09 * completion of the function.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/InAppUpdatesManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests to complete a flexible in-app update flow that was started via\nthe StartUpdate() function.\n\n@param InOnStartUpdateOperationCompleted The delegate to handle the\ncompletion of the function." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InOnStartUpdateOperationCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInAppUpdatesManager_CompleteUpdate_Statics::NewProp_InOnStartUpdateOperationCompleted = { "InOnStartUpdateOperationCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppUpdatesManager_eventCompleteUpdate_Parms, InOnStartUpdateOperationCompleted), Z_Construct_UDelegateFunction_PlayInAppUpdates_UpdateOperationCompletedDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1382189729
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppUpdatesManager_CompleteUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppUpdatesManager_CompleteUpdate_Statics::NewProp_InOnStartUpdateOperationCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppUpdatesManager_CompleteUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppUpdatesManager_CompleteUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppUpdatesManager, nullptr, "CompleteUpdate", nullptr, nullptr, Z_Construct_UFunction_UInAppUpdatesManager_CompleteUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppUpdatesManager_CompleteUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInAppUpdatesManager_CompleteUpdate_Statics::InAppUpdatesManager_eventCompleteUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppUpdatesManager_CompleteUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInAppUpdatesManager_CompleteUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInAppUpdatesManager_CompleteUpdate_Statics::InAppUpdatesManager_eventCompleteUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInAppUpdatesManager_CompleteUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInAppUpdatesManager_CompleteUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInAppUpdatesManager::execCompleteUpdate)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_InOnStartUpdateOperationCompleted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CompleteUpdate(FUpdateOperationCompletedDelegate(Z_Param_InOnStartUpdateOperationCompleted));
	P_NATIVE_END;
}
// End Class UInAppUpdatesManager Function CompleteUpdate

// Begin Class UInAppUpdatesManager Function RequestInfo
struct Z_Construct_UFunction_UInAppUpdatesManager_RequestInfo_Statics
{
	struct InAppUpdatesManager_eventRequestInfo_Parms
	{
		FScriptDelegate InOnRequestInfoOperationCompleted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Google Play In-App Updates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Requests information about an update. Needs to be called once before\n\x09 * StartUpdate() to obtain an AppUpdateInfo, which is required to launch the\n\x09 * in-app update flow.\n\x09 *\n\x09 * @param InOnRequestInfoOperationCompleted The delegate to handle the\n\x09 * completion of the request.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/InAppUpdatesManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests information about an update. Needs to be called once before\nStartUpdate() to obtain an AppUpdateInfo, which is required to launch the\nin-app update flow.\n\n@param InOnRequestInfoOperationCompleted The delegate to handle the\ncompletion of the request." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InOnRequestInfoOperationCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInAppUpdatesManager_RequestInfo_Statics::NewProp_InOnRequestInfoOperationCompleted = { "InOnRequestInfoOperationCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppUpdatesManager_eventRequestInfo_Parms, InOnRequestInfoOperationCompleted), Z_Construct_UDelegateFunction_PlayInAppUpdates_RequestInfoOperationCompletedDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2229728076
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppUpdatesManager_RequestInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppUpdatesManager_RequestInfo_Statics::NewProp_InOnRequestInfoOperationCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppUpdatesManager_RequestInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppUpdatesManager_RequestInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppUpdatesManager, nullptr, "RequestInfo", nullptr, nullptr, Z_Construct_UFunction_UInAppUpdatesManager_RequestInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppUpdatesManager_RequestInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInAppUpdatesManager_RequestInfo_Statics::InAppUpdatesManager_eventRequestInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppUpdatesManager_RequestInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInAppUpdatesManager_RequestInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInAppUpdatesManager_RequestInfo_Statics::InAppUpdatesManager_eventRequestInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInAppUpdatesManager_RequestInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInAppUpdatesManager_RequestInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInAppUpdatesManager::execRequestInfo)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_InOnRequestInfoOperationCompleted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestInfo(FRequestInfoOperationCompletedDelegate(Z_Param_InOnRequestInfoOperationCompleted));
	P_NATIVE_END;
}
// End Class UInAppUpdatesManager Function RequestInfo

// Begin Class UInAppUpdatesManager Function StartUpdate
struct Z_Construct_UFunction_UInAppUpdatesManager_StartUpdate_Statics
{
	struct InAppUpdatesManager_eventStartUpdate_Parms
	{
		UAppUpdateInfo* InUpdateInfo;
		UAppUpdateOptions* InUpdateOptions;
		FScriptDelegate InOnUpdateOperationCompleted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Google Play In-App Updates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Starts the in-app update flow. Use the InUpdateInfo functions to monitor\n\x09 * the current status and download progress of the ongoing update operation.\n\x09 *\n\x09 * @param InUpdateInfo The object containing information needed for an\n\x09 * update.\n\x09 * @param InUpdateOptions The object specifying the update flow type.\n\x09 * @param InOnUpdateOperationCompleted The delegate to handle the\n\x09 * completion of the function.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/InAppUpdatesManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts the in-app update flow. Use the InUpdateInfo functions to monitor\nthe current status and download progress of the ongoing update operation.\n\n@param InUpdateInfo The object containing information needed for an\nupdate.\n@param InUpdateOptions The object specifying the update flow type.\n@param InOnUpdateOperationCompleted The delegate to handle the\ncompletion of the function." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InUpdateInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InUpdateOptions;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InOnUpdateOperationCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppUpdatesManager_StartUpdate_Statics::NewProp_InUpdateInfo = { "InUpdateInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppUpdatesManager_eventStartUpdate_Parms, InUpdateInfo), Z_Construct_UClass_UAppUpdateInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppUpdatesManager_StartUpdate_Statics::NewProp_InUpdateOptions = { "InUpdateOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppUpdatesManager_eventStartUpdate_Parms, InUpdateOptions), Z_Construct_UClass_UAppUpdateOptions_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInAppUpdatesManager_StartUpdate_Statics::NewProp_InOnUpdateOperationCompleted = { "InOnUpdateOperationCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InAppUpdatesManager_eventStartUpdate_Parms, InOnUpdateOperationCompleted), Z_Construct_UDelegateFunction_PlayInAppUpdates_UpdateOperationCompletedDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1382189729
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppUpdatesManager_StartUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppUpdatesManager_StartUpdate_Statics::NewProp_InUpdateInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppUpdatesManager_StartUpdate_Statics::NewProp_InUpdateOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppUpdatesManager_StartUpdate_Statics::NewProp_InOnUpdateOperationCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppUpdatesManager_StartUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppUpdatesManager_StartUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppUpdatesManager, nullptr, "StartUpdate", nullptr, nullptr, Z_Construct_UFunction_UInAppUpdatesManager_StartUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppUpdatesManager_StartUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInAppUpdatesManager_StartUpdate_Statics::InAppUpdatesManager_eventStartUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppUpdatesManager_StartUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInAppUpdatesManager_StartUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInAppUpdatesManager_StartUpdate_Statics::InAppUpdatesManager_eventStartUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInAppUpdatesManager_StartUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInAppUpdatesManager_StartUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInAppUpdatesManager::execStartUpdate)
{
	P_GET_OBJECT(UAppUpdateInfo,Z_Param_InUpdateInfo);
	P_GET_OBJECT(UAppUpdateOptions,Z_Param_InUpdateOptions);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_InOnUpdateOperationCompleted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartUpdate(Z_Param_InUpdateInfo,Z_Param_InUpdateOptions,FUpdateOperationCompletedDelegate(Z_Param_InOnUpdateOperationCompleted));
	P_NATIVE_END;
}
// End Class UInAppUpdatesManager Function StartUpdate

// Begin Class UInAppUpdatesManager
void UInAppUpdatesManager::StaticRegisterNativesUInAppUpdatesManager()
{
	UClass* Class = UInAppUpdatesManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CompleteUpdate", &UInAppUpdatesManager::execCompleteUpdate },
		{ "RequestInfo", &UInAppUpdatesManager::execRequestInfo },
		{ "StartUpdate", &UInAppUpdatesManager::execStartUpdate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInAppUpdatesManager);
UClass* Z_Construct_UClass_UInAppUpdatesManager_NoRegister()
{
	return UInAppUpdatesManager::StaticClass();
}
struct Z_Construct_UClass_UInAppUpdatesManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The UInAppUpdatesManager class is used to request app update information,\n * start an update or complete a flexible update.\n *\n * Refer to https://developer.android.com/guide/playcore/in-app-updates\n * for more details.\n */" },
#endif
		{ "IncludePath", "InAppUpdatesManager.h" },
		{ "ModuleRelativePath", "Public/InAppUpdatesManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The UInAppUpdatesManager class is used to request app update information,\nstart an update or complete a flexible update.\n\nRefer to https://developer.android.com/guide/playcore/in-app-updates\nfor more details." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/InAppUpdatesManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateOptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/InAppUpdatesManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpdateInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpdateOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInAppUpdatesManager_CompleteUpdate, "CompleteUpdate" }, // 2676420581
		{ &Z_Construct_UFunction_UInAppUpdatesManager_RequestInfo, "RequestInfo" }, // 1604370360
		{ &Z_Construct_UFunction_UInAppUpdatesManager_StartUpdate, "StartUpdate" }, // 326160213
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInAppUpdatesManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInAppUpdatesManager_Statics::NewProp_UpdateInfo = { "UpdateInfo", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInAppUpdatesManager, UpdateInfo), Z_Construct_UClass_UAppUpdateInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateInfo_MetaData), NewProp_UpdateInfo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInAppUpdatesManager_Statics::NewProp_UpdateOptions = { "UpdateOptions", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInAppUpdatesManager, UpdateOptions), Z_Construct_UClass_UAppUpdateOptions_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateOptions_MetaData), NewProp_UpdateOptions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInAppUpdatesManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppUpdatesManager_Statics::NewProp_UpdateInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppUpdatesManager_Statics::NewProp_UpdateOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppUpdatesManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInAppUpdatesManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_PlayInAppUpdates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppUpdatesManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInAppUpdatesManager_Statics::ClassParams = {
	&UInAppUpdatesManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInAppUpdatesManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInAppUpdatesManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInAppUpdatesManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UInAppUpdatesManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInAppUpdatesManager()
{
	if (!Z_Registration_Info_UClass_UInAppUpdatesManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInAppUpdatesManager.OuterSingleton, Z_Construct_UClass_UInAppUpdatesManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInAppUpdatesManager.OuterSingleton;
}
template<> PLAYINAPPUPDATES_API UClass* StaticClass<UInAppUpdatesManager>()
{
	return UInAppUpdatesManager::StaticClass();
}
UInAppUpdatesManager::UInAppUpdatesManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInAppUpdatesManager);
UInAppUpdatesManager::~UInAppUpdatesManager() {}
// End Class UInAppUpdatesManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_InAppUpdatesManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInAppUpdatesManager, UInAppUpdatesManager::StaticClass, TEXT("UInAppUpdatesManager"), &Z_Registration_Info_UClass_UInAppUpdatesManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInAppUpdatesManager), 541915998U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_InAppUpdatesManager_h_1931644103(TEXT("/Script/PlayInAppUpdates"),
	Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_InAppUpdatesManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HEART_Plugins_GooglePlay_Source_PlayInAppUpdates_Public_InAppUpdatesManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
