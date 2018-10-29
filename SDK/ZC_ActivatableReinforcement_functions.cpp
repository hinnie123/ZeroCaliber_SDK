// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActivatableReinforcement.ActivatableReinforcement_C.GetEnemyCountStart
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          EnemyCountStart                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AActivatableReinforcement_C::GetEnemyCountStart(float* EnemyCountStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableReinforcement.ActivatableReinforcement_C.GetEnemyCountStart");

	AActivatableReinforcement_C_GetEnemyCountStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnemyCountStart != nullptr)
		*EnemyCountStart = params.EnemyCountStart;
}


// Function ActivatableReinforcement.ActivatableReinforcement_C.GetEnemyCountDecrease
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          EnemyCountDecrease             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AActivatableReinforcement_C::GetEnemyCountDecrease(float* EnemyCountDecrease)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableReinforcement.ActivatableReinforcement_C.GetEnemyCountDecrease");

	AActivatableReinforcement_C_GetEnemyCountDecrease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnemyCountDecrease != nullptr)
		*EnemyCountDecrease = params.EnemyCountDecrease;
}


// Function ActivatableReinforcement.ActivatableReinforcement_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AActivatableReinforcement_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableReinforcement.ActivatableReinforcement_C.UserConstructionScript");

	AActivatableReinforcement_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableReinforcement.ActivatableReinforcement_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AActivatableReinforcement_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableReinforcement.ActivatableReinforcement_C.ReceiveBeginPlay");

	AActivatableReinforcement_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableReinforcement.ActivatableReinforcement_C.Activated
// (BlueprintCallable, BlueprintEvent)

void AActivatableReinforcement_C::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableReinforcement.ActivatableReinforcement_C.Activated");

	AActivatableReinforcement_C_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableReinforcement.ActivatableReinforcement_C.Deactivated
// (BlueprintCallable, BlueprintEvent)

void AActivatableReinforcement_C::Deactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableReinforcement.ActivatableReinforcement_C.Deactivated");

	AActivatableReinforcement_C_Deactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableReinforcement.ActivatableReinforcement_C.CheckSpawn
// (BlueprintCallable, BlueprintEvent)

void AActivatableReinforcement_C::CheckSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableReinforcement.ActivatableReinforcement_C.CheckSpawn");

	AActivatableReinforcement_C_CheckSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableReinforcement.ActivatableReinforcement_C.OnEnemySpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnemyCharacterBase_C*   Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatableReinforcement_C::OnEnemySpawned(class AEnemyCharacterBase_C* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableReinforcement.ActivatableReinforcement_C.OnEnemySpawned");

	AActivatableReinforcement_C_OnEnemySpawned_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableReinforcement.ActivatableReinforcement_C.OnEnemyDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnemyCharacterBase_C*   Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatableReinforcement_C::OnEnemyDied(class AEnemyCharacterBase_C* Enemy, class AController* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableReinforcement.ActivatableReinforcement_C.OnEnemyDied");

	AActivatableReinforcement_C_OnEnemyDied_Params params;
	params.Enemy = Enemy;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableReinforcement.ActivatableReinforcement_C.CheckAndSpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DecreaseEnemyCount             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatableReinforcement_C::CheckAndSpawn(bool DecreaseEnemyCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableReinforcement.ActivatableReinforcement_C.CheckAndSpawn");

	AActivatableReinforcement_C_CheckAndSpawn_Params params;
	params.DecreaseEnemyCount = DecreaseEnemyCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableReinforcement.ActivatableReinforcement_C.ExecuteUbergraph_ActivatableReinforcement
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatableReinforcement_C::ExecuteUbergraph_ActivatableReinforcement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableReinforcement.ActivatableReinforcement_C.ExecuteUbergraph_ActivatableReinforcement");

	AActivatableReinforcement_C_ExecuteUbergraph_ActivatableReinforcement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
