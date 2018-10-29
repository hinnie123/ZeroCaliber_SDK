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

// Function AimBase.AimBase_C.GetNearestActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Actors                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  NearestActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAimBase_C::GetNearestActor(class AActor* ControlledPawn, TArray<class AActor*>* Actors, class AActor** NearestActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimBase.AimBase_C.GetNearestActor");

	UAimBase_C_GetNearestActor_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;
	if (NearestActor != nullptr)
		*NearestActor = params.NearestActor;
}


// Function AimBase.AimBase_C.GetTargetLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 TargetLocation                 (Parm, OutParm, IsPlainOldData)

void UAimBase_C::GetTargetLocation(struct FVector* TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimBase.AimBase_C.GetTargetLocation");

	UAimBase_C_GetTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
}


// Function AimBase.AimBase_C.CurrentTargetIsInvalid
// (BlueprintCallable, BlueprintEvent)

void UAimBase_C::CurrentTargetIsInvalid()
{
	static auto fn = UObject::FindObject<UFunction>("Function AimBase.AimBase_C.CurrentTargetIsInvalid");

	UAimBase_C_CurrentTargetIsInvalid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AimBase.AimBase_C.PerceiveEnemyEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAimBase_C::PerceiveEnemyEvent(class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimBase.AimBase_C.PerceiveEnemyEvent");

	UAimBase_C_PerceiveEnemyEvent_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AimBase.AimBase_C.ExecuteUbergraph_AimBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAimBase_C::ExecuteUbergraph_AimBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AimBase.AimBase_C.ExecuteUbergraph_AimBase");

	UAimBase_C_ExecuteUbergraph_AimBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
