#pragma once

// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class FMODStudio.FMODAmbientSound
// 0x0008 (0x0330 - 0x0328)
class AFMODAmbientSound : public AActor
{
public:
	class UFMODAudioComponent*                         AudioComponent;                                           // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.FMODAmbientSound");
		return ptr;
	}

};


// Class FMODStudio.FMODAnimNotifyPlay
// 0x0040 (0x0078 - 0x0038)
class UFMODAnimNotifyPlay : public UAnimNotify
{
public:
	unsigned char                                      bFollow : 1;                                              // 0x0038(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FString                                     AttachName;                                               // 0x0040(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FMODStudio.FMODAnimNotifyPlay.Event

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.FMODAnimNotifyPlay");
		return ptr;
	}

};


// Class FMODStudio.FMODAsset
// 0x0028 (0x0050 - 0x0028)
class UFMODAsset : public UObject
{
public:
	struct FGuid                                       AssetGuid;                                                // 0x0028(0x0010) (IsPlainOldData)
	bool                                               bShowAsAsset;                                             // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0039(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.FMODAsset");
		return ptr;
	}

};


// Class FMODStudio.FMODAudioComponent
// 0x01D0 (0x0410 - 0x0240)
class UFMODAudioComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0240(0x0020) MISSED OFFSET
	TMap<struct FName, float>                          ParameterCache;                                           // 0x0260(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET
	struct FString                                     ProgrammerSoundName;                                      // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bEnableTimelineCallbacks : 1;                             // 0x02C8(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x17];                                      // 0x02C9(0x0017) MISSED OFFSET
	unsigned char                                      bAutoDestroy : 1;                                         // 0x02E0(0x0001)
	unsigned char                                      bStopWhenOwnerDestroyed : 1;                              // 0x02E0(0x0001)
	unsigned char                                      UnknownData03[0x7];                                       // 0x02E1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnEventStopped;                                           // 0x02E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTimelineMarker;                                         // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTimelineBeat;                                           // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FFMODAttenuationDetails                     AttenuationDetails;                                       // 0x0318(0x000C) (Edit, BlueprintVisible)
	struct FFMODOcclusionDetails                       OcclusionDetails;                                         // 0x0324(0x0014) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData04[0xD8];                                      // 0x0338(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.FMODAudioComponent");
		return ptr;
	}


	void TriggerCue();
	void Stop();
	void SetVolume(float Volume);
	void SetTimelinePosition(int Time);
	void SetProperty(TEnumAsByte<EFMODEventProperty> Property, float Value);
	void SetProgrammerSoundName(const struct FString& Value);
	void SetPitch(float Pitch);
	void SetPaused(bool paused);
	void SetParameter(const struct FName& Name, float Value);
	void SetEvent(class UFMODEvent* NewEvent);
	void Release();
	void Play();
	bool IsPlaying();
	int GetTimelinePosition();
	float GetProperty(TEnumAsByte<EFMODEventProperty> Property);
	float GetParameter(const struct FName& Name);
	int GetLength();
};


// Class FMODStudio.FMODBank
// 0x0000 (0x0050 - 0x0050)
class UFMODBank : public UFMODAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.FMODBank");
		return ptr;
	}

};


// Class FMODStudio.FMODBlueprintStatics
// 0x0000 (0x0028 - 0x0028)
class UFMODBlueprintStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.FMODBlueprintStatics");
		return ptr;
	}


	void STATIC_VCASetVolume(class UFMODVCA* Vca, float Volume);
	void STATIC_UnloadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event);
	void STATIC_UnloadBankSampleData(class UFMODBank* Bank);
	void STATIC_UnloadBank(class UFMODBank* Bank);
	void STATIC_SetOutputDriverByName(const struct FString& NewDriverName);
	void STATIC_SetOutputDriverByIndex(int NewDriverIndex);
	class UFMODAudioComponent* STATIC_PlayEventAttached(class UFMODEvent* Event, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay);
	struct FFMODEventInstance STATIC_PlayEventAtLocation(class UObject* WorldContextObject, class UFMODEvent* Event, const struct FTransform& Location, bool bAutoPlay);
	struct FFMODEventInstance STATIC_PlayEvent2D(class UObject* WorldContextObject, class UFMODEvent* Event, bool bAutoPlay);
	void STATIC_MixerSuspend();
	void STATIC_MixerResume();
	void STATIC_LoadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event);
	void STATIC_LoadBankSampleData(class UFMODBank* Bank);
	void STATIC_LoadBank(class UFMODBank* Bank, bool bBlocking, bool bLoadSampleData);
	bool STATIC_IsBankLoaded(class UFMODBank* Bank);
	TArray<struct FString> STATIC_GetOutputDrivers();
	TArray<struct FFMODEventInstance> STATIC_FindEventInstances(class UObject* WorldContextObject, class UFMODEvent* Event);
	class UFMODEvent* STATIC_FindEventByName(const struct FString& Name);
	class UFMODAsset* STATIC_FindAssetByName(const struct FString& Name);
	void STATIC_EventInstanceTriggerCue(const struct FFMODEventInstance& EventInstance);
	void STATIC_EventInstanceStop(const struct FFMODEventInstance& EventInstance);
	void STATIC_EventInstanceSetVolume(const struct FFMODEventInstance& EventInstance, float Volume);
	void STATIC_EventInstanceSetTransform(const struct FFMODEventInstance& EventInstance, const struct FTransform& Location);
	void STATIC_EventInstanceSetProperty(const struct FFMODEventInstance& EventInstance, TEnumAsByte<EFMODEventProperty> Property, float Value);
	void STATIC_EventInstanceSetPitch(const struct FFMODEventInstance& EventInstance, float Pitch);
	void STATIC_EventInstanceSetPaused(const struct FFMODEventInstance& EventInstance, bool paused);
	void STATIC_EventInstanceSetParameter(const struct FFMODEventInstance& EventInstance, const struct FName& Name, float Value);
	void STATIC_EventInstancePlay(const struct FFMODEventInstance& EventInstance);
	bool STATIC_EventInstanceIsValid(const struct FFMODEventInstance& EventInstance);
	float STATIC_EventInstanceGetParameter(const struct FFMODEventInstance& EventInstance, const struct FName& Name);
	void STATIC_BusStopAllEvents(class UFMODBus* Bus, TEnumAsByte<EFMOD_STUDIO_STOP_MODE> stopMode);
	void STATIC_BusSetVolume(class UFMODBus* Bus, float Volume);
	void STATIC_BusSetPaused(class UFMODBus* Bus, bool bPaused);
	void STATIC_BusSetMute(class UFMODBus* Bus, bool bMute);
};


