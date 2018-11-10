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

// Function WeaponPistolBase.WeaponPistolBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeaponPistolBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponPistolBase.WeaponPistolBase_C.UserConstructionScript");

	AWeaponPistolBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponPistolBase.WeaponPistolBase_C.MagazineEjectTimeLine__FinishedFunc
// (BlueprintEvent)

void AWeaponPistolBase_C::MagazineEjectTimeLine__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponPistolBase.WeaponPistolBase_C.MagazineEjectTimeLine__FinishedFunc");

	AWeaponPistolBase_C_MagazineEjectTimeLine__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponPistolBase.WeaponPistolBase_C.MagazineEjectTimeLine__UpdateFunc
// (BlueprintEvent)

void AWeaponPistolBase_C::MagazineEjectTimeLine__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponPistolBase.WeaponPistolBase_C.MagazineEjectTimeLine__UpdateFunc");

	AWeaponPistolBase_C_MagazineEjectTimeLine__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponPistolBase.WeaponPistolBase_C.FireModeChangeUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Lerp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponPistolBase_C::FireModeChangeUpdate(float* Lerp)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponPistolBase.WeaponPistolBase_C.FireModeChangeUpdate");

	AWeaponPistolBase_C_FireModeChangeUpdate_Params params;
	params.Lerp = Lerp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponPistolBase.WeaponPistolBase_C.ReleaseMagazinePistol
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAttachmentBase_C*       Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponPistolBase_C::ReleaseMagazinePistol(class AAttachmentBase_C* Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponPistolBase.WeaponPistolBase_C.ReleaseMagazinePistol");

	AWeaponPistolBase_C_ReleaseMagazinePistol_Params params;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponPistolBase.WeaponPistolBase_C.AttachmentReleaseLocal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAttachmentBase_C**      Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponPistolBase_C::AttachmentReleaseLocal(class AAttachmentBase_C** Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponPistolBase.WeaponPistolBase_C.AttachmentReleaseLocal");

	AWeaponPistolBase_C_AttachmentReleaseLocal_Params params;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponPistolBase.WeaponPistolBase_C.ExecuteUbergraph_WeaponPistolBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponPistolBase_C::ExecuteUbergraph_WeaponPistolBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponPistolBase.WeaponPistolBase_C.ExecuteUbergraph_WeaponPistolBase");

	AWeaponPistolBase_C_ExecuteUbergraph_WeaponPistolBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
