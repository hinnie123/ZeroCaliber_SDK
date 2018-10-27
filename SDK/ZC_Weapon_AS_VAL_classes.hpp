#pragma once

// ZeroCaliber (0.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_AS_VAL.Weapon_AS_VAL_C
// 0x0008 (0x0E78 - 0x0E70)
class AWeapon_AS_VAL_C : public AWeaponBase_C
{
public:
	class UStaticMeshComponent*                        SafetyMesh;                                               // 0x0E70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_AS_VAL.Weapon_AS_VAL_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
