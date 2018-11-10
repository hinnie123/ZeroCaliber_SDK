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

// Function ProjectileBase.ProjectileBase_C.SpawnBloodHeadParticle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPhysicalSurface>  Surface                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         Particle                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjectileBase_C::SpawnBloodHeadParticle(TEnumAsByte<EPhysicalSurface> Surface, class UParticleSystem** Particle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileBase.ProjectileBase_C.SpawnBloodHeadParticle");

	AProjectileBase_C_SpawnBloodHeadParticle_Params params;
	params.Surface = Surface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Particle != nullptr)
		*Particle = params.Particle;
}


// Function ProjectileBase.ProjectileBase_C.GetDecal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPhysicalSurface>  Surface                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      Decal                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjectileBase_C::GetDecal(TEnumAsByte<EPhysicalSurface> Surface, class UMaterialInterface** Decal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileBase.ProjectileBase_C.GetDecal");

	AProjectileBase_C_GetDecal_Params params;
	params.Surface = Surface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Decal != nullptr)
		*Decal = params.Decal;
}


// Function ProjectileBase.ProjectileBase_C.ImpactDecals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TEnumAsByte<EPhysicalSurface>  Surface                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectileBase_C::ImpactDecals(const struct FVector& HitLocation, const struct FVector& HitNormal, TEnumAsByte<EPhysicalSurface> Surface)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileBase.ProjectileBase_C.ImpactDecals");

	AProjectileBase_C_ImpactDecals_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.Surface = Surface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileBase.ProjectileBase_C.ImpactSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TEnumAsByte<EPhysicalSurface>  Surface                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectileBase_C::ImpactSound(const struct FVector& HitLocation, TEnumAsByte<EPhysicalSurface> Surface)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileBase.ProjectileBase_C.ImpactSound");

	AProjectileBase_C_ImpactSound_Params params;
	params.HitLocation = HitLocation;
	params.Surface = Surface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileBase.ProjectileBase_C.ShouldBounce
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Impulse                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ShouldBounce                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjectileBase_C::ShouldBounce(const struct FVector& Impulse, const struct FVector& HitNormal, bool* ShouldBounce)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileBase.ProjectileBase_C.ShouldBounce");

	AProjectileBase_C_ShouldBounce_Params params;
	params.Impulse = Impulse;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldBounce != nullptr)
		*ShouldBounce = params.ShouldBounce;
}


// Function ProjectileBase.ProjectileBase_C.ImpactParticles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TEnumAsByte<EPhysicalSurface>  Surface                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectileBase_C::ImpactParticles(const struct FVector& HitLocation, const struct FVector& HitNormal, TEnumAsByte<EPhysicalSurface> Surface)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileBase.ProjectileBase_C.ImpactParticles");

	AProjectileBase_C_ImpactParticles_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.Surface = Surface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileBase.ProjectileBase_C.AddImpulse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AProjectileBase_C::AddImpulse(class UPrimitiveComponent* HitComponent, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileBase.ProjectileBase_C.AddImpulse");

	AProjectileBase_C_AddImpulse_Params params;
	params.HitComponent = HitComponent;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileBase.ProjectileBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectileBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileBase.ProjectileBase_C.UserConstructionScript");

	AProjectileBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileBase.ProjectileBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProjectileBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileBase.ProjectileBase_C.ReceiveBeginPlay");

	AProjectileBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileBase.ProjectileBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectileBase_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileBase.ProjectileBase_C.ReceiveTick");

	AProjectileBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileBase.ProjectileBase_C.BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectileBase_C::BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileBase.ProjectileBase_C.BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	AProjectileBase_C_BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileBase.ProjectileBase_C.BndEvt__SoundSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectileBase_C::BndEvt__SoundSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileBase.ProjectileBase_C.BndEvt__SoundSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AProjectileBase_C_BndEvt__SoundSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileBase.ProjectileBase_C.DestroyManually
// (BlueprintCallable, BlueprintEvent)

void AProjectileBase_C::DestroyManually()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileBase.ProjectileBase_C.DestroyManually");

	AProjectileBase_C_DestroyManually_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileBase.ProjectileBase_C.DestroyBulletParticleSystem
// (BlueprintCallable, BlueprintEvent)

void AProjectileBase_C::DestroyBulletParticleSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileBase.ProjectileBase_C.DestroyBulletParticleSystem");

	AProjectileBase_C_DestroyBulletParticleSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileBase.ProjectileBase_C.ExecuteUbergraph_ProjectileBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectileBase_C::ExecuteUbergraph_ProjectileBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileBase.ProjectileBase_C.ExecuteUbergraph_ProjectileBase");

	AProjectileBase_C_ExecuteUbergraph_ProjectileBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
