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

// BlueprintGeneratedClass LevelSelectorActor.LevelSelectorActor_C
// 0x00B0 (0x03D8 - 0x0328)
class ALevelSelectorActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Background;                                               // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            LevelDetails;                                             // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            LevelPoints;                                              // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ScaleDetailsPanelUp_NewTrack_0_B411B7994D4540D0A88CAA8E72B4F971;// 0x0358(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScaleDetailsPanelUp__Direction_B411B7994D4540D0A88CAA8E72B4F971;// 0x035C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x035D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScaleDetailsPanelUp;                                      // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ScaleDetailsPanelDown_NewTrack_0_C438F4CB4D96F79FEA734292FDCFEEC0;// 0x0368(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScaleDetailsPanelDown__Direction_C438F4CB4D96F79FEA734292FDCFEEC0;// 0x036C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScaleDetailsPanelDown;                                    // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FLevelLoaderStruct>                  CampaignDataStruct;                                       // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UCampaignDetailsWidget_C*                    CampaignDetailWidget;                                     // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              LevelDetailsOriginalXPos;                                 // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              XPos;                                                     // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  LevelLoaderDataTable;                                     // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DetailPanelTempXpos;                                      // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DetailPanelTempScale;                                     // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCampaignWidget_C*                           LevelWidget;                                              // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsLevelDetailsOpened;                                     // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCalledByOpeningAnother;                                 // 0x03B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03B2(0x0002) MISSED OFFSET
	float                                              LevelIndicatorScale;                                      // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UCampaignWidget_C*>                   Campaigns;                                                // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                      LevelSelectorActor;                                       // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UScrollableLevelSelectorWidget_C*            ScrollableLevelSelector;                                  // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LevelSelectorActor.LevelSelectorActor_C");
		return ptr;
	}


	void InitCampaignsStatus();
	void GetCampaignStatus(TEnumAsByte<ECampaignStatusEnum>* Status);
	void LevelDetailsScalingAnim(float Alpha, float PosStart, float PosEnd, float ScaleStart, float ScaleEnd);
	void SetLevelDetailsPos(const struct FVector2D& Position);
	void LoadDataTables(class UDataTable* DataTable);
	void UserConstructionScript();
	void ScaleDetailsPanelUp__FinishedFunc();
	void ScaleDetailsPanelUp__UpdateFunc();
	void ScaleDetailsPanelDown__FinishedFunc();
	void ScaleDetailsPanelDown__UpdateFunc();
	void ReceiveBeginPlay();
	void SpawningCampaign();
	void LevelOnReleasedEvent(class UCampaignWidget_C* LevelWidget);
	void LevelDetailBackBtnOnReleased();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ExecuteUbergraph_LevelSelectorActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
