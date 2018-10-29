// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.SetSuspendRendering
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bSuspendRendering              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOpenVRExpansionFunctionLibrary::STATIC_SetSuspendRendering(bool bSuspendRendering)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.SetSuspendRendering");

	UOpenVRExpansionFunctionLibrary_SetSuspendRendering_Params params;
	params.bSuspendRendering = bSuspendRendering;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.SetSkyboxOverride_LatLongStereoPair
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*              LatLongSkyboxL                 (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              LatLongSkyboxR                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOpenVRExpansionFunctionLibrary::STATIC_SetSkyboxOverride_LatLongStereoPair(class UTexture2D* LatLongSkyboxL, class UTexture2D* LatLongSkyboxR)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.SetSkyboxOverride_LatLongStereoPair");

	UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair_Params params;
	params.LatLongSkyboxL = LatLongSkyboxL;
	params.LatLongSkyboxR = LatLongSkyboxR;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.SetSkyboxOverride_LatLong
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*              LatLongSkybox                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOpenVRExpansionFunctionLibrary::STATIC_SetSkyboxOverride_LatLong(class UTexture2D* LatLongSkybox)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.SetSkyboxOverride_LatLong");

	UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong_Params params;
	params.LatLongSkybox = LatLongSkybox;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.SetSkyboxOverride
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTexture*                tFront                         (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              tBack                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                tLeft                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                tRight                         (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                tTop                           (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                tBottom                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOpenVRExpansionFunctionLibrary::STATIC_SetSkyboxOverride(class UTexture* tFront, class UTexture2D* tBack, class UTexture* tLeft, class UTexture* tRight, class UTexture* tTop, class UTexture* tBottom)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.SetSkyboxOverride");

	UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Params params;
	params.tFront = tFront;
	params.tBack = tBack;
	params.tLeft = tLeft;
	params.tRight = tRight;
	params.tTop = tTop;
	params.tBottom = tBottom;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.ReleaseVRCamera
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPOpenVRCameraHandle   CameraHandle                   (Parm, OutParm, ReferenceParm)
// EBPOVRResultSwitch             Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOpenVRExpansionFunctionLibrary::STATIC_ReleaseVRCamera(struct FBPOpenVRCameraHandle* CameraHandle, EBPOVRResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.ReleaseVRCamera");

	UOpenVRExpansionFunctionLibrary_ReleaseVRCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraHandle != nullptr)
		*CameraHandle = params.CameraHandle;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.IsValid
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPOpenVRCameraHandle   CameraHandle                   (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOpenVRExpansionFunctionLibrary::STATIC_IsValid(struct FBPOpenVRCameraHandle* CameraHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.IsValid");

	UOpenVRExpansionFunctionLibrary_IsValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraHandle != nullptr)
		*CameraHandle = params.CameraHandle;

	return params.ReturnValue;
}


// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.IsOpenVRDeviceConnected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            DeviceIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOpenVRExpansionFunctionLibrary::STATIC_IsOpenVRDeviceConnected(int DeviceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.IsOpenVRDeviceConnected");

	UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected_Params params;
	params.DeviceIndex = DeviceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.HasVRCamera
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// EOpenVRCameraFrameType         FrameType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOpenVRExpansionFunctionLibrary::STATIC_HasVRCamera(EOpenVRCameraFrameType FrameType, int* Width, int* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.HasVRCamera");

	UOpenVRExpansionFunctionLibrary_HasVRCamera_Params params;
	params.FrameType = FrameType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Width != nullptr)
		*Width = params.Width;
	if (Height != nullptr)
		*Height = params.Height;

	return params.ReturnValue;
}


// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyUInt64
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EVRDeviceProperty_UInt64       PropertyToRetrieve             (Parm, ZeroConstructor, IsPlainOldData)
// int                            DeviceID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UInt64Value                    (Parm, OutParm, ZeroConstructor)
// EBPOVRResultSwitch             Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOpenVRExpansionFunctionLibrary::STATIC_GetVRDevicePropertyUInt64(EVRDeviceProperty_UInt64 PropertyToRetrieve, int DeviceID, struct FString* UInt64Value, EBPOVRResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyUInt64");

	UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64_Params params;
	params.PropertyToRetrieve = PropertyToRetrieve;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UInt64Value != nullptr)
		*UInt64Value = params.UInt64Value;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EVRDeviceProperty_String       PropertyToRetrieve             (Parm, ZeroConstructor, IsPlainOldData)
