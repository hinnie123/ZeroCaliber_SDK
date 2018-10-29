// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerEquipmentSaver.PlayerEquipmentSaver_C.GetWeaponData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AWeaponBase_C*           Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FWeaponStateDataStruct2 WeaponStateData                (Parm, OutParm)

void APlayerEquipmentSaver_C::GetWeaponData(class AWeaponBase_C* Weapon, struct FWeaponStateDataStruct2* WeaponStateData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEquipmentSaver.PlayerEquipmentSaver_C.GetWeaponData");

	APlayerEquipmentSaver_C_GetWeaponData_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponStateData != nullptr)
		*WeaponStateData = params.WeaponStateData;
}


// Function PlayerEquipmentSaver.PlayerEquipmentSaver_C.GetAndSavePlayerEquipment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerEquipmentSaver_C::GetAndSavePlayerEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEquipmentSaver.PlayerEquipmentSaver_C.GetAndSavePlayerEquipment");

	APlayerEquipmentSaver_C_GetAndSavePlayerEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerEquipmentSaver.PlayerEquipmentSaver_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerEquipmentSaver_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEquipmentSaver.PlayerEquipmentSaver_C.UserConstructionScript");

	APlayerEquipmentSaver_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
