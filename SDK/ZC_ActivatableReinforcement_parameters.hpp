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

// Function ActivatableReinforcement.ActivatableReinforcement_C.GetEnemyCountStart
struct AActivatableReinforcement_C_GetEnemyCountStart_Params
{
	float                                              EnemyCountStart;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatableReinforcement.ActivatableReinforcement_C.GetEnemyCountDecrease
struct AActivatableReinforcement_C_GetEnemyCountDecrease_Params
{
	float                                              EnemyCountDecrease;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatableReinforcement.ActivatableReinforcement_C.UserConstructionScript
struct AActivatableReinforcement_C_UserConstructionScript_Params
{
};

// Function ActivatableReinforcement.ActivatableReinforcement_C.ReceiveBeginPlay
struct AActivatableReinforcement_C_ReceiveBeginPlay_Params
{
};

// Function ActivatableReinforcement.ActivatableReinforcement_C.Activated
struct AActivatableReinforcement_C_Activated_Params
{
};

// Function ActivatableReinforcement.ActivatableReinforcement_C.Deactivated
struct AActivatableReinforcement_C_Deactivated_Params
{
};

// Function ActivatableReinforcement.ActivatableReinforcement_C.CheckSpawn
struct AActivatableReinforcement_C_CheckSpawn_Params
{
};

// Function ActivatableReinforcement.ActivatableReinforcement_C.OnEnemySpawned
struct AActivatableReinforcement_C_OnEnemySpawned_Params
{
	class AEnemyCharacterBase_C*                       Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatableReinforcement.ActivatableReinforcement_C.OnEnemyDied
struct AActivatableReinforcement_C_OnEnemyDied_Params
{
	class AEnemyCharacterBase_C*                       Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatableReinforcement.ActivatableReinforcement_C.CheckAndSpawn
struct AActivatableReinforcement_C_CheckAndSpawn_Params
{
	bool                                               DecreaseEnemyCount;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatableReinforcement.ActivatableReinforcement_C.ExecuteUbergraph_ActivatableReinforcement
struct AActivatableReinforcement_C_ExecuteUbergraph_ActivatableReinforcement_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
