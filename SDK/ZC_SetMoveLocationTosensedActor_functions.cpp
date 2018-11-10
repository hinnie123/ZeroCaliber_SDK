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

// Function SetMoveLocationTosensedActor.SetMoveLocationToSensedActor_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USetMoveLocationToSensedActor_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function SetMoveLocationTosensedActor.SetMoveLocationToSensedActor_C.ReceiveExecuteAI");

	USetMoveLocationToSensedActor_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SetMoveLocationTosensedActor.SetMoveLocationToSensedActor_C.ExecuteUbergraph_SetMoveLocationToSensedActor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USetMoveLocationToSensedActor_C::ExecuteUbergraph_SetMoveLocationToSensedActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SetMoveLocationTosensedActor.SetMoveLocationToSensedActor_C.ExecuteUbergraph_SetMoveLocationToSensedActor");

	USetMoveLocationToSensedActor_C_ExecuteUbergraph_SetMoveLocationToSensedActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
