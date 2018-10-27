// ZeroCaliber (0.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OptionsControlsSetupWidget.OptionsControlsSetupWidget_C.UpdateSlider
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          CurrentValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewMinValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewMaxValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsControlsSetupWidget_C::UpdateSlider(const struct FText& InText, float CurrentValue, float NewMinValue, float NewMaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsControlsSetupWidget.OptionsControlsSetupWidget_C.UpdateSlider");

	UOptionsControlsSetupWidget_C_UpdateSlider_Params params;
	params.InText = InText;
	params.CurrentValue = CurrentValue;
	params.NewMinValue = NewMinValue;
	params.NewMaxValue = NewMaxValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsControlsSetupWidget.OptionsControlsSetupWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsControlsSetupWidget_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsControlsSetupWidget.OptionsControlsSetupWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature");

	UOptionsControlsSetupWidget_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_12_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsControlsSetupWidget.OptionsControlsSetupWidget_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsControlsSetupWidget_C::BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsControlsSetupWidget.OptionsControlsSetupWidget_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");

	UOptionsControlsSetupWidget_C_BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsControlsSetupWidget.OptionsControlsSetupWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionsControlsSetupWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsControlsSetupWidget.OptionsControlsSetupWidget_C.Construct");

	UOptionsControlsSetupWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsControlsSetupWidget.OptionsControlsSetupWidget_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsControlsSetupWidget_C::BndEvt__RightButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsControlsSetupWidget.OptionsControlsSetupWidget_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");

	UOptionsControlsSetupWidget_C_BndEvt__RightButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsControlsSetupWidget.OptionsControlsSetupWidget_C.UpdateButtons
// (BlueprintCallable, BlueprintEvent)

void UOptionsControlsSetupWidget_C::UpdateButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsControlsSetupWidget.OptionsControlsSetupWidget_C.UpdateButtons");

	UOptionsControlsSetupWidget_C_UpdateButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsControlsSetupWidget.OptionsControlsSetupWidget_C.BndEvt__HeadOrientedButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsControlsSetupWidget_C::BndEvt__HeadOrientedButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsControlsSetupWidget.OptionsControlsSetupWidget_C.BndEvt__HeadOrientedButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");

	UOptionsControlsSetupWidget_C_BndEvt__HeadOrientedButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsControlsSetupWidget.OptionsControlsSetupWidget_C.BndEvt__ControllerOrientedButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsControlsSetupWidget_C::BndEvt__ControllerOrientedButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsControlsSetupWidget.OptionsControlsSetupWidget_C.BndEvt__ControllerOrientedButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");

	UOptionsControlsSetupWidget_C_BndEvt__ControllerOrientedButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsControlsSetupWidget.OptionsControlsSetupWidget_C.BndEvt__SnapTurnButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsControlsSetupWidget_C::BndEvt__SnapTurnButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsControlsSetupWidget.OptionsControlsSetupWidget_C.BndEvt__SnapTurnButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");

	UOptionsControlsSetupWidget_C_BndEvt__SnapTurnButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsControlsSetupWidget.OptionsControlsSetupWidget_C.BndEvt__SmoothTurnButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsControlsSetupWidget_C::BndEvt__SmoothTurnButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsControlsSetupWidget.OptionsControlsSetupWidget_C.BndEvt__SmoothTurnButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature");

	UOptionsControlsSetupWidget_C_BndEvt__SmoothTurnButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsControlsSetupWidget.OptionsControlsSetupWidget_C.BndEvt__TurnSlider_K2Node_ComponentBoundEvent_6_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsControlsSetupWidget_C::BndEvt__TurnSlider_K2Node_ComponentBoundEvent_6_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsControlsSetupWidget.OptionsControlsSetupWidget_C.BndEvt__TurnSlider_K2Node_ComponentBoundEvent_6_OnMouseCaptureEndEvent__DelegateSignature");

	UOptionsControlsSetupWidget_C_BndEvt__TurnSlider_K2Node_ComponentBoundEvent_6_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsControlsSetupWidget.OptionsControlsSetupWidget_C.ExecuteUbergraph_OptionsControlsSetupWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsControlsSetupWidget_C::ExecuteUbergraph_OptionsControlsSetupWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsControlsSetupWidget.OptionsControlsSetupWidget_C.ExecuteUbergraph_OptionsControlsSetupWidget");

	UOptionsControlsSetupWidget_C_ExecuteUbergraph_OptionsControlsSetupWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
