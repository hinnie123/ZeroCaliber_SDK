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

// BlueprintGeneratedClass PlayerEquipmentSaver.PlayerEquipmentSaver_C
// 0x0010 (0x0338 - 0x0328)
class APlayerEquipmentSaver_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APlayerPawnCharacter_C*                      PlayerPawn;                                               // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerEquipmentSaver.PlayerEquipmentSaver_C");
		return ptr;
	}


	void GetWeaponData(class AWeaponBase_C* Weapon, struct FWeaponStateDataStruct2* WeaponStateData);
	void GetAndSavePlayerEquipment();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
