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

// UserDefinedStruct RankInfoStruct.RankInfoStruct
// 0x0028
struct FRankInfoStruct
{
	int                                                XpRequired_9_BE7393E14E533B101CB5758347B315FA;            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FText                                       RankName_11_3E8B2BDE4F8F4FFD309BE299AF8E2778;             // 0x0008(0x0018) (Edit, BlueprintVisible)
	class UTexture*                                    RankImage_14_1750CA6D471597BEC88C099854C9030E;            // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
