#pragma once

// ZeroCaliber (0.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.SetSuspendRendering
struct UOpenVRExpansionFunctionLibrary_SetSuspendRendering_Params
{
	bool                                               bSuspendRendering;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.SetSkyboxOverride_LatLongStereoPair
struct UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair_Params
{
	class UTexture2D*                                  LatLongSkyboxL;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  LatLongSkyboxR;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.SetSkyboxOverride_LatLong
struct UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong_Params
{
	class UTexture2D*                                  LatLongSkybox;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.SetSkyboxOverride
struct UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Params
{
	class UTexture*                                    tFront;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  tBack;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    tLeft;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    tRight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    tTop;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    tBottom;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.ReleaseVRCamera
struct UOpenVRExpansionFunctionLibrary_ReleaseVRCamera_Params
{
	struct FBPOpenVRCameraHandle                       CameraHandle;                                             // (Parm, OutParm, ReferenceParm)
	EBPOVRResultSwitch                                 Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.IsValid
struct UOpenVRExpansionFunctionLibrary_IsValid_Params
{
	struct FBPOpenVRCameraHandle                       CameraHandle;                                             // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.IsOpenVRDeviceConnected
struct UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected_Params
{
	int                                                DeviceIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.HasVRCamera
struct UOpenVRExpansionFunctionLibrary_HasVRCamera_Params
{
	EOpenVRCameraFrameType                             FrameType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyUInt64
struct UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64_Params
{
	EVRDeviceProperty_UInt64                           PropertyToRetrieve;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DeviceID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UInt64Value;                                              // (Parm, OutParm, ZeroConstructor)
	EBPOVRResultSwitch                                 Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyString
struct UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString_Params
{
	EVRDeviceProperty_String                           PropertyToRetrieve;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DeviceID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     StringValue;                                              // (Parm, OutParm, ZeroConstructor)
	EBPOVRResultSwitch                                 Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyMatrix34AsTransform
struct UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform_Params
{
	EVRDeviceProperty_Matrix34                         PropertyToRetrieve;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DeviceID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  TransformValue;                                           // (Parm, OutParm, IsPlainOldData)
	EBPOVRResultSwitch                                 Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyInt32
struct UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32_Params
{
	EVRDeviceProperty_Int32                            PropertyToRetrieve;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DeviceID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IntValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EBPOVRResultSwitch                                 Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyFloat
struct UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat_Params
{
	EVRDeviceProperty_Float                            PropertyToRetrieve;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DeviceID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EBPOVRResultSwitch                                 Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyBool
struct UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool_Params
{
	EVRDeviceProperty_Bool                             PropertyToRetrieve;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DeviceID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BoolValue;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EBPOVRResultSwitch                                 Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDeviceModelAndTexture
struct UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EBPOpenVRTrackedDeviceClass                        DeviceType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UProceduralMeshComponent*>            ProceduralMeshComponentsToFill;                           // (Parm, ZeroConstructor)
	bool                                               bCreateCollision;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	EAsyncBlueprintResultSwitch                        Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OverrideDeviceID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRCameraFrame
struct UOpenVRExpansionFunctionLibrary_GetVRCameraFrame_Params
{
	struct FBPOpenVRCameraHandle                       CameraHandle;                                             // (Parm, OutParm, ReferenceParm)
	EOpenVRCameraFrameType                             FrameType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EBPOVRResultSwitch                                 Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  TargetRenderTarget;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetOpenVRHMDType
struct UOpenVRExpansionFunctionLibrary_GetOpenVRHMDType_Params
{
	EBPOpenVRHMDDeviceType                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetOpenVRDeviceType
struct UOpenVRExpansionFunctionLibrary_GetOpenVRDeviceType_Params
{
	int                                                DeviceIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EBPOpenVRTrackedDeviceClass                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetOpenVRDevicesByType
struct UOpenVRExpansionFunctionLibrary_GetOpenVRDevicesByType_Params
{
	EBPOpenVRTrackedDeviceClass                        TypeToRetreive;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        FoundIndexs;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetOpenVRDevices
struct UOpenVRExpansionFunctionLibrary_GetOpenVRDevices_Params
{
	TArray<EBPOpenVRTrackedDeviceClass>                FoundDevices;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetCurrentVRGripAlpha
struct UOpenVRExpansionFunctionLibrary_GetCurrentVRGripAlpha_Params
{
	float                                              VRGridAlpha;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetCurrentHMDFadeColor
struct UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor_Params
{
	struct FColor                                      ColorOut;                                                 // (Parm, OutParm, IsPlainOldData)
	bool                                               bBackground;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.FadeVRGrid
struct UOpenVRExpansionFunctionLibrary_FadeVRGrid_Params
{
	float                                              fSeconds;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFadeIn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.FadeHMDToColor
struct UOpenVRExpansionFunctionLibrary_FadeHMDToColor_Params
{
	float                                              fSeconds;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // (Parm, IsPlainOldData)
	bool                                               bBackground;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.CreateCameraTexture2D
struct UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D_Params
{
	struct FBPOpenVRCameraHandle                       CameraHandle;                                             // (Parm, OutParm, ReferenceParm)
	EOpenVRCameraFrameType                             FrameType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EBPOVRResultSwitch                                 Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.ClearSkyboxOverride
struct UOpenVRExpansionFunctionLibrary_ClearSkyboxOverride_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.AcquireVRCamera
struct UOpenVRExpansionFunctionLibrary_AcquireVRCamera_Params
{
	struct FBPOpenVRCameraHandle                       CameraHandle;                                             // (Parm, OutParm)
	EBPOVRResultSwitch                                 Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.SteamVRKeyboardComponent.ReOpenVRKeyboardForUser
struct USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Params
{
	bool                                               bIsForPassword;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMultiline;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMinimalMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRightHand;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxCharacters;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Description;                                              // (Parm, ZeroConstructor)
	struct FString                                     StartingString;                                           // (Parm, ZeroConstructor)
	EBPOVRResultSwitch                                 Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.SteamVRKeyboardComponent.OpenVRKeyboard
struct USteamVRKeyboardComponent_OpenVRKeyboard_Params
{
	bool                                               bIsForPassword;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMultiline;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMinimalMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRightHand;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxCharacters;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Description;                                              // (Parm, ZeroConstructor)
	struct FString                                     StartingString;                                           // (Parm, ZeroConstructor)
	EBPOVRResultSwitch                                 Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.SteamVRKeyboardComponent.GetVRKeyboardText
struct USteamVRKeyboardComponent_GetVRKeyboardText_Params
{
	struct FString                                     Text;                                                     // (Parm, OutParm, ZeroConstructor)
	EBPOVRResultSwitch                                 Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OpenVRExpansionPlugin.SteamVRKeyboardComponent.CloseVRKeyboard
struct USteamVRKeyboardComponent_CloseVRKeyboard_Params
{
	EBPOVRResultSwitch                                 Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
