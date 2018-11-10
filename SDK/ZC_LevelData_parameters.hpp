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

// Function LevelData.LevelData_C.HandleOculusFocusState
struct ALevelData_C_HandleOculusFocusState_Params
{
};

// Function LevelData.LevelData_C.UserConstructionScript
struct ALevelData_C_UserConstructionScript_Params
{
};

// Function LevelData.LevelData_C.ReceiveBeginPlay
struct ALevelData_C_ReceiveBeginPlay_Params
{
};

// Function LevelData.LevelData_C.ExecuteUbergraph_LevelData
struct ALevelData_C_ExecuteUbergraph_LevelData_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LevelData.LevelData_C.Initialized__DelegateSignature
struct ALevelData_C_Initialized__DelegateSignature_Params
{
	class ALevelData_C*                                LevelData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
