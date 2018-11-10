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

// UserDefinedStruct PlayerInfo_Coop.PlayerInfo_Coop
// 0x0044
struct FPlayerInfo_Coop
{
	bool                                               Mute_1_B735955142F6168DA25BFB8D202348FC;                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Position_4_4F77A328485E209BBAF9F59DE5643A47;              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    RankIcon_7_B035EC9F4AEA552005F45CB57A7231FC;              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       PlayerName_10_F5AC52804D4EA50D377BA09BF7CE09DC;           // 0x0010(0x0018) (Edit, BlueprintVisible)
	bool                                               Alive_13_A4DCDA87421DFE093625CE936CA4A74B;                // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                Kills_26_C598335C4BE5F8D55E1277A1BDCCF21D;                // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Deaths_27_47A62863439DB86447B899B02DA4B834;               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Headshots_28_5704E7CF4152145EC2FCCE98FA47D2F7;            // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Accuracy_29_F39C943C490E3FAECB7F9D9AE3EDF912;             // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Score_30_CB6130864B93EBFD0B6400AFA8B86ED1;                // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Ping_31_FA8B0AC04A0B06BE3FE6E78A3C086A4B;                 // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
