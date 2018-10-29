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

// Function ActivatableCheckLevelStatus.ActivatableCheckLevelStatus_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AActivatableCheckLevelStatus_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableCheckLevelStatus.ActivatableCheckLevelStatus_C.UserConstructionScript");

	AActivatableCheckLevelStatus_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableCheckLevelStatus.ActivatableCheckLevelStatus_C.Activated
// (BlueprintCallable, BlueprintEvent)

void AActivatableCheckLevelStatus_C::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableCheckLevelStatus.ActivatableCheckLevelStatus_C.Activated");

	AActivatableCheckLevelStatus_C_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableCheckLevelStatus.ActivatableCheckLevelStatus_C.ExecuteUbergraph_ActivatableCheckLevelStatus
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatableCheckLevelStatus_C::ExecuteUbergraph_ActivatableCheckLevelStatus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableCheckLevelStatus.ActivatableCheckLevelStatus_C.ExecuteUbergraph_ActivatableCheckLevelStatus");

	AActivatableCheckLevelStatus_C_ExecuteUbergraph_ActivatableCheckLevelStatus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
