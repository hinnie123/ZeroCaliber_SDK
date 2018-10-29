#pragma once

// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EnemyCharacterBase.EnemyCharacterBase_C
// 0x0294 (0x09D4 - 0x0740)
class AEnemyCharacterBase_C : public ACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0740(0x0008) (Transient, DuplicateTransient)
	class UFMODAudioComponent*                         VoiceOverFMOD;                                            // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFMODAudioComponent*                         Footsteps;                                                // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshAllyIcon;                                       // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            WidgetSoldierName;                                        // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             VoiceAudio;                                               // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HPStart;                                                  // 0x0770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HPCurrent;                                                // 0x0774(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EnemyMovementState>                    MovementState;                                            // 0x0778(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0779(0x0007) MISSED OFFSET
	TMap<TEnumAsByte<EnemyEncounterStrategyEnum>, int> EncounterStrategies;                                      // 0x0780(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              PossiblePrimaryWeapons;                                   // 0x07D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AWeaponBase_C*                               PrimaryWeapon;                                            // 0x07E0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketNameWeapon;                                         // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EnemyStanceState>                      StanceState;                                              // 0x07F0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EnemyFiringModes>                      FireMode;                                                 // 0x07F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x07F2(0x0002) MISSED OFFSET
	float                                              FireAutoProbability;                                      // 0x07F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireRate;                                                 // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireRateCurrent;                                          // 0x07FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FireDuration;                                             // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EnemyPathFindingBehavior>              PathFindingBehavior;                                      // 0x0804(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0805(0x0003) MISSED OFFSET
	TArray<class ATriggerBase*>                        PathFindingAreas;                                         // 0x0808(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	float                                              PathFindingRange;                                         // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // 0x081C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                LastVisitedAreaIndex;                                     // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETeams>                                Team;                                                     // 0x082C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x082D(0x0003) MISSED OFFSET
	float                                              FireDurationCurrrent;                                     // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0834(0x0004) MISSED OFFSET
	struct FTimerHandle                                FiringHandle;                                             // 0x0838(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       SocketNameHead;                                           // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageMultiplierHeadshot;                                 // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MissingRadius;                                            // 0x084C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    EnemyDied;                                                // 0x0850(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class USoundBase*                                  SoundDie;                                                 // 0x0860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFiring;                                                 // 0x0868(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0869(0x0003) MISSED OFFSET
	float                                              WalkSpeedMin;                                             // 0x086C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WalkSpeedMax;                                             // 0x0870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunSpeedMin;                                              // 0x0874(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunSpeedMax;                                              // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrouchSpeedMin;                                           // 0x087C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrouchSpeedMax;                                           // 0x0880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EnemyWeaponState>                      WeaponState;                                              // 0x0884(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0885(0x0003) MISSED OFFSET
	class AMagazineBase_C*                             MagazineNew;                                              // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundStepMetalCrouch;                                     // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundStepMetalWalk;                                       // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundStepMetalRun;                                        // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundStepConcreteCrouch;                                  // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundStepConcreteWalk;                                    // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundStepConcreteRun;                                     // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundStepDirtCrouch;                                      // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundStepDirtWalk;                                        // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundStepDirtRun;                                         // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SoundStepMinInterval;                                     // 0x08D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SoundStepLast;                                            // 0x08DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundGearMovementCrouch;                                  // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundGearMovementWalk;                                    // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundGearMovementRun;                                     // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EnemySenseState>                       StartingSenseState;                                       // 0x08F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x08F9(0x0007) MISSED OFFSET
	struct FName                                       SocketNameNeck01;                                         // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EnemyIdleStrategyEnum>                 IdleStrategy;                                             // 0x0908(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0909(0x0003) MISSED OFFSET
	float                                              VoiceFadeOutTime;                                         // 0x090C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<ETeams>>                        AllyTeams;                                                // 0x0910(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               Names;                                                    // 0x0920(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                                  SoundFriendlyFire;                                        // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentTarget;                                            // 0x0938(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	float                                              AimSpeed;                                                 // 0x0944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AimTimeInterval;                                          // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttackStartTime;                                          // 0x094C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InaccuracyTime;                                           // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InaccuracyMultiplier;                                     // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InaccuracyByDistance;                                     // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x095C(0x0004) MISSED OFFSET
	struct FTimerHandle                                FindTargetHandler;                                        // 0x0960(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       BlackboardKeyCurrentTarget;                               // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketNameSpine03;                                        // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketNameLowerarmL;                                      // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketNameLowerarmR;                                      // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                CheckMagazineAttachAtBeginPlayHandler;                    // 0x0988(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MaxWalkSpeedCurrent;                                      // 0x0990(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0994(0x0004) MISSED OFFSET
	class UFMODEvent*                                  NewVar_1;                                                 // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    HitReactionDispatcher;                                    // 0x09A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              MaxWalkSpeedOrigin;                                       // 0x09B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OriginWalkSpeedChanged;                                   // 0x09B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x09B5(0x0003) MISSED OFFSET
	float                                              SlowDownRate;                                             // 0x09B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MoveFwd;                                                  // 0x09BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x09BD(0x0003) MISSED OFFSET
	float                                              DeathDirection;                                           // 0x09C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Death;                                                    // 0x09C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DeathFly;                                                 // 0x09C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x09C6(0x0002) MISSED OFFSET
	struct FVector                                     PathPointNext;                                            // 0x09C8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EnemyCharacterBase.EnemyCharacterBase_C");
		return ptr;
	}


	void GetAllyTeams(TArray<TEnumAsByte<ETeams>>* AllyTeams);
	void GetTeam(TEnumAsByte<ETeams>* Team);
	void GetTargetData(TArray<struct FTargetData>* NewParam);
	void GetTargetLocation(struct FVector* TargetLocation);
	void IsAlive(bool* Alive);
	void FireWeaponStop();
	void FireWeaponStart();
	void OnRep_MaxWalkSpeedCurrent();
	void OnRep_PrimaryWeapon();
	void DifficultySetting();
	void HeadshotIndicatorSound(class AController* Instigator, const struct FName& BoneName);
	void GetTarget(struct FVector* Location);
	void PlayGearMovementSound(TEnumAsByte<EStepType> StepType);
	void GetStepSound(TEnumAsByte<EStepType> StepType, TEnumAsByte<EPhysicalSurface> SurfaceType, class USoundBase** StepSound, float* Intensity);
	void PlayStepSound(TEnumAsByte<EStepType> StepType);
	void AnimStep(TEnumAsByte<EStepType> StepType);
	void AnimMagazineIn();
	void AnimGetNewMagazine();
	void AnimReleaseMagazine();
	void HandleDamage(float Damage, class AController* Instigator, const struct FName& BoneName, const struct FVector& HitLocation, const struct FVector& DamageCauserOriginalVelocity);
	void AttackStop();
	void Reload();
	void SetStanceState(TEnumAsByte<EnemyStanceState> StanceState);
	void AttackStart();
	void GetEquipment();
	void SetMovementState(TEnumAsByte<EnemyMovementState> MovementState);
	void DisappearBodyAndActor();
	void Die(const struct FVector& HitLocation, const struct FVector& DamageCauserOriginalVelocity, class AController* Instigator);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ApplyDamageCustom(float Damage, class UClass* DamageType, class AController* IntigatedBy, class AActor* DamageCauser, const struct FName& HitBoneName, class UPrimitiveComponent* HitComponent, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& DamageCauserOriginalVelocity);
	void FireBurst();
	void BattleChatter(class USoundBase* Sound, TEnumAsByte<EnemyBattleChatter> BattleChatter);
	void ReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser);
	void DieMulti(const struct FVector& HitLocation, const struct FVector& DamageCauserOriginalVelocity, class AController* Instigator);
	void ReceiveTick(float* DeltaSeconds);
	void FindTarget();
	void CheckMagazineAttachAtBeginPlay();
	void HitReactionEvent(float HitReactionTime);
	void HitReactionSpeed(bool HitReaction);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_EnemyCharacterBase(int EntryPoint);
	void HitReactionDispatcher__DelegateSignature(bool HitReaction);
	void EnemyDied__DelegateSignature(class AEnemyCharacterBase_C* Enemy, class AController* Instigator);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
