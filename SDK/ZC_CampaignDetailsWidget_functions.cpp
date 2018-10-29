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

// Function CampaignDetailsWidget.CampaignDetailsWidget_C.IsLevelLocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLevelStruct            Level                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Locked                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCampaignDetailsWidget_C::IsLevelLocked(const struct FLevelStruct& Level, bool* Locked)
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignDetailsWidget.CampaignDetailsWidget_C.IsLevelLocked");

	UCampaignDetailsWidget_C_IsLevelLocked_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locked != nullptr)
		*Locked = params.Locked;
}


// Function CampaignDetailsWidget.CampaignDetailsWidget_C.ChangeStartButtonStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECampaignStatusEnum> LevelStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCampaignDetailsWidget_C::ChangeStartButtonStyle(TEnumAsByte<ECampaignStatusEnum> LevelStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignDetailsWidget.CampaignDetailsWidget_C.ChangeStartButtonStyle");

	UCampaignDetailsWidget_C_ChangeStartButtonStyle_Params params;
	params.LevelStatus = LevelStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignDetailsWidget.CampaignDetailsWidget_C.TurnOnVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TurnOn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCampaignDetailsWidget_C::TurnOnVisibility(bool TurnOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignDetailsWidget.CampaignDetailsWidget_C.TurnOnVisibility");

	UCampaignDetailsWidget_C_TurnOnVisibility_Params params;
	params.TurnOn = TurnOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignDetailsWidget.CampaignDetailsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCampaignDetailsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignDetailsWidget.CampaignDetailsWidget_C.Construct");

	UCampaignDetailsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignDetailsWidget.CampaignDetailsWidget_C.BndEvt__StartLevelButton_K2Node_ComponentBoundEvent_87_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UCampaignDetailsWidget_C::BndEvt__StartLevelButton_K2Node_ComponentBoundEvent_87_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignDetailsWidget.CampaignDetailsWidget_C.BndEvt__StartLevelButton_K2Node_ComponentBoundEvent_87_OnButtonReleasedEvent__DelegateSignature");

	UCampaignDetailsWidget_C_BndEvt__StartLevelButton_K2Node_ComponentBoundEvent_87_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignDetailsWidget.CampaignDetailsWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_104_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UCampaignDetailsWidget_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_104_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignDetailsWidget.CampaignDetailsWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_104_OnButtonReleasedEvent__DelegateSignature");

	UCampaignDetailsWidget_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_104_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignDetailsWidget.CampaignDetailsWidget_C.UpdateDetails
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLevelLoaderStruct      LevelLoaderStruct              (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<ECampaignStatusEnum> CampaignStatus                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCampaignDetailsWidget_C::UpdateDetails(const struct FLevelLoaderStruct& LevelLoaderStruct, TEnumAsByte<ECampaignStatusEnum> CampaignStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignDetailsWidget.CampaignDetailsWidget_C.UpdateDetails");

	UCampaignDetailsWidget_C_UpdateDetails_Params params;
	params.LevelLoaderStruct = LevelLoaderStruct;
	params.CampaignStatus = CampaignStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignDetailsWidget.CampaignDetailsWidget_C.UpdateStatus
// (BlueprintCallable, BlueprintEvent)

void UCampaignDetailsWidget_C::UpdateStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignDetailsWidget.CampaignDetailsWidget_C.UpdateStatus");

	UCampaignDetailsWidget_C_UpdateStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignDetailsWidget.CampaignDetailsWidget_C.OnCurrentLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLevelStruct            Level                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UCampaignDetailsWidget_C::OnCurrentLevel(const struct FLevelStruct& Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignDetailsWidget.CampaignDetailsWidget_C.OnCurrentLevel");

	UCampaignDetailsWidget_C_OnCurrentLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignDetailsWidget.CampaignDetailsWidget_C.BndEvt__SingleButton_K2Node_ComponentBoundEvent_226_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UCampaignDetailsWidget_C::BndEvt__SingleButton_K2Node_ComponentBoundEvent_226_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignDetailsWidget.CampaignDetailsWidget_C.BndEvt__SingleButton_K2Node_ComponentBoundEvent_226_OnButtonReleasedEvent__DelegateSignature");

	UCampaignDetailsWidget_C_BndEvt__SingleButton_K2Node_ComponentBoundEvent_226_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignDetailsWidget.CampaignDetailsWidget_C.BndEvt__DoubleButtonLeft_K2Node_ComponentBoundEvent_96_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UCampaignDetailsWidget_C::BndEvt__DoubleButtonLeft_K2Node_ComponentBoundEvent_96_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignDetailsWidget.CampaignDetailsWidget_C.BndEvt__DoubleButtonLeft_K2Node_ComponentBoundEvent_96_OnButtonReleasedEvent__DelegateSignature");

	UCampaignDetailsWidget_C_BndEvt__DoubleButtonLeft_K2Node_ComponentBoundEvent_96_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignDetailsWidget.CampaignDetailsWidget_C.BndEvt__DoubleButtonRight_K2Node_ComponentBoundEvent_128_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UCampaignDetailsWidget_C::BndEvt__DoubleButtonRight_K2Node_ComponentBoundEvent_128_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignDetailsWidget.CampaignDetailsWidget_C.BndEvt__DoubleButtonRight_K2Node_ComponentBoundEvent_128_OnButtonReleasedEvent__DelegateSignature");

	UCampaignDetailsWidget_C_BndEvt__DoubleButtonRight_K2Node_ComponentBoundEvent_128_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignDetailsWidget.CampaignDetailsWidget_C.ExecuteUbergraph_CampaignDetailsWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCampaignDetailsWidget_C::ExecuteUbergraph_CampaignDetailsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignDetailsWidget.CampaignDetailsWidget_C.ExecuteUbergraph_CampaignDetailsWidget");

	UCampaignDetailsWidget_C_ExecuteUbergraph_CampaignDetailsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
