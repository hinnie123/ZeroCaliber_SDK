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

// Function MenuActor_GameInfo.MenuActor_GameInfo_C.UserConstructionScript
struct AMenuActor_GameInfo_C_UserConstructionScript_Params
{
};

// Function MenuActor_GameInfo.MenuActor_GameInfo_C.ActivateWidget
struct AMenuActor_GameInfo_C_ActivateWidget_Params
{
	bool                                               Activate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuActor_GameInfo.MenuActor_GameInfo_C.ReceiveBeginPlay
struct AMenuActor_GameInfo_C_ReceiveBeginPlay_Params
{
};

// Function MenuActor_GameInfo.MenuActor_GameInfo_C.ExecuteUbergraph_MenuActor_GameInfo
struct AMenuActor_GameInfo_C_ExecuteUbergraph_MenuActor_GameInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
