#pragma once

// ZeroCaliber (0.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeaponDetailsWidget.WeaponDetailsWidget_C.Get_PriceBg_Visibility
struct UWeaponDetailsWidget_C_Get_PriceBg_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponDetailsWidget.WeaponDetailsWidget_C.Get_ButtonBuy_bIsEnabled
struct UWeaponDetailsWidget_C_Get_ButtonBuy_bIsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponDetailsWidget.WeaponDetailsWidget_C.Get_BalanceValue_Text
struct UWeaponDetailsWidget_C_Get_BalanceValue_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WeaponDetailsWidget.WeaponDetailsWidget_C.Construct
struct UWeaponDetailsWidget_C_Construct_Params
{
};

// Function WeaponDetailsWidget.WeaponDetailsWidget_C.Setup
struct UWeaponDetailsWidget_C_Setup_Params
{
	class UClass*                                      ItemClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponDetailsWidget.WeaponDetailsWidget_C.ExecuteUbergraph_WeaponDetailsWidget
struct UWeaponDetailsWidget_C_ExecuteUbergraph_WeaponDetailsWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
