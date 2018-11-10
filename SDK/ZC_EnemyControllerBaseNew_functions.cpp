// ZeroCaliber (0.6.0 EA) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EnemyControllerBaseNew.EnemyControllerBaseNew_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEnemyControllerBaseNew_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyControllerBaseNew.EnemyControllerBaseNew_C.UserConstructionScript");

	AEnemyControllerBaseNew_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyControllerBaseNew.EnemyControllerBaseNew_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIStimulus             Stimulus                       (BlueprintVisible, BlueprintReadOnly, Parm)

void AEnemyControllerBaseNew_C::BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyControllerBaseNew.EnemyControllerBaseNew_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature");

	AEnemyControllerBaseNew_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature_Params params;
	params.Actor = Actor;
	params.Stimulus = Stimulus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyControllerBaseNew.EnemyControllerBaseNew_C.OnPossess
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  PossessedPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyControllerBaseNew_C::OnPossess(class APawn** PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyControllerBaseNew.EnemyControllerBaseNew_C.OnPossess");

	AEnemyControllerBaseNew_C_OnPossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyControllerBaseNew.EnemyControllerBaseNew_C.CheckNearestEnemy
// (BlueprintCallable, BlueprintEvent)

void AEnemyControllerBaseNew_C::CheckNearestEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyControllerBaseNew.EnemyControllerBaseNew_C.CheckNearestEnemy");

	AEnemyControllerBaseNew_C_CheckNearestEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyControllerBaseNew.EnemyControllerBaseNew_C.ExecuteUbergraph_EnemyControllerBaseNew
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyControllerBaseNew_C::ExecuteUbergraph_EnemyControllerBaseNew(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyControllerBaseNew.EnemyControllerBaseNew_C.ExecuteUbergraph_EnemyControllerBaseNew");

	AEnemyControllerBaseNew_C_ExecuteUbergraph_EnemyControllerBaseNew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
