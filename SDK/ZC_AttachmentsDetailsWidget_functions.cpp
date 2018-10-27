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

// Function AttachmentsDetailsWidget.AttachmentsDetailsWidget_C.Get_PriceBg_Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UAttachmentsDetailsWidget_C::Get_PriceBg_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachmentsDetailsWidget.AttachmentsDetailsWidget_C.Get_PriceBg_Visibility");

	UAttachmentsDetailsWidget_C_Get_PriceBg_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AttachmentsDetailsWidget.AttachmentsDetailsWidget_C.Get_ButtonBuy_bIsEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttachmentsDetailsWidget_C::Get_ButtonBuy_bIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachmentsDetailsWidget.AttachmentsDetailsWidget_C.Get_ButtonBuy_bIsEnabled");

	UAttachmentsDetailsWidget_C_Get_ButtonBuy_bIsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AttachmentsDetailsWidget.AttachmentsDetailsWidget_C.Get_BalanceValue_Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UAttachmentsDetailsWidget_C::Get_BalanceValue_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachmentsDetailsWidget.AttachmentsDetailsWidget_C.Get_BalanceValue_Text");

	UAttachmentsDetailsWidget_C_Get_BalanceValue_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AttachmentsDetailsWidget.AttachmentsDetailsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAttachmentsDetailsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachmentsDetailsWidget.AttachmentsDetailsWidget_C.Construct");

	UAttachmentsDetailsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttachmentsDetailsWidget.AttachmentsDetailsWidget_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ItemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAttachmentsDetailsWidget_C::Setup(class UClass* ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachmentsDetailsWidget.AttachmentsDetailsWidget_C.Setup");

	UAttachmentsDetailsWidget_C_Setup_Params params;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AttachmentsDetailsWidget.AttachmentsDetailsWidget_C.ExecuteUbergraph_AttachmentsDetailsWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAttachmentsDetailsWidget_C::ExecuteUbergraph_AttachmentsDetailsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttachmentsDetailsWidget.AttachmentsDetailsWidget_C.ExecuteUbergraph_AttachmentsDetailsWidget");

	UAttachmentsDetailsWidget_C_ExecuteUbergraph_AttachmentsDetailsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
