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

// UserDefinedStruct LevelStruct.LevelStruct
// 0x0050
struct FLevelStruct
{
	TEnumAsByte<ELevelType>                            LevelType_11_C4BB4267417B1532B1C8AB86AC0BD184;            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELevelDataPlayers>                     LevelDataPlayers_27_B2DBC15747043FA7973245825897B71E;     // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FName                                       Name_18_0CF7A0454D6A6A253D3ED3A1CFAB84CD;                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       NameVisible_19_3F1C5F3244DA58DB3D2C8581D83D3C23;          // 0x0010(0x0018) (Edit, BlueprintVisible)
	class UTexture*                                    Image_21_42A211AB48F3CAAB1611849E39C90704;                // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       Description_20_34B9003940A8FE805B194BBC9DC371B3;          // 0x0030(0x0018) (Edit, BlueprintVisible)
	class UTexture*                                    LockedImage_24_6D4BB1A740DB57B16CF09F917F5CEA09;          // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
