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

// Function ServerInfo.ServerInfo_C.Highlight
struct UServerInfo_C_Highlight_Params
{
	bool                                               bHighlight;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ServerInfo.ServerInfo_C.LoadServerInfo
struct UServerInfo_C_LoadServerInfo_Params
{
	struct FBlueprintSessionResult                     SessionResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	class U3DMenu_C*                                   Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ServerInfo.ServerInfo_C.BndEvt__Button_74_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
struct UServerInfo_C_BndEvt__Button_74_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ServerInfo.ServerInfo_C.ExecuteUbergraph_ServerInfo
struct UServerInfo_C_ExecuteUbergraph_ServerInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
