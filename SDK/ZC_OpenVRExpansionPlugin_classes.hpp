#pragma once

// ZeroCaliber (0.6.0 EA) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UOpenVRExpansionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary");
		return ptr;
	}


	bool STATIC_SetSuspendRendering(bool bSuspendRendering);
	bool STATIC_SetSkyboxOverride_LatLongStereoPair(class UTexture2D* LatLongSkyboxL, class UTexture2D* LatLongSkyboxR);
	bool STATIC_SetSkyboxOverride_LatLong(class UTexture2D* LatLongSkybox);
	bool STATIC_SetSkyboxOverride(class UTexture* tFront, class UTexture2D* tBack, class UTexture* tLeft, class UTexture* tRight, class UTexture* tTop, class UTexture* tBottom);
	void STATIC_ReleaseVRCamera(struct FBPOpenVRCameraHandle* CameraHandle, EBPOVRResultSwitch* Result);
	bool STATIC_IsValid(struct FBPOpenVRCameraHandle* CameraHandle);
	bool STATIC_IsOpenVRDeviceConnected(int DeviceIndex);
	bool STATIC_HasVRCamera(EOpenVRCameraFrameType FrameType, int* Width, int* Height);
	void STATIC_GetVRDevicePropertyUInt64(EVRDeviceProperty_UInt64 PropertyToRetrieve, int DeviceID, struct FString* UInt64Value, EBPOVRResultSwitch* Result);
	void STATIC_GetVRDevicePropertyString(EVRDeviceProperty_String PropertyToRetrieve, int DeviceID, struct FString* StringValue, EBPOVRResultSwitch* Result);
	void STATIC_GetVRDevicePropertyMatrix34AsTransform(EVRDeviceProperty_Matrix34 PropertyToRetrieve, int DeviceID, struct FTransform* TransformValue, EBPOVRResultSwitch* Result);
	void STATIC_GetVRDevicePropertyInt32(EVRDeviceProperty_Int32 PropertyToRetrieve, int DeviceID, int* IntValue, EBPOVRResultSwitch* Result);
	void STATIC_GetVRDevicePropertyFloat(EVRDeviceProperty_Float PropertyToRetrieve, int DeviceID, float* FloatValue, EBPOVRResultSwitch* Result);
	void STATIC_GetVRDevicePropertyBool(EVRDeviceProperty_Bool PropertyToRetrieve, int DeviceID, bool* BoolValue, EBPOVRResultSwitch* Result);
	class UTexture2D* STATIC_GetVRDeviceModelAndTexture(class UObject* WorldContextObject, EBPOpenVRTrackedDeviceClass DeviceType, TArray<class UProceduralMeshComponent*> ProceduralMeshComponentsToFill, bool bCreateCollision, int OverrideDeviceID, EAsyncBlueprintResultSwitch* Result);
	void STATIC_GetVRCameraFrame(EOpenVRCameraFrameType FrameType, class UTexture2D* TargetRenderTarget, struct FBPOpenVRCameraHandle* CameraHandle, EBPOVRResultSwitch* Result);
	EBPOpenVRHMDDeviceType STATIC_GetOpenVRHMDType();
	EBPOpenVRTrackedDeviceClass STATIC_GetOpenVRDeviceType(int DeviceIndex);
	void STATIC_GetOpenVRDevicesByType(EBPOpenVRTrackedDeviceClass TypeToRetreive, TArray<int>* FoundIndexs);
	void STATIC_GetOpenVRDevices(TArray<EBPOpenVRTrackedDeviceClass>* FoundDevices);
	bool STATIC_GetCurrentVRGripAlpha(float* VRGridAlpha);
	bool STATIC_GetCurrentHMDFadeColor(bool bBackground, struct FColor* ColorOut);
	bool STATIC_FadeVRGrid(float fSeconds, bool bFadeIn);
	bool STATIC_FadeHMDToColor(float fSeconds, const struct FColor& Color, bool bBackground);
	class UTexture2D* STATIC_CreateCameraTexture2D(EOpenVRCameraFrameType FrameType, struct FBPOpenVRCameraHandle* CameraHandle, EBPOVRResultSwitch* Result);
	bool STATIC_ClearSkyboxOverride();
	void STATIC_AcquireVRCamera(struct FBPOpenVRCameraHandle* CameraHandle, EBPOVRResultSwitch* Result);
};


// Class OpenVRExpansionPlugin.SteamVRKeyboardComponent
// 0x0030 (0x0270 - 0x0240)
class USteamVRKeyboardComponent : public USceneComponent
{
public:
	struct FScriptMulticastDelegate                    OnKeyboardDone;                                           // 0x0240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnKeyboardClosed;                                         // 0x0250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnKeyboardCharInput;                                      // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OpenVRExpansionPlugin.SteamVRKeyboardComponent");
		return ptr;
	}


	void ReOpenVRKeyboardForUser(bool bIsForPassword, bool bIsMultiline, bool bUseMinimalMode, bool bIsRightHand, int MaxCharacters, const struct FString& Description, const struct FString& StartingString, EBPOVRResultSwitch* Result);
	void OpenVRKeyboard(bool bIsForPassword, bool bIsMultiline, bool bUseMinimalMode, bool bIsRightHand, int MaxCharacters, const struct FString& Description, const struct FString& StartingString, EBPOVRResultSwitch* Result);
	void GetVRKeyboardText(struct FString* Text, EBPOVRResultSwitch* Result);
	void CloseVRKeyboard(EBPOVRResultSwitch* Result);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
