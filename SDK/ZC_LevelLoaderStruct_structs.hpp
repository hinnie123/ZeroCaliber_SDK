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

// UserDefinedStruct LevelLoaderStruct.LevelLoaderStruct
// 0x0060
struct FLevelLoaderStruct
{
	TEnumAsByte<ELevelType>                            LevelType_19_76C8DF094E3637496A3EBA852873D8B6;            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector2D                                   WidgetCoordinate_16_8C9A0C9244490612E824DE98429C43A9;     // 0x0004(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FName                                       CampaignName_20_07A6C5574DB82434E177FFB383D4AD0F;         // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       CampaignVisibleName_21_083881FE4A30B4D618A97A97F8FEFC5C;  // 0x0018(0x0018) (Edit, BlueprintVisible)
	class UTexture*                                    CampaignImage_22_17CD400448759D820859CB833E63D6DD;        // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       CampaignDescriptionText_23_E0489F2D4C9ADE615CFC63B2CFDABD03;// 0x0038(0x0018) (Edit, BlueprintVisible)
	TArray<struct FLevelStruct>                        Levels_27_A63D968C45051C963DAFD1AEFC6D9F8B;               // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
