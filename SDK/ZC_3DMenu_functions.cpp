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

// Function 3DMenu.3DMenu_C.DisableButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDisable                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U3DMenu_C::DisableButtons(bool bDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function 3DMenu.3DMenu_C.DisableButtons");

	U3DMenu_C_DisableButtons_Params params;
	params.bDisable = bDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 3DMenu.3DMenu_C.ClearMessage
// (Public, BlueprintCallable, BlueprintEvent)

void U3DMenu_C::ClearMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function 3DMenu.3DMenu_C.ClearMessage");

	U3DMenu_C_ClearMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 3DMenu.3DMenu_C.DisplayMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void U3DMenu_C::DisplayMessage(const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function 3DMenu.3DMenu_C.DisplayMessage");

	U3DMenu_C_DisplayMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 3DMenu.3DMenu_C.ShowProcessing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U3DMenu_C::ShowProcessing(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function 3DMenu.3DMenu_C.ShowProcessing");

	U3DMenu_C_ShowProcessing_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 3DMenu.3DMenu_C.SetFocusedPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UServerInfo_C*           Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U3DMenu_C::SetFocusedPanel(class UServerInfo_C* Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function 3DMenu.3DMenu_C.SetFocusedPanel");

	U3DMenu_C_SetFocusedPanel_Params params;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 3DMenu.3DMenu_C.OnFailure_BF05D0D34E41E3B3A3944DAD348F03B4
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void U3DMenu_C::OnFailure_BF05D0D34E41E3B3A3944DAD348F03B4(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function 3DMenu.3DMenu_C.OnFailure_BF05D0D34E41E3B3A3944DAD348F03B4");

	U3DMenu_C_OnFailure_BF05D0D34E41E3B3A3944DAD348F03B4_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 3DMenu.3DMenu_C.OnSuccess_BF05D0D34E41E3B3A3944DAD348F03B4
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void U3DMenu_C::OnSuccess_BF05D0D34E41E3B3A3944DAD348F03B4(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function 3DMenu.3DMenu_C.OnSuccess_BF05D0D34E41E3B3A3944DAD348F03B4");

	U3DMenu_C_OnSuccess_BF05D0D34E41E3B3A3944DAD348F03B4_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 3DMenu.3DMenu_C.OnFailure_2B9602E044744BAEA47D46A8A180ECA6
// (BlueprintCallable, BlueprintEvent)

void U3DMenu_C::OnFailure_2B9602E044744BAEA47D46A8A180ECA6()
{
	static auto fn = UObject::FindObject<UFunction>("Function 3DMenu.3DMenu_C.OnFailure_2B9602E044744BAEA47D46A8A180ECA6");

	U3DMenu_C_OnFailure_2B9602E044744BAEA47D46A8A180ECA6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 3DMenu.3DMenu_C.OnSuccess_2B9602E044744BAEA47D46A8A180ECA6
// (BlueprintCallable, BlueprintEvent)

void U3DMenu_C::OnSuccess_2B9602E044744BAEA47D46A8A180ECA6()
{
	static auto fn = UObject::FindObject<UFunction>("Function 3DMenu.3DMenu_C.OnSuccess_2B9602E044744BAEA47D46A8A180ECA6");

	U3DMenu_C_OnSuccess_2B9602E044744BAEA47D46A8A180ECA6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 3DMenu.3DMenu_C.OnFailure_17E506A5433C55551FC56DAF4EBC4D25
// (BlueprintCallable, BlueprintEvent)

void U3DMenu_C::OnFailure_17E506A5433C55551FC56DAF4EBC4D25()
{
	static auto fn = UObject::FindObject<UFunction>("Function 3DMenu.3DMenu_C.OnFailure_17E506A5433C55551FC56DAF4EBC4D25");

	U3DMenu_C_OnFailure_17E506A5433C55551FC56DAF4EBC4D25_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 3DMenu.3DMenu_C.OnSuccess_17E506A5433C55551FC56DAF4EBC4D25
// (BlueprintCallable, BlueprintEvent)

void U3DMenu_C::OnSuccess_17E506A5433C55551FC56DAF4EBC4D25()
{
	static auto fn = UObject::FindObject<UFunction>("Function 3DMenu.3DMenu_C.OnSuccess_17E506A5433C55551FC56DAF4EBC4D25");

	U3DMenu_C_OnSuccess_17E506A5433C55551FC56DAF4EBC4D25_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 3DMenu.3DMenu_C.OnFailure_12D959694EA5B5529EA03FBA2A564C06
// (BlueprintCallable, BlueprintEvent)

void U3DMenu_C::OnFailure_12D959694EA5B5529EA03FBA2A564C06()
{
	static auto fn = UObject::FindObject<UFunction>("Function 3DMenu.3DMenu_C.OnFailure_12D959694EA5B5529EA03FBA2A564C06");

	U3DMenu_C_OnFailure_12D959694EA5B5529EA03FBA2A564C06_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 3DMenu.3DMenu_C.OnSuccess_12D959694EA5B5529EA03FBA2A564C06
// (BlueprintCallable, BlueprintEvent)

void U3DMenu_C::OnSuccess_12D959694EA5B5529EA03FBA2A564C06()
{
	static auto fn = UObject::FindObject<UFunction>("Function 3DMenu.3DMenu_C.OnSuccess_12D959694EA5B5529EA03FBA2A564C06");

	U3DMenu_C_OnSuccess_12D959694EA5B5529EA03FBA2A564C06_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 3DMenu.3DMenu_C.OnFailure_6F048AE542D3C22E0E13DCAA7BD7A7A9
// (BlueprintCallable, BlueprintEvent)

void U3DMenu_C::OnFailure_6F048AE542D3C22E0E13DCAA7BD7A7A9()
{
	static auto fn = UObject::FindObject<UFunction>("Function 3DMenu.3DMenu_C.OnFailure_6F048AE542D3C22E0E13DCAA7BD7A7A9");

	U3DMenu_C_OnFailure_6F048AE542D3C22E0E13DCAA7BD7A7A9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 3DMenu.3DMenu_C.OnSuccess_6F048AE542D3C22E0E13DCAA7BD7A7A9
// (BlueprintCallable, BlueprintEvent)

void U3DMenu_C::OnSuccess_6F048AE542D3C22E0E13DCAA7BD7A7A9()
{
	static auto fn = UObject::FindObject<UFunction>("Function 3DMenu.3DMenu_C.OnSuccess_6F048AE542D3C22E0E13DCAA7BD7A7A9");

	U3DMenu_C_OnSuccess_6F048AE542D3C22E0E13DCAA7BD7A7A9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 3DMenu.3DMenu_C.OnFailure_25FE13714E6A7B4A2140E39B5AFD34A4
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void U3DMenu_C::OnFailure_25FE13714E6A7B4A2140E39B5AFD34A4(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function 3DMenu.3DMenu_C.OnFailure_25FE13714E6A7B4A2140E39B5AFD34A4");

	U3DMenu_C_OnFailure_25FE13714E6A7B4A2140E39B5AFD34A4_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 3DMenu.3DMenu_C.OnSuccess_25FE13714E6A7B4A2140E39B5AFD34A4
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Results                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void U3DMenu_C::OnSuccess_25FE13714E6A7B4A2140E39B5AFD34A4(TArray<struct FBlueprintSessionResult> Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function 3DMenu.3DMenu_C.OnSuccess_25FE13714E6A7B4A2140E39B5AFD34A4");

	U3DMenu_C_OnSuccess_25FE13714E6A7B4A2140E39B5AFD34A4_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 3DMenu.3DMenu_C.BndEvt__Button_64_K2Node_ComponentBoundEvent_359_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void U3DMenu_C::BndEvt__Button_64_K2Node_ComponentBoundEvent_359_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function 3DMenu.3DMenu_C.BndEvt__Button_64_K2Node_ComponentBoundEvent_359_OnButtonPressedEvent__DelegateSignature");

	U3DMenu_C_BndEvt__Button_64_K2Node_ComponentBoundEvent_359_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 3DMenu.3DMenu_C.BndEvt__Button_65_K2Node_ComponentBoundEvent_386_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void U3DMenu_C::BndEvt__Button_65_K2Node_ComponentBoundEvent_386_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function 3DMenu.3DMenu_C.BndEvt__Button_65_K2Node_ComponentBoundEvent_386_OnButtonPressedEvent__DelegateSignature");

	U3DMenu_C_BndEvt__Button_65_K2Node_ComponentBoundEvent_386_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 3DMenu.3DMenu_C.BndEvt__Button_32_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void U3DMenu_C::BndEvt__Button_32_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function 3DMenu.3DMenu_C.BndEvt__Button_32_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature");

	U3DMenu_C_BndEvt__Button_32_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function 3DMenu.3DMenu_C.ExecuteUbergraph_3DMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void U3DMenu_C::ExecuteUbergraph_3DMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function 3DMenu.3DMenu_C.ExecuteUbergraph_3DMenu");

	U3DMenu_C_ExecuteUbergraph_3DMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
