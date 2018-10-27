#pragma once

// ZeroCaliber (0.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjectileBase.ProjectileBase_C.SpawnBloodHeadParticle
struct AProjectileBase_C_SpawnBloodHeadParticle_Params
{
	TEnumAsByte<EPhysicalSurface>                      Surface;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Particle;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProjectileBase.ProjectileBase_C.GetDecal
struct AProjectileBase_C_GetDecal_Params
{
	TEnumAsByte<EPhysicalSurface>                      Surface;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Decal;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProjectileBase.ProjectileBase_C.ImpactDecals
struct AProjectileBase_C_ImpactDecals_Params
{
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      Surface;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjectileBase.ProjectileBase_C.ImpactSound
struct AProjectileBase_C_ImpactSound_Params
{
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      Surface;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjectileBase.ProjectileBase_C.ShouldBounce
struct AProjectileBase_C_ShouldBounce_Params
{
	struct FVector                                     Impulse;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ShouldBounce;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProjectileBase.ProjectileBase_C.ImpactParticles
struct AProjectileBase_C_ImpactParticles_Params
{
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      Surface;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjectileBase.ProjectileBase_C.AddImpulse
struct AProjectileBase_C_AddImpulse_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ProjectileBase.ProjectileBase_C.UserConstructionScript
struct AProjectileBase_C_UserConstructionScript_Params
{
};

// Function ProjectileBase.ProjectileBase_C.ReceiveBeginPlay
struct AProjectileBase_C_ReceiveBeginPlay_Params
{
};

// Function ProjectileBase.ProjectileBase_C.ReceiveTick
struct AProjectileBase_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjectileBase.ProjectileBase_C.BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct AProjectileBase_C_BndEvt__SphereCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ProjectileBase.ProjectileBase_C.BndEvt__SoundSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AProjectileBase_C_BndEvt__SoundSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ProjectileBase.ProjectileBase_C.DestroyManually
struct AProjectileBase_C_DestroyManually_Params
{
};

// Function ProjectileBase.ProjectileBase_C.DestroyBulletParticleSystem
struct AProjectileBase_C_DestroyBulletParticleSystem_Params
{
};

// Function ProjectileBase.ProjectileBase_C.ExecuteUbergraph_ProjectileBase
struct AProjectileBase_C_ExecuteUbergraph_ProjectileBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