// int                            DeviceID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 StringValue                    (Parm, OutParm, ZeroConstructor)
// EBPOVRResultSwitch             Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOpenVRExpansionFunctionLibrary::STATIC_GetVRDevicePropertyString(EVRDeviceProperty_String PropertyToRetrieve, int DeviceID, struct FString* StringValue, EBPOVRResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyString");

	UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString_Params params;
	params.PropertyToRetrieve = PropertyToRetrieve;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StringValue != nullptr)
		*StringValue = params.StringValue;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyMatrix34AsTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// EVRDeviceProperty_Matrix34     PropertyToRetrieve             (Parm, ZeroConstructor, IsPlainOldData)
// int                            DeviceID                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              TransformValue                 (Parm, OutParm, IsPlainOldData)
// EBPOVRResultSwitch             Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOpenVRExpansionFunctionLibrary::STATIC_GetVRDevicePropertyMatrix34AsTransform(EVRDeviceProperty_Matrix34 PropertyToRetrieve, int DeviceID, struct FTransform* TransformValue, EBPOVRResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyMatrix34AsTransform");

	UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform_Params params;
	params.PropertyToRetrieve = PropertyToRetrieve;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TransformValue != nullptr)
		*TransformValue = params.TransformValue;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyInt32
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EVRDeviceProperty_Int32        PropertyToRetrieve             (Parm, ZeroConstructor, IsPlainOldData)
// int                            DeviceID                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            IntValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EBPOVRResultSwitch             Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOpenVRExpansionFunctionLibrary::STATIC_GetVRDevicePropertyInt32(EVRDeviceProperty_Int32 PropertyToRetrieve, int DeviceID, int* IntValue, EBPOVRResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyInt32");

	UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32_Params params;
	params.PropertyToRetrieve = PropertyToRetrieve;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IntValue != nullptr)
		*IntValue = params.IntValue;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EVRDeviceProperty_Float        PropertyToRetrieve             (Parm, ZeroConstructor, IsPlainOldData)
// int                            DeviceID                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          FloatValue                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EBPOVRResultSwitch             Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOpenVRExpansionFunctionLibrary::STATIC_GetVRDevicePropertyFloat(EVRDeviceProperty_Float PropertyToRetrieve, int DeviceID, float* FloatValue, EBPOVRResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyFloat");

	UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat_Params params;
	params.PropertyToRetrieve = PropertyToRetrieve;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FloatValue != nullptr)
		*FloatValue = params.FloatValue;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyBool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EVRDeviceProperty_Bool         PropertyToRetrieve             (Parm, ZeroConstructor, IsPlainOldData)
// int                            DeviceID                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           BoolValue                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EBPOVRResultSwitch             Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOpenVRExpansionFunctionLibrary::STATIC_GetVRDevicePropertyBool(EVRDeviceProperty_Bool PropertyToRetrieve, int DeviceID, bool* BoolValue, EBPOVRResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyBool");

	UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool_Params params;
	params.PropertyToRetrieve = PropertyToRetrieve;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BoolValue != nullptr)
		*BoolValue = params.BoolValue;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDeviceModelAndTexture
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// EBPOpenVRTrackedDeviceClass    DeviceType                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UProceduralMeshComponent*> ProceduralMeshComponentsToFill (Parm, ZeroConstructor)
// bool                           bCreateCollision               (Parm, ZeroConstructor, IsPlainOldData)
// EAsyncBlueprintResultSwitch    Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            OverrideDeviceID               (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UOpenVRExpansionFunctionLibrary::STATIC_GetVRDeviceModelAndTexture(class UObject* WorldContextObject, EBPOpenVRTrackedDeviceClass DeviceType, TArray<class UProceduralMeshComponent*> ProceduralMeshComponentsToFill, bool bCreateCollision, int OverrideDeviceID, EAsyncBlueprintResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDeviceModelAndTexture");

	UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Params params;
	params.WorldContextObject = WorldContextObject;
	params.DeviceType = DeviceType;
	params.ProceduralMeshComponentsToFill = ProceduralMeshComponentsToFill;
	params.bCreateCollision = bCreateCollision;
	params.OverrideDeviceID = OverrideDeviceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRCameraFrame
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPOpenVRCameraHandle   CameraHandle                   (Parm, OutParm, ReferenceParm)
// EOpenVRCameraFrameType         FrameType                      (Parm, ZeroConstructor, IsPlainOldData)
// EBPOVRResultSwitch             Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              TargetRenderTarget             (Parm, ZeroConstructor, IsPlainOldData)

