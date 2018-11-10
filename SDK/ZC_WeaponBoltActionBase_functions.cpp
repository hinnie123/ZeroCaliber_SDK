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

// Function WeaponBoltActionBase.WeaponBoltActionBase_C.TransformBoltMeshes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeaponBoltActionBase_C::TransformBoltMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBoltActionBase.WeaponBoltActionBase_C.TransformBoltMeshes");

	AWeaponBoltActionBase_C_TransformBoltMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBoltActionBase.WeaponBoltActionBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeaponBoltActionBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBoltActionBase.WeaponBoltActionBase_C.UserConstructionScript");

	AWeaponBoltActionBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBoltActionBase.WeaponBoltActionBase_C.SetCockingPositions
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponBoltActionBase_C::SetCockingPositions()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBoltActionBase.WeaponBoltActionBase_C.SetCockingPositions");

	AWeaponBoltActionBase_C_SetCockingPositions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBoltActionBase.WeaponBoltActionBase_C.Hover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHoverEnum>*       InteractType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AWeaponBoltActionBase_C::Hover(TEnumAsByte<EHoverEnum>* InteractType, class USceneComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBoltActionBase.WeaponBoltActionBase_C.Hover");

	AWeaponBoltActionBase_C_Hover_Params params;
	params.InteractType = InteractType;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBoltActionBase.WeaponBoltActionBase_C.Unhover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AWeaponBoltActionBase_C::Unhover(class UPrimitiveComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBoltActionBase.WeaponBoltActionBase_C.Unhover");

	AWeaponBoltActionBase_C_Unhover_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBoltActionBase.WeaponBoltActionBase_C.FireGunLocal
// (BlueprintCallable, BlueprintEvent)

void AWeaponBoltActionBase_C::FireGunLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBoltActionBase.WeaponBoltActionBase_C.FireGunLocal");

	AWeaponBoltActionBase_C_FireGunLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBoltActionBase.WeaponBoltActionBase_C.HandleCocking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBoltActionBase_C::HandleCocking(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBoltActionBase.WeaponBoltActionBase_C.HandleCocking");

	AWeaponBoltActionBase_C_HandleCocking_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBoltActionBase.WeaponBoltActionBase_C.SpawnCartridgeCase
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponBoltActionBase_C::SpawnCartridgeCase()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBoltActionBase.WeaponBoltActionBase_C.SpawnCartridgeCase");

	AWeaponBoltActionBase_C_SpawnCartridgeCase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBoltActionBase.WeaponBoltActionBase_C.AmmoFired
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponBoltActionBase_C::AmmoFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBoltActionBase.WeaponBoltActionBase_C.AmmoFired");

	AWeaponBoltActionBase_C_AmmoFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBoltActionBase.WeaponBoltActionBase_C.FireCocking
// (Public, BlueprintCallable, BlueprintEvent)

void AWeaponBoltActionBase_C::FireCocking()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBoltActionBase.WeaponBoltActionBase_C.FireCocking");

	AWeaponBoltActionBase_C_FireCocking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponBoltActionBase.WeaponBoltActionBase_C.ExecuteUbergraph_WeaponBoltActionBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeaponBoltActionBase_C::ExecuteUbergraph_WeaponBoltActionBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponBoltActionBase.WeaponBoltActionBase_C.ExecuteUbergraph_WeaponBoltActionBase");

	AWeaponBoltActionBase_C_ExecuteUbergraph_WeaponBoltActionBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
