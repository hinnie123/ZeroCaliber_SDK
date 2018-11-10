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

// Function EnemyCharacterBase.EnemyCharacterBase_C.GetAllyTeams
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TEnumAsByte<ETeams>>    AllyTeams                      (Parm, OutParm, ZeroConstructor)

void AEnemyCharacterBase_C::GetAllyTeams(TArray<TEnumAsByte<ETeams>>* AllyTeams)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.GetAllyTeams");

	AEnemyCharacterBase_C_GetAllyTeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllyTeams != nullptr)
		*AllyTeams = params.AllyTeams;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.GetTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETeams>            Team                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnemyCharacterBase_C::GetTeam(TEnumAsByte<ETeams>* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.GetTeam");

	AEnemyCharacterBase_C_GetTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Team != nullptr)
		*Team = params.Team;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.GetTargetData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTargetData>     NewParam                       (Parm, OutParm, ZeroConstructor)

void AEnemyCharacterBase_C::GetTargetData(TArray<struct FTargetData>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.GetTargetData");

	AEnemyCharacterBase_C_GetTargetData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.GetTargetLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TargetLocation                 (Parm, OutParm, IsPlainOldData)

void AEnemyCharacterBase_C::GetTargetLocation(struct FVector* TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.GetTargetLocation");

	AEnemyCharacterBase_C_GetTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.IsAlive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Alive                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnemyCharacterBase_C::IsAlive(bool* Alive)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.IsAlive");

	AEnemyCharacterBase_C_IsAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Alive != nullptr)
		*Alive = params.Alive;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.FireWeaponStop
// (Public, BlueprintCallable, BlueprintEvent)

void AEnemyCharacterBase_C::FireWeaponStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.FireWeaponStop");

	AEnemyCharacterBase_C_FireWeaponStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.FireWeaponStart
// (Public, BlueprintCallable, BlueprintEvent)

void AEnemyCharacterBase_C::FireWeaponStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.FireWeaponStart");

	AEnemyCharacterBase_C_FireWeaponStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.OnRep_MaxWalkSpeedCurrent
// (BlueprintCallable, BlueprintEvent)

void AEnemyCharacterBase_C::OnRep_MaxWalkSpeedCurrent()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.OnRep_MaxWalkSpeedCurrent");

	AEnemyCharacterBase_C_OnRep_MaxWalkSpeedCurrent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.OnRep_PrimaryWeapon
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AEnemyCharacterBase_C::OnRep_PrimaryWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.OnRep_PrimaryWeapon");

	AEnemyCharacterBase_C_OnRep_PrimaryWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.DifficultySetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALevelData_C*            LevelData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyCharacterBase_C::DifficultySetting(class ALevelData_C* LevelData)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.DifficultySetting");

	AEnemyCharacterBase_C_DifficultySetting_Params params;
	params.LevelData = LevelData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.HeadshotIndicatorSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyCharacterBase_C::HeadshotIndicatorSound(class AController* Instigator, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.HeadshotIndicatorSound");

	AEnemyCharacterBase_C_HeadshotIndicatorSound_Params params;
	params.Instigator = Instigator;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.GetTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void AEnemyCharacterBase_C::GetTarget(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.GetTarget");

	AEnemyCharacterBase_C_GetTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.PlayGearMovementSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EStepType>         StepType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyCharacterBase_C::PlayGearMovementSound(TEnumAsByte<EStepType> StepType)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.PlayGearMovementSound");

	AEnemyCharacterBase_C_PlayGearMovementSound_Params params;
	params.StepType = StepType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.GetStepSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EStepType>         StepType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPhysicalSurface>  SurfaceType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              StepSound                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Intensity                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnemyCharacterBase_C::GetStepSound(TEnumAsByte<EStepType> StepType, TEnumAsByte<EPhysicalSurface> SurfaceType, class USoundBase** StepSound, float* Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.GetStepSound");

	AEnemyCharacterBase_C_GetStepSound_Params params;
	params.StepType = StepType;
	params.SurfaceType = SurfaceType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StepSound != nullptr)
		*StepSound = params.StepSound;
	if (Intensity != nullptr)
		*Intensity = params.Intensity;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.PlayStepSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EStepType>         StepType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyCharacterBase_C::PlayStepSound(TEnumAsByte<EStepType> StepType)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.PlayStepSound");

	AEnemyCharacterBase_C_PlayStepSound_Params params;
	params.StepType = StepType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.AnimStep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EStepType>         StepType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyCharacterBase_C::AnimStep(TEnumAsByte<EStepType> StepType)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.AnimStep");

	AEnemyCharacterBase_C_AnimStep_Params params;
	params.StepType = StepType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.AnimMagazineIn
// (Public, BlueprintCallable, BlueprintEvent)

void AEnemyCharacterBase_C::AnimMagazineIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.AnimMagazineIn");

	AEnemyCharacterBase_C_AnimMagazineIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.AnimGetNewMagazine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AEnemyCharacterBase_C::AnimGetNewMagazine()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.AnimGetNewMagazine");

	AEnemyCharacterBase_C_AnimGetNewMagazine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.AnimReleaseMagazine
// (Public, BlueprintCallable, BlueprintEvent)

void AEnemyCharacterBase_C::AnimReleaseMagazine()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.AnimReleaseMagazine");

	AEnemyCharacterBase_C_AnimReleaseMagazine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.HandleDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 DamageCauserOriginalVelocity   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AEnemyCharacterBase_C::HandleDamage(float Damage, class AController* Instigator, const struct FName& BoneName, const struct FVector& HitLocation, const struct FVector& DamageCauserOriginalVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.HandleDamage");

	AEnemyCharacterBase_C_HandleDamage_Params params;
	params.Damage = Damage;
	params.Instigator = Instigator;
	params.BoneName = BoneName;
	params.HitLocation = HitLocation;
	params.DamageCauserOriginalVelocity = DamageCauserOriginalVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.AttackStop
// (Public, BlueprintCallable, BlueprintEvent)

void AEnemyCharacterBase_C::AttackStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.AttackStop");

	AEnemyCharacterBase_C_AttackStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.Reload
// (Public, BlueprintCallable, BlueprintEvent)

void AEnemyCharacterBase_C::Reload()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.Reload");

	AEnemyCharacterBase_C_Reload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.SetStanceState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EnemyStanceState>  StanceState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyCharacterBase_C::SetStanceState(TEnumAsByte<EnemyStanceState> StanceState)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.SetStanceState");

	AEnemyCharacterBase_C_SetStanceState_Params params;
	params.StanceState = StanceState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.AttackStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AEnemyCharacterBase_C::AttackStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.AttackStart");

	AEnemyCharacterBase_C_AttackStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.GetEquipment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AEnemyCharacterBase_C::GetEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.GetEquipment");

	AEnemyCharacterBase_C_GetEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.SetMovementState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EnemyMovementState> MovementState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyCharacterBase_C::SetMovementState(TEnumAsByte<EnemyMovementState> MovementState)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.SetMovementState");

	AEnemyCharacterBase_C_SetMovementState_Params params;
	params.MovementState = MovementState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.DisappearBodyAndActor
// (Public, BlueprintCallable, BlueprintEvent)

void AEnemyCharacterBase_C::DisappearBodyAndActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.DisappearBodyAndActor");

	AEnemyCharacterBase_C_DisappearBodyAndActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.Die
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 DamageCauserOriginalVelocity   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AController*             Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyCharacterBase_C::Die(const struct FVector& HitLocation, const struct FVector& DamageCauserOriginalVelocity, class AController* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.Die");

	AEnemyCharacterBase_C_Die_Params params;
	params.HitLocation = HitLocation;
	params.DamageCauserOriginalVelocity = DamageCauserOriginalVelocity;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEnemyCharacterBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.UserConstructionScript");

	AEnemyCharacterBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AEnemyCharacterBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.ReceiveBeginPlay");

	AEnemyCharacterBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.ApplyDamageCustom
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

void AEnemyCharacterBase_C::ApplyDamageCustom(float Damage, class UClass* DamageType, class AController* IntigatedBy, class AActor* DamageCauser, const struct FName& HitBoneName, class UPrimitiveComponent* HitComponent, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& DamageCauserOriginalVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.ApplyDamageCustom");

	AEnemyCharacterBase_C_ApplyDamageCustom_Params params;
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


// Function EnemyCharacterBase.EnemyCharacterBase_C.FireBurst
// (BlueprintCallable, BlueprintEvent)

void AEnemyCharacterBase_C::FireBurst()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.FireBurst");

	AEnemyCharacterBase_C_FireBurst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.BattleChatter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EnemyBattleChatter> BattleChatter                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyCharacterBase_C::BattleChatter(class USoundBase* Sound, TEnumAsByte<EnemyBattleChatter> BattleChatter)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.BattleChatter");

	AEnemyCharacterBase_C_BattleChatter_Params params;
	params.Sound = Sound;
	params.BattleChatter = BattleChatter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.ReceiveRadialDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         DamageReceived                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyCharacterBase_C::ReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.ReceiveRadialDamage");

	AEnemyCharacterBase_C_ReceiveRadialDamage_Params params;
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


// Function EnemyCharacterBase.EnemyCharacterBase_C.DieMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 DamageCauserOriginalVelocity   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AController*             Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyCharacterBase_C::DieMulti(const struct FVector& HitLocation, const struct FVector& DamageCauserOriginalVelocity, class AController* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.DieMulti");

	AEnemyCharacterBase_C_DieMulti_Params params;
	params.HitLocation = HitLocation;
	params.DamageCauserOriginalVelocity = DamageCauserOriginalVelocity;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyCharacterBase_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.ReceiveTick");

	AEnemyCharacterBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.FindTarget
// (BlueprintCallable, BlueprintEvent)

void AEnemyCharacterBase_C::FindTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.FindTarget");

	AEnemyCharacterBase_C_FindTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.CheckMagazineAttachAtBeginPlay
// (BlueprintCallable, BlueprintEvent)

void AEnemyCharacterBase_C::CheckMagazineAttachAtBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.CheckMagazineAttachAtBeginPlay");

	AEnemyCharacterBase_C_CheckMagazineAttachAtBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.HitReactionEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HitReactionTime                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyCharacterBase_C::HitReactionEvent(float HitReactionTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.HitReactionEvent");

	AEnemyCharacterBase_C_HitReactionEvent_Params params;
	params.HitReactionTime = HitReactionTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.HitReactionSpeed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HitReaction                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyCharacterBase_C::HitReactionSpeed(bool HitReaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.HitReactionSpeed");

	AEnemyCharacterBase_C_HitReactionSpeed_Params params;
	params.HitReaction = HitReaction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyCharacterBase_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.ReceiveEndPlay");

	AEnemyCharacterBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.LevelDataInitialized
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALevelData_C*            LevelData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyCharacterBase_C::LevelDataInitialized(class ALevelData_C* LevelData)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.LevelDataInitialized");

	AEnemyCharacterBase_C_LevelDataInitialized_Params params;
	params.LevelData = LevelData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.ExecuteUbergraph_EnemyCharacterBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyCharacterBase_C::ExecuteUbergraph_EnemyCharacterBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.ExecuteUbergraph_EnemyCharacterBase");

	AEnemyCharacterBase_C_ExecuteUbergraph_EnemyCharacterBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.HitReactionDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HitReaction                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyCharacterBase_C::HitReactionDispatcher__DelegateSignature(bool HitReaction)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.HitReactionDispatcher__DelegateSignature");

	AEnemyCharacterBase_C_HitReactionDispatcher__DelegateSignature_Params params;
	params.HitReaction = HitReaction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyCharacterBase.EnemyCharacterBase_C.EnemyDied__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnemyCharacterBase_C*   Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyCharacterBase_C::EnemyDied__DelegateSignature(class AEnemyCharacterBase_C* Enemy, class AController* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyCharacterBase.EnemyCharacterBase_C.EnemyDied__DelegateSignature");

	AEnemyCharacterBase_C_EnemyDied__DelegateSignature_Params params;
	params.Enemy = Enemy;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
