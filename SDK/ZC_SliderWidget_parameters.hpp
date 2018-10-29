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

// Function SliderWidget.SliderWidget_C.UpdateText
struct USliderWidget_C_UpdateText_Params
{
};

// Function SliderWidget.SliderWidget_C.CurrentValueToSliderValue
struct USliderWidget_C_CurrentValueToSliderValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SliderWidget.SliderWidget_C.InitValues
struct USliderWidget_C_InitValues_Params
{
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              NewMinValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewMaxValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       MinValueCustomText;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       MaxValueCustomText;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               UseAdditionalText;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AdditionalText;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               UseValueText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ValueTextOffset;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldRound;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Digits;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SliderWidget.SliderWidget_C.SliderValueToCurrentValue
struct USliderWidget_C_SliderValueToCurrentValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SliderWidget.SliderWidget_C.SetSliderValue
struct USliderWidget_C_SetSliderValue_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SliderWidget.SliderWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnMouseCaptureEndEvent__DelegateSignature
struct USliderWidget_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function SliderWidget.SliderWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
struct USliderWidget_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SliderWidget.SliderWidget_C.ExecuteUbergraph_SliderWidget
struct USliderWidget_C_ExecuteUbergraph_SliderWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SliderWidget.SliderWidget_C.OnSliderChangeValue__DelegateSignature
struct USliderWidget_C_OnSliderChangeValue__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
