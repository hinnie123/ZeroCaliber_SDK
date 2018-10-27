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

// Function ShootingTargetBase.ShootingTargetBase_C.IsAlive
struct AShootingTargetBase_C_IsAlive_Params
{
	bool                                               Alive;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingTargetBase.ShootingTargetBase_C.UserConstructionScript
struct AShootingTargetBase_C_UserConstructionScript_Params
{
};

// Function ShootingTargetBase.ShootingTargetBase_C.TimelineHit__FinishedFunc
struct AShootingTargetBase_C_TimelineHit__FinishedFunc_Params
{
};

// Function ShootingTargetBase.ShootingTargetBase_C.TimelineHit__UpdateFunc
struct AShootingTargetBase_C_TimelineHit__UpdateFunc_Params
{
};

// Function ShootingTargetBase.ShootingTargetBase_C.TimelineReset__FinishedFunc
struct AShootingTargetBase_C_TimelineReset__FinishedFunc_Params
{
};

// Function ShootingTargetBase.ShootingTargetBase_C.TimelineReset__UpdateFunc
struct AShootingTargetBase_C_TimelineReset__UpdateFunc_Params
{
};

// Function ShootingTargetBase.ShootingTargetBase_C.ApplyDamageCustom
struct AShootingTargetBase_C_ApplyDamageCustom_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 IntigatedBy;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       HitBoneName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     DamageCauserOriginalVelocity;                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ShootingTargetBase.ShootingTargetBase_C.ResetTarget
struct AShootingTargetBase_C_ResetTarget_Params
{
};

// Function ShootingTargetBase.ShootingTargetBase_C.Activated
struct AShootingTargetBase_C_Activated_Params
{
};

// Function ShootingTargetBase.ShootingTargetBase_C.ReceiveRadialDamage
struct AShootingTargetBase_C_ReceiveRadialDamage_Params
{
	float*                                             DamageReceived;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Origin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShootingTargetBase.ShootingTargetBase_C.FlipDownLocal
struct AShootingTargetBase_C_FlipDownLocal_Params
{
};

// Function ShootingTargetBase.ShootingTargetBase_C.FlipDownMulti
struct AShootingTargetBase_C_FlipDownMulti_Params
{
};

// Function ShootingTargetBase.ShootingTargetBase_C.FlipUpLocal
struct AShootingTargetBase_C_FlipUpLocal_Params
{
};

// Function ShootingTargetBase.ShootingTargetBase_C.FlipUpMulti
struct AShootingTargetBase_C_FlipUpMulti_Params
{
};

// Function ShootingTargetBase.ShootingTargetBase_C.ExecuteUbergraph_ShootingTargetBase
struct AShootingTargetBase_C_ExecuteUbergraph_ShootingTargetBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
