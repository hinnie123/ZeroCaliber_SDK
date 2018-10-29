#pragma once

// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct CampaignProgressStruct.CampaignProgressStruct
// 0x0050
struct FCampaignProgressStruct
{
	TMap<struct FName, TEnumAsByte<ECampaignStatusEnum>> LevelStatus_11_721C06B14A46B55C4A1BD68BC26DF70C;          // 0x0000(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
