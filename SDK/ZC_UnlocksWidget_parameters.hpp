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

// Function UnlocksWidget.UnlocksWidget_C.IndexCanBeDecremented
struct UUnlocksWidget_C_IndexCanBeDecremented_Params
{
	bool                                               Decrementable;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UnlocksWidget.UnlocksWidget_C.IndexCanBeIncremented
struct UUnlocksWidget_C_IndexCanBeIncremented_Params
{
	bool                                               Incrementable;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UnlocksWidget.UnlocksWidget_C.ClearScrollbox
struct UUnlocksWidget_C_ClearScrollbox_Params
{
};

// Function UnlocksWidget.UnlocksWidget_C.HandleArrows
struct UUnlocksWidget_C_HandleArrows_Params
{
};

// Function UnlocksWidget.UnlocksWidget_C.IsLevelLocked
struct UUnlocksWidget_C_IsLevelLocked_Params
{
	struct FLevelStruct                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Locked;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UnlocksWidget.UnlocksWidget_C.ContinuousItemScale
struct UUnlocksWidget_C_ContinuousItemScale_Params
{
};

// Function UnlocksWidget.UnlocksWidget_C.GetTargetScrollOffset
struct UUnlocksWidget_C_GetTargetScrollOffset_Params
{
	float                                              TargetOffset;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UnlocksWidget.UnlocksWidget_C.ScaleInterpolate
struct UUnlocksWidget_C_ScaleInterpolate_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnlocksWidget.UnlocksWidget_C.ScrollInterpolate
struct UUnlocksWidget_C_ScrollInterpolate_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnlocksWidget.UnlocksWidget_C.CalculateTargetScrollOffset
struct UUnlocksWidget_C_CalculateTargetScrollOffset_Params
{
};

// Function UnlocksWidget.UnlocksWidget_C.GetChild
struct UUnlocksWidget_C_GetChild_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Child;                                                    // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnlocksWidget.UnlocksWidget_C.HasAnyChildren
struct UUnlocksWidget_C_HasAnyChildren_Params
{
	bool                                               HasAnyChildren;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UnlocksWidget.UnlocksWidget_C.SetupItemsScale
struct UUnlocksWidget_C_SetupItemsScale_Params
{
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnlocksWidget.UnlocksWidget_C.Tick
struct UUnlocksWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnlocksWidget.UnlocksWidget_C.ScrollElementAt
struct UUnlocksWidget_C_ScrollElementAt_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnlocksWidget.UnlocksWidget_C.Initialize
struct UUnlocksWidget_C_Initialize_Params
{
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FTextImage>                          Items;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UnlocksWidget.UnlocksWidget_C.BndEvt__ScrollButtonRight_K2Node_ComponentBoundEvent_16_OnButtonReleasedEvent__DelegateSignature
struct UUnlocksWidget_C_BndEvt__ScrollButtonRight_K2Node_ComponentBoundEvent_16_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function UnlocksWidget.UnlocksWidget_C.BndEvt__ScrollButtonLeft_K2Node_ComponentBoundEvent_33_OnButtonReleasedEvent__DelegateSignature
struct UUnlocksWidget_C_BndEvt__ScrollButtonLeft_K2Node_ComponentBoundEvent_33_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function UnlocksWidget.UnlocksWidget_C.BndEvt__ButtonOk_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
struct UUnlocksWidget_C_BndEvt__ButtonOk_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function UnlocksWidget.UnlocksWidget_C.ExecuteUbergraph_UnlocksWidget
struct UUnlocksWidget_C_ExecuteUbergraph_UnlocksWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnlocksWidget.UnlocksWidget_C.ButtonOkReleased__DelegateSignature
struct UUnlocksWidget_C_ButtonOkReleased__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