void UOpenVRExpansionFunctionLibrary::STATIC_GetVRCameraFrame(EOpenVRCameraFrameType FrameType, class UTexture2D* TargetRenderTarget, struct FBPOpenVRCameraHandle* CameraHandle, EBPOVRResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRCameraFrame");

	UOpenVRExpansionFunctionLibrary_GetVRCameraFrame_Params params;
	params.FrameType = FrameType;
	params.TargetRenderTarget = TargetRenderTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraHandle != nullptr)
		*CameraHandle = params.CameraHandle;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetOpenVRHMDType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EBPOpenVRHMDDeviceType         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EBPOpenVRHMDDeviceType UOpenVRExpansionFunctionLibrary::STATIC_GetOpenVRHMDType()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetOpenVRHMDType");

	UOpenVRExpansionFunctionLibrary_GetOpenVRHMDType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetOpenVRDeviceType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            DeviceIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// EBPOpenVRTrackedDeviceClass    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EBPOpenVRTrackedDeviceClass UOpenVRExpansionFunctionLibrary::STATIC_GetOpenVRDeviceType(int DeviceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetOpenVRDeviceType");

	UOpenVRExpansionFunctionLibrary_GetOpenVRDeviceType_Params params;
	params.DeviceIndex = DeviceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetOpenVRDevicesByType
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EBPOpenVRTrackedDeviceClass    TypeToRetreive                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    FoundIndexs                    (Parm, OutParm, ZeroConstructor)

void UOpenVRExpansionFunctionLibrary::STATIC_GetOpenVRDevicesByType(EBPOpenVRTrackedDeviceClass TypeToRetreive, TArray<int>* FoundIndexs)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetOpenVRDevicesByType");

	UOpenVRExpansionFunctionLibrary_GetOpenVRDevicesByType_Params params;
	params.TypeToRetreive = TypeToRetreive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundIndexs != nullptr)
		*FoundIndexs = params.FoundIndexs;
}


// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetOpenVRDevices
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<EBPOpenVRTrackedDeviceClass> FoundDevices                   (Parm, OutParm, ZeroConstructor)

void UOpenVRExpansionFunctionLibrary::STATIC_GetOpenVRDevices(TArray<EBPOpenVRTrackedDeviceClass>* FoundDevices)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetOpenVRDevices");

	UOpenVRExpansionFunctionLibrary_GetOpenVRDevices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundDevices != nullptr)
		*FoundDevices = params.FoundDevices;
}


// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetCurrentVRGripAlpha
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          VRGridAlpha                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOpenVRExpansionFunctionLibrary::STATIC_GetCurrentVRGripAlpha(float* VRGridAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetCurrentVRGripAlpha");

	UOpenVRExpansionFunctionLibrary_GetCurrentVRGripAlpha_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VRGridAlpha != nullptr)
		*VRGridAlpha = params.VRGridAlpha;

	return params.ReturnValue;
}


// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetCurrentHMDFadeColor
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                  ColorOut                       (Parm, OutParm, IsPlainOldData)
// bool                           bBackground                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOpenVRExpansionFunctionLibrary::STATIC_GetCurrentHMDFadeColor(bool bBackground, struct FColor* ColorOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetCurrentHMDFadeColor");

	UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor_Params params;
	params.bBackground = bBackground;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ColorOut != nullptr)
		*ColorOut = params.ColorOut;

	return params.ReturnValue;
}


// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.FadeVRGrid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          fSeconds                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFadeIn                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOpenVRExpansionFunctionLibrary::STATIC_FadeVRGrid(float fSeconds, bool bFadeIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.FadeVRGrid");

	UOpenVRExpansionFunctionLibrary_FadeVRGrid_Params params;
	params.fSeconds = fSeconds;
	params.bFadeIn = bFadeIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.FadeHMDToColor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                          fSeconds                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  Color                          (Parm, IsPlainOldData)
