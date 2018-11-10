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

// Function GadgetsInfoUnlockedWidget.GadgetsInfoUnlockedWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGadgetsInfoUnlockedWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetsInfoUnlockedWidget.GadgetsInfoUnlockedWidget_C.Construct");

	UGadgetsInfoUnlockedWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GadgetsInfoUnlockedWidget.GadgetsInfoUnlockedWidget_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ItemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGadgetsInfoUnlockedWidget_C::Setup(class UClass* ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetsInfoUnlockedWidget.GadgetsInfoUnlockedWidget_C.Setup");

	UGadgetsInfoUnlockedWidget_C_Setup_Params params;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GadgetsInfoUnlockedWidget.GadgetsInfoUnlockedWidget_C.ExecuteUbergraph_GadgetsInfoUnlockedWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGadgetsInfoUnlockedWidget_C::ExecuteUbergraph_GadgetsInfoUnlockedWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetsInfoUnlockedWidget.GadgetsInfoUnlockedWidget_C.ExecuteUbergraph_GadgetsInfoUnlockedWidget");

	UGadgetsInfoUnlockedWidget_C_ExecuteUbergraph_GadgetsInfoUnlockedWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
