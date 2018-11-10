// ZeroCaliber (0.6.0 EA) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function weapon_G36C.weapon_G36C_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aweapon_G36C_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_G36C.weapon_G36C_C.UserConstructionScript");

	Aweapon_G36C_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_G36C.weapon_G36C_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aweapon_G36C_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_G36C.weapon_G36C_C.ReceiveTick");

	Aweapon_G36C_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_G36C.weapon_G36C_C.OnChildGrip
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** GrippingController             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation* GripInformation                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Aweapon_G36C_C::OnChildGrip(class UGripMotionControllerComponent** GrippingController, struct FBPActorGripInformation* GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_G36C.weapon_G36C_C.OnChildGrip");

	Aweapon_G36C_C_OnChildGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_G36C.weapon_G36C_C.OnChildGripRelease
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** ReleasingController            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation* GripInformation                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool*                          bWasSocketed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aweapon_G36C_C::OnChildGripRelease(class UGripMotionControllerComponent** ReleasingController, struct FBPActorGripInformation* GripInformation, bool* bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_G36C.weapon_G36C_C.OnChildGripRelease");

	Aweapon_G36C_C_OnChildGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_G36C.weapon_G36C_C.ExecuteUbergraph_weapon_G36C
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aweapon_G36C_C::ExecuteUbergraph_weapon_G36C(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_G36C.weapon_G36C_C.ExecuteUbergraph_weapon_G36C");

	Aweapon_G36C_C_ExecuteUbergraph_weapon_G36C_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
