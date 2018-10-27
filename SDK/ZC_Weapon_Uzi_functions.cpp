// ZeroCaliber (0.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Uzi.Weapon_Uzi_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeapon_Uzi_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Uzi.Weapon_Uzi_C.UserConstructionScript");

	AWeapon_Uzi_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Uzi.Weapon_Uzi_C.OnSecondaryGrip
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent**        SecondaryGripComponent         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation* GripInformation                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AWeapon_Uzi_C::OnSecondaryGrip(class USceneComponent** SecondaryGripComponent, struct FBPActorGripInformation* GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Uzi.Weapon_Uzi_C.OnSecondaryGrip");

	AWeapon_Uzi_C_OnSecondaryGrip_Params params;
	params.SecondaryGripComponent = SecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Uzi.Weapon_Uzi_C.OnSecondaryGripRelease
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent**        ReleasingSecondaryGripComponent (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation* GripInformation                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AWeapon_Uzi_C::OnSecondaryGripRelease(class USceneComponent** ReleasingSecondaryGripComponent, struct FBPActorGripInformation* GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Uzi.Weapon_Uzi_C.OnSecondaryGripRelease");

	AWeapon_Uzi_C_OnSecondaryGripRelease_Params params;
	params.ReleasingSecondaryGripComponent = ReleasingSecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Uzi.Weapon_Uzi_C.ExecuteUbergraph_Weapon_Uzi
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeapon_Uzi_C::ExecuteUbergraph_Weapon_Uzi(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Uzi.Weapon_Uzi_C.ExecuteUbergraph_Weapon_Uzi");

	AWeapon_Uzi_C_ExecuteUbergraph_Weapon_Uzi_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
