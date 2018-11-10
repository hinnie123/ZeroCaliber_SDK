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

// BlueprintGeneratedClass ActivatableCampaignProgressSaver.ActivatableCampaignProgressSaver_C
// 0x0068 (0x0441 - 0x03D9)
class AActivatableCampaignProgressSaver_C : public AActivatableBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	class UVRGameInstanceVendetta_C*                   GameInstance;                                             // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, TEnumAsByte<ECampaignStatusEnum>> LevelStates;                                              // 0x03F0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TEnumAsByte<ECampaignStatusEnum>                   CurrentlevelState;                                        // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActivatableCampaignProgressSaver.ActivatableCampaignProgressSaver_C");
		return ptr;
	}


	void UserConstructionScript();
	void Activated();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ActivatableCampaignProgressSaver(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
