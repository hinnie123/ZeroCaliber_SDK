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

// Function MultiplayerScoreboardWidget.MultiplayerScoreboardWidget_C.Construct
struct UMultiplayerScoreboardWidget_C_Construct_Params
{
};

// Function MultiplayerScoreboardWidget.MultiplayerScoreboardWidget_C.UpdateScoreboard
struct UMultiplayerScoreboardWidget_C_UpdateScoreboard_Params
{
};

// Function MultiplayerScoreboardWidget.MultiplayerScoreboardWidget_C.SetCurrentMaxPlayerInfoWidget
struct UMultiplayerScoreboardWidget_C_SetCurrentMaxPlayerInfoWidget_Params
{
	class UPlayerInfoWidget_C*                         Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MultiplayerScoreboardWidget.MultiplayerScoreboardWidget_C.ActivateWidget
struct UMultiplayerScoreboardWidget_C_ActivateWidget_Params
{
	bool                                               Activate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MultiplayerScoreboardWidget.MultiplayerScoreboardWidget_C.ExecuteUbergraph_MultiplayerScoreboardWidget
struct UMultiplayerScoreboardWidget_C_ExecuteUbergraph_MultiplayerScoreboardWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
