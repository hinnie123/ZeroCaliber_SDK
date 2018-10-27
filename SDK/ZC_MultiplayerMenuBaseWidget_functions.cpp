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

// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.DisableButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDisable                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMultiplayerMenuBaseWidget_C::DisableButtons(bool bDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.DisableButtons");

	UMultiplayerMenuBaseWidget_C_DisableButtons_Params params;
	params.bDisable = bDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.ClearMessage
// (Public, BlueprintCallable, BlueprintEvent)

void UMultiplayerMenuBaseWidget_C::ClearMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.ClearMessage");

	UMultiplayerMenuBaseWidget_C_ClearMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.DisplayMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UMultiplayerMenuBaseWidget_C::DisplayMessage(const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.DisplayMessage");

	UMultiplayerMenuBaseWidget_C_DisplayMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.ShowProcessing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMultiplayerMenuBaseWidget_C::ShowProcessing(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.ShowProcessing");

	UMultiplayerMenuBaseWidget_C_ShowProcessing_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.SetFocusedPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UServerInfoWidget_C*     Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMultiplayerMenuBaseWidget_C::SetFocusedPanel(class UServerInfoWidget_C* Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.SetFocusedPanel");

	UMultiplayerMenuBaseWidget_C_SetFocusedPanel_Params params;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnFailure_67415F4E4C5209D7254488AEAE7BEC59
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMultiplayerMenuBaseWidget_C::OnFailure_67415F4E4C5209D7254488AEAE7BEC59(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnFailure_67415F4E4C5209D7254488AEAE7BEC59");

	UMultiplayerMenuBaseWidget_C_OnFailure_67415F4E4C5209D7254488AEAE7BEC59_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnSuccess_67415F4E4C5209D7254488AEAE7BEC59
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMultiplayerMenuBaseWidget_C::OnSuccess_67415F4E4C5209D7254488AEAE7BEC59(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnSuccess_67415F4E4C5209D7254488AEAE7BEC59");

	UMultiplayerMenuBaseWidget_C_OnSuccess_67415F4E4C5209D7254488AEAE7BEC59_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnFailure_6B15780C48582725CF062FA5C14C10AF
// (BlueprintCallable, BlueprintEvent)

void UMultiplayerMenuBaseWidget_C::OnFailure_6B15780C48582725CF062FA5C14C10AF()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnFailure_6B15780C48582725CF062FA5C14C10AF");

	UMultiplayerMenuBaseWidget_C_OnFailure_6B15780C48582725CF062FA5C14C10AF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnSuccess_6B15780C48582725CF062FA5C14C10AF
// (BlueprintCallable, BlueprintEvent)

void UMultiplayerMenuBaseWidget_C::OnSuccess_6B15780C48582725CF062FA5C14C10AF()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnSuccess_6B15780C48582725CF062FA5C14C10AF");

	UMultiplayerMenuBaseWidget_C_OnSuccess_6B15780C48582725CF062FA5C14C10AF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnFailure_381183F745E67D08CCBD3F81B2D137F1
// (BlueprintCallable, BlueprintEvent)

void UMultiplayerMenuBaseWidget_C::OnFailure_381183F745E67D08CCBD3F81B2D137F1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnFailure_381183F745E67D08CCBD3F81B2D137F1");

	UMultiplayerMenuBaseWidget_C_OnFailure_381183F745E67D08CCBD3F81B2D137F1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnSuccess_381183F745E67D08CCBD3F81B2D137F1
// (BlueprintCallable, BlueprintEvent)

void UMultiplayerMenuBaseWidget_C::OnSuccess_381183F745E67D08CCBD3F81B2D137F1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnSuccess_381183F745E67D08CCBD3F81B2D137F1");

	UMultiplayerMenuBaseWidget_C_OnSuccess_381183F745E67D08CCBD3F81B2D137F1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnFailure_1895203F49ECDB2E582548BD1FF0A56F
// (BlueprintCallable, BlueprintEvent)

void UMultiplayerMenuBaseWidget_C::OnFailure_1895203F49ECDB2E582548BD1FF0A56F()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnFailure_1895203F49ECDB2E582548BD1FF0A56F");

	UMultiplayerMenuBaseWidget_C_OnFailure_1895203F49ECDB2E582548BD1FF0A56F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnSuccess_1895203F49ECDB2E582548BD1FF0A56F
// (BlueprintCallable, BlueprintEvent)

void UMultiplayerMenuBaseWidget_C::OnSuccess_1895203F49ECDB2E582548BD1FF0A56F()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnSuccess_1895203F49ECDB2E582548BD1FF0A56F");

	UMultiplayerMenuBaseWidget_C_OnSuccess_1895203F49ECDB2E582548BD1FF0A56F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnFailure_266DBD654F6523FA07F052B9DBE7DD56
// (BlueprintCallable, BlueprintEvent)

void UMultiplayerMenuBaseWidget_C::OnFailure_266DBD654F6523FA07F052B9DBE7DD56()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnFailure_266DBD654F6523FA07F052B9DBE7DD56");

	UMultiplayerMenuBaseWidget_C_OnFailure_266DBD654F6523FA07F052B9DBE7DD56_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnSuccess_266DBD654F6523FA07F052B9DBE7DD56
// (BlueprintCallable, BlueprintEvent)

void UMultiplayerMenuBaseWidget_C::OnSuccess_266DBD654F6523FA07F052B9DBE7DD56()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnSuccess_266DBD654F6523FA07F052B9DBE7DD56");

	UMultiplayerMenuBaseWidget_C_OnSuccess_266DBD654F6523FA07F052B9DBE7DD56_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnFailure_31127B5A4550F207C61EFBBDF2AEF213
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMultiplayerMenuBaseWidget_C::OnFailure_31127B5A4550F207C61EFBBDF2AEF213(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnFailure_31127B5A4550F207C61EFBBDF2AEF213");

	UMultiplayerMenuBaseWidget_C_OnFailure_31127B5A4550F207C61EFBBDF2AEF213_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnSuccess_31127B5A4550F207C61EFBBDF2AEF213
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMultiplayerMenuBaseWidget_C::OnSuccess_31127B5A4550F207C61EFBBDF2AEF213(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.OnSuccess_31127B5A4550F207C61EFBBDF2AEF213");

	UMultiplayerMenuBaseWidget_C_OnSuccess_31127B5A4550F207C61EFBBDF2AEF213_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.BndEvt__Button_64_K2Node_ComponentBoundEvent_359_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerMenuBaseWidget_C::BndEvt__Button_64_K2Node_ComponentBoundEvent_359_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.BndEvt__Button_64_K2Node_ComponentBoundEvent_359_OnButtonPressedEvent__DelegateSignature");

	UMultiplayerMenuBaseWidget_C_BndEvt__Button_64_K2Node_ComponentBoundEvent_359_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.BndEvt__Button_65_K2Node_ComponentBoundEvent_386_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerMenuBaseWidget_C::BndEvt__Button_65_K2Node_ComponentBoundEvent_386_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.BndEvt__Button_65_K2Node_ComponentBoundEvent_386_OnButtonPressedEvent__DelegateSignature");

	UMultiplayerMenuBaseWidget_C_BndEvt__Button_65_K2Node_ComponentBoundEvent_386_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.BndEvt__Button_32_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UMultiplayerMenuBaseWidget_C::BndEvt__Button_32_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.BndEvt__Button_32_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature");

	UMultiplayerMenuBaseWidget_C_BndEvt__Button_32_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.ExecuteUbergraph_MultiplayerMenuBaseWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMultiplayerMenuBaseWidget_C::ExecuteUbergraph_MultiplayerMenuBaseWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MultiplayerMenuBaseWidget.MultiplayerMenuBaseWidget_C.ExecuteUbergraph_MultiplayerMenuBaseWidget");

	UMultiplayerMenuBaseWidget_C_ExecuteUbergraph_MultiplayerMenuBaseWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
