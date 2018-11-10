#pragma once

// ZeroCaliber (0.6.0 EA) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EnemyCharacterBase.EnemyCharacterBase_C.GetAllyTeams
struct AEnemyCharacterBase_C_GetAllyTeams_Params
{
	TArray<TEnumAsByte<ETeams>>                        AllyTeams;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.GetTeam
struct AEnemyCharacterBase_C_GetTeam_Params
{
	TEnumAsByte<ETeams>                                Team;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.GetTargetData
struct AEnemyCharacterBase_C_GetTargetData_Params
{
	TArray<struct FTargetData>                         NewParam;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.GetTargetLocation
struct AEnemyCharacterBase_C_GetTargetLocation_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.IsAlive
struct AEnemyCharacterBase_C_IsAlive_Params
{
	bool                                               Alive;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.FireWeaponStop
struct AEnemyCharacterBase_C_FireWeaponStop_Params
{
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.FireWeaponStart
struct AEnemyCharacterBase_C_FireWeaponStart_Params
{
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.OnRep_MaxWalkSpeedCurrent
struct AEnemyCharacterBase_C_OnRep_MaxWalkSpeedCurrent_Params
{
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.OnRep_PrimaryWeapon
struct AEnemyCharacterBase_C_OnRep_PrimaryWeapon_Params
{
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.DifficultySetting
struct AEnemyCharacterBase_C_DifficultySetting_Params
{
	class ALevelData_C*                                LevelData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.HeadshotIndicatorSound
struct AEnemyCharacterBase_C_HeadshotIndicatorSound_Params
{
	class AController*                                 Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.GetTarget
struct AEnemyCharacterBase_C_GetTarget_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.PlayGearMovementSound
struct AEnemyCharacterBase_C_PlayGearMovementSound_Params
{
	TEnumAsByte<EStepType>                             StepType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.GetStepSound
struct AEnemyCharacterBase_C_GetStepSound_Params
{
	TEnumAsByte<EStepType>                             StepType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  StepSound;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.PlayStepSound
struct AEnemyCharacterBase_C_PlayStepSound_Params
{
	TEnumAsByte<EStepType>                             StepType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.AnimStep
struct AEnemyCharacterBase_C_AnimStep_Params
{
	TEnumAsByte<EStepType>                             StepType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.AnimMagazineIn
struct AEnemyCharacterBase_C_AnimMagazineIn_Params
{
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.AnimGetNewMagazine
struct AEnemyCharacterBase_C_AnimGetNewMagazine_Params
{
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.AnimReleaseMagazine
struct AEnemyCharacterBase_C_AnimReleaseMagazine_Params
{
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.HandleDamage
struct AEnemyCharacterBase_C_HandleDamage_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     DamageCauserOriginalVelocity;                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.AttackStop
struct AEnemyCharacterBase_C_AttackStop_Params
{
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.Reload
struct AEnemyCharacterBase_C_Reload_Params
{
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.SetStanceState
struct AEnemyCharacterBase_C_SetStanceState_Params
{
	TEnumAsByte<EnemyStanceState>                      StanceState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.AttackStart
struct AEnemyCharacterBase_C_AttackStart_Params
{
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.GetEquipment
struct AEnemyCharacterBase_C_GetEquipment_Params
{
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.SetMovementState
struct AEnemyCharacterBase_C_SetMovementState_Params
{
	TEnumAsByte<EnemyMovementState>                    MovementState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.DisappearBodyAndActor
struct AEnemyCharacterBase_C_DisappearBodyAndActor_Params
{
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.Die
struct AEnemyCharacterBase_C_Die_Params
{
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     DamageCauserOriginalVelocity;                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AController*                                 Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.UserConstructionScript
struct AEnemyCharacterBase_C_UserConstructionScript_Params
{
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.ReceiveBeginPlay
struct AEnemyCharacterBase_C_ReceiveBeginPlay_Params
{
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.ApplyDamageCustom
struct AEnemyCharacterBase_C_ApplyDamageCustom_Params
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

// Function EnemyCharacterBase.EnemyCharacterBase_C.FireBurst
struct AEnemyCharacterBase_C_FireBurst_Params
{
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.BattleChatter
struct AEnemyCharacterBase_C_BattleChatter_Params
{
	class USoundBase*                                  Sound;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EnemyBattleChatter>                    BattleChatter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.ReceiveRadialDamage
struct AEnemyCharacterBase_C_ReceiveRadialDamage_Params
{
	float*                                             DamageReceived;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Origin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.DieMulti
struct AEnemyCharacterBase_C_DieMulti_Params
{
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     DamageCauserOriginalVelocity;                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AController*                                 Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.ReceiveTick
struct AEnemyCharacterBase_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.FindTarget
struct AEnemyCharacterBase_C_FindTarget_Params
{
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.CheckMagazineAttachAtBeginPlay
struct AEnemyCharacterBase_C_CheckMagazineAttachAtBeginPlay_Params
{
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.HitReactionEvent
struct AEnemyCharacterBase_C_HitReactionEvent_Params
{
	float                                              HitReactionTime;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.HitReactionSpeed
struct AEnemyCharacterBase_C_HitReactionSpeed_Params
{
	bool                                               HitReaction;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.ReceiveEndPlay
struct AEnemyCharacterBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.LevelDataInitialized
struct AEnemyCharacterBase_C_LevelDataInitialized_Params
{
	class ALevelData_C*                                LevelData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.ExecuteUbergraph_EnemyCharacterBase
struct AEnemyCharacterBase_C_ExecuteUbergraph_EnemyCharacterBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.HitReactionDispatcher__DelegateSignature
struct AEnemyCharacterBase_C_HitReactionDispatcher__DelegateSignature_Params
{
	bool                                               HitReaction;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyCharacterBase.EnemyCharacterBase_C.EnemyDied__DelegateSignature
struct AEnemyCharacterBase_C_EnemyDied__DelegateSignature_Params
{
	class AEnemyCharacterBase_C*                       Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
