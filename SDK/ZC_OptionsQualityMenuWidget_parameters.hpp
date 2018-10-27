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

// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.GetTextRenderScale
struct UOptionsQualityMenuWidget_C_GetTextRenderScale_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.SelectAA
struct UOptionsQualityMenuWidget_C_SelectAA_Params
{
	TEnumAsByte<EAAOptions>                            AA;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.SelectQuality
struct UOptionsQualityMenuWidget_C_SelectQuality_Params
{
	TEnumAsByte<EQualityOptions>                       Quality;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_94_OnButtonReleasedEvent__DelegateSignature
struct UOptionsQualityMenuWidget_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_94_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.BndEvt__ButtonQualityLow_K2Node_ComponentBoundEvent_192_OnButtonReleasedEvent__DelegateSignature
struct UOptionsQualityMenuWidget_C_BndEvt__ButtonQualityLow_K2Node_ComponentBoundEvent_192_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.BndEvt__ButtonQualityMedium_K2Node_ComponentBoundEvent_209_OnButtonReleasedEvent__DelegateSignature
struct UOptionsQualityMenuWidget_C_BndEvt__ButtonQualityMedium_K2Node_ComponentBoundEvent_209_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.BndEvt__ButtonQualityHigh_K2Node_ComponentBoundEvent_228_OnButtonReleasedEvent__DelegateSignature
struct UOptionsQualityMenuWidget_C_BndEvt__ButtonQualityHigh_K2Node_ComponentBoundEvent_228_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.BndEvt__ButtonAAOff_K2Node_ComponentBoundEvent_248_OnButtonReleasedEvent__DelegateSignature
struct UOptionsQualityMenuWidget_C_BndEvt__ButtonAAOff_K2Node_ComponentBoundEvent_248_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.BndEvt__ButtonAAFxaa_K2Node_ComponentBoundEvent_269_OnButtonReleasedEvent__DelegateSignature
struct UOptionsQualityMenuWidget_C_BndEvt__ButtonAAFxaa_K2Node_ComponentBoundEvent_269_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.BndEvt__ButtonAATaa_K2Node_ComponentBoundEvent_291_OnButtonReleasedEvent__DelegateSignature
struct UOptionsQualityMenuWidget_C_BndEvt__ButtonAATaa_K2Node_ComponentBoundEvent_291_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.Construct
struct UOptionsQualityMenuWidget_C_Construct_Params
{
};

// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.PreConstruct
struct UOptionsQualityMenuWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.OnSliderValueChanged
struct UOptionsQualityMenuWidget_C_OnSliderValueChanged_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.BndEvt__ButtonReset_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
struct UOptionsQualityMenuWidget_C_BndEvt__ButtonReset_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.FPSCounter
struct UOptionsQualityMenuWidget_C_FPSCounter_Params
{
};

// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.ExecuteUbergraph_OptionsQualityMenuWidget
struct UOptionsQualityMenuWidget_C_ExecuteUbergraph_OptionsQualityMenuWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
