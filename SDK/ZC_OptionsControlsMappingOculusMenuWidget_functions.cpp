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

// Function OptionsControlsMappingOculusMenuWidget.OptionsControlsMappingOculusMenuWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_94_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsControlsMappingOculusMenuWidget_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_94_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsControlsMappingOculusMenuWidget.OptionsControlsMappingOculusMenuWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_94_OnButtonReleasedEvent__DelegateSignature");

	UOptionsControlsMappingOculusMenuWidget_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_94_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsControlsMappingOculusMenuWidget.OptionsControlsMappingOculusMenuWidget_C.ExecuteUbergraph_OptionsControlsMappingOculusMenuWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsControlsMappingOculusMenuWidget_C::ExecuteUbergraph_OptionsControlsMappingOculusMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsControlsMappingOculusMenuWidget.OptionsControlsMappingOculusMenuWidget_C.ExecuteUbergraph_OptionsControlsMappingOculusMenuWidget");

	UOptionsControlsMappingOculusMenuWidget_C_ExecuteUbergraph_OptionsControlsMappingOculusMenuWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