// Class FMODStudio.FMODBus
// 0x0000 (0x0050 - 0x0050)
class UFMODBus : public UFMODAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.FMODBus");
		return ptr;
	}

};


// Class FMODStudio.FMODEvent
// 0x0000 (0x0050 - 0x0050)
class UFMODEvent : public UFMODAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.FMODEvent");
		return ptr;
	}

};


// Class FMODStudio.FMODEventControlSection
// 0x0098 (0x0178 - 0x00E0)
class UFMODEventControlSection : public UMovieSceneSection
{
public:
	struct FFMODEventControlChannel                    ControlKeys;                                              // 0x00E0(0x0098)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.FMODEventControlSection");
		return ptr;
	}

};


// Class FMODStudio.FMODEventControlTrack
// 0x0010 (0x0068 - 0x0058)
class UFMODEventControlTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  ControlSections;                                          // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.FMODEventControlTrack");
		return ptr;
	}

};


// Class FMODStudio.FMODEventParameterTrack
// 0x0010 (0x0068 - 0x0058)
class UFMODEventParameterTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.FMODEventParameterTrack");
		return ptr;
	}

};


// Class FMODStudio.FMODSettings
// 0x00D0 (0x00F8 - 0x0028)
class UFMODSettings : public UObject
{
public:
	bool                                               bLoadAllBanks;                                            // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bLoadAllSampleData;                                       // 0x0029(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableLiveUpdate;                                        // 0x002A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableEditorLiveUpdate;                                  // 0x002B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FDirectoryPath                              BankOutputDirectory;                                      // 0x0030(0x0010) (Edit, Config)
	TEnumAsByte<EFMODSpeakerMode>                      OutputFormat;                                             // 0x0040(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bVol0Virtual;                                             // 0x0041(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	float                                              Vol0VirtualLevel;                                         // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                SampleRate;                                               // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bMatchHardwareSampleRate;                                 // 0x004C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	int                                                RealChannelCount;                                         // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                TotalChannelCount;                                        // 0x0054(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                DSPBufferLength;                                          // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                DSPBufferCount;                                           // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                FileBufferSize;                                           // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                StudioUpdatePeriod;                                       // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     InitialOutputDriverName;                                  // 0x0068(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bLockAllBuses;                                            // 0x0078(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	struct FCustomPoolSizes                            MemoryPoolSizes;                                          // 0x007C(0x0014) (Edit, Config)
	int                                                LiveUpdatePort;                                           // 0x0090(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                EditorLiveUpdatePort;                                     // 0x0094(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FString>                             PluginFiles;                                              // 0x0098(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     ContentBrowserPrefix;                                     // 0x00A8(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     ForcePlatformName;                                        // 0x00B8(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     MasterBankName;                                           // 0x00C8(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     SkipLoadBankName;                                         // 0x00D8(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     WavWriterPath;                                            // 0x00E8(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.FMODSettings");
		return ptr;
	}

};


// Class FMODStudio.FMODSnapshot
// 0x0000 (0x0050 - 0x0050)
class UFMODSnapshot : public UFMODEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.FMODSnapshot");
		return ptr;
	}

};


// Class FMODStudio.FMODSnapshotReverb
// 0x0018 (0x0070 - 0x0058)
class UFMODSnapshotReverb : public UReverbEffect
{
public:
	struct FGuid                                       AssetGuid;                                                // 0x0058(0x0010) (IsPlainOldData)
	bool                                               bShowAsAsset;                                             // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.FMODSnapshotReverb");
		return ptr;
	}

};


// Class FMODStudio.FMODVCA
// 0x0000 (0x0050 - 0x0050)
class UFMODVCA : public UFMODAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.FMODVCA");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
