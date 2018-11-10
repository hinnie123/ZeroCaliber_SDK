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

// Function ChangeEnemySenseState.ChangeEnemySenseState_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChangeEnemySenseState_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChangeEnemySenseState.ChangeEnemySenseState_C.ReceiveExecuteAI");

	UChangeEnemySenseState_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChangeEnemySenseState.ChangeEnemySenseState_C.ExecuteUbergraph_ChangeEnemySenseState
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChangeEnemySenseState_C::ExecuteUbergraph_ChangeEnemySenseState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChangeEnemySenseState.ChangeEnemySenseState_C.ExecuteUbergraph_ChangeEnemySenseState");

	UChangeEnemySenseState_C_ExecuteUbergraph_ChangeEnemySenseState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
