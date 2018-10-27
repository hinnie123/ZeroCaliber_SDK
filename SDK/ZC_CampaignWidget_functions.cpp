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

// Function CampaignWidget.CampaignWidget_C.GetStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ECampaignStatusEnum> Status                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCampaignWidget_C::GetStatus(TEnumAsByte<ECampaignStatusEnum>* Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignWidget.CampaignWidget_C.GetStatus");

	UCampaignWidget_C_GetStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Status != nullptr)
		*Status = params.Status;
}


// Function CampaignWidget.CampaignWidget_C.SetStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECampaignStatusEnum> Status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCampaignWidget_C::SetStatus(TEnumAsByte<ECampaignStatusEnum> Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignWidget.CampaignWidget_C.SetStatus");

	UCampaignWidget_C_SetStatus_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignWidget.CampaignWidget_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLevelLoaderStruct      LevelLoader                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UCampaignWidget_C::Init(const struct FLevelLoaderStruct& LevelLoader)
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignWidget.CampaignWidget_C.Init");

	UCampaignWidget_C_Init_Params params;
	params.LevelLoader = LevelLoader;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignWidget.CampaignWidget_C.BndEvt__LevelButton_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCampaignWidget_C::BndEvt__LevelButton_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignWidget.CampaignWidget_C.BndEvt__LevelButton_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature");

	UCampaignWidget_C_BndEvt__LevelButton_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignWidget.CampaignWidget_C.BndEvt__LevelButton_K2Node_ComponentBoundEvent_35_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UCampaignWidget_C::BndEvt__LevelButton_K2Node_ComponentBoundEvent_35_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignWidget.CampaignWidget_C.BndEvt__LevelButton_K2Node_ComponentBoundEvent_35_OnButtonReleasedEvent__DelegateSignature");

	UCampaignWidget_C_BndEvt__LevelButton_K2Node_ComponentBoundEvent_35_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignWidget.CampaignWidget_C.BndEvt__LevelButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UCampaignWidget_C::BndEvt__LevelButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignWidget.CampaignWidget_C.BndEvt__LevelButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UCampaignWidget_C_BndEvt__LevelButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignWidget.CampaignWidget_C.ExecuteUbergraph_CampaignWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCampaignWidget_C::ExecuteUbergraph_CampaignWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignWidget.CampaignWidget_C.ExecuteUbergraph_CampaignWidget");

	UCampaignWidget_C_ExecuteUbergraph_CampaignWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignWidget.CampaignWidget_C.Unhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCampaignWidget_C::Unhovered__DelegateSignature(class UButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignWidget.CampaignWidget_C.Unhovered__DelegateSignature");

	UCampaignWidget_C_Unhovered__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignWidget.CampaignWidget_C.Hovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCampaignWidget_C::Hovered__DelegateSignature(class UButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignWidget.CampaignWidget_C.Hovered__DelegateSignature");

	UCampaignWidget_C_Hovered__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignWidget.CampaignWidget_C.Released__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCampaignWidget_C*       LevelWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCampaignWidget_C::Released__DelegateSignature(class UCampaignWidget_C* LevelWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CampaignWidget.CampaignWidget_C.Released__DelegateSignature");

	UCampaignWidget_C_Released__DelegateSignature_Params params;
	params.LevelWidget = LevelWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
