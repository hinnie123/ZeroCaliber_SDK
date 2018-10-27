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

// Function Weapon_Ithaki37.Weapon_Ithaki37_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeapon_Ithaki37_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Ithaki37.Weapon_Ithaki37_C.UserConstructionScript");

	AWeapon_Ithaki37_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Ithaki37.Weapon_Ithaki37_C.AttachmentAttach
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAttachableStaticMeshActorBase_C** Attachment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeapon_Ithaki37_C::AttachmentAttach(class AAttachableStaticMeshActorBase_C** Attachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Ithaki37.Weapon_Ithaki37_C.AttachmentAttach");

	AWeapon_Ithaki37_C_AttachmentAttach_Params params;
	params.Attachment = Attachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Ithaki37.Weapon_Ithaki37_C.ExecuteUbergraph_Weapon_Ithaki37
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeapon_Ithaki37_C::ExecuteUbergraph_Weapon_Ithaki37(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Ithaki37.Weapon_Ithaki37_C.ExecuteUbergraph_Weapon_Ithaki37");

	AWeapon_Ithaki37_C_ExecuteUbergraph_Weapon_Ithaki37_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
