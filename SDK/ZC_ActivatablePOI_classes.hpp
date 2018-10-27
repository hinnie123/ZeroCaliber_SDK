#pragma once

// ZeroCaliber (0.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ActivatablePOI.ActivatablePOI_C
// 0x009F (0x0478 - 0x03D9)
class AActivatablePOI_C : public AActivatableBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	class UWidgetComponent*                            PoiWidget;                                                // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PoiAnimInitialTimeline_AnimFloat_C4B8910E4A42190E1E1133B1779D1301;// 0x03F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    PoiAnimInitialTimeline__Direction_C4B8910E4A42190E1E1133B1779D1301;// 0x03F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          PoiAnimInitialTimeline;                                   // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PoiAnimTimeLine_AnimFloatOneWay_7FC5E7F04D86561F8D85379E3FE89314;// 0x0400(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PoiAnimTimeLine_AnimFloat_7FC5E7F04D86561F8D85379E3FE89314;// 0x0404(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    PoiAnimTimeLine__Direction_7FC5E7F04D86561F8D85379E3FE89314;// 0x0408(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0409(0x0007) MISSED OFFSET
	class UTimelineComponent*                          PoiAnimTimeLine;                                          // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       PoiText;                                                  // 0x0418(0x0018) (Edit, BlueprintVisible)
	class UImage*                                      PoiImage;                                                 // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPoiWidget_C*                                PoiWidgetObject;                                          // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FSlateColor                                 PoiImageColor;                                            // 0x0440(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FName>                               POITagsToDeactivate;                                      // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActivatablePOI.ActivatablePOI_C");
		return ptr;
	}


	void DeactivateOtherPOIsByTag();
	void InitializeWidget();
	void UpdatePoiText(const struct FText& InText);
	void UserConstructionScript();
	void PoiAnimTimeLine__FinishedFunc();
	void PoiAnimTimeLine__UpdateFunc();
	void PoiAnimInitialTimeline__FinishedFunc();
	void PoiAnimInitialTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void Activated();
	void Deactivated();
	void ReceiveTick(float* DeltaSeconds);
	void SetDistanceText(float Distance);
	void LoadState();
	void ExecuteUbergraph_ActivatablePOI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
