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

// BlueprintGeneratedClass SaveGameLevelsStatistics.SaveGameLevelsStatistics_C
// 0x0050 (0x0078 - 0x0028)
class USaveGameLevelsStatistics_C : public USaveGame
{
public:
	struct FLevelsStatisticsStruct                     LevelsStatisticsStruct;                                   // 0x0028(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SaveGameLevelsStatistics.SaveGameLevelsStatistics_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
