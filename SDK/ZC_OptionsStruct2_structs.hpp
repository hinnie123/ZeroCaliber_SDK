#pragma once

// ZeroCaliber (0.6.0 EA) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct OptionsStruct2.OptionsStruct2
// 0x001C
struct FOptionsStruct2
{
	TEnumAsByte<EQualityOptions>                       QualityOption_2_72E7EB4249066E26201808A2A93F4B56;         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAAOptions>                            AAOption_5_56B6B2274D4B2D03DF452A8A4AFDD2C6;              // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              RenderScale_8_92C5C5B74417805BE6CCFD9BBDB0F666;           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayerHeight_10_814E5B1346A48970223F12A3A2D06354;         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDifficulty>                           Difficulty_13_036D2DD64C9C5662AB979BB72F83D60E;           // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OutlineTurnedOn_15_3224A1BF4C030263F5C41D9461476EA0;      // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SubtitleTurnedOn_17_D5CA335B42B81D4665600EA574CB80CB;     // 0x000E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsRightHanded_19_6D9AF55B4BE02F4005002B99E225C48B;        // 0x000F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsHeadOrientedLocomotion_21_FE3308B2433263A68D26429E807192F4;// 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSnapTurn_23_CF7CDE794533AC97F17D13BC7F2B040D;           // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	float                                              SnapTurnDegrees_26_4F8AD63B4CDFA828F097EC8483527003;      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SmoothTurnSpeed_28_09FA7CF04ABD2ECA8DB58ABE2C900271;      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
