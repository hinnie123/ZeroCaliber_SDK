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

// Function ShootingTargetBase.ShootingTargetBase_C.IsAlive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Alive                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShootingTargetBase_C::IsAlive(bool* Alive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingTargetBase.ShootingTargetBase_C.IsAlive");

	AShootingTargetBase_C_IsAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Alive != nullptr)
		*Alive = params.Alive;
}


// Function ShootingTargetBase.ShootingTargetBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShootingTargetBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingTargetBase.ShootingTargetBase_C.UserConstructionScript");

	AShootingTargetBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingTargetBase.ShootingTargetBase_C.TimelineHit__FinishedFunc
// (BlueprintEvent)

void AShootingTargetBase_C::TimelineHit__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingTargetBase.ShootingTargetBase_C.TimelineHit__FinishedFunc");

	AShootingTargetBase_C_TimelineHit__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingTargetBase.ShootingTargetBase_C.TimelineHit__UpdateFunc
// (BlueprintEvent)

void AShootingTargetBase_C::TimelineHit__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingTargetBase.ShootingTargetBase_C.TimelineHit__UpdateFunc");

	AShootingTargetBase_C_TimelineHit__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingTargetBase.ShootingTargetBase_C.TimelineReset__FinishedFunc
// (BlueprintEvent)

void AShootingTargetBase_C::TimelineReset__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingTargetBase.ShootingTargetBase_C.TimelineReset__FinishedFunc");

	AShootingTargetBase_C_TimelineReset__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingTargetBase.ShootingTargetBase_C.TimelineReset__UpdateFunc
// (BlueprintEvent)

void AShootingTargetBase_C::TimelineReset__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingTargetBase.ShootingTargetBase_C.TimelineReset__UpdateFunc");

	AShootingTargetBase_C_TimelineReset__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingTargetBase.ShootingTargetBase_C.ApplyDamageCustom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             IntigatedBy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   HitBoneName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 DamageCauserOriginalVelocity   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AShootingTargetBase_C::ApplyDamageCustom(float Damage, class UClass* DamageType, class AController* IntigatedBy, class AActor* DamageCauser, const struct FName& HitBoneName, class UPrimitiveComponent* HitComponent, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& DamageCauserOriginalVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingTargetBase.ShootingTargetBase_C.ApplyDamageCustom");

	AShootingTargetBase_C_ApplyDamageCustom_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.IntigatedBy = IntigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitBoneName = HitBoneName;
	params.HitComponent = HitComponent;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.DamageCauserOriginalVelocity = DamageCauserOriginalVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingTargetBase.ShootingTargetBase_C.ResetTarget
// (BlueprintCallable, BlueprintEvent)

void AShootingTargetBase_C::ResetTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingTargetBase.ShootingTargetBase_C.ResetTarget");

	AShootingTargetBase_C_ResetTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingTargetBase.ShootingTargetBase_C.Activated
// (BlueprintCallable, BlueprintEvent)

void AShootingTargetBase_C::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingTargetBase.ShootingTargetBase_C.Activated");

	AShootingTargetBase_C_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingTargetBase.ShootingTargetBase_C.ReceiveRadialDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         DamageReceived                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShootingTargetBase_C::ReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingTargetBase.ShootingTargetBase_C.ReceiveRadialDamage");

	AShootingTargetBase_C_ReceiveRadialDamage_Params params;
	params.DamageReceived = DamageReceived;
	params.DamageType = DamageType;
	params.Origin = Origin;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingTargetBase.ShootingTargetBase_C.FlipDownLocal
// (BlueprintCallable, BlueprintEvent)

void AShootingTargetBase_C::FlipDownLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingTargetBase.ShootingTargetBase_C.FlipDownLocal");

	AShootingTargetBase_C_FlipDownLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingTargetBase.ShootingTargetBase_C.FlipDownMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AShootingTargetBase_C::FlipDownMulti()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingTargetBase.ShootingTargetBase_C.FlipDownMulti");

	AShootingTargetBase_C_FlipDownMulti_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingTargetBase.ShootingTargetBase_C.FlipUpLocal
// (BlueprintCallable, BlueprintEvent)

void AShootingTargetBase_C::FlipUpLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingTargetBase.ShootingTargetBase_C.FlipUpLocal");

	AShootingTargetBase_C_FlipUpLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingTargetBase.ShootingTargetBase_C.FlipUpMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AShootingTargetBase_C::FlipUpMulti()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingTargetBase.ShootingTargetBase_C.FlipUpMulti");

	AShootingTargetBase_C_FlipUpMulti_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShootingTargetBase.ShootingTargetBase_C.ExecuteUbergraph_ShootingTargetBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShootingTargetBase_C::ExecuteUbergraph_ShootingTargetBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShootingTargetBase.ShootingTargetBase_C.ExecuteUbergraph_ShootingTargetBase");

	AShootingTargetBase_C_ExecuteUbergraph_ShootingTargetBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
