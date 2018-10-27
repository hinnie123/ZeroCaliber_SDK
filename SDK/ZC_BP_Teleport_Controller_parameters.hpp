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

// Function BP_Teleport_Controller.BP_Teleport_Controller_C.CreateLaserSpline
struct ABP_Teleport_Controller_C_CreateLaserSpline_Params
{
};

// Function BP_Teleport_Controller.BP_Teleport_Controller_C.ClearLaserBeam
struct ABP_Teleport_Controller_C_ClearLaserBeam_Params
{
};

// Function BP_Teleport_Controller.BP_Teleport_Controller_C.ToggleTick
struct ABP_Teleport_Controller_C_ToggleTick_Params
{
};

// Function BP_Teleport_Controller.BP_Teleport_Controller_C.InitController
struct ABP_Teleport_Controller_C_InitController_Params
{
};

// Function BP_Teleport_Controller.BP_Teleport_Controller_C.IfOverWidget_Use
struct ABP_Teleport_Controller_C_IfOverWidget_Use_Params
{
	bool                                               bPressed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasOverWidget;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Teleport_Controller.BP_Teleport_Controller_C.GetTeleWorldLocAndForwardVector
struct ABP_Teleport_Controller_C_GetTeleWorldLocAndForwardVector_Params
{
	struct FVector                                     WorldLoc;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     ForwardVector;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Teleport_Controller.BP_Teleport_Controller_C.UpdateLaserBeam
struct ABP_Teleport_Controller_C_UpdateLaserBeam_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Teleport_Controller.BP_Teleport_Controller_C.SetLaserBeamActive
struct ABP_Teleport_Controller_C_SetLaserBeamActive_Params
{
	bool                                               LaserBeamActive;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Teleport_Controller.BP_Teleport_Controller_C.GetTeleportDestination
struct ABP_Teleport_Controller_C_GetTeleportDestination_Params
{
	bool                                               RelativeToHMD;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Teleport_Controller.BP_Teleport_Controller_C.UpdateArcEndpoint
struct ABP_Teleport_Controller_C_UpdateArcEndpoint_Params
{
	struct FVector                                     NewLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ValidLocationFound;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Teleport_Controller.BP_Teleport_Controller_C.UpdateArcSpline
struct ABP_Teleport_Controller_C_UpdateArcSpline_Params
{
	bool                                               FoundValidLocation;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             SplinePoints;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_Teleport_Controller.BP_Teleport_Controller_C.ClearArc
struct ABP_Teleport_Controller_C_ClearArc_Params
{
};

// Function BP_Teleport_Controller.BP_Teleport_Controller_C.TraceTeleportDestination
struct ABP_Teleport_Controller_C_TraceTeleportDestination_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             TracePoints;                                              // (Parm, OutParm, ZeroConstructor)
	struct FVector                                     NavMeshLocation;                                          // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     TraceLocation;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Teleport_Controller.BP_Teleport_Controller_C.DisableTeleporter
struct ABP_Teleport_Controller_C_DisableTeleporter_Params
{
};

// Function BP_Teleport_Controller.BP_Teleport_Controller_C.ActivateTeleporter
struct ABP_Teleport_Controller_C_ActivateTeleporter_Params
{
};

// Function BP_Teleport_Controller.BP_Teleport_Controller_C.UserConstructionScript
struct ABP_Teleport_Controller_C_UserConstructionScript_Params
{
};

// Function BP_Teleport_Controller.BP_Teleport_Controller_C.RumbleController
struct ABP_Teleport_Controller_C_RumbleController_Params
{
	float                                              Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Teleport_Controller.BP_Teleport_Controller_C.ReceiveTick
struct ABP_Teleport_Controller_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Teleport_Controller.BP_Teleport_Controller_C.ReceiveBeginPlay
struct ABP_Teleport_Controller_C_ReceiveBeginPlay_Params
{
};

// Function BP_Teleport_Controller.BP_Teleport_Controller_C.ReceiveDestroyed
struct ABP_Teleport_Controller_C_ReceiveDestroyed_Params
{
};

// Function BP_Teleport_Controller.BP_Teleport_Controller_C.ExecuteUbergraph_BP_Teleport_Controller
struct ABP_Teleport_Controller_C_ExecuteUbergraph_BP_Teleport_Controller_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
