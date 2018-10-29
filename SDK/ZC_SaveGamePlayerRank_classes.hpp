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

// BlueprintGeneratedClass SaveGamePlayerRank.SaveGamePlayerRank_C
// 0x0008 (0x0030 - 0x0028)
class USaveGamePlayerRank_C : public USaveGame
{
public:
	struct FPlayerRankStruct                           PlayerRankStruct;                                         // 0x0028(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SaveGamePlayerRank.SaveGamePlayerRank_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
