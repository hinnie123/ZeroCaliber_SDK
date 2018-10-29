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

// Function WeaponRackItem_Weapon_Uzi_Stock.WeaponRackItem_Weapon_Uzi_Stock_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeaponRackItem_Weapon_Uzi_Stock_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRackItem_Weapon_Uzi_Stock.WeaponRackItem_Weapon_Uzi_Stock_C.UserConstructionScript");

	AWeaponRackItem_Weapon_Uzi_Stock_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRackItem_Weapon_Uzi_Stock.WeaponRackItem_Weapon_Uzi_Stock_C.SpawnItem
// (BlueprintCallable, BlueprintEvent)

void AWeaponRackItem_Weapon_Uzi_Stock_C::SpawnItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRackItem_Weapon_Uzi_Stock.WeaponRackItem_Weapon_Uzi_Stock_C.SpawnItem");

	AWeaponRackItem_Weapon_Uzi_Stock_C_SpawnItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponRackItem_Weapon_Uzi_Stock.WeaponRackItem_Weapon_Uzi_Stock_C.ExecuteUbergraph_WeaponRackItem_Weapon_Uzi_Stock
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponRackItem_Weapon_Uzi_Stock_C::ExecuteUbergraph_WeaponRackItem_Weapon_Uzi_Stock(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponRackItem_Weapon_Uzi_Stock.WeaponRackItem_Weapon_Uzi_Stock_C.ExecuteUbergraph_WeaponRackItem_Weapon_Uzi_Stock");

	AWeaponRackItem_Weapon_Uzi_Stock_C_ExecuteUbergraph_WeaponRackItem_Weapon_Uzi_Stock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
