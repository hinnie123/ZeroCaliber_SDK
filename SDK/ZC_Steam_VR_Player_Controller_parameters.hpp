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

// Function Steam_VR_Player_Controller.Steam_VR_Player_Controller_C.OffsetSpawnByCapsuleHalfHeight
struct ASteam_VR_Player_Controller_C_OffsetSpawnByCapsuleHalfHeight_Params
{
	class APlayerStart*                                PlayerStart;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OffsetVector;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     OffsetVectorFinal;                                        // (Parm, OutParm, IsPlainOldData)
};

// Function Steam_VR_Player_Controller.Steam_VR_Player_Controller_C.InitiateHMD
struct ASteam_VR_Player_Controller_C_InitiateHMD_Params
{
};

// Function Steam_VR_Player_Controller.Steam_VR_Player_Controller_C.UserConstructionScript
struct ASteam_VR_Player_Controller_C_UserConstructionScript_Params
{
};

// Function Steam_VR_Player_Controller.Steam_VR_Player_Controller_C.ReturnHMDStatus
struct ASteam_VR_Player_Controller_C_ReturnHMDStatus_Params
{
	bool                                               bHMDEnabled;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HMDOffset;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    HMDRotation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Steam_VR_Player_Controller.Steam_VR_Player_Controller_C.InitHMD
struct ASteam_VR_Player_Controller_C_InitHMD_Params
{
	bool                                               bHasHMD;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Steam_VR_Player_Controller.Steam_VR_Player_Controller_C.ReceiveBeginPlay
struct ASteam_VR_Player_Controller_C_ReceiveBeginPlay_Params
{
};

// Function Steam_VR_Player_Controller.Steam_VR_Player_Controller_C.ExecuteUbergraph_Steam_VR_Player_Controller
struct ASteam_VR_Player_Controller_C_ExecuteUbergraph_Steam_VR_Player_Controller_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
