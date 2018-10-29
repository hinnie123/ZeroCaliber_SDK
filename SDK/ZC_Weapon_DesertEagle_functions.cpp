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

// Function Weapon_DesertEagle.Weapon_DesertEagle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeapon_DesertEagle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_DesertEagle.Weapon_DesertEagle_C.UserConstructionScript");

	AWeapon_DesertEagle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_DesertEagle.Weapon_DesertEagle_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeapon_DesertEagle_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_DesertEagle.Weapon_DesertEagle_C.ReceiveTick");

	AWeapon_DesertEagle_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_DesertEagle.Weapon_DesertEagle_C.ExecuteUbergraph_Weapon_DesertEagle
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeapon_DesertEagle_C::ExecuteUbergraph_Weapon_DesertEagle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_DesertEagle.Weapon_DesertEagle_C.ExecuteUbergraph_Weapon_DesertEagle");

	AWeapon_DesertEagle_C_ExecuteUbergraph_Weapon_DesertEagle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
