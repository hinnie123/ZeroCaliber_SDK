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

// Function ActivatablePOI.ActivatablePOI_C.DeactivateOtherPOIsByTag
struct AActivatablePOI_C_DeactivateOtherPOIsByTag_Params
{
};

// Function ActivatablePOI.ActivatablePOI_C.InitializeWidget
struct AActivatablePOI_C_InitializeWidget_Params
{
};

// Function ActivatablePOI.ActivatablePOI_C.UpdatePoiText
struct AActivatablePOI_C_UpdatePoiText_Params
{
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ActivatablePOI.ActivatablePOI_C.UserConstructionScript
struct AActivatablePOI_C_UserConstructionScript_Params
{
};

// Function ActivatablePOI.ActivatablePOI_C.PoiAnimTimeLine__FinishedFunc
struct AActivatablePOI_C_PoiAnimTimeLine__FinishedFunc_Params
{
};

// Function ActivatablePOI.ActivatablePOI_C.PoiAnimTimeLine__UpdateFunc
struct AActivatablePOI_C_PoiAnimTimeLine__UpdateFunc_Params
{
};

// Function ActivatablePOI.ActivatablePOI_C.PoiAnimInitialTimeline__FinishedFunc
struct AActivatablePOI_C_PoiAnimInitialTimeline__FinishedFunc_Params
{
};

// Function ActivatablePOI.ActivatablePOI_C.PoiAnimInitialTimeline__UpdateFunc
struct AActivatablePOI_C_PoiAnimInitialTimeline__UpdateFunc_Params
{
};

// Function ActivatablePOI.ActivatablePOI_C.ReceiveBeginPlay
struct AActivatablePOI_C_ReceiveBeginPlay_Params
{
};

// Function ActivatablePOI.ActivatablePOI_C.Activated
struct AActivatablePOI_C_Activated_Params
{
};

// Function ActivatablePOI.ActivatablePOI_C.Deactivated
struct AActivatablePOI_C_Deactivated_Params
{
};

// Function ActivatablePOI.ActivatablePOI_C.ReceiveTick
struct AActivatablePOI_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatablePOI.ActivatablePOI_C.SetDistanceText
struct AActivatablePOI_C_SetDistanceText_Params
{
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatablePOI.ActivatablePOI_C.LoadState
struct AActivatablePOI_C_LoadState_Params
{
};

// Function ActivatablePOI.ActivatablePOI_C.ExecuteUbergraph_ActivatablePOI
struct AActivatablePOI_C_ExecuteUbergraph_ActivatablePOI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
