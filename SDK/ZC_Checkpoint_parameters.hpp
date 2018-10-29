#pragma once

// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Checkpoint.Checkpoint_C.UserConstructionScript
struct ACheckpoint_C_UserConstructionScript_Params
{
};

// Function Checkpoint.Checkpoint_C.Activated
struct ACheckpoint_C_Activated_Params
{
};

// Function Checkpoint.Checkpoint_C.ExecuteUbergraph_Checkpoint
struct ACheckpoint_C_ExecuteUbergraph_Checkpoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Checkpoint.Checkpoint_C.PlayerEnteredCheckpoint__DelegateSignature
struct ACheckpoint_C_PlayerEnteredCheckpoint__DelegateSignature_Params
{
	class ACheckpoint_C*                               Checkpoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
