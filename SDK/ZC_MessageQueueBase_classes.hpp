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

// BlueprintGeneratedClass MessageQueueBase.MessageQueueBase_C
// 0x0070 (0x0398 - 0x0328)
class AMessageQueueBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FMessageStruct>                      Messages;                                                 // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsCurrentlyShowingMessage;                                // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0349(0x0007) MISSED OFFSET
	struct FText                                       EmptyText;                                                // 0x0350(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                EndMessageHandler;                                        // 0x0368(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UPlayerHudWidget_C*                          PlayerHudWidget;                                          // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<struct FMessageStruct>                      Subtitles;                                                // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsCurrentlyShowingSubtitle;                               // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	struct FTimerHandle                                EndSubtitleHandler;                                       // 0x0390(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MessageQueueBase.MessageQueueBase_C");
		return ptr;
	}


	void AddSubtitleInstantly(const struct FMessageStruct& Subtitle, bool ClearQueue);
	void AddSubtitle(const struct FMessageStruct& Subtitle);
	bool HasMoreSubtitles();
	void SetSubtitle(const struct FText& InText, const struct FLinearColor& Specified_Color);
	void SetMessage(const struct FText& InText, const struct FLinearColor& Specified_Color);
	void AddMessageInstantly(const struct FMessageStruct& Message, bool ClearQueue);
	bool HasMoreMessages();
	void AddMessage(const struct FMessageStruct& Message);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ShowNextMessage();
	void EndMessage();
	void ShowNextSubtitle();
	void EndSubtitle();
	void OnSubtitleOptionChange(const struct FOptionsStruct2& Options);
	void ExecuteUbergraph_MessageQueueBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