// bool                           bBackground                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOpenVRExpansionFunctionLibrary::STATIC_FadeHMDToColor(float fSeconds, const struct FColor& Color, bool bBackground)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.FadeHMDToColor");

	UOpenVRExpansionFunctionLibrary_FadeHMDToColor_Params params;
	params.fSeconds = fSeconds;
	params.Color = Color;
	params.bBackground = bBackground;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.CreateCameraTexture2D
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPOpenVRCameraHandle   CameraHandle                   (Parm, OutParm, ReferenceParm)
// EOpenVRCameraFrameType         FrameType                      (Parm, ZeroConstructor, IsPlainOldData)
// EBPOVRResultSwitch             Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UOpenVRExpansionFunctionLibrary::STATIC_CreateCameraTexture2D(EOpenVRCameraFrameType FrameType, struct FBPOpenVRCameraHandle* CameraHandle, EBPOVRResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.CreateCameraTexture2D");

	UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D_Params params;
	params.FrameType = FrameType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraHandle != nullptr)
		*CameraHandle = params.CameraHandle;
	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.ClearSkyboxOverride
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOpenVRExpansionFunctionLibrary::STATIC_ClearSkyboxOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.ClearSkyboxOverride");

	UOpenVRExpansionFunctionLibrary_ClearSkyboxOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.AcquireVRCamera
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPOpenVRCameraHandle   CameraHandle                   (Parm, OutParm)
// EBPOVRResultSwitch             Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOpenVRExpansionFunctionLibrary::STATIC_AcquireVRCamera(struct FBPOpenVRCameraHandle* CameraHandle, EBPOVRResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.AcquireVRCamera");

	UOpenVRExpansionFunctionLibrary_AcquireVRCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraHandle != nullptr)
		*CameraHandle = params.CameraHandle;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function OpenVRExpansionPlugin.SteamVRKeyboardComponent.ReOpenVRKeyboardForUser
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           bIsForPassword                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsMultiline                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseMinimalMode                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsRightHand                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxCharacters                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Description                    (Parm, ZeroConstructor)
// struct FString                 StartingString                 (Parm, ZeroConstructor)
// EBPOVRResultSwitch             Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USteamVRKeyboardComponent::ReOpenVRKeyboardForUser(bool bIsForPassword, bool bIsMultiline, bool bUseMinimalMode, bool bIsRightHand, int MaxCharacters, const struct FString& Description, const struct FString& StartingString, EBPOVRResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.SteamVRKeyboardComponent.ReOpenVRKeyboardForUser");

	USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Params params;
	params.bIsForPassword = bIsForPassword;
	params.bIsMultiline = bIsMultiline;
	params.bUseMinimalMode = bUseMinimalMode;
	params.bIsRightHand = bIsRightHand;
	params.MaxCharacters = MaxCharacters;
	params.Description = Description;
	params.StartingString = StartingString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function OpenVRExpansionPlugin.SteamVRKeyboardComponent.OpenVRKeyboard
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           bIsForPassword                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsMultiline                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseMinimalMode                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsRightHand                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxCharacters                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Description                    (Parm, ZeroConstructor)
// struct FString                 StartingString                 (Parm, ZeroConstructor)
// EBPOVRResultSwitch             Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USteamVRKeyboardComponent::OpenVRKeyboard(bool bIsForPassword, bool bIsMultiline, bool bUseMinimalMode, bool bIsRightHand, int MaxCharacters, const struct FString& Description, const struct FString& StartingString, EBPOVRResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.SteamVRKeyboardComponent.OpenVRKeyboard");

	USteamVRKeyboardComponent_OpenVRKeyboard_Params params;
	params.bIsForPassword = bIsForPassword;
	params.bIsMultiline = bIsMultiline;
	params.bUseMinimalMode = bUseMinimalMode;
	params.bIsRightHand = bIsRightHand;
	params.MaxCharacters = MaxCharacters;
	params.Description = Description;
	params.StartingString = StartingString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function OpenVRExpansionPlugin.SteamVRKeyboardComponent.GetVRKeyboardText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Text                           (Parm, OutParm, ZeroConstructor)
// EBPOVRResultSwitch             Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USteamVRKeyboardComponent::GetVRKeyboardText(struct FString* Text, EBPOVRResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.SteamVRKeyboardComponent.GetVRKeyboardText");

	USteamVRKeyboardComponent_GetVRKeyboardText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function OpenVRExpansionPlugin.SteamVRKeyboardComponent.CloseVRKeyboard
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// EBPOVRResultSwitch             Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USteamVRKeyboardComponent::CloseVRKeyboard(EBPOVRResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.SteamVRKeyboardComponent.CloseVRKeyboard");

	USteamVRKeyboardComponent_CloseVRKeyboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
