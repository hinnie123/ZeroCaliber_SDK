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

// Function GadgetsInfoLockedWidget.GadgetsInfoLockedWidget_C.Get_LockedBg_Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UGadgetsInfoLockedWidget_C::Get_LockedBg_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetsInfoLockedWidget.GadgetsInfoLockedWidget_C.Get_LockedBg_Visibility");

	UGadgetsInfoLockedWidget_C_Get_LockedBg_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GadgetsInfoLockedWidget.GadgetsInfoLockedWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGadgetsInfoLockedWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetsInfoLockedWidget.GadgetsInfoLockedWidget_C.Construct");

	UGadgetsInfoLockedWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GadgetsInfoLockedWidget.GadgetsInfoLockedWidget_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ItemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGadgetsInfoLockedWidget_C::Setup(class UClass* ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetsInfoLockedWidget.GadgetsInfoLockedWidget_C.Setup");

	UGadgetsInfoLockedWidget_C_Setup_Params params;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GadgetsInfoLockedWidget.GadgetsInfoLockedWidget_C.ExecuteUbergraph_GadgetsInfoLockedWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGadgetsInfoLockedWidget_C::ExecuteUbergraph_GadgetsInfoLockedWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetsInfoLockedWidget.GadgetsInfoLockedWidget_C.ExecuteUbergraph_GadgetsInfoLockedWidget");

	UGadgetsInfoLockedWidget_C_ExecuteUbergraph_GadgetsInfoLockedWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
