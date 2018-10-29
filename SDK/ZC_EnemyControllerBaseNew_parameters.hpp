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

// Function EnemyControllerBaseNew.EnemyControllerBaseNew_C.UserConstructionScript
struct AEnemyControllerBaseNew_C_UserConstructionScript_Params
{
};

// Function EnemyControllerBaseNew.EnemyControllerBaseNew_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature
struct AEnemyControllerBaseNew_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAIStimulus                                 Stimulus;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function EnemyControllerBaseNew.EnemyControllerBaseNew_C.OnPossess
struct AEnemyControllerBaseNew_C_OnPossess_Params
{
	class APawn**                                      PossessedPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyControllerBaseNew.EnemyControllerBaseNew_C.CheckNearestEnemy
struct AEnemyControllerBaseNew_C_CheckNearestEnemy_Params
{
};

// Function EnemyControllerBaseNew.EnemyControllerBaseNew_C.ExecuteUbergraph_EnemyControllerBaseNew
struct AEnemyControllerBaseNew_C_ExecuteUbergraph_EnemyControllerBaseNew_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
