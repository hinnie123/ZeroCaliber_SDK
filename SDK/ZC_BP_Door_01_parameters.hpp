#pragma once

// ZeroCaliber (0.6.0 EA) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Door_01.BP_Door_01_C.GetStaticMeshComponent
struct ABP_Door_01_C_GetStaticMeshComponent_Params
{
	class UStaticMeshComponent*                        StaticMesh;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Door_01.BP_Door_01_C.UserConstructionScript
struct ABP_Door_01_C_UserConstructionScript_Params
{
};

// Function BP_Door_01.BP_Door_01_C.ToggleDoor__FinishedFunc
struct ABP_Door_01_C_ToggleDoor__FinishedFunc_Params
{
};

// Function BP_Door_01.BP_Door_01_C.ToggleDoor__UpdateFunc
struct ABP_Door_01_C_ToggleDoor__UpdateFunc_Params
{
};

// Function BP_Door_01.BP_Door_01_C.StartFocus
struct ABP_Door_01_C_StartFocus_Params
{
};

// Function BP_Door_01.BP_Door_01_C.StopFocus
struct ABP_Door_01_C_StopFocus_Params
{
};

// Function BP_Door_01.BP_Door_01_C.Use
struct ABP_Door_01_C_Use_Params
{
	bool                                               IsPlayer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Door_01.BP_Door_01_C.ExecuteUbergraph_BP_Door_01
struct ABP_Door_01_C_ExecuteUbergraph_BP_Door_01_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
