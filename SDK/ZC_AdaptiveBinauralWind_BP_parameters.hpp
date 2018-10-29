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

// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Set Volumes
struct AAdaptiveBinauralWind_BP_C_Set_Volumes_Params
{
};

// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Calculate Wind Volumes
struct AAdaptiveBinauralWind_BP_C_Calculate_Wind_Volumes_Params
{
	float                                              Delta_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Calculate Low Frequency Right Wind
struct AAdaptiveBinauralWind_BP_C_Calculate_Low_Frequency_Right_Wind_Params
{
	float                                              Wind_Low_R_Volume;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Calculate Low Frequency Left Wind
struct AAdaptiveBinauralWind_BP_C_Calculate_Low_Frequency_Left_Wind_Params
{
	float                                              Wind_Low_L_Volume;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.UserConstructionScript
struct AAdaptiveBinauralWind_BP_C_UserConstructionScript_Params
{
};

// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Timeline_0__FinishedFunc
struct AAdaptiveBinauralWind_BP_C_Timeline_0__FinishedFunc_Params
{
};

// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Timeline_0__UpdateFunc
struct AAdaptiveBinauralWind_BP_C_Timeline_0__UpdateFunc_Params
{
};

// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Linear alpha 3__FinishedFunc
struct AAdaptiveBinauralWind_BP_C_Linear_alpha_3__FinishedFunc_Params
{
};

// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Linear alpha 3__UpdateFunc
struct AAdaptiveBinauralWind_BP_C_Linear_alpha_3__UpdateFunc_Params
{
};

// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Wind_Gust__FinishedFunc
struct AAdaptiveBinauralWind_BP_C_Wind_Gust__FinishedFunc_Params
{
};

// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Wind_Gust__UpdateFunc
struct AAdaptiveBinauralWind_BP_C_Wind_Gust__UpdateFunc_Params
{
};

// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Linear alpha 4__FinishedFunc
struct AAdaptiveBinauralWind_BP_C_Linear_alpha_4__FinishedFunc_Params
{
};

// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Linear alpha 4__UpdateFunc
struct AAdaptiveBinauralWind_BP_C_Linear_alpha_4__UpdateFunc_Params
{
};

// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Linear alpha__FinishedFunc
struct AAdaptiveBinauralWind_BP_C_Linear_alpha__FinishedFunc_Params
{
};

// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Linear alpha__UpdateFunc
struct AAdaptiveBinauralWind_BP_C_Linear_alpha__UpdateFunc_Params
{
};

// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.ReceiveBeginPlay
struct AAdaptiveBinauralWind_BP_C_ReceiveBeginPlay_Params
{
};

// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct AAdaptiveBinauralWind_BP_C_BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AAdaptiveBinauralWind_BP_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Reset Arrow Size
struct AAdaptiveBinauralWind_BP_C_Reset_Arrow_Size_Params
{
};

// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.ResetIntensity
struct AAdaptiveBinauralWind_BP_C_ResetIntensity_Params
{
};

// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.GustCast
struct AAdaptiveBinauralWind_BP_C_GustCast_Params
{
};

// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.ReceiveTick
struct AAdaptiveBinauralWind_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Direction 2
struct AAdaptiveBinauralWind_BP_C_Direction_2_Params
{
};

// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Wind Direction
struct AAdaptiveBinauralWind_BP_C_Wind_Direction_Params
{
};

// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.ExecuteUbergraph_AdaptiveBinauralWind_BP
struct AAdaptiveBinauralWind_BP_C_ExecuteUbergraph_AdaptiveBinauralWind_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
