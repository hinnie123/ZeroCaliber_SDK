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

// Function WeaponDetailsWidget.WeaponDetailsWidget_C.Get_PriceBg_Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWeaponDetailsWidget_C::Get_PriceBg_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDetailsWidget.WeaponDetailsWidget_C.Get_PriceBg_Visibility");

	UWeaponDetailsWidget_C_Get_PriceBg_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponDetailsWidget.WeaponDetailsWidget_C.Get_ButtonBuy_bIsEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponDetailsWidget_C::Get_ButtonBuy_bIsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDetailsWidget.WeaponDetailsWidget_C.Get_ButtonBuy_bIsEnabled");

	UWeaponDetailsWidget_C_Get_ButtonBuy_bIsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponDetailsWidget.WeaponDetailsWidget_C.Get_BalanceValue_Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWeaponDetailsWidget_C::Get_BalanceValue_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDetailsWidget.WeaponDetailsWidget_C.Get_BalanceValue_Text");

	UWeaponDetailsWidget_C_Get_BalanceValue_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponDetailsWidget.WeaponDetailsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponDetailsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDetailsWidget.WeaponDetailsWidget_C.Construct");

	UWeaponDetailsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDetailsWidget.WeaponDetailsWidget_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ItemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDetailsWidget_C::Setup(class UClass* ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDetailsWidget.WeaponDetailsWidget_C.Setup");

	UWeaponDetailsWidget_C_Setup_Params params;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDetailsWidget.WeaponDetailsWidget_C.ExecuteUbergraph_WeaponDetailsWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDetailsWidget_C::ExecuteUbergraph_WeaponDetailsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDetailsWidget.WeaponDetailsWidget_C.ExecuteUbergraph_WeaponDetailsWidget");

	UWeaponDetailsWidget_C_ExecuteUbergraph_WeaponDetailsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
