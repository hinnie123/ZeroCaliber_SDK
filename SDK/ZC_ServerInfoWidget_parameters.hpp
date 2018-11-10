#pragma once

// ZeroCaliber (0.6.0 EA) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ServerInfoWidget.ServerInfoWidget_C.Highlight
struct UServerInfoWidget_C_Highlight_Params
{
	class UImage*                                      Background;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSlateColor                                 Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ServerInfoWidget.ServerInfoWidget_C.LoadServerInfo
struct UServerInfoWidget_C_LoadServerInfo_Params
{
	struct FBlueprintSessionResult                     SessionResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ServerInfoWidget.ServerInfoWidget_C.Construct
struct UServerInfoWidget_C_Construct_Params
{
};

// Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__InfoButton_K2Node_ComponentBoundEvent_347_OnButtonReleasedEvent__DelegateSignature
struct UServerInfoWidget_C_BndEvt__InfoButton_K2Node_ComponentBoundEvent_347_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_372_OnButtonReleasedEvent__DelegateSignature
struct UServerInfoWidget_C_BndEvt__JoinButton_K2Node_ComponentBoundEvent_372_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__InfoButton_K2Node_ComponentBoundEvent_489_OnButtonHoverEvent__DelegateSignature
struct UServerInfoWidget_C_BndEvt__InfoButton_K2Node_ComponentBoundEvent_489_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__InfoButton_K2Node_ComponentBoundEvent_501_OnButtonHoverEvent__DelegateSignature
struct UServerInfoWidget_C_BndEvt__InfoButton_K2Node_ComponentBoundEvent_501_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ServerInfoWidget.ServerInfoWidget_C.ClearSelection
struct UServerInfoWidget_C_ClearSelection_Params
{
};

// Function ServerInfoWidget.ServerInfoWidget_C.ExecuteUbergraph_ServerInfoWidget
struct UServerInfoWidget_C_ExecuteUbergraph_ServerInfoWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerInfoWidget.ServerInfoWidget_C.JoinServerWithPassword__DelegateSignature
struct UServerInfoWidget_C_JoinServerWithPassword__DelegateSignature_Params
{
};

// Function ServerInfoWidget.ServerInfoWidget_C.JoinServer__DelegateSignature
struct UServerInfoWidget_C_JoinServer__DelegateSignature_Params
{
};

// Function ServerInfoWidget.ServerInfoWidget_C.ServerInfoSelected__DelegateSignature
struct UServerInfoWidget_C_ServerInfoSelected__DelegateSignature_Params
{
	class UServerInfoWidget_C*                         ServerInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
