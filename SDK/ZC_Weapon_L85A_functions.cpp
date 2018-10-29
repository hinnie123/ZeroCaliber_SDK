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

// Function Weapon_L85A.Weapon_L85A_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeapon_L85A_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_L85A.Weapon_L85A_C.UserConstructionScript");

	AWeapon_L85A_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_L85A.Weapon_L85A_C.FrontIronSightTurning__FinishedFunc
// (BlueprintEvent)

void AWeapon_L85A_C::FrontIronSightTurning__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_L85A.Weapon_L85A_C.FrontIronSightTurning__FinishedFunc");

	AWeapon_L85A_C_FrontIronSightTurning__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_L85A.Weapon_L85A_C.FrontIronSightTurning__UpdateFunc
// (BlueprintEvent)

void AWeapon_L85A_C::FrontIronSightTurning__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_L85A.Weapon_L85A_C.FrontIronSightTurning__UpdateFunc");

	AWeapon_L85A_C_FrontIronSightTurning__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_L85A.Weapon_L85A_C.AttachmentAttach
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAttachableStaticMeshActorBase_C** Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeapon_L85A_C::AttachmentAttach(class AAttachableStaticMeshActorBase_C** Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_L85A.Weapon_L85A_C.AttachmentAttach");

	AWeapon_L85A_C_AttachmentAttach_Params params;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_L85A.Weapon_L85A_C.AttachmentReleaseLocal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAttachmentBase_C**      Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeapon_L85A_C::AttachmentReleaseLocal(class AAttachmentBase_C** Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_L85A.Weapon_L85A_C.AttachmentReleaseLocal");

	AWeapon_L85A_C_AttachmentReleaseLocal_Params params;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_L85A.Weapon_L85A_C.ExecuteUbergraph_Weapon_L85A
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeapon_L85A_C::ExecuteUbergraph_Weapon_L85A(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_L85A.Weapon_L85A_C.ExecuteUbergraph_Weapon_L85A");

	AWeapon_L85A_C_ExecuteUbergraph_Weapon_L85A_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
