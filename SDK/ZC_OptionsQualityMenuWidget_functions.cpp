// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.GetTextRenderScale
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UOptionsQualityMenuWidget_C::GetTextRenderScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.GetTextRenderScale");

	UOptionsQualityMenuWidget_C_GetTextRenderScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.SelectAA
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAAOptions>        AA                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsQualityMenuWidget_C::SelectAA(TEnumAsByte<EAAOptions> AA)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.SelectAA");

	UOptionsQualityMenuWidget_C_SelectAA_Params params;
	params.AA = AA;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.SelectQuality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EQualityOptions>   Quality                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsQualityMenuWidget_C::SelectQuality(TEnumAsByte<EQualityOptions> Quality)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.SelectQuality");

	UOptionsQualityMenuWidget_C_SelectQuality_Params params;
	params.Quality = Quality;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_94_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsQualityMenuWidget_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_94_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_94_OnButtonReleasedEvent__DelegateSignature");

	UOptionsQualityMenuWidget_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_94_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.BndEvt__ButtonQualityLow_K2Node_ComponentBoundEvent_192_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsQualityMenuWidget_C::BndEvt__ButtonQualityLow_K2Node_ComponentBoundEvent_192_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.BndEvt__ButtonQualityLow_K2Node_ComponentBoundEvent_192_OnButtonReleasedEvent__DelegateSignature");

	UOptionsQualityMenuWidget_C_BndEvt__ButtonQualityLow_K2Node_ComponentBoundEvent_192_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.BndEvt__ButtonQualityMedium_K2Node_ComponentBoundEvent_209_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsQualityMenuWidget_C::BndEvt__ButtonQualityMedium_K2Node_ComponentBoundEvent_209_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.BndEvt__ButtonQualityMedium_K2Node_ComponentBoundEvent_209_OnButtonReleasedEvent__DelegateSignature");

	UOptionsQualityMenuWidget_C_BndEvt__ButtonQualityMedium_K2Node_ComponentBoundEvent_209_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.BndEvt__ButtonQualityHigh_K2Node_ComponentBoundEvent_228_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsQualityMenuWidget_C::BndEvt__ButtonQualityHigh_K2Node_ComponentBoundEvent_228_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.BndEvt__ButtonQualityHigh_K2Node_ComponentBoundEvent_228_OnButtonReleasedEvent__DelegateSignature");

	UOptionsQualityMenuWidget_C_BndEvt__ButtonQualityHigh_K2Node_ComponentBoundEvent_228_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.BndEvt__ButtonAAOff_K2Node_ComponentBoundEvent_248_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsQualityMenuWidget_C::BndEvt__ButtonAAOff_K2Node_ComponentBoundEvent_248_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.BndEvt__ButtonAAOff_K2Node_ComponentBoundEvent_248_OnButtonReleasedEvent__DelegateSignature");

	UOptionsQualityMenuWidget_C_BndEvt__ButtonAAOff_K2Node_ComponentBoundEvent_248_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.BndEvt__ButtonAAFxaa_K2Node_ComponentBoundEvent_269_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsQualityMenuWidget_C::BndEvt__ButtonAAFxaa_K2Node_ComponentBoundEvent_269_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.BndEvt__ButtonAAFxaa_K2Node_ComponentBoundEvent_269_OnButtonReleasedEvent__DelegateSignature");

	UOptionsQualityMenuWidget_C_BndEvt__ButtonAAFxaa_K2Node_ComponentBoundEvent_269_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.BndEvt__ButtonAATaa_K2Node_ComponentBoundEvent_291_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsQualityMenuWidget_C::BndEvt__ButtonAATaa_K2Node_ComponentBoundEvent_291_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.BndEvt__ButtonAATaa_K2Node_ComponentBoundEvent_291_OnButtonReleasedEvent__DelegateSignature");

	UOptionsQualityMenuWidget_C_BndEvt__ButtonAATaa_K2Node_ComponentBoundEvent_291_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionsQualityMenuWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.Construct");

	UOptionsQualityMenuWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsQualityMenuWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.PreConstruct");

	UOptionsQualityMenuWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.OnSliderValueChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsQualityMenuWidget_C::OnSliderValueChanged(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.OnSliderValueChanged");

	UOptionsQualityMenuWidget_C_OnSliderValueChanged_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.BndEvt__ButtonReset_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsQualityMenuWidget_C::BndEvt__ButtonReset_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.BndEvt__ButtonReset_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");

	UOptionsQualityMenuWidget_C_BndEvt__ButtonReset_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.FPSCounter
// (BlueprintCallable, BlueprintEvent)

void UOptionsQualityMenuWidget_C::FPSCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.FPSCounter");

	UOptionsQualityMenuWidget_C_FPSCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.ExecuteUbergraph_OptionsQualityMenuWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsQualityMenuWidget_C::ExecuteUbergraph_OptionsQualityMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsQualityMenuWidget.OptionsQualityMenuWidget_C.ExecuteUbergraph_OptionsQualityMenuWidget");

	UOptionsQualityMenuWidget_C_ExecuteUbergraph_OptionsQualityMenuWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
