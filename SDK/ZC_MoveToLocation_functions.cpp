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

// Function MoveToLocation.MoveToLocation_C.OnFail_9409B361407A9FA8D5C28C812DED37A6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMoveToLocation_C::OnFail_9409B361407A9FA8D5C28C812DED37A6(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoveToLocation.MoveToLocation_C.OnFail_9409B361407A9FA8D5C28C812DED37A6");

	UMoveToLocation_C_OnFail_9409B361407A9FA8D5C28C812DED37A6_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoveToLocation.MoveToLocation_C.OnSuccess_9409B361407A9FA8D5C28C812DED37A6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMoveToLocation_C::OnSuccess_9409B361407A9FA8D5C28C812DED37A6(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoveToLocation.MoveToLocation_C.OnSuccess_9409B361407A9FA8D5C28C812DED37A6");

	UMoveToLocation_C_OnSuccess_9409B361407A9FA8D5C28C812DED37A6_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoveToLocation.MoveToLocation_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMoveToLocation_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoveToLocation.MoveToLocation_C.ReceiveExecuteAI");

	UMoveToLocation_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MoveToLocation.MoveToLocation_C.ExecuteUbergraph_MoveToLocation
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMoveToLocation_C::ExecuteUbergraph_MoveToLocation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MoveToLocation.MoveToLocation_C.ExecuteUbergraph_MoveToLocation");

	UMoveToLocation_C_ExecuteUbergraph_MoveToLocation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
