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

// Function MenuActor.MenuActor_C.UserConstructionScript
struct AMenuActor_C_UserConstructionScript_Params
{
};

// Function MenuActor.MenuActor_C.ReceiveBeginPlay
struct AMenuActor_C_ReceiveBeginPlay_Params
{
};

// Function MenuActor.MenuActor_C.MenuChangedRequest
struct AMenuActor_C_MenuChangedRequest_Params
{
	class UClass*                                      NewMenu;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuActor.MenuActor_C.LevelDataInitialized
struct AMenuActor_C_LevelDataInitialized_Params
{
	class ALevelData_C*                                LevelData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuActor.MenuActor_C.OnCloseMenu
struct AMenuActor_C_OnCloseMenu_Params
{
};

// Function MenuActor.MenuActor_C.ActivateMenu
struct AMenuActor_C_ActivateMenu_Params
{
	bool                                               Activate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuActor.MenuActor_C.ExecuteUbergraph_MenuActor
struct AMenuActor_C_ExecuteUbergraph_MenuActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuActor.MenuActor_C.CloseMenu__DelegateSignature
struct AMenuActor_C_CloseMenu__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
