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

// BlueprintGeneratedClass VRGameInstanceVendetta.VRGameInstanceVendetta_C
// 0x022E (0x0350 - 0x0122)
class UVRGameInstanceVendetta_C : public UVRGameInstance_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0122(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0128(0x0008) (Transient, DuplicateTransient)
	struct FString                                     SaveGameSlotPlayerEquipment;                              // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     SaveGameSlotLevelProgress;                                // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     SaveGameSlotCampaignProgress;                             // 0x0150(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     SaveGameSlotItemProgress;                                 // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     SaveGameSlotPlayerCredits;                                // 0x0170(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     SaveGameSlotOptions;                                      // 0x0180(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLevelProgressStruct                        LevelProgress;                                            // 0x0190(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCampaignProgressStruct                     CampaignProgress;                                         // 0x01E0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FItemProgressStruct                         ItemProgress;                                             // 0x0230(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPlayerCreditsStruct                        PlayerCredits;                                            // 0x0280(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FOptionsStruct2                             Options;                                                  // 0x0284(0x001C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OptionsUpdated;                                           // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               FirstTime;                                                // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02B1(0x0007) MISSED OFFSET
	struct FString                                     SaveGameSlotLevelStatistics;                              // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLevelsStatisticsStruct                     LevelsStatistics;                                         // 0x02C8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPlayerRankStruct                           PlayerRank;                                               // 0x0318(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     SaveGameSlotPlayerRank;                                   // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OptionIsRightHandedChanged;                               // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OptionIsHeadOrientedLocomotionChanged;                    // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VRGameInstanceVendetta.VRGameInstanceVendetta_C");
		return ptr;
	}


	void GetOptionSmoothTurnSpeed(float* SmoothTurnSpeed);
	void SetOptionSmoothTurnSpeed(float SmoothTurnSpeed);
	void GetOptionSnapTurnDegrees(float* SnapTurnDegrees);
	void SetOptionSnapTurnDegrees(float SnapTurnDegrees);
	void GetOptionIsSnapTurn(bool* IsSnapTurn);
	void SetOptionIsSnapTurn(bool IsSnapTurn);
	void GetOptionIsHeadOrientedLocomotion(bool* IsHeadOrientedLocomotion);
	void SetOptionIsHeadOrientedLocomotion(bool IsHeadOrientedLocomotion);
	void GetOptionIsRightHanded(bool* IsRightHanded);
	void SetOptionIsRightHanded(bool IsRightHanded);
	void SetGameOptionSubtitle(bool SubtitleEnabled);
	void GetOutlineStatus(bool* TurnedOn);
	void UpdateOptionOutline(bool OutlineUse);
	void UpdateOptionDifficulty(TEnumAsByte<EDifficulty> Difficulty);
	void LoadPlayerRank(struct FPlayerRankStruct* PlayerRank);
	void SavePlayerRank(const struct FPlayerRankStruct& PlayerRankStruct);
	void LoadLevelsStatistics(struct FLevelsStatisticsStruct* LevelsStatistics);
	void SaveLevelsStatistics(const struct FLevelsStatisticsStruct& LevelsStatisticsStruct);
	void LoadPlayerCredits(struct FPlayerCreditsStruct* PlayerCredits);
	void SavePlayerCredits(const struct FPlayerCreditsStruct& PlayerCreditsStruct);
	void LoadItemProgress(struct FItemProgressStruct* ItemProgress);
	void SaveItemProgress(const struct FItemProgressStruct& ItemProgressStruct);
	void LoadCampaignProgress(struct FCampaignProgressStruct* CampaignProgress);
	void SaveCampaignProgress(const struct FCampaignProgressStruct& Campaign_Progress_Struct);
	void UpdateOptionPlayerHeight(float OptionPlayerHeight);
	void UpdateOptionRenderScale(float OptionRenderScale);
	void UpdateOptionAA(TEnumAsByte<EAAOptions> OptionAA);
	void UpdateOptionQuality(TEnumAsByte<EQualityOptions> OptionQuality);
	void SetGraphicsOptionRenderScale(struct FOptionsStruct2* OptionsStruct);
	void SetGraphicsOptionAA(struct FOptionsStruct2* OptionsStruct);
	void SetGraphicsOptionQuality(struct FOptionsStruct2* OptionsStruct);
	void SaveOptions(const struct FOptionsStruct2& OptionsStruct);
	void LoadOptions(struct FOptionsStruct2* Options);
	void ResetLevel(const struct FString& Level);
	void UpdateLevelProgress(const struct FString& Level, int Checkpoint);
	void LoadLevelProgress(struct FLevelProgressStruct* LevelProgress);
	void SaveLevelProgress(const struct FLevelProgressStruct& LevelProgressStruct);
	void ClearPlayerEquipment();
	void LoadPlayerEquipment(struct FPlayerEquipmentStruct* PlayerEquipment);
	void SavePlayerEquipment(const struct FPlayerEquipmentStruct& PlayerEquipmentStruct);
	void ReceiveInit();
	void ExecuteUbergraph_VRGameInstanceVendetta(int EntryPoint);
	void OptionIsHeadOrientedLocomotionChanged__DelegateSignature(bool IsHeadOrientedLocomotion);
	void OptionIsRightHandedChanged__DelegateSignature(bool IsRightHanded);
	void OptionsUpdated__DelegateSignature(const struct FOptionsStruct2& Options);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
