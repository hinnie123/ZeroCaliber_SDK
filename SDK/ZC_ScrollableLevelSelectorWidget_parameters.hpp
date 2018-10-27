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

// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.SetLevelImage
struct UScrollableLevelSelectorWidget_C_SetLevelImage_Params
{
	class UTexture*                                    Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.IndexCanBeDecremented
struct UScrollableLevelSelectorWidget_C_IndexCanBeDecremented_Params
{
	bool                                               Decrementable;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.IndexCanBeIncremented
struct UScrollableLevelSelectorWidget_C_IndexCanBeIncremented_Params
{
	bool                                               Incrementable;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.ClearScrollbox
struct UScrollableLevelSelectorWidget_C_ClearScrollbox_Params
{
};

// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.HandleArrows
struct UScrollableLevelSelectorWidget_C_HandleArrows_Params
{
};

// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.IsLevelLocked
struct UScrollableLevelSelectorWidget_C_IsLevelLocked_Params
{
	struct FLevelStruct                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Locked;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.ContinuousItemScale
struct UScrollableLevelSelectorWidget_C_ContinuousItemScale_Params
{
};

// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.GetTargetScrollOffset
struct UScrollableLevelSelectorWidget_C_GetTargetScrollOffset_Params
{
	float                                              TargetOffset;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.ScaleInterpolate
struct UScrollableLevelSelectorWidget_C_ScaleInterpolate_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.ScrollInterpolate
struct UScrollableLevelSelectorWidget_C_ScrollInterpolate_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.CalculateTargetScrollOffset
struct UScrollableLevelSelectorWidget_C_CalculateTargetScrollOffset_Params
{
};

// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.GetChild
struct UScrollableLevelSelectorWidget_C_GetChild_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Child;                                                    // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.HasAnyChildren
struct UScrollableLevelSelectorWidget_C_HasAnyChildren_Params
{
	bool                                               HasAnyChildren;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.SetupItemsScale
struct UScrollableLevelSelectorWidget_C_SetupItemsScale_Params
{
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.Construct
struct UScrollableLevelSelectorWidget_C_Construct_Params
{
};

// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.ScrollElementAt
struct UScrollableLevelSelectorWidget_C_ScrollElementAt_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.InitLevels
struct UScrollableLevelSelectorWidget_C_InitLevels_Params
{
	TArray<struct FLevelStruct>                        Levels;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.Tick
struct UScrollableLevelSelectorWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.BndEvt__ScrollButtonRight_K2Node_ComponentBoundEvent_16_OnButtonReleasedEvent__DelegateSignature
struct UScrollableLevelSelectorWidget_C_BndEvt__ScrollButtonRight_K2Node_ComponentBoundEvent_16_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.BndEvt__ScrollButtonLeft_K2Node_ComponentBoundEvent_33_OnButtonReleasedEvent__DelegateSignature
struct UScrollableLevelSelectorWidget_C_BndEvt__ScrollButtonLeft_K2Node_ComponentBoundEvent_33_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.ExecuteUbergraph_ScrollableLevelSelectorWidget
struct UScrollableLevelSelectorWidget_C_ExecuteUbergraph_ScrollableLevelSelectorWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.CurrentLevel__DelegateSignature
struct UScrollableLevelSelectorWidget_C_CurrentLevel__DelegateSignature_Params
{
	struct FLevelStruct                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
