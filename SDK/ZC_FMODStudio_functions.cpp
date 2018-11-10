// ZeroCaliber (0.6.0 EA) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FMODStudio.FMODAudioComponent.TriggerCue
// (Final, Native, Public, BlueprintCallable)

void UFMODAudioComponent::TriggerCue()
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.TriggerCue");

	UFMODAudioComponent_TriggerCue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODAudioComponent.Stop
// (Final, Native, Public, BlueprintCallable)

void UFMODAudioComponent::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.Stop");

	UFMODAudioComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODAudioComponent.SetVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void UFMODAudioComponent::SetVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetVolume");

	UFMODAudioComponent_SetVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODAudioComponent.SetTimelinePosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UFMODAudioComponent::SetTimelinePosition(int Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetTimelinePosition");

	UFMODAudioComponent_SetTimelinePosition_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODAudioComponent.SetProperty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EFMODEventProperty> Property                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UFMODAudioComponent::SetProperty(TEnumAsByte<EFMODEventProperty> Property, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetProperty");

	UFMODAudioComponent_SetProperty_Params params;
	params.Property = Property;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODAudioComponent.SetProgrammerSoundName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor)

void UFMODAudioComponent::SetProgrammerSoundName(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetProgrammerSoundName");

	UFMODAudioComponent_SetProgrammerSoundName_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODAudioComponent.SetPitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)

void UFMODAudioComponent::SetPitch(float Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetPitch");

	UFMODAudioComponent_SetPitch_Params params;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODAudioComponent.SetPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           paused                         (Parm, ZeroConstructor, IsPlainOldData)

void UFMODAudioComponent::SetPaused(bool paused)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetPaused");

	UFMODAudioComponent_SetPaused_Params params;
	params.paused = paused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODAudioComponent.SetParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UFMODAudioComponent::SetParameter(const struct FName& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetParameter");

	UFMODAudioComponent_SetParameter_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODAudioComponent.SetEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFMODEvent*              NewEvent                       (Parm, ZeroConstructor, IsPlainOldData)

void UFMODAudioComponent::SetEvent(class UFMODEvent* NewEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetEvent");

	UFMODAudioComponent_SetEvent_Params params;
	params.NewEvent = NewEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODAudioComponent.Release
// (Final, Native, Public, BlueprintCallable)

void UFMODAudioComponent::Release()
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.Release");

	UFMODAudioComponent_Release_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODAudioComponent.Play
// (Final, Native, Public, BlueprintCallable)

void UFMODAudioComponent::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.Play");

	UFMODAudioComponent_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODAudioComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFMODAudioComponent::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.IsPlaying");

	UFMODAudioComponent_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FMODStudio.FMODAudioComponent.GetTimelinePosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UFMODAudioComponent::GetTimelinePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.GetTimelinePosition");

	UFMODAudioComponent_GetTimelinePosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FMODStudio.FMODAudioComponent.GetProperty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EFMODEventProperty> Property                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFMODAudioComponent::GetProperty(TEnumAsByte<EFMODEventProperty> Property)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.GetProperty");

	UFMODAudioComponent_GetProperty_Params params;
	params.Property = Property;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FMODStudio.FMODAudioComponent.GetParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFMODAudioComponent::GetParameter(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.GetParameter");

	UFMODAudioComponent_GetParameter_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FMODStudio.FMODAudioComponent.GetLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UFMODAudioComponent::GetLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.GetLength");

	UFMODAudioComponent_GetLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.VCASetVolume
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFMODVCA*                Vca                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void UFMODBlueprintStatics::STATIC_VCASetVolume(class UFMODVCA* Vca, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.VCASetVolume");

	UFMODBlueprintStatics_VCASetVolume_Params params;
	params.Vca = Vca;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODBlueprintStatics.UnloadEventSampleData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UFMODEvent*              Event                          (Parm, ZeroConstructor, IsPlainOldData)

void UFMODBlueprintStatics::STATIC_UnloadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.UnloadEventSampleData");

	UFMODBlueprintStatics_UnloadEventSampleData_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODBlueprintStatics.UnloadBankSampleData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFMODBank*               Bank                           (Parm, ZeroConstructor, IsPlainOldData)

void UFMODBlueprintStatics::STATIC_UnloadBankSampleData(class UFMODBank* Bank)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.UnloadBankSampleData");

	UFMODBlueprintStatics_UnloadBankSampleData_Params params;
	params.Bank = Bank;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODBlueprintStatics.UnloadBank
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFMODBank*               Bank                           (Parm, ZeroConstructor, IsPlainOldData)

void UFMODBlueprintStatics::STATIC_UnloadBank(class UFMODBank* Bank)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.UnloadBank");

	UFMODBlueprintStatics_UnloadBank_Params params;
	params.Bank = Bank;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 NewDriverName                  (Parm, ZeroConstructor)

void UFMODBlueprintStatics::STATIC_SetOutputDriverByName(const struct FString& NewDriverName)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByName");

	UFMODBlueprintStatics_SetOutputDriverByName_Params params;
	params.NewDriverName = NewDriverName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByIndex
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            NewDriverIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void UFMODBlueprintStatics::STATIC_SetOutputDriverByIndex(int NewDriverIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByIndex");

	UFMODBlueprintStatics_SetOutputDriverByIndex_Params params;
	params.NewDriverIndex = NewDriverIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODBlueprintStatics.PlayEventAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UFMODEvent*              Event                          (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// TEnumAsByte<EAttachLocation>   LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoPlay                      (Parm, ZeroConstructor, IsPlainOldData)
// class UFMODAudioComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFMODAudioComponent* UFMODBlueprintStatics::STATIC_PlayEventAttached(class UFMODEvent* Event, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.PlayEventAttached");

	UFMODBlueprintStatics_PlayEventAttached_Params params;
	params.Event = Event;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.LocationType = LocationType;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.bAutoPlay = bAutoPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.PlayEventAtLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UFMODEvent*              Event                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bAutoPlay                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FFMODEventInstance      ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FFMODEventInstance UFMODBlueprintStatics::STATIC_PlayEventAtLocation(class UObject* WorldContextObject, class UFMODEvent* Event, const struct FTransform& Location, bool bAutoPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.PlayEventAtLocation");

	UFMODBlueprintStatics_PlayEventAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Event = Event;
	params.Location = Location;
	params.bAutoPlay = bAutoPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.PlayEvent2D
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UFMODEvent*              Event                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoPlay                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FFMODEventInstance      ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FFMODEventInstance UFMODBlueprintStatics::STATIC_PlayEvent2D(class UObject* WorldContextObject, class UFMODEvent* Event, bool bAutoPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.PlayEvent2D");

	UFMODBlueprintStatics_PlayEvent2D_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Event = Event;
	params.bAutoPlay = bAutoPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.MixerSuspend
// (Final, Native, Static, Public, BlueprintCallable)

void UFMODBlueprintStatics::STATIC_MixerSuspend()
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.MixerSuspend");

	UFMODBlueprintStatics_MixerSuspend_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODBlueprintStatics.MixerResume
// (Final, Native, Static, Public, BlueprintCallable)

void UFMODBlueprintStatics::STATIC_MixerResume()
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.MixerResume");

	UFMODBlueprintStatics_MixerResume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODBlueprintStatics.LoadEventSampleData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UFMODEvent*              Event                          (Parm, ZeroConstructor, IsPlainOldData)

void UFMODBlueprintStatics::STATIC_LoadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.LoadEventSampleData");

	UFMODBlueprintStatics_LoadEventSampleData_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODBlueprintStatics.LoadBankSampleData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFMODBank*               Bank                           (Parm, ZeroConstructor, IsPlainOldData)

void UFMODBlueprintStatics::STATIC_LoadBankSampleData(class UFMODBank* Bank)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.LoadBankSampleData");

	UFMODBlueprintStatics_LoadBankSampleData_Params params;
	params.Bank = Bank;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODBlueprintStatics.LoadBank
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFMODBank*               Bank                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBlocking                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoadSampleData                (Parm, ZeroConstructor, IsPlainOldData)

void UFMODBlueprintStatics::STATIC_LoadBank(class UFMODBank* Bank, bool bBlocking, bool bLoadSampleData)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.LoadBank");

	UFMODBlueprintStatics_LoadBank_Params params;
	params.Bank = Bank;
	params.bBlocking = bBlocking;
	params.bLoadSampleData = bLoadSampleData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODBlueprintStatics.IsBankLoaded
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFMODBank*               Bank                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFMODBlueprintStatics::STATIC_IsBankLoaded(class UFMODBank* Bank)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.IsBankLoaded");

	UFMODBlueprintStatics_IsBankLoaded_Params params;
	params.Bank = Bank;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.GetOutputDrivers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UFMODBlueprintStatics::STATIC_GetOutputDrivers()
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.GetOutputDrivers");

	UFMODBlueprintStatics_GetOutputDrivers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.FindEventInstances
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UFMODEvent*              Event                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FFMODEventInstance> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FFMODEventInstance> UFMODBlueprintStatics::STATIC_FindEventInstances(class UObject* WorldContextObject, class UFMODEvent* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.FindEventInstances");

	UFMODBlueprintStatics_FindEventInstances_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.FindEventByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// class UFMODEvent*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFMODEvent* UFMODBlueprintStatics::STATIC_FindEventByName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.FindEventByName");

	UFMODBlueprintStatics_FindEventByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.FindAssetByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// class UFMODAsset*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFMODAsset* UFMODBlueprintStatics::STATIC_FindAssetByName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.FindAssetByName");

	UFMODBlueprintStatics_FindAssetByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceTriggerCue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (Parm, IsPlainOldData)

void UFMODBlueprintStatics::STATIC_EventInstanceTriggerCue(const struct FFMODEventInstance& EventInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceTriggerCue");

	UFMODBlueprintStatics_EventInstanceTriggerCue_Params params;
	params.EventInstance = EventInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceStop
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (Parm, IsPlainOldData)

void UFMODBlueprintStatics::STATIC_EventInstanceStop(const struct FFMODEventInstance& EventInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceStop");

	UFMODBlueprintStatics_EventInstanceStop_Params params;
	params.EventInstance = EventInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetVolume
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (Parm, IsPlainOldData)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void UFMODBlueprintStatics::STATIC_EventInstanceSetVolume(const struct FFMODEventInstance& EventInstance, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetVolume");

	UFMODBlueprintStatics_EventInstanceSetVolume_Params params;
	params.EventInstance = EventInstance;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (Parm, IsPlainOldData)
// struct FTransform              Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UFMODBlueprintStatics::STATIC_EventInstanceSetTransform(const struct FFMODEventInstance& EventInstance, const struct FTransform& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetTransform");

	UFMODBlueprintStatics_EventInstanceSetTransform_Params params;
	params.EventInstance = EventInstance;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetProperty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (Parm, IsPlainOldData)
// TEnumAsByte<EFMODEventProperty> Property                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UFMODBlueprintStatics::STATIC_EventInstanceSetProperty(const struct FFMODEventInstance& EventInstance, TEnumAsByte<EFMODEventProperty> Property, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetProperty");

	UFMODBlueprintStatics_EventInstanceSetProperty_Params params;
	params.EventInstance = EventInstance;
	params.Property = Property;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPitch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (Parm, IsPlainOldData)
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)

void UFMODBlueprintStatics::STATIC_EventInstanceSetPitch(const struct FFMODEventInstance& EventInstance, float Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPitch");

	UFMODBlueprintStatics_EventInstanceSetPitch_Params params;
	params.EventInstance = EventInstance;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPaused
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (Parm, IsPlainOldData)
// bool                           paused                         (Parm, ZeroConstructor, IsPlainOldData)

void UFMODBlueprintStatics::STATIC_EventInstanceSetPaused(const struct FFMODEventInstance& EventInstance, bool paused)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPaused");

	UFMODBlueprintStatics_EventInstanceSetPaused_Params params;
	params.EventInstance = EventInstance;
	params.paused = paused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetParameter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (Parm, IsPlainOldData)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UFMODBlueprintStatics::STATIC_EventInstanceSetParameter(const struct FFMODEventInstance& EventInstance, const struct FName& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetParameter");

	UFMODBlueprintStatics_EventInstanceSetParameter_Params params;
	params.EventInstance = EventInstance;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODBlueprintStatics.EventInstancePlay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (Parm, IsPlainOldData)

void UFMODBlueprintStatics::STATIC_EventInstancePlay(const struct FFMODEventInstance& EventInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstancePlay");

	UFMODBlueprintStatics_EventInstancePlay_Params params;
	params.EventInstance = EventInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceIsValid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFMODBlueprintStatics::STATIC_EventInstanceIsValid(const struct FFMODEventInstance& EventInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceIsValid");

	UFMODBlueprintStatics_EventInstanceIsValid_Params params;
	params.EventInstance = EventInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFMODEventInstance      EventInstance                  (Parm, IsPlainOldData)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFMODBlueprintStatics::STATIC_EventInstanceGetParameter(const struct FFMODEventInstance& EventInstance, const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameter");

	UFMODBlueprintStatics_EventInstanceGetParameter_Params params;
	params.EventInstance = EventInstance;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FMODStudio.FMODBlueprintStatics.BusStopAllEvents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFMODBus*                Bus                            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFMOD_STUDIO_STOP_MODE> stopMode                       (Parm, ZeroConstructor, IsPlainOldData)

void UFMODBlueprintStatics::STATIC_BusStopAllEvents(class UFMODBus* Bus, TEnumAsByte<EFMOD_STUDIO_STOP_MODE> stopMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.BusStopAllEvents");

	UFMODBlueprintStatics_BusStopAllEvents_Params params;
	params.Bus = Bus;
	params.stopMode = stopMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODBlueprintStatics.BusSetVolume
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFMODBus*                Bus                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void UFMODBlueprintStatics::STATIC_BusSetVolume(class UFMODBus* Bus, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.BusSetVolume");

	UFMODBlueprintStatics_BusSetVolume_Params params;
	params.Bus = Bus;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODBlueprintStatics.BusSetPaused
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFMODBus*                Bus                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPaused                        (Parm, ZeroConstructor, IsPlainOldData)

void UFMODBlueprintStatics::STATIC_BusSetPaused(class UFMODBus* Bus, bool bPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.BusSetPaused");

	UFMODBlueprintStatics_BusSetPaused_Params params;
	params.Bus = Bus;
	params.bPaused = bPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FMODStudio.FMODBlueprintStatics.BusSetMute
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFMODBus*                Bus                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMute                          (Parm, ZeroConstructor, IsPlainOldData)

void UFMODBlueprintStatics::STATIC_BusSetMute(class UFMODBus* Bus, bool bMute)
{
	static auto fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.BusSetMute");

	UFMODBlueprintStatics_BusSetMute_Params params;
	params.Bus = Bus;
	params.bMute = bMute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
