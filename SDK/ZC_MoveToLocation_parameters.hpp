#pragma once

// ZeroCaliber (0.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MoveToLocation.MoveToLocation_C.OnFail_9409B361407A9FA8D5C28C812DED37A6
struct UMoveToLocation_C_OnFail_9409B361407A9FA8D5C28C812DED37A6_Params
{
	TEnumAsByte<EPathFollowingResult>                  MovementResult;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MoveToLocation.MoveToLocation_C.OnSuccess_9409B361407A9FA8D5C28C812DED37A6
struct UMoveToLocation_C_OnSuccess_9409B361407A9FA8D5C28C812DED37A6_Params
{
	TEnumAsByte<EPathFollowingResult>                  MovementResult;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MoveToLocation.MoveToLocation_C.ReceiveExecuteAI
struct UMoveToLocation_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MoveToLocation.MoveToLocation_C.ExecuteUbergraph_MoveToLocation
struct UMoveToLocation_C_ExecuteUbergraph_MoveToLocation_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
