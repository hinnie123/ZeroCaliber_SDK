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

// UserDefinedStruct PlayerEquipmentStruct.PlayerEquipmentStruct
// 0x0190
struct FPlayerEquipmentStruct
{
	struct FWeaponStateDataStruct2                     LeftHand_48_30EE10F04461177A6D02A99FC51E5C4C;             // 0x0000(0x0048) (Edit, BlueprintVisible)
	struct FWeaponStateDataStruct2                     RightHand_49_9736F5A146BC86197D9B1C8FBD23150E;            // 0x0048(0x0048) (Edit, BlueprintVisible)
	struct FWeaponStateDataStruct2                     WeaponSlotPrimary_50_ED0949ED44B196E212099294E78E5AA1;    // 0x0090(0x0048) (Edit, BlueprintVisible)
	struct FWeaponStateDataStruct2                     WeaponSlotSecondary_53_E8698D39461C688D178259BACCA58A91;  // 0x00D8(0x0048) (Edit, BlueprintVisible)
	struct FTransform                                  WeaponSlotPrimaryTransform_67_F079312D4D6D481A92A58F87070A61DC;// 0x0120(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  WeaponSlotSecondaryTransform_69_E0A7CCF649BBE2CC33DFACBAA3C8C3A9;// 0x0150(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	class UClass*                                      Grenade1_72_0643E555493FDF7B37A8E78C084AA37E;             // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UClass*                                      Grenade2_74_D5F05E47451D3C9B2CF92D940B9F5F76;             // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
