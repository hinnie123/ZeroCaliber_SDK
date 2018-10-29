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

// BlueprintGeneratedClass ActivatableLevelCompleted.ActivatableLevelCompleted_C
// 0x017F (0x0558 - 0x03D9)
class AActivatableLevelCompleted_C : public AActivatableBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        PlayerLocation;                                           // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            WidgetUnlockedLevels;                                     // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            WidgetUnlockedItems;                                      // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            WidgetLevelCompleted;                                     // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_2_WidgetAnim_8EA94D3940ECB11AC452B58F4F0A3A89;   // 0x0408(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_8EA94D3940ECB11AC452B58F4F0A3A89;   // 0x040C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x040D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_1_WidgetAnim_578485C245442AC8002D9AAFB82ECE8E;   // 0x0418(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_578485C245442AC8002D9AAFB82ECE8E;   // 0x041C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x041D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_PlayerRank_A11E4ED94439C54352BE158B3C4182BF;   // 0x0428(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_WidgetValues_A11E4ED94439C54352BE158B3C4182BF; // 0x042C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_WidgetAnim_A11E4ED94439C54352BE158B3C4182BF;   // 0x0430(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_TimeDilation_A11E4ED94439C54352BE158B3C4182BF; // 0x0434(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_A11E4ED94439C54352BE158B3C4182BF;   // 0x0438(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UClass*>                              ItemsUnlocked;                                            // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector                                     WidgetLevelCompletedScaleOriginal;                        // 0x0458(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	TArray<struct FTextImage>                          ItemsTextImage;                                           // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                ItemsUnlockedIndex;                                       // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x047C(0x0004) MISSED OFFSET
	class UVRGameInstanceVendetta_C*                   VRGameInstanceVendetta;                                   // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               LevelsUnlocked;                                           // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FTextImage>                          LevelsTextImage;                                          // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       NextLevel;                                                // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CompletionTimeMinutesBase;                                // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CompletionTimeValue;                                      // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CompletionTimeValueLoaded;                                // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CompletionTimeScore;                                      // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UVRGameInstanceVendetta_C*                   VRGameInstance;                                           // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AccuracyFiredLoaded;                                      // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AccuracyHitLoaded;                                        // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AccuracyValue;                                            // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AccuracyScore;                                            // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                KillsLoaded;                                              // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                KillsValue;                                               // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                KillsScore;                                               // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HitHeadLoaded;                                            // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HitHeadValue;                                             // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HitHeadScore;                                             // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OverallScore;                                             // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                XpLoaded;                                                 // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentRank;                                              // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x04FC(0x0004) MISSED OFFSET
	struct FText                                       CurrentRankName;                                          // 0x0500(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UObject*                                     CurrentRankImage;                                         // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentRankXpRequired;                                    // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NextRankXpRequired;                                       // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentXp;                                                // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentXpPercent;                                         // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                TeleportFadeColor;                                        // 0x0530(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeDuration;                                             // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Distance_From_Widget;                                     // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APlayerEquipmentSaver_C*                     PlayerEquipmentSaver;                                     // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ALevelData_C*                                LevelData;                                                // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActivatableLevelCompleted.ActivatableLevelCompleted_C");
		return ptr;
	}


	void CalculateRotation(const struct FVector& VectorA, const struct FVector& VectorB, float* ReturnRot);
	void ReleaseWeapons(class APlayerPawnCharacter_C* PlayerPawnCharacter);
	void TeleportPlayerToFront();
	void SavePlayerRank();
	void PlayerXpUpdate(float Alpha);
	void InitializePlayerRank();
	void OverlallScoreUpdate();
	void KillsUpdate(float Alpha);
	void HitHeadUpdate(float Alpha);
	void AccuracyUpdate(float Alpha);
	void LoadLevelStatistics();
	void GetVRGameInstance(class UVRGameInstanceVendetta_C** VRGameInstance);
	void SaveLevelStatistics();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void OnLoaded_431C2FD944BE774A3C39FCB7797A62E2(class UObject* Loaded);
	void Activated();
	void ReceiveBeginPlay();
	void ShowUnlockedItems();
	void OnWidgetUnlockedItemsButtonOk();
	void ShowUnlockedLevels();
	void OnWidgetUnlockedILevelsButtonOk();
	void OnButtonMenuReleased();
	void OnButtonNextLevelReleased();
	void TeleportTo(const struct FVector& Location, const struct FRotator& Rotation, class UVRBaseCharacterMovementComponent* Character_Movement);
	void LevelDataInitialized(class ALevelData_C* LevelData);
	void ExecuteUbergraph_ActivatableLevelCompleted(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
