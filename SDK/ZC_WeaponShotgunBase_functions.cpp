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

// Function WeaponShotgunBase.WeaponShotgunBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeaponShotgunBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponShotgunBase.WeaponShotgunBase_C.UserConstructionScript");

	AWeaponShotgunBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponShotgunBase.WeaponShotgunBase_C.AttachmentAttach
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAttachableStaticMeshActorBase_C** Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponShotgunBase_C::AttachmentAttach(class AAttachableStaticMeshActorBase_C** Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponShotgunBase.WeaponShotgunBase_C.AttachmentAttach");

	AWeaponShotgunBase_C_AttachmentAttach_Params params;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponShotgunBase.WeaponShotgunBase_C.ChamberAmmo
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponShotgunBase_C::ChamberAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponShotgunBase.WeaponShotgunBase_C.ChamberAmmo");

	AWeaponShotgunBase_C_ChamberAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponShotgunBase.WeaponShotgunBase_C.FireProjectile
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponShotgunBase_C::FireProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponShotgunBase.WeaponShotgunBase_C.FireProjectile");

	AWeaponShotgunBase_C_FireProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponShotgunBase.WeaponShotgunBase_C.ExecuteUbergraph_WeaponShotgunBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponShotgunBase_C::ExecuteUbergraph_WeaponShotgunBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponShotgunBase.WeaponShotgunBase_C.ExecuteUbergraph_WeaponShotgunBase");

	AWeaponShotgunBase_C_ExecuteUbergraph_WeaponShotgunBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
