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

// Function LevelWidget.LevelWidget_C.GetLocked
struct ULevelWidget_C_GetLocked_Params
{
	bool                                               Locked;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LevelWidget.LevelWidget_C.SetLocked
struct ULevelWidget_C_SetLocked_Params
{
	bool                                               Locked;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelWidget.LevelWidget_C.SetLevelName
struct ULevelWidget_C_SetLevelName_Params
{
	struct FText                                       LevelName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LevelWidget.LevelWidget_C.GetWidgetSize
struct ULevelWidget_C_GetWidgetSize_Params
{
	struct FVector2D                                   Size;                                                     // (Parm, OutParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
