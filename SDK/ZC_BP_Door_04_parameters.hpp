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

// Function BP_Door_04.BP_Door_04_C.GetStaticMeshComponent
struct ABP_Door_04_C_GetStaticMeshComponent_Params
{
	class UStaticMeshComponent*                        StaticMesh;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_Door_04.BP_Door_04_C.UserConstructionScript
struct ABP_Door_04_C_UserConstructionScript_Params
{
};

// Function BP_Door_04.BP_Door_04_C.Use
struct ABP_Door_04_C_Use_Params
{
	bool                                               IsPlayer;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Door_04.BP_Door_04_C.StartFocus
struct ABP_Door_04_C_StartFocus_Params
{
};

// Function BP_Door_04.BP_Door_04_C.StopFocus
struct ABP_Door_04_C_StopFocus_Params
{
};

// Function BP_Door_04.BP_Door_04_C.ExecuteUbergraph_BP_Door_04
struct ABP_Door_04_C_ExecuteUbergraph_BP_Door_04_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
