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

// Function BP_TeleportController_Custom.BP_TeleportController_Custom_C.AttachLaserBeam
struct ABP_TeleportController_Custom_C_AttachLaserBeam_Params
{
	class USceneComponent*                             Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_TeleportController_Custom.BP_TeleportController_Custom_C.UpdateLaserBeamCustom
struct ABP_TeleportController_Custom_C_UpdateLaserBeamCustom_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TeleportController_Custom.BP_TeleportController_Custom_C.UserConstructionScript
struct ABP_TeleportController_Custom_C_UserConstructionScript_Params
{
};

// Function BP_TeleportController_Custom.BP_TeleportController_Custom_C.UpdateLaserBeam
struct ABP_TeleportController_Custom_C_UpdateLaserBeam_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TeleportController_Custom.BP_TeleportController_Custom_C.ExecuteUbergraph_BP_TeleportController_Custom
struct ABP_TeleportController_Custom_C_ExecuteUbergraph_BP_TeleportController_Custom_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
