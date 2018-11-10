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

// Function ActivatableSpawnerEnemy.ActivatableSpawnerEnemy_C.SpawnEnemy
struct AActivatableSpawnerEnemy_C_SpawnEnemy_Params
{
	class AEnemyCharacterBase_C*                       Enemy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatableSpawnerEnemy.ActivatableSpawnerEnemy_C.UserConstructionScript
struct AActivatableSpawnerEnemy_C_UserConstructionScript_Params
{
};

// Function ActivatableSpawnerEnemy.ActivatableSpawnerEnemy_C.Activated
struct AActivatableSpawnerEnemy_C_Activated_Params
{
};

// Function ActivatableSpawnerEnemy.ActivatableSpawnerEnemy_C.ExecuteUbergraph_ActivatableSpawnerEnemy
struct AActivatableSpawnerEnemy_C_ExecuteUbergraph_ActivatableSpawnerEnemy_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatableSpawnerEnemy.ActivatableSpawnerEnemy_C.EnemySpawned__DelegateSignature
struct AActivatableSpawnerEnemy_C_EnemySpawned__DelegateSignature_Params
{
	class AEnemyCharacterBase_C*                       Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
