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

// Function DamagerInterface.DamagerInterface_C.GetKills
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Kills                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDamagerInterface_C::GetKills(int* Kills)
{
	static auto fn = UObject::FindObject<UFunction>("Function DamagerInterface.DamagerInterface_C.GetKills");

	UDamagerInterface_C_GetKills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Kills != nullptr)
		*Kills = params.Kills;
}


// Function DamagerInterface.DamagerInterface_C.Kill
// (Public, BlueprintCallable, BlueprintEvent)

void UDamagerInterface_C::Kill()
{
	static auto fn = UObject::FindObject<UFunction>("Function DamagerInterface.DamagerInterface_C.Kill");

	UDamagerInterface_C_Kill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DamagerInterface.DamagerInterface_C.GetProjectilesHitHead
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ProjectilesHitHead             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDamagerInterface_C::GetProjectilesHitHead(int* ProjectilesHitHead)
{
	static auto fn = UObject::FindObject<UFunction>("Function DamagerInterface.DamagerInterface_C.GetProjectilesHitHead");

	UDamagerInterface_C_GetProjectilesHitHead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProjectilesHitHead != nullptr)
		*ProjectilesHitHead = params.ProjectilesHitHead;
}


// Function DamagerInterface.DamagerInterface_C.ProjectileHitHead
// (Public, BlueprintCallable, BlueprintEvent)

void UDamagerInterface_C::ProjectileHitHead()
{
	static auto fn = UObject::FindObject<UFunction>("Function DamagerInterface.DamagerInterface_C.ProjectileHitHead");

	UDamagerInterface_C_ProjectileHitHead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DamagerInterface.DamagerInterface_C.GetProjectilesHit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ProjectilesHit                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDamagerInterface_C::GetProjectilesHit(int* ProjectilesHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DamagerInterface.DamagerInterface_C.GetProjectilesHit");

	UDamagerInterface_C_GetProjectilesHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProjectilesHit != nullptr)
		*ProjectilesHit = params.ProjectilesHit;
}


// Function DamagerInterface.DamagerInterface_C.GetProjectilesFired
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ProjectilesFired               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDamagerInterface_C::GetProjectilesFired(int* ProjectilesFired)
{
	static auto fn = UObject::FindObject<UFunction>("Function DamagerInterface.DamagerInterface_C.GetProjectilesFired");

	UDamagerInterface_C_GetProjectilesFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProjectilesFired != nullptr)
		*ProjectilesFired = params.ProjectilesFired;
}


// Function DamagerInterface.DamagerInterface_C.ProjectileHit
// (Public, BlueprintCallable, BlueprintEvent)

void UDamagerInterface_C::ProjectileHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function DamagerInterface.DamagerInterface_C.ProjectileHit");

	UDamagerInterface_C_ProjectileHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DamagerInterface.DamagerInterface_C.ProjectileFired
// (Public, BlueprintCallable, BlueprintEvent)

void UDamagerInterface_C::ProjectileFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function DamagerInterface.DamagerInterface_C.ProjectileFired");

	UDamagerInterface_C_ProjectileFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
