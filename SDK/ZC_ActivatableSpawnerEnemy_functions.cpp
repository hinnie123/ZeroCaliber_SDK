// ZeroCaliber (0.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActivatableSpawnerEnemy.ActivatableSpawnerEnemy_C.SpawnEnemy
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnemyCharacterBase_C*   Enemy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AActivatableSpawnerEnemy_C::SpawnEnemy(class AEnemyCharacterBase_C** Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableSpawnerEnemy.ActivatableSpawnerEnemy_C.SpawnEnemy");

	AActivatableSpawnerEnemy_C_SpawnEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enemy != nullptr)
		*Enemy = params.Enemy;
}


// Function ActivatableSpawnerEnemy.ActivatableSpawnerEnemy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AActivatableSpawnerEnemy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableSpawnerEnemy.ActivatableSpawnerEnemy_C.UserConstructionScript");

	AActivatableSpawnerEnemy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableSpawnerEnemy.ActivatableSpawnerEnemy_C.Activated
// (BlueprintCallable, BlueprintEvent)

void AActivatableSpawnerEnemy_C::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableSpawnerEnemy.ActivatableSpawnerEnemy_C.Activated");

	AActivatableSpawnerEnemy_C_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableSpawnerEnemy.ActivatableSpawnerEnemy_C.ExecuteUbergraph_ActivatableSpawnerEnemy
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatableSpawnerEnemy_C::ExecuteUbergraph_ActivatableSpawnerEnemy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableSpawnerEnemy.ActivatableSpawnerEnemy_C.ExecuteUbergraph_ActivatableSpawnerEnemy");

	AActivatableSpawnerEnemy_C_ExecuteUbergraph_ActivatableSpawnerEnemy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableSpawnerEnemy.ActivatableSpawnerEnemy_C.EnemySpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnemyCharacterBase_C*   Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatableSpawnerEnemy_C::EnemySpawned__DelegateSignature(class AEnemyCharacterBase_C* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableSpawnerEnemy.ActivatableSpawnerEnemy_C.EnemySpawned__DelegateSignature");

	AActivatableSpawnerEnemy_C_EnemySpawned__DelegateSignature_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
