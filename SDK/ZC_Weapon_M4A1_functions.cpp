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

// Function Weapon_M4A1.Weapon_M4A1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeapon_M4A1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_M4A1.Weapon_M4A1_C.UserConstructionScript");

	AWeapon_M4A1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_M4A1.Weapon_M4A1_C.EjectShellPos__FinishedFunc
// (BlueprintEvent)

void AWeapon_M4A1_C::EjectShellPos__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_M4A1.Weapon_M4A1_C.EjectShellPos__FinishedFunc");

	AWeapon_M4A1_C_EjectShellPos__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_M4A1.Weapon_M4A1_C.EjectShellPos__UpdateFunc
// (BlueprintEvent)

void AWeapon_M4A1_C::EjectShellPos__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_M4A1.Weapon_M4A1_C.EjectShellPos__UpdateFunc");

	AWeapon_M4A1_C_EjectShellPos__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_M4A1.Weapon_M4A1_C.ShellTray__FinishedFunc
// (BlueprintEvent)

void AWeapon_M4A1_C::ShellTray__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_M4A1.Weapon_M4A1_C.ShellTray__FinishedFunc");

	AWeapon_M4A1_C_ShellTray__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_M4A1.Weapon_M4A1_C.ShellTray__UpdateFunc
// (BlueprintEvent)

void AWeapon_M4A1_C::ShellTray__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_M4A1.Weapon_M4A1_C.ShellTray__UpdateFunc");

	AWeapon_M4A1_C_ShellTray__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_M4A1.Weapon_M4A1_C.SpawnCartridge
// (Public, BlueprintCallable, BlueprintEvent)

void AWeapon_M4A1_C::SpawnCartridge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_M4A1.Weapon_M4A1_C.SpawnCartridge");

	AWeapon_M4A1_C_SpawnCartridge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_M4A1.Weapon_M4A1_C.FireCocking
// (Public, BlueprintCallable, BlueprintEvent)

void AWeapon_M4A1_C::FireCocking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_M4A1.Weapon_M4A1_C.FireCocking");

	AWeapon_M4A1_C_FireCocking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_M4A1.Weapon_M4A1_C.AmmoFired
// (Public, BlueprintCallable, BlueprintEvent)

void AWeapon_M4A1_C::AmmoFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_M4A1.Weapon_M4A1_C.AmmoFired");

	AWeapon_M4A1_C_AmmoFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_M4A1.Weapon_M4A1_C.ReleaseSliderAuto
// (BlueprintCallable, BlueprintEvent)

void AWeapon_M4A1_C::ReleaseSliderAuto()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_M4A1.Weapon_M4A1_C.ReleaseSliderAuto");

	AWeapon_M4A1_C_ReleaseSliderAuto_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_M4A1.Weapon_M4A1_C.ChamberAmmo
// (Public, BlueprintCallable, BlueprintEvent)

void AWeapon_M4A1_C::ChamberAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_M4A1.Weapon_M4A1_C.ChamberAmmo");

	AWeapon_M4A1_C_ChamberAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_M4A1.Weapon_M4A1_C.ExecuteUbergraph_Weapon_M4A1
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeapon_M4A1_C::ExecuteUbergraph_Weapon_M4A1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_M4A1.Weapon_M4A1_C.ExecuteUbergraph_Weapon_M4A1");

	AWeapon_M4A1_C_ExecuteUbergraph_Weapon_M4A1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
