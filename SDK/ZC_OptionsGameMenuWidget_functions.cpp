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

// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.GetPlayerPawnCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerPawnCharacter_C*  PlayerPawnCharacter            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsGameMenuWidget_C::GetPlayerPawnCharacter(class APlayerPawnCharacter_C** PlayerPawnCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.GetPlayerPawnCharacter");

	UOptionsGameMenuWidget_C_GetPlayerPawnCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerPawnCharacter != nullptr)
		*PlayerPawnCharacter = params.PlayerPawnCharacter;
}


// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.SelectSubtitleButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SubtitleEnabled                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsGameMenuWidget_C::SelectSubtitleButtons(bool SubtitleEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.SelectSubtitleButtons");

	UOptionsGameMenuWidget_C_SelectSubtitleButtons_Params params;
	params.SubtitleEnabled = SubtitleEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.TurnOffOutline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptionsGameMenuWidget_C::TurnOffOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.TurnOffOutline");

	UOptionsGameMenuWidget_C_TurnOffOutline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.TurnOnOutline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptionsGameMenuWidget_C::TurnOnOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.TurnOnOutline");

	UOptionsGameMenuWidget_C_TurnOnOutline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.SelectOutlineButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutlinUse                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsGameMenuWidget_C::SelectOutlineButton(bool OutlinUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.SelectOutlineButton");

	UOptionsGameMenuWidget_C_SelectOutlineButton_Params params;
	params.OutlinUse = OutlinUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.SelectDifficultyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EDifficulty>       Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsGameMenuWidget_C::SelectDifficultyButton(TEnumAsByte<EDifficulty> Difficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.SelectDifficultyButton");

	UOptionsGameMenuWidget_C_SelectDifficultyButton_Params params;
	params.Difficulty = Difficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.GetTextPlayerHeight
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UOptionsGameMenuWidget_C::GetTextPlayerHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.GetTextPlayerHeight");

	UOptionsGameMenuWidget_C_GetTextPlayerHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionsGameMenuWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.Construct");

	UOptionsGameMenuWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.BndEvt__EasyButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsGameMenuWidget_C::BndEvt__EasyButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.BndEvt__EasyButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");

	UOptionsGameMenuWidget_C_BndEvt__EasyButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.BndEvt__MediumButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsGameMenuWidget_C::BndEvt__MediumButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.BndEvt__MediumButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");

	UOptionsGameMenuWidget_C_BndEvt__MediumButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.BndEvt__HardButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsGameMenuWidget_C::BndEvt__HardButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.BndEvt__HardButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");

	UOptionsGameMenuWidget_C_BndEvt__HardButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsGameMenuWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.PreConstruct");

	UOptionsGameMenuWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.OnSliderValueChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsGameMenuWidget_C::OnSliderValueChanged(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.OnSliderValueChanged");

	UOptionsGameMenuWidget_C_OnSliderValueChanged_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.BndEvt__OutlineOnButton_K2Node_ComponentBoundEvent_21_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsGameMenuWidget_C::BndEvt__OutlineOnButton_K2Node_ComponentBoundEvent_21_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.BndEvt__OutlineOnButton_K2Node_ComponentBoundEvent_21_OnButtonReleasedEvent__DelegateSignature");

	UOptionsGameMenuWidget_C_BndEvt__OutlineOnButton_K2Node_ComponentBoundEvent_21_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.BndEvt__OutlineOffButton_K2Node_ComponentBoundEvent_42_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsGameMenuWidget_C::BndEvt__OutlineOffButton_K2Node_ComponentBoundEvent_42_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.BndEvt__OutlineOffButton_K2Node_ComponentBoundEvent_42_OnButtonReleasedEvent__DelegateSignature");

	UOptionsGameMenuWidget_C_BndEvt__OutlineOffButton_K2Node_ComponentBoundEvent_42_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.BndEvt__OnButton_K2Node_ComponentBoundEvent_140_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsGameMenuWidget_C::BndEvt__OnButton_K2Node_ComponentBoundEvent_140_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.BndEvt__OnButton_K2Node_ComponentBoundEvent_140_OnButtonReleasedEvent__DelegateSignature");

	UOptionsGameMenuWidget_C_BndEvt__OnButton_K2Node_ComponentBoundEvent_140_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.BndEvt__OffButton_K2Node_ComponentBoundEvent_163_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsGameMenuWidget_C::BndEvt__OffButton_K2Node_ComponentBoundEvent_163_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.BndEvt__OffButton_K2Node_ComponentBoundEvent_163_OnButtonReleasedEvent__DelegateSignature");

	UOptionsGameMenuWidget_C_BndEvt__OffButton_K2Node_ComponentBoundEvent_163_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_94_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsGameMenuWidget_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_94_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_94_OnButtonReleasedEvent__DelegateSignature");

	UOptionsGameMenuWidget_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_94_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.BndEvt__AutomeasureButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsGameMenuWidget_C::BndEvt__AutomeasureButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.BndEvt__AutomeasureButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");

	UOptionsGameMenuWidget_C_BndEvt__AutomeasureButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.CalculateHeight
// (BlueprintCallable, BlueprintEvent)

void UOptionsGameMenuWidget_C::CalculateHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.CalculateHeight");

	UOptionsGameMenuWidget_C_CalculateHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.ExecuteUbergraph_OptionsGameMenuWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsGameMenuWidget_C::ExecuteUbergraph_OptionsGameMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsGameMenuWidget.OptionsGameMenuWidget_C.ExecuteUbergraph_OptionsGameMenuWidget");

	UOptionsGameMenuWidget_C_ExecuteUbergraph_OptionsGameMenuWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
