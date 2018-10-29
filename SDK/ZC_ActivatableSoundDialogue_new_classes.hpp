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

// BlueprintGeneratedClass ActivatableSoundDialogue_new.ActivatableSoundDialogue_new_C
// 0x0035 (0x0435 - 0x0400)
class AActivatableSoundDialogue_new_C : public AActivatableSoundDialogue_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)
	class UDataTable*                                  DialogueDataTable;                                        // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FDialogueStruct>                     DialogueData;                                             // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                DialogueIndex;                                            // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	class AMessageQueueBase_C*                         MessageQueue;                                             // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                RadioVoice;                                               // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VoiceLocation;                                            // 0x0434(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActivatableSoundDialogue_new.ActivatableSoundDialogue_new_C");
		return ptr;
	}


	void GetMessageQueue(class AMessageQueueBase_C** MessageQueue);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Activated();
	void BndEvt__VoiceOverFmod_K2Node_ComponentBoundEvent_0_OnEventStopped__DelegateSignature();
	void Deactivated();
	void ExecuteUbergraph_ActivatableSoundDialogue_new(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
