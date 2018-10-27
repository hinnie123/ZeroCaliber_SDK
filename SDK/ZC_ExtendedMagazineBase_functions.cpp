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

// Function ExtendedMagazineBase.ExtendedMagazineBase_C.GetAmmoCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            AmmoCount                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AExtendedMagazineBase_C::GetAmmoCount(int* AmmoCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtendedMagazineBase.ExtendedMagazineBase_C.GetAmmoCount");

	AExtendedMagazineBase_C_GetAmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoCount != nullptr)
		*AmmoCount = params.AmmoCount;
}


// Function ExtendedMagazineBase.ExtendedMagazineBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AExtendedMagazineBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtendedMagazineBase.ExtendedMagazineBase_C.UserConstructionScript");

	AExtendedMagazineBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExtendedMagazineBase.ExtendedMagazineBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AExtendedMagazineBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtendedMagazineBase.ExtendedMagazineBase_C.ReceiveBeginPlay");

	AExtendedMagazineBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExtendedMagazineBase.ExtendedMagazineBase_C.Released
// (BlueprintCallable, BlueprintEvent)

void AExtendedMagazineBase_C::Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtendedMagazineBase.ExtendedMagazineBase_C.Released");

	AExtendedMagazineBase_C_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExtendedMagazineBase.ExtendedMagazineBase_C.ReduceAmmoCount
// (Public, BlueprintCallable, BlueprintEvent)

void AExtendedMagazineBase_C::ReduceAmmoCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtendedMagazineBase.ExtendedMagazineBase_C.ReduceAmmoCount");

	AExtendedMagazineBase_C_ReduceAmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExtendedMagazineBase.ExtendedMagazineBase_C.ExecuteUbergraph_ExtendedMagazineBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AExtendedMagazineBase_C::ExecuteUbergraph_ExtendedMagazineBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExtendedMagazineBase.ExtendedMagazineBase_C.ExecuteUbergraph_ExtendedMagazineBase");

	AExtendedMagazineBase_C_ExecuteUbergraph_ExtendedMagazineBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
