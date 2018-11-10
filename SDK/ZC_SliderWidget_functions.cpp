// ZeroCaliber (0.6.0 EA) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SliderWidget.SliderWidget_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USliderWidget_C::UpdateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function SliderWidget.SliderWidget_C.UpdateText");

	USliderWidget_C_UpdateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SliderWidget.SliderWidget_C.CurrentValueToSliderValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USliderWidget_C::CurrentValueToSliderValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function SliderWidget.SliderWidget_C.CurrentValueToSliderValue");

	USliderWidget_C_CurrentValueToSliderValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SliderWidget.SliderWidget_C.InitValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          NewMinValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewMaxValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   MinValueCustomText             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   MaxValueCustomText             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           UseAdditionalText              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AdditionalText                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           UseValueText                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ValueTextOffset                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldRound                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Digits                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USliderWidget_C::InitValues(const struct FText& Title, float NewMinValue, float NewMaxValue, const struct FText& MinValueCustomText, const struct FText& MaxValueCustomText, bool UseAdditionalText, const struct FString& AdditionalText, bool UseValueText, float ValueTextOffset, bool ShouldRound, int Digits)
{
	static auto fn = UObject::FindObject<UFunction>("Function SliderWidget.SliderWidget_C.InitValues");

	USliderWidget_C_InitValues_Params params;
	params.Title = Title;
	params.NewMinValue = NewMinValue;
	params.NewMaxValue = NewMaxValue;
	params.MinValueCustomText = MinValueCustomText;
	params.MaxValueCustomText = MaxValueCustomText;
	params.UseAdditionalText = UseAdditionalText;
	params.AdditionalText = AdditionalText;
	params.UseValueText = UseValueText;
	params.ValueTextOffset = ValueTextOffset;
	params.ShouldRound = ShouldRound;
	params.Digits = Digits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SliderWidget.SliderWidget_C.SliderValueToCurrentValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USliderWidget_C::SliderValueToCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function SliderWidget.SliderWidget_C.SliderValueToCurrentValue");

	USliderWidget_C_SliderValueToCurrentValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SliderWidget.SliderWidget_C.SetSliderValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USliderWidget_C::SetSliderValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SliderWidget.SliderWidget_C.SetSliderValue");

	USliderWidget_C_SetSliderValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SliderWidget.SliderWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void USliderWidget_C::BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SliderWidget.SliderWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnMouseCaptureEndEvent__DelegateSignature");

	USliderWidget_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SliderWidget.SliderWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USliderWidget_C::BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SliderWidget.SliderWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	USliderWidget_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SliderWidget.SliderWidget_C.ExecuteUbergraph_SliderWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USliderWidget_C::ExecuteUbergraph_SliderWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SliderWidget.SliderWidget_C.ExecuteUbergraph_SliderWidget");

	USliderWidget_C_ExecuteUbergraph_SliderWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SliderWidget.SliderWidget_C.OnSliderChangeValue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USliderWidget_C::OnSliderChangeValue__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SliderWidget.SliderWidget_C.OnSliderChangeValue__DelegateSignature");

	USliderWidget_C_OnSliderChangeValue__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
