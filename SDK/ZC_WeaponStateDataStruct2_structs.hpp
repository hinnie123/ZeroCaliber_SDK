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

// UserDefinedStruct WeaponStateDataStruct2.WeaponStateDataStruct2
// 0x0048
struct FWeaponStateDataStruct2
{
	class UClass*                                      Weapon_38_74DD9FCD4D1E277E487CBC94371338B1;               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UClass*                                      Magazine_5_E0CB5C2E4087EEA0E784339EF1EBCCC2;              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                MagazineAmmo_8_95E21360421A7E4EDECD018FD28443E2;          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Chambered_11_DE7601C64440FA6903D7DB816215ECB7;            // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFireModes>                            FireMode_14_69DF2F544DDFFB55F5117688DF6EBF02;             // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	class UClass*                                      AttachmentScope_29_581D651444FC8E2DF0FE0E8AD5DD52FB;      // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UClass*                                      AttachmentUnderbarrel_30_96E50EC04C084AD0BD94659EBD70F8F1;// 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UClass*                                      AttachmentBarrelEnd_31_BFA5E47A45DD5F6C5A0AD5AA2DD1ADFA;  // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UClass*                                      AttachmentSide_32_0617EBD84E29EA766CF970B0FAF4792D;       // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UClass*                                      AttachmentStock_35_7477AB344CC7C5437301A4B3AFD61ED2;      // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               Strap_37_CA291E664979B28754FE94A46F3E1347;                // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	int                                                InnerAmmoCount_41_D37E1D0D457C1D1CBBA7EE81625A54CA;       // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
