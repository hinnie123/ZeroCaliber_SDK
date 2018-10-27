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

// Function FindCover.FindCover_C.GetFurthestCaverFromSensedPawn
struct UFindCover_C_GetFurthestCaverFromSensedPawn_Params
{
	class ACover_C*                                    Cover1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACover_C*                                    Cover2;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACover_C*                                    FurthestCover;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FindCover.FindCover_C.GetOtherCoverOrSelf
struct UFindCover_C_GetOtherCoverOrSelf_Params
{
	class ACover_C*                                    Cover;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ACover_C*                                    OtherCover;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FindCover.FindCover_C.ReceiveExecuteAI
struct UFindCover_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FindCover.FindCover_C.ExecuteUbergraph_FindCover
struct UFindCover_C_ExecuteUbergraph_FindCover_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
