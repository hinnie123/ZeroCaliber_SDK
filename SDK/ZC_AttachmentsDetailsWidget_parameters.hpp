#pragma once

// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AttachmentsDetailsWidget.AttachmentsDetailsWidget_C.Get_PriceBg_Visibility
struct UAttachmentsDetailsWidget_C_Get_PriceBg_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AttachmentsDetailsWidget.AttachmentsDetailsWidget_C.Get_ButtonBuy_bIsEnabled
struct UAttachmentsDetailsWidget_C_Get_ButtonBuy_bIsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AttachmentsDetailsWidget.AttachmentsDetailsWidget_C.Get_BalanceValue_Text
struct UAttachmentsDetailsWidget_C_Get_BalanceValue_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AttachmentsDetailsWidget.AttachmentsDetailsWidget_C.Construct
struct UAttachmentsDetailsWidget_C_Construct_Params
{
};

// Function AttachmentsDetailsWidget.AttachmentsDetailsWidget_C.Setup
struct UAttachmentsDetailsWidget_C_Setup_Params
{
	class UClass*                                      ItemClass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AttachmentsDetailsWidget.AttachmentsDetailsWidget_C.ExecuteUbergraph_AttachmentsDetailsWidget
struct UAttachmentsDetailsWidget_C_ExecuteUbergraph_AttachmentsDetailsWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
