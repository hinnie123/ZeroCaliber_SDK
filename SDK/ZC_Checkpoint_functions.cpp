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

// Function Checkpoint.Checkpoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACheckpoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Checkpoint.Checkpoint_C.UserConstructionScript");

	ACheckpoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Checkpoint.Checkpoint_C.Activated
// (BlueprintCallable, BlueprintEvent)

void ACheckpoint_C::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Checkpoint.Checkpoint_C.Activated");

	ACheckpoint_C_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Checkpoint.Checkpoint_C.ExecuteUbergraph_Checkpoint
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACheckpoint_C::ExecuteUbergraph_Checkpoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Checkpoint.Checkpoint_C.ExecuteUbergraph_Checkpoint");

	ACheckpoint_C_ExecuteUbergraph_Checkpoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Checkpoint.Checkpoint_C.PlayerEnteredCheckpoint__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACheckpoint_C*           Checkpoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACheckpoint_C::PlayerEnteredCheckpoint__DelegateSignature(class ACheckpoint_C* Checkpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Checkpoint.Checkpoint_C.PlayerEnteredCheckpoint__DelegateSignature");

	ACheckpoint_C_PlayerEnteredCheckpoint__DelegateSignature_Params params;
	params.Checkpoint = Checkpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
