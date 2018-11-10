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

// BlueprintGeneratedClass SaveGameCampaignProgress.SaveGameCampaignProgress_C
// 0x0050 (0x0078 - 0x0028)
class USaveGameCampaignProgress_C : public USaveGame
{
public:
	struct FCampaignProgressStruct                     CampaignProgressStruct;                                   // 0x0028(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SaveGameCampaignProgress.SaveGameCampaignProgress_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
