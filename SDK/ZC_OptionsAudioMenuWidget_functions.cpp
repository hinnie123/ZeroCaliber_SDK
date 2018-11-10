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

// Function OptionsAudioMenuWidget.OptionsAudioMenuWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_94_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsAudioMenuWidget_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_94_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsAudioMenuWidget.OptionsAudioMenuWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_94_OnButtonReleasedEvent__DelegateSignature");

	UOptionsAudioMenuWidget_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_94_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsAudioMenuWidget.OptionsAudioMenuWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsAudioMenuWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsAudioMenuWidget.OptionsAudioMenuWidget_C.PreConstruct");

	UOptionsAudioMenuWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsAudioMenuWidget.OptionsAudioMenuWidget_C.ExecuteUbergraph_OptionsAudioMenuWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsAudioMenuWidget_C::ExecuteUbergraph_OptionsAudioMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsAudioMenuWidget.OptionsAudioMenuWidget_C.ExecuteUbergraph_OptionsAudioMenuWidget");

	UOptionsAudioMenuWidget_C_ExecuteUbergraph_OptionsAudioMenuWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
