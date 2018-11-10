#pragma once

// ZeroCaliber (0.6.0 EA) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponRackItem_Weapon_Uzi_Stock.WeaponRackItem_Weapon_Uzi_Stock_C
// 0x0008 (0x0438 - 0x0430)
class AWeaponRackItem_Weapon_Uzi_Stock_C : public AWeaponRackItemBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeaponRackItem_Weapon_Uzi_Stock.WeaponRackItem_Weapon_Uzi_Stock_C");
		return ptr;
	}


	void UserConstructionScript();
	void SpawnItem();
	void ExecuteUbergraph_WeaponRackItem_Weapon_Uzi_Stock(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
