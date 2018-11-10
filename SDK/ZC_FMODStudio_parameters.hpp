#pragma once

// ZeroCaliber (0.6.0 EA) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FMODStudio.FMODAudioComponent.TriggerCue
struct UFMODAudioComponent_TriggerCue_Params
{
};

// Function FMODStudio.FMODAudioComponent.Stop
struct UFMODAudioComponent_Stop_Params
{
};

// Function FMODStudio.FMODAudioComponent.SetVolume
struct UFMODAudioComponent_SetVolume_Params
{
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FMODStudio.FMODAudioComponent.SetTimelinePosition
struct UFMODAudioComponent_SetTimelinePosition_Params
{
	int                                                Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FMODStudio.FMODAudioComponent.SetProperty
struct UFMODAudioComponent_SetProperty_Params
{
	TEnumAsByte<EFMODEventProperty>                    Property;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FMODStudio.FMODAudioComponent.SetProgrammerSoundName
struct UFMODAudioComponent_SetProgrammerSoundName_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function FMODStudio.FMODAudioComponent.SetPitch
struct UFMODAudioComponent_SetPitch_Params
{
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FMODStudio.FMODAudioComponent.SetPaused
struct UFMODAudioComponent_SetPaused_Params
{
	bool                                               paused;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FMODStudio.FMODAudioComponent.SetParameter
struct UFMODAudioComponent_SetParameter_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FMODStudio.FMODAudioComponent.SetEvent
struct UFMODAudioComponent_SetEvent_Params
{
	class UFMODEvent*                                  NewEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FMODStudio.FMODAudioComponent.Release
struct UFMODAudioComponent_Release_Params
{
};

// Function FMODStudio.FMODAudioComponent.Play
struct UFMODAudioComponent_Play_Params
{
};

// Function FMODStudio.FMODAudioComponent.IsPlaying
struct UFMODAudioComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FMODStudio.FMODAudioComponent.GetTimelinePosition
struct UFMODAudioComponent_GetTimelinePosition_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FMODStudio.FMODAudioComponent.GetProperty
struct UFMODAudioComponent_GetProperty_Params
{
	TEnumAsByte<EFMODEventProperty>                    Property;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FMODStudio.FMODAudioComponent.GetParameter
struct UFMODAudioComponent_GetParameter_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FMODStudio.FMODAudioComponent.GetLength
struct UFMODAudioComponent_GetLength_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.VCASetVolume
struct UFMODBlueprintStatics_VCASetVolume_Params
{
	class UFMODVCA*                                    Vca;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.UnloadEventSampleData
struct UFMODBlueprintStatics_UnloadEventSampleData_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UFMODEvent*                                  Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.UnloadBankSampleData
struct UFMODBlueprintStatics_UnloadBankSampleData_Params
{
	class UFMODBank*                                   Bank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.UnloadBank
struct UFMODBlueprintStatics_UnloadBank_Params
{
	class UFMODBank*                                   Bank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByName
struct UFMODBlueprintStatics_SetOutputDriverByName_Params
{
	struct FString                                     NewDriverName;                                            // (Parm, ZeroConstructor)
};

// Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByIndex
struct UFMODBlueprintStatics_SetOutputDriverByIndex_Params
{
	int                                                NewDriverIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.PlayEventAttached
struct UFMODBlueprintStatics_PlayEventAttached_Params
{
	class UFMODEvent*                                  Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenAttachedToDestroyed;                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoPlay;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UFMODAudioComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.PlayEventAtLocation
struct UFMODBlueprintStatics_PlayEventAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UFMODEvent*                                  Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bAutoPlay;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFMODEventInstance                          ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.PlayEvent2D
struct UFMODBlueprintStatics_PlayEvent2D_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UFMODEvent*                                  Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoPlay;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFMODEventInstance                          ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.MixerSuspend
struct UFMODBlueprintStatics_MixerSuspend_Params
{
};

// Function FMODStudio.FMODBlueprintStatics.MixerResume
struct UFMODBlueprintStatics_MixerResume_Params
{
};

// Function FMODStudio.FMODBlueprintStatics.LoadEventSampleData
struct UFMODBlueprintStatics_LoadEventSampleData_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UFMODEvent*                                  Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.LoadBankSampleData
struct UFMODBlueprintStatics_LoadBankSampleData_Params
{
	class UFMODBank*                                   Bank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.LoadBank
struct UFMODBlueprintStatics_LoadBank_Params
{
	class UFMODBank*                                   Bank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBlocking;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoadSampleData;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.IsBankLoaded
struct UFMODBlueprintStatics_IsBankLoaded_Params
{
	class UFMODBank*                                   Bank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.GetOutputDrivers
struct UFMODBlueprintStatics_GetOutputDrivers_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FMODStudio.FMODBlueprintStatics.FindEventInstances
struct UFMODBlueprintStatics_FindEventInstances_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UFMODEvent*                                  Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFMODEventInstance>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function FMODStudio.FMODBlueprintStatics.FindEventByName
struct UFMODBlueprintStatics_FindEventByName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class UFMODEvent*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.FindAssetByName
struct UFMODBlueprintStatics_FindAssetByName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class UFMODAsset*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceTriggerCue
struct UFMODBlueprintStatics_EventInstanceTriggerCue_Params
{
	struct FFMODEventInstance                          EventInstance;                                            // (Parm, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceStop
struct UFMODBlueprintStatics_EventInstanceStop_Params
{
	struct FFMODEventInstance                          EventInstance;                                            // (Parm, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetVolume
struct UFMODBlueprintStatics_EventInstanceSetVolume_Params
{
	struct FFMODEventInstance                          EventInstance;                                            // (Parm, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetTransform
struct UFMODBlueprintStatics_EventInstanceSetTransform_Params
{
	struct FFMODEventInstance                          EventInstance;                                            // (Parm, IsPlainOldData)
	struct FTransform                                  Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetProperty
struct UFMODBlueprintStatics_EventInstanceSetProperty_Params
{
	struct FFMODEventInstance                          EventInstance;                                            // (Parm, IsPlainOldData)
	TEnumAsByte<EFMODEventProperty>                    Property;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPitch
struct UFMODBlueprintStatics_EventInstanceSetPitch_Params
{
	struct FFMODEventInstance                          EventInstance;                                            // (Parm, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPaused
struct UFMODBlueprintStatics_EventInstanceSetPaused_Params
{
	struct FFMODEventInstance                          EventInstance;                                            // (Parm, IsPlainOldData)
	bool                                               paused;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetParameter
struct UFMODBlueprintStatics_EventInstanceSetParameter_Params
{
	struct FFMODEventInstance                          EventInstance;                                            // (Parm, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstancePlay
struct UFMODBlueprintStatics_EventInstancePlay_Params
{
	struct FFMODEventInstance                          EventInstance;                                            // (Parm, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceIsValid
struct UFMODBlueprintStatics_EventInstanceIsValid_Params
{
	struct FFMODEventInstance                          EventInstance;                                            // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameter
struct UFMODBlueprintStatics_EventInstanceGetParameter_Params
{
	struct FFMODEventInstance                          EventInstance;                                            // (Parm, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.BusStopAllEvents
struct UFMODBlueprintStatics_BusStopAllEvents_Params
{
	class UFMODBus*                                    Bus;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFMOD_STUDIO_STOP_MODE>                stopMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.BusSetVolume
struct UFMODBlueprintStatics_BusSetVolume_Params
{
	class UFMODBus*                                    Bus;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.BusSetPaused
struct UFMODBlueprintStatics_BusSetPaused_Params
{
	class UFMODBus*                                    Bus;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPaused;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FMODStudio.FMODBlueprintStatics.BusSetMute
struct UFMODBlueprintStatics_BusSetMute_Params
{
	class UFMODBus*                                    Bus;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMute;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
