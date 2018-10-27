#pragma once

// ZeroCaliber (0.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct LevelStatisticsStruct.LevelStatisticsStruct
// 0x0014
struct FLevelStatisticsStruct
{
	float                                              CompletionTimeValue_2_9747641D484913B33A4B1A980F096B20;   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AccuracyFired_5_135936EF437A9B39D163D7B222984E96;         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AccuracyHit_7_95332273405B3F3CD51E60A9B2292F42;           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Kills_12_223157084804431069511D8A52D2A727;                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HitHead_10_7C2E690041AE8BC5B9A8E2B07991DABA;              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
