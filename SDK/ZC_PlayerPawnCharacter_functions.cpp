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

// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetKills
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Kills                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::GetKills(int* Kills)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetKills");

	APlayerPawnCharacter_C_GetKills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Kills != nullptr)
		*Kills = params.Kills;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetProjectilesHitHead
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ProjectilesHitHead             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::GetProjectilesHitHead(int* ProjectilesHitHead)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetProjectilesHitHead");

	APlayerPawnCharacter_C_GetProjectilesHitHead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProjectilesHitHead != nullptr)
		*ProjectilesHitHead = params.ProjectilesHitHead;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetProjectilesHit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ProjectilesHit                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::GetProjectilesHit(int* ProjectilesHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetProjectilesHit");

	APlayerPawnCharacter_C_GetProjectilesHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProjectilesHit != nullptr)
		*ProjectilesHit = params.ProjectilesHit;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetProjectilesFired
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ProjectilesFired               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::GetProjectilesFired(int* ProjectilesFired)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetProjectilesFired");

	APlayerPawnCharacter_C_GetProjectilesFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProjectilesFired != nullptr)
		*ProjectilesFired = params.ProjectilesFired;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetAllyTeams
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TEnumAsByte<ETeams>>    AllyTeams                      (Parm, OutParm, ZeroConstructor)

void APlayerPawnCharacter_C::GetAllyTeams(TArray<TEnumAsByte<ETeams>>* AllyTeams)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetAllyTeams");

	APlayerPawnCharacter_C_GetAllyTeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllyTeams != nullptr)
		*AllyTeams = params.AllyTeams;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetTeam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETeams>            Team                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::GetTeam(TEnumAsByte<ETeams>* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetTeam");

	APlayerPawnCharacter_C_GetTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Team != nullptr)
		*Team = params.Team;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.IsAlive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Alive                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::IsAlive(bool* Alive)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.IsAlive");

	APlayerPawnCharacter_C_IsAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Alive != nullptr)
		*Alive = params.Alive;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetTargetData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTargetData>     NewParam                       (Parm, OutParm, ZeroConstructor)

void APlayerPawnCharacter_C::GetTargetData(TArray<struct FTargetData>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetTargetData");

	APlayerPawnCharacter_C_GetTargetData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetTargetLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TargetLocation                 (Parm, OutParm, IsPlainOldData)

void APlayerPawnCharacter_C::GetTargetLocation(struct FVector* TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetTargetLocation");

	APlayerPawnCharacter_C_GetTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ResetVelocityScaler
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::ResetVelocityScaler()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.ResetVelocityScaler");

	APlayerPawnCharacter_C_ResetVelocityScaler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ForcePullEndCheck
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGrippableStaticMeshActorBase_C* ForcePullActor                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class USphereComponent*        GrabSphere                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 NearestObjectToHand            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UGripMotionControllerComponent* CallingMotionController        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent* OtherController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerPawnCharacter_C::ForcePullEndCheck(class AActor* Actor, class USphereComponent* GrabSphere, class UGripMotionControllerComponent* CallingMotionController, class UGripMotionControllerComponent* OtherController, class AGrippableStaticMeshActorBase_C** ForcePullActor, class UObject** NearestObjectToHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.ForcePullEndCheck");

	APlayerPawnCharacter_C_ForcePullEndCheck_Params params;
	params.Actor = Actor;
	params.GrabSphere = GrabSphere;
	params.CallingMotionController = CallingMotionController;
	params.OtherController = OtherController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForcePullActor != nullptr)
		*ForcePullActor = params.ForcePullActor;
	if (NearestObjectToHand != nullptr)
		*NearestObjectToHand = params.NearestObjectToHand;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetHandsEnabled
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::SetHandsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetHandsEnabled");

	APlayerPawnCharacter_C_SetHandsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OnRep_PlayerHeight
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::OnRep_PlayerHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.OnRep_PlayerHeight");

	APlayerPawnCharacter_C_OnRep_PlayerHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetInputTurn_X
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APlayerPawnCharacter_C::GetInputTurn_X()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetInputTurn_X");

	APlayerPawnCharacter_C_GetInputTurn_X_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OnRep_HPCurrent
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::OnRep_HPCurrent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.OnRep_HPCurrent");

	APlayerPawnCharacter_C_OnRep_HPCurrent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OptionsIsRightHandedChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsRightHanded                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::OptionsIsRightHandedChanged(bool IsRightHanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.OptionsIsRightHandedChanged");

	APlayerPawnCharacter_C_OptionsIsRightHandedChanged_Params params;
	params.IsRightHanded = IsRightHanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateMCTriggerValues
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::UpdateMCTriggerValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateMCTriggerValues");

	APlayerPawnCharacter_C_UpdateMCTriggerValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReleaseMagazine
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::ReleaseMagazine()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReleaseMagazine");

	APlayerPawnCharacter_C_ReleaseMagazine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OptionIsHeadOrientedLocomotionChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHeadOrientedLocomotion       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::OptionIsHeadOrientedLocomotionChanged(bool IsHeadOrientedLocomotion)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.OptionIsHeadOrientedLocomotionChanged");

	APlayerPawnCharacter_C_OptionIsHeadOrientedLocomotionChanged_Params params;
	params.IsHeadOrientedLocomotion = IsHeadOrientedLocomotion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryToSecondaryGripObject
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent** OtherHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                ObjectToTryToGrab              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag*           GripSecondaryTag               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          ObjectImplementsInterface      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             RelativeSecondaryTransform     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool*                          bHadSlot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SecondaryGripped               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::TryToSecondaryGripObject(class UGripMotionControllerComponent** Hand, class UGripMotionControllerComponent** OtherHand, class UObject** ObjectToTryToGrab, struct FGameplayTag* GripSecondaryTag, bool* ObjectImplementsInterface, struct FTransform* RelativeSecondaryTransform, bool* bHadSlot, bool* SecondaryGripped)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryToSecondaryGripObject");

	APlayerPawnCharacter_C_TryToSecondaryGripObject_Params params;
	params.Hand = Hand;
	params.OtherHand = OtherHand;
	params.ObjectToTryToGrab = ObjectToTryToGrab;
	params.GripSecondaryTag = GripSecondaryTag;
	params.ObjectImplementsInterface = ObjectImplementsInterface;
	params.RelativeSecondaryTransform = RelativeSecondaryTransform;
	params.bHadSlot = bHadSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SecondaryGripped != nullptr)
		*SecondaryGripped = params.SecondaryGripped;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateSmoothTurning
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::UpdateSmoothTurning()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateSmoothTurning");

	APlayerPawnCharacter_C_UpdateSmoothTurning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateSnapTurning
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::UpdateSnapTurning()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateSnapTurning");

	APlayerPawnCharacter_C_UpdateSnapTurning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SliderOutOfBoundsClick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* CallingHand                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           IsGrip                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::SliderOutOfBoundsClick(class UGripMotionControllerComponent* CallingHand, bool IsGrip)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.SliderOutOfBoundsClick");

	APlayerPawnCharacter_C_SliderOutOfBoundsClick_Params params;
	params.CallingHand = CallingHand;
	params.IsGrip = IsGrip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OnRep_PlayerRank
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::OnRep_PlayerRank()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.OnRep_PlayerRank");

	APlayerPawnCharacter_C_OnRep_PlayerRank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InitializeRank
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::InitializeRank()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.InitializeRank");

	APlayerPawnCharacter_C_InitializeRank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckWeaponSlotCorrectAttach
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::CheckWeaponSlotCorrectAttach()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckWeaponSlotCorrectAttach");

	APlayerPawnCharacter_C_CheckWeaponSlotCorrectAttach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OnRep_GrenadeSlot2Attached
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::OnRep_GrenadeSlot2Attached()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.OnRep_GrenadeSlot2Attached");

	APlayerPawnCharacter_C_OnRep_GrenadeSlot2Attached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OnRep_GrenadeSlotAttached
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::OnRep_GrenadeSlotAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.OnRep_GrenadeSlotAttached");

	APlayerPawnCharacter_C_OnRep_GrenadeSlotAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OnRep_PrimarySlotAttached
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::OnRep_PrimarySlotAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.OnRep_PrimarySlotAttached");

	APlayerPawnCharacter_C_OnRep_PrimarySlotAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OnRep_SecondarySlotAttached
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::OnRep_SecondarySlotAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.OnRep_SecondarySlotAttached");

	APlayerPawnCharacter_C_OnRep_SecondarySlotAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReloadWeaponScale
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::ReloadWeaponScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReloadWeaponScale");

	APlayerPawnCharacter_C_ReloadWeaponScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SaveWeaponScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::SaveWeaponScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.SaveWeaponScale");

	APlayerPawnCharacter_C_SaveWeaponScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SwitchOutline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TurnOn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::SwitchOutline(bool TurnOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.SwitchOutline");

	APlayerPawnCharacter_C_SwitchOutline_Params params;
	params.TurnOn = TurnOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryToGrabObjectAfter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 ObjectToTryToGrab              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGripMotionControllerComponent* Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent* OtherHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           IsSlotGrip                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::TryToGrabObjectAfter(class UObject* ObjectToTryToGrab, class UGripMotionControllerComponent* Hand, class UGripMotionControllerComponent* OtherHand, bool IsSlotGrip)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryToGrabObjectAfter");

	APlayerPawnCharacter_C_TryToGrabObjectAfter_Params params;
	params.ObjectToTryToGrab = ObjectToTryToGrab;
	params.Hand = Hand;
	params.OtherHand = OtherHand;
	params.IsSlotGrip = IsSlotGrip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CycleHandPoses
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::CycleHandPoses(EControllerHand Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.CycleHandPoses");

	APlayerPawnCharacter_C_CycleHandPoses_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.AttachmentReleasedButtonStatusChangeDuringHover
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Changed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::AttachmentReleasedButtonStatusChangeDuringHover(bool* Changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.AttachmentReleasedButtonStatusChangeDuringHover");

	APlayerPawnCharacter_C_AttachmentReleasedButtonStatusChangeDuringHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Changed != nullptr)
		*Changed = params.Changed;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InitializeName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::InitializeName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.InitializeName");

	APlayerPawnCharacter_C_InitializeName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.Initialize");

	APlayerPawnCharacter_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckSlotAttach
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ItemToSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::CheckSlotAttach(class AActor* ItemToSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckSlotAttach");

	APlayerPawnCharacter_C_CheckSlotAttach_Params params;
	params.ItemToSlot = ItemToSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ShowSlots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 GripedItem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::ShowSlots(class UObject* GripedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.ShowSlots");

	APlayerPawnCharacter_C_ShowSlots_Params params;
	params.GripedItem = GripedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.EnableForcePull
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::EnableForcePull(EControllerHand Hand, bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.EnableForcePull");

	APlayerPawnCharacter_C_EnableForcePull_Params params;
	params.Hand = Hand;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ShouldOutline
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldOutline                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::ShouldOutline(class AActor* Actor, bool* ShouldOutline)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.ShouldOutline");

	APlayerPawnCharacter_C_ShouldOutline_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldOutline != nullptr)
		*ShouldOutline = params.ShouldOutline;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ActivatePPDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BlendWeight                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::ActivatePPDeath(float BlendWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.ActivatePPDeath");

	APlayerPawnCharacter_C_ActivatePPDeath_Params params;
	params.BlendWeight = BlendWeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HideSlots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* OtherHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerPawnCharacter_C::HideSlots(class UGripMotionControllerComponent* OtherHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.HideSlots");

	APlayerPawnCharacter_C_HideSlots_Params params;
	params.OtherHand = OtherHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ShowWeaponSlots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EWeaponCategories> WeaponCategory                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::ShowWeaponSlots(TEnumAsByte<EWeaponCategories> WeaponCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.ShowWeaponSlots");

	APlayerPawnCharacter_C_ShowWeaponSlots_Params params;
	params.WeaponCategory = WeaponCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ShowGrenadeSlots
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::ShowGrenadeSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.ShowGrenadeSlots");

	APlayerPawnCharacter_C_ShowGrenadeSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.BeginPlayParent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::BeginPlayParent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.BeginPlayParent");

	APlayerPawnCharacter_C_BeginPlayParent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckNewMagazineShouldSpawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent* OtherHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ShouldSpawn                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::CheckNewMagazineShouldSpawn(class UGripMotionControllerComponent* Hand, class UGripMotionControllerComponent* OtherHand, bool* ShouldSpawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckNewMagazineShouldSpawn");

	APlayerPawnCharacter_C_CheckNewMagazineShouldSpawn_Params params;
	params.Hand = Hand;
	params.OtherHand = OtherHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldSpawn != nullptr)
		*ShouldSpawn = params.ShouldSpawn;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateInteractibleObject
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::UpdateInteractibleObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateInteractibleObject");

	APlayerPawnCharacter_C_UpdateInteractibleObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetNearestActorToLine
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Actors                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 LineOrigin                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 LineDirection                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  NearestActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::GetNearestActorToLine(const struct FVector& LineOrigin, const struct FVector& LineDirection, TArray<class AActor*>* Actors, class AActor** NearestActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetNearestActorToLine");

	APlayerPawnCharacter_C_GetNearestActorToLine_Params params;
	params.LineOrigin = LineOrigin;
	params.LineDirection = LineDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;
	if (NearestActor != nullptr)
		*NearestActor = params.NearestActor;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckGrippedItemDistanceWithController
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerPawnCharacter_C::CheckGrippedItemDistanceWithController(class UGripMotionControllerComponent* Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckGrippedItemDistanceWithController");

	APlayerPawnCharacter_C_CheckGrippedItemDistanceWithController_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetGrippedItemWithController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGripMotionControllerComponent* Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  GrippedItem                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::GetGrippedItemWithController(class UGripMotionControllerComponent* Hand, class AActor** GrippedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetGrippedItemWithController");

	APlayerPawnCharacter_C_GetGrippedItemWithController_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GrippedItem != nullptr)
		*GrippedItem = params.GrippedItem;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckGrippedItemDistance
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::CheckGrippedItemDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckGrippedItemDistance");

	APlayerPawnCharacter_C_CheckGrippedItemDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateHitIndicator
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::UpdateHitIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateHitIndicator");

	APlayerPawnCharacter_C_UpdateHitIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckClimb
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RightHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanClimb                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::CheckClimb(bool RightHand, bool* CanClimb)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckClimb");

	APlayerPawnCharacter_C_CheckClimb_Params params;
	params.RightHand = RightHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanClimb != nullptr)
		*CanClimb = params.CanClimb;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HoverObject
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 NewObject                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::HoverObject(class UGripMotionControllerComponent* Hand, class UObject* NewObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.HoverObject");

	APlayerPawnCharacter_C_HoverObject_Params params;
	params.Hand = Hand;
	params.NewObject = NewObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetNearestObject
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USphereComponent*        Overlap_Component              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 NearestObject                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::GetNearestObject(class UGripMotionControllerComponent* Hand, class USphereComponent* Overlap_Component, class UObject** NearestObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetNearestObject");

	APlayerPawnCharacter_C_GetNearestObject_Params params;
	params.Hand = Hand;
	params.Overlap_Component = Overlap_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NearestObject != nullptr)
		*NearestObject = params.NearestObject;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetValidForcePullableActors
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AGrippableStaticMeshActorBase_C*> Actors                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AGrippableStaticMeshActorBase_C*> ValidActors                    (Parm, OutParm, ZeroConstructor)

void APlayerPawnCharacter_C::GetValidForcePullableActors(TArray<class AGrippableStaticMeshActorBase_C*>* Actors, TArray<class AGrippableStaticMeshActorBase_C*>* ValidActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetValidForcePullableActors");

	APlayerPawnCharacter_C_GetValidForcePullableActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;
	if (ValidActors != nullptr)
		*ValidActors = params.ValidActors;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GripDropOrUseObjectClean
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** CallingMotionController        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent** OtherController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          CanCheckClimb                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    GrabSphere                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTagContainer*  RelevantGameplayTags           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           PerformedAction                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::GripDropOrUseObjectClean(class UGripMotionControllerComponent** CallingMotionController, class UGripMotionControllerComponent** OtherController, bool* CanCheckClimb, class UPrimitiveComponent** GrabSphere, struct FGameplayTagContainer* RelevantGameplayTags, bool* PerformedAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.GripDropOrUseObjectClean");

	APlayerPawnCharacter_C_GripDropOrUseObjectClean_Params params;
	params.CallingMotionController = CallingMotionController;
	params.OtherController = OtherController;
	params.CanCheckClimb = CanCheckClimb;
	params.GrabSphere = GrabSphere;
	params.RelevantGameplayTags = RelevantGameplayTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PerformedAction != nullptr)
		*PerformedAction = params.PerformedAction;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.IsAttachmentReleaseButtonPressed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Pressed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::IsAttachmentReleaseButtonPressed(bool* Pressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.IsAttachmentReleaseButtonPressed");

	APlayerPawnCharacter_C_IsAttachmentReleaseButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pressed != nullptr)
		*Pressed = params.Pressed;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.DropOrUseSecondaryAttachment
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** Calling_Motion_Controller      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent** Other_Controller               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTagContainer*  GameplayTags                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           DroppedOrUsedSecondary         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HadSecondary                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::DropOrUseSecondaryAttachment(class UGripMotionControllerComponent** Calling_Motion_Controller, class UGripMotionControllerComponent** Other_Controller, struct FGameplayTagContainer* GameplayTags, bool* DroppedOrUsedSecondary, bool* HadSecondary)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.DropOrUseSecondaryAttachment");

	APlayerPawnCharacter_C_DropOrUseSecondaryAttachment_Params params;
	params.Calling_Motion_Controller = Calling_Motion_Controller;
	params.Other_Controller = Other_Controller;
	params.GameplayTags = GameplayTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DroppedOrUsedSecondary != nullptr)
		*DroppedOrUsedSecondary = params.DroppedOrUsedSecondary;
	if (HadSecondary != nullptr)
		*HadSecondary = params.HadSecondary;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateIKParams
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::UpdateIKParams()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateIKParams");

	APlayerPawnCharacter_C_UpdateIKParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OptionsChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOptionsStruct2         Options                        (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacter_C::OptionsChanged(const struct FOptionsStruct2& Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.OptionsChanged");

	APlayerPawnCharacter_C_OptionsChanged_Params params;
	params.Options = Options;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HitParticles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FName                   HitBoneName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::HitParticles(float Damage, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FName& HitBoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.HitParticles");

	APlayerPawnCharacter_C_HitParticles_Params params;
	params.Damage = Damage;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitBoneName = HitBoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.AttachGrenadeToSlotLocal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGrenadeBase_C*          Grenade                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerPawnCharacter_C::AttachGrenadeToSlotLocal(class AGrenadeBase_C* Grenade, class UPrimitiveComponent* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.AttachGrenadeToSlotLocal");

	APlayerPawnCharacter_C_AttachGrenadeToSlotLocal_Params params;
	params.Grenade = Grenade;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CanObjectBeClimbed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent**    ObjectToCheck                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           CanClimb                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::CanObjectBeClimbed(class UPrimitiveComponent** ObjectToCheck, bool* CanClimb)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.CanObjectBeClimbed");

	APlayerPawnCharacter_C_CanObjectBeClimbed_Params params;
	params.ObjectToCheck = ObjectToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanClimb != nullptr)
		*CanClimb = params.CanClimb;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetOtherGrip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGripMotionControllerComponent* Grip                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent* OtherGrip                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerPawnCharacter_C::GetOtherGrip(class UGripMotionControllerComponent* Grip, class UGripMotionControllerComponent** OtherGrip)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetOtherGrip");

	APlayerPawnCharacter_C_GetOtherGrip_Params params;
	params.Grip = Grip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OtherGrip != nullptr)
		*OtherGrip = params.OtherGrip;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetStepSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EStepType>         StepType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPhysicalSurface>  SurfaceType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              StepSound                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Intensity                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::GetStepSound(TEnumAsByte<EStepType> StepType, TEnumAsByte<EPhysicalSurface> SurfaceType, class USoundBase** StepSound, float* Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetStepSound");

	APlayerPawnCharacter_C_GetStepSound_Params params;
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


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.PlayGearMovementSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EStepType>         StepType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::PlayGearMovementSound(TEnumAsByte<EStepType> StepType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.PlayGearMovementSound");

	APlayerPawnCharacter_C_PlayGearMovementSound_Params params;
	params.StepType = StepType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.PlayStepSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EStepType>         StepType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::PlayStepSound(TEnumAsByte<EStepType> StepType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.PlayStepSound");

	APlayerPawnCharacter_C_PlayStepSound_Params params;
	params.StepType = StepType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.AnimStep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EStepType>         Step                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::AnimStep(TEnumAsByte<EStepType> Step)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.AnimStep");

	APlayerPawnCharacter_C_AnimStep_Params params;
	params.Step = Step;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.AddMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMessageStruct          Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacter_C::AddMessage(const struct FMessageStruct& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.AddMessage");

	APlayerPawnCharacter_C_AddMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetGrippedWeaponWithController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGripMotionControllerComponent* Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AWeaponBase_C*           GrippedWeapon                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::GetGrippedWeaponWithController(class UGripMotionControllerComponent* Hand, class AWeaponBase_C** GrippedWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetGrippedWeaponWithController");

	APlayerPawnCharacter_C_GetGrippedWeaponWithController_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GrippedWeapon != nullptr)
		*GrippedWeapon = params.GrippedWeapon;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.DieLocal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::DieLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.DieLocal");

	APlayerPawnCharacter_C_DieLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandleDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DamageCauserOriginalVelocity   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void APlayerPawnCharacter_C::HandleDamage(float Damage, class AController* InstigatedBy, const struct FVector& DamageCauserOriginalVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandleDamage");

	APlayerPawnCharacter_C_HandleDamage_Params params;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauserOriginalVelocity = DamageCauserOriginalVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.IKFootTrace
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TraceDistance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Socket                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          IKoffset                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::IKFootTrace(float TraceDistance, const struct FName& Socket, float* IKoffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.IKFootTrace");

	APlayerPawnCharacter_C_IKFootTrace_Params params;
	params.TraceDistance = TraceDistance;
	params.Socket = Socket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IKoffset != nullptr)
		*IKoffset = params.IKoffset;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.AttachWeaponToSlotLocal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeaponBase_C*           Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerPawnCharacter_C::AttachWeaponToSlotLocal(class AWeaponBase_C* Weapon, class UPrimitiveComponent* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.AttachWeaponToSlotLocal");

	APlayerPawnCharacter_C_AttachWeaponToSlotLocal_Params params;
	params.Weapon = Weapon;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReattachMotionController
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GripMotionController           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerPawnCharacter_C::ReattachMotionController(class UGripMotionControllerComponent* GripMotionController)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReattachMotionController");

	APlayerPawnCharacter_C_ReattachMotionController_Params params;
	params.GripMotionController = GripMotionController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryRemoveSecondaryAttachment
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** Calling_Motion_Controller      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent** Other_Controller               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTagContainer*  GameplayTags                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           DroppedSecondary               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HadSecondary                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::TryRemoveSecondaryAttachment(class UGripMotionControllerComponent** Calling_Motion_Controller, class UGripMotionControllerComponent** Other_Controller, struct FGameplayTagContainer* GameplayTags, bool* DroppedSecondary, bool* HadSecondary)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryRemoveSecondaryAttachment");

	APlayerPawnCharacter_C_TryRemoveSecondaryAttachment_Params params;
	params.Calling_Motion_Controller = Calling_Motion_Controller;
	params.Other_Controller = Other_Controller;
	params.GameplayTags = GameplayTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DroppedSecondary != nullptr)
		*DroppedSecondary = params.DroppedSecondary;
	if (HadSecondary != nullptr)
		*HadSecondary = params.HadSecondary;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryToGrabObject
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                ObjectToTryToGrab              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             WorldTransform                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UGripMotionControllerComponent** Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent** OtherHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          IsSlotGrip                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag*           GripSecondaryTag               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName*                  GripBoneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsSecondaryGrip                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Gripped                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::TryToGrabObject(class UObject** ObjectToTryToGrab, struct FTransform* WorldTransform, class UGripMotionControllerComponent** Hand, class UGripMotionControllerComponent** OtherHand, bool* IsSlotGrip, struct FGameplayTag* GripSecondaryTag, struct FName* GripBoneName, bool* IsSecondaryGrip, bool* Gripped)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryToGrabObject");

	APlayerPawnCharacter_C_TryToGrabObject_Params params;
	params.ObjectToTryToGrab = ObjectToTryToGrab;
	params.WorldTransform = WorldTransform;
	params.Hand = Hand;
	params.OtherHand = OtherHand;
	params.IsSlotGrip = IsSlotGrip;
	params.GripSecondaryTag = GripSecondaryTag;
	params.GripBoneName = GripBoneName;
	params.IsSecondaryGrip = IsSecondaryGrip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Gripped != nullptr)
		*Gripped = params.Gripped;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetGrippedWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AWeaponBase_C*           GrippedWeapon                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::GetGrippedWeapon(class AWeaponBase_C** GrippedWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetGrippedWeapon");

	APlayerPawnCharacter_C_GetGrippedWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GrippedWeapon != nullptr)
		*GrippedWeapon = params.GrippedWeapon;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.TeleportRightPressed
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::TeleportRightPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.TeleportRightPressed");

	APlayerPawnCharacter_C_TeleportRightPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SpawnMagazineToHandLocal
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent* OtherHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AMagazineBase_C*         Magazine                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::SpawnMagazineToHandLocal(class UGripMotionControllerComponent* Hand, class UGripMotionControllerComponent* OtherHand, class AMagazineBase_C** Magazine)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.SpawnMagazineToHandLocal");

	APlayerPawnCharacter_C_SpawnMagazineToHandLocal_Params params;
	params.Hand = Hand;
	params.OtherHand = OtherHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Magazine != nullptr)
		*Magazine = params.Magazine;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetNearestOverlappingObject
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    OverlapComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent** Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 NearestObject                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ImplementsInterface            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ObjectTransform                (Parm, OutParm, IsPlainOldData)
// bool                           CanBeClimbed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ImpactLoc                      (Parm, OutParm, IsPlainOldData)

void APlayerPawnCharacter_C::GetNearestOverlappingObject(class UPrimitiveComponent** OverlapComponent, class UGripMotionControllerComponent** Hand, class UObject** NearestObject, bool* ImplementsInterface, struct FTransform* ObjectTransform, bool* CanBeClimbed, struct FName* BoneName, struct FVector* ImpactLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetNearestOverlappingObject");

	APlayerPawnCharacter_C_GetNearestOverlappingObject_Params params;
	params.OverlapComponent = OverlapComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NearestObject != nullptr)
		*NearestObject = params.NearestObject;
	if (ImplementsInterface != nullptr)
		*ImplementsInterface = params.ImplementsInterface;
	if (ObjectTransform != nullptr)
		*ObjectTransform = params.ObjectTransform;
	if (CanBeClimbed != nullptr)
		*CanBeClimbed = params.CanBeClimbed;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (ImpactLoc != nullptr)
		*ImpactLoc = params.ImpactLoc;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.UserConstructionScript");

	APlayerPawnCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandGlowRight__FinishedFunc
// (BlueprintEvent)

void APlayerPawnCharacter_C::HandGlowRight__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandGlowRight__FinishedFunc");

	APlayerPawnCharacter_C_HandGlowRight__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandGlowRight__UpdateFunc
// (BlueprintEvent)

void APlayerPawnCharacter_C::HandGlowRight__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandGlowRight__UpdateFunc");

	APlayerPawnCharacter_C_HandGlowRight__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandGlowLeft__FinishedFunc
// (BlueprintEvent)

void APlayerPawnCharacter_C::HandGlowLeft__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandGlowLeft__FinishedFunc");

	APlayerPawnCharacter_C_HandGlowLeft__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandGlowLeft__UpdateFunc
// (BlueprintEvent)

void APlayerPawnCharacter_C::HandGlowLeft__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandGlowLeft__UpdateFunc");

	APlayerPawnCharacter_C_HandGlowLeft__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_MenuLeft_K2Node_InputActionEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacter_C::InpActEvt_MenuLeft_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_MenuLeft_K2Node_InputActionEvent_15");

	APlayerPawnCharacter_C_InpActEvt_MenuLeft_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_MenuRight_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacter_C::InpActEvt_MenuRight_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_MenuRight_K2Node_InputActionEvent_14");

	APlayerPawnCharacter_C_InpActEvt_MenuRight_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_GripLeft_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacter_C::InpActEvt_GripLeft_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_GripLeft_K2Node_InputActionEvent_13");

	APlayerPawnCharacter_C_InpActEvt_GripLeft_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_GripLeft_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacter_C::InpActEvt_GripLeft_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_GripLeft_K2Node_InputActionEvent_12");

	APlayerPawnCharacter_C_InpActEvt_GripLeft_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_GripRight_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacter_C::InpActEvt_GripRight_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_GripRight_K2Node_InputActionEvent_11");

	APlayerPawnCharacter_C_InpActEvt_GripRight_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_GripRight_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacter_C::InpActEvt_GripRight_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_GripRight_K2Node_InputActionEvent_10");

	APlayerPawnCharacter_C_InpActEvt_GripRight_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_TriggerLeft_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacter_C::InpActEvt_TriggerLeft_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_TriggerLeft_K2Node_InputActionEvent_9");

	APlayerPawnCharacter_C_InpActEvt_TriggerLeft_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_TriggerLeft_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacter_C::InpActEvt_TriggerLeft_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_TriggerLeft_K2Node_InputActionEvent_8");

	APlayerPawnCharacter_C_InpActEvt_TriggerLeft_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_TriggerRight_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacter_C::InpActEvt_TriggerRight_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_TriggerRight_K2Node_InputActionEvent_7");

	APlayerPawnCharacter_C_InpActEvt_TriggerRight_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_TriggerRight_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacter_C::InpActEvt_TriggerRight_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_TriggerRight_K2Node_InputActionEvent_6");

	APlayerPawnCharacter_C_InpActEvt_TriggerRight_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_Skill_AttachmentRelease_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacter_C::InpActEvt_Skill_AttachmentRelease_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_Skill_AttachmentRelease_K2Node_InputActionEvent_5");

	APlayerPawnCharacter_C_InpActEvt_Skill_AttachmentRelease_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_Skill_AttachmentRelease_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacter_C::InpActEvt_Skill_AttachmentRelease_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_Skill_AttachmentRelease_K2Node_InputActionEvent_4");

	APlayerPawnCharacter_C_InpActEvt_Skill_AttachmentRelease_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_Skill_FireModeChange_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacter_C::InpActEvt_Skill_FireModeChange_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_Skill_FireModeChange_K2Node_InputActionEvent_3");

	APlayerPawnCharacter_C_InpActEvt_Skill_FireModeChange_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_Skill_ReleaseMagazine_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacter_C::InpActEvt_Skill_ReleaseMagazine_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_Skill_ReleaseMagazine_K2Node_InputActionEvent_2");

	APlayerPawnCharacter_C_InpActEvt_Skill_ReleaseMagazine_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_Skill_ReleaseSlider_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacter_C::InpActEvt_Skill_ReleaseSlider_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.InpActEvt_Skill_ReleaseSlider_K2Node_InputActionEvent_1");

	APlayerPawnCharacter_C_InpActEvt_Skill_ReleaseSlider_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlayerPawnCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReceiveBeginPlay");

	APlayerPawnCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.RumbleController
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::RumbleController(EControllerHand Hand, float Intensity, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.RumbleController");

	APlayerPawnCharacter_C_RumbleController_Params params;
	params.Hand = Hand;
	params.Intensity = Intensity;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.RumbleControllerBoth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::RumbleControllerBoth(float Intensity, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.RumbleControllerBoth");

	APlayerPawnCharacter_C_RumbleControllerBoth_Params params;
	params.Intensity = Intensity;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__GrabSphereLeft_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APlayerPawnCharacter_C::BndEvt__GrabSphereLeft_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__GrabSphereLeft_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	APlayerPawnCharacter_C_BndEvt__GrabSphereLeft_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__GrabSphereRight_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APlayerPawnCharacter_C::BndEvt__GrabSphereRight_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__GrabSphereRight_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	APlayerPawnCharacter_C_BndEvt__GrabSphereRight_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryDropSingle
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector_NetQuantize100* AngleVel                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector_NetQuantize100* LinearVel                      (BlueprintVisible, BlueprintReadOnly, Parm)
// unsigned char*                 GripHash                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::TryDropSingle(class UGripMotionControllerComponent** Controller, struct FVector_NetQuantize100* AngleVel, struct FVector_NetQuantize100* LinearVel, unsigned char* GripHash)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryDropSingle");

	APlayerPawnCharacter_C_TryDropSingle_Params params;
	params.Controller = Controller;
	params.AngleVel = AngleVel;
	params.LinearVel = LinearVel;
	params.GripHash = GripHash;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.On Possessed
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::On_Possessed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.On Possessed");

	APlayerPawnCharacter_C_On_Possessed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckAndHandleGripAnimations
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::CheckAndHandleGripAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckAndHandleGripAnimations");

	APlayerPawnCharacter_C_CheckAndHandleGripAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReceiveTick");

	APlayerPawnCharacter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ApplyDamageCustom
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

void APlayerPawnCharacter_C::ApplyDamageCustom(float Damage, class UClass* DamageType, class AController* IntigatedBy, class AActor* DamageCauser, const struct FName& HitBoneName, class UPrimitiveComponent* HitComponent, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& DamageCauserOriginalVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.ApplyDamageCustom");

	APlayerPawnCharacter_C_ApplyDamageCustom_Params params;
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


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.PrimaryWeaponSlotPicked
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::PrimaryWeaponSlotPicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.PrimaryWeaponSlotPicked");

	APlayerPawnCharacter_C_PrimaryWeaponSlotPicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SecondaryWeaponSlotPicked
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::SecondaryWeaponSlotPicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.SecondaryWeaponSlotPicked");

	APlayerPawnCharacter_C_SecondaryWeaponSlotPicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckWeaponSlotPrimaryAttach
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::CheckWeaponSlotPrimaryAttach(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckWeaponSlotPrimaryAttach");

	APlayerPawnCharacter_C_CheckWeaponSlotPrimaryAttach_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckWeaponSlotSecondaryAttach
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::CheckWeaponSlotSecondaryAttach(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckWeaponSlotSecondaryAttach");

	APlayerPawnCharacter_C_CheckWeaponSlotSecondaryAttach_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryDropSingle_Client
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation* GripToDrop                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector*                Angle_Vel                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                Linear_Vel                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void APlayerPawnCharacter_C::TryDropSingle_Client(class UGripMotionControllerComponent** Controller, struct FBPActorGripInformation* GripToDrop, struct FVector* Angle_Vel, struct FVector* Linear_Vel)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryDropSingle_Client");

	APlayerPawnCharacter_C_TryDropSingle_Client_Params params;
	params.Controller = Controller;
	params.GripToDrop = GripToDrop;
	params.Angle_Vel = Angle_Vel;
	params.Linear_Vel = Linear_Vel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryDropSingleAfter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 ObjectToDrop                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::TryDropSingleAfter(class UGripMotionControllerComponent* Controller, class UObject* ObjectToDrop)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryDropSingleAfter");

	APlayerPawnCharacter_C_TryDropSingleAfter_Params params;
	params.Controller = Controller;
	params.ObjectToDrop = ObjectToDrop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReceiveRadialDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         DamageReceived                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Origin                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::ReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReceiveRadialDamage");

	APlayerPawnCharacter_C_ReceiveRadialDamage_Params params;
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


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.AutiHealWait
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::AutiHealWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.AutiHealWait");

	APlayerPawnCharacter_C_AutiHealWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.AutoHeal
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::AutoHeal()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.AutoHeal");

	APlayerPawnCharacter_C_AutoHeal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckGrenadeSlotAttach
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::CheckGrenadeSlotAttach(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckGrenadeSlotAttach");

	APlayerPawnCharacter_C_CheckGrenadeSlotAttach_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GrenadeSlotPicked
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::GrenadeSlotPicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.GrenadeSlotPicked");

	APlayerPawnCharacter_C_GrenadeSlotPicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckGrenadeSlot2Attach
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::CheckGrenadeSlot2Attach(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckGrenadeSlot2Attach");

	APlayerPawnCharacter_C_CheckGrenadeSlot2Attach_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GrenadeSlot2Picked
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::GrenadeSlot2Picked()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.GrenadeSlot2Picked");

	APlayerPawnCharacter_C_GrenadeSlot2Picked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.Voice
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::Voice(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.Voice");

	APlayerPawnCharacter_C_Voice_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HitSounds
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void APlayerPawnCharacter_C::HitSounds(const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.HitSounds");

	APlayerPawnCharacter_C_HitSounds_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryDropSingleAfterServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 ObjectToDrop                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::TryDropSingleAfterServer(class UGripMotionControllerComponent* Controller, class UObject* ObjectToDrop)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryDropSingleAfterServer");

	APlayerPawnCharacter_C_TryDropSingleAfterServer_Params params;
	params.Controller = Controller;
	params.ObjectToDrop = ObjectToDrop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryDropSingleAfterMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 ObjectToDrop                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::TryDropSingleAfterMulti(class UGripMotionControllerComponent* Controller, class UObject* ObjectToDrop)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryDropSingleAfterMulti");

	APlayerPawnCharacter_C_TryDropSingleAfterMulti_Params params;
	params.Controller = Controller;
	params.ObjectToDrop = ObjectToDrop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.Revive
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::Revive()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.Revive");

	APlayerPawnCharacter_C_Revive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReviveServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::ReviveServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReviveServer");

	APlayerPawnCharacter_C_ReviveServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReviveMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::ReviveMulti()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReviveMulti");

	APlayerPawnCharacter_C_ReviveMulti_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ShowRevivePOI
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::ShowRevivePOI()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.ShowRevivePOI");

	APlayerPawnCharacter_C_ShowRevivePOI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReviveCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::ReviveCheck(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReviveCheck");

	APlayerPawnCharacter_C_ReviveCheck_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SpawnMagazineToHand
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent* OtherHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPrimitiveComponent*     GrabSphere                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerPawnCharacter_C::SpawnMagazineToHand(class UGripMotionControllerComponent* Hand, class UGripMotionControllerComponent* OtherHand, class UPrimitiveComponent* GrabSphere)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.SpawnMagazineToHand");

	APlayerPawnCharacter_C_SpawnMagazineToHand_Params params;
	params.Hand = Hand;
	params.OtherHand = OtherHand;
	params.GrabSphere = GrabSphere;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SpawnMagazineToHandServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent* OtherHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPrimitiveComponent*     GrabSphere                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerPawnCharacter_C::SpawnMagazineToHandServer(class UGripMotionControllerComponent* Hand, class UGripMotionControllerComponent* OtherHand, class UPrimitiveComponent* GrabSphere)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.SpawnMagazineToHandServer");

	APlayerPawnCharacter_C_SpawnMagazineToHandServer_Params params;
	params.Hand = Hand;
	params.OtherHand = OtherHand;
	params.GrabSphere = GrabSphere;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SpawnMagazineToHandMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent* OtherHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerPawnCharacter_C::SpawnMagazineToHandMulti(class UGripMotionControllerComponent* Hand, class UGripMotionControllerComponent* OtherHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.SpawnMagazineToHandMulti");

	APlayerPawnCharacter_C_SpawnMagazineToHandMulti_Params params;
	params.Hand = Hand;
	params.OtherHand = OtherHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GrabSpawnedMagazineMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMagazineBase_C*         Magazine                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGripMotionControllerComponent* Calling_Hand                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent* OtherHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPrimitiveComponent*     GrabSphere                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerPawnCharacter_C::GrabSpawnedMagazineMulti(class AMagazineBase_C* Magazine, class UGripMotionControllerComponent* Calling_Hand, class UGripMotionControllerComponent* OtherHand, class UPrimitiveComponent* GrabSphere)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.GrabSpawnedMagazineMulti");

	APlayerPawnCharacter_C_GrabSpawnedMagazineMulti_Params params;
	params.Magazine = Magazine;
	params.Calling_Hand = Calling_Hand;
	params.OtherHand = OtherHand;
	params.GrabSphere = GrabSphere;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GrabSpawnedMagazineLocal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMagazineBase_C*         Magaizne                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGripMotionControllerComponent* Calling_Hand                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent* OtherHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPrimitiveComponent*     GrabSphere                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerPawnCharacter_C::GrabSpawnedMagazineLocal(class AMagazineBase_C* Magaizne, class UGripMotionControllerComponent* Calling_Hand, class UGripMotionControllerComponent* OtherHand, class UPrimitiveComponent* GrabSphere)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.GrabSpawnedMagazineLocal");

	APlayerPawnCharacter_C_GrabSpawnedMagazineLocal_Params params;
	params.Magaizne = Magaizne;
	params.Calling_Hand = Calling_Hand;
	params.OtherHand = OtherHand;
	params.GrabSphere = GrabSphere;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckAllyNames
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::CheckAllyNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckAllyNames");

	APlayerPawnCharacter_C_CheckAllyNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateAllyName
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::UpdateAllyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateAllyName");

	APlayerPawnCharacter_C_UpdateAllyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckAndShowHideAllyName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerPawnCharacter_C::CheckAndShowHideAllyName(class UGripMotionControllerComponent* Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckAndShowHideAllyName");

	APlayerPawnCharacter_C_CheckAndShowHideAllyName_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APlayerPawnCharacter_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	APlayerPawnCharacter_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__ForcePullCapsuleRight_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::BndEvt__ForcePullCapsuleRight_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__ForcePullCapsuleRight_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	APlayerPawnCharacter_C_BndEvt__ForcePullCapsuleRight_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ForcePullStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGrippableStaticMeshActorBase_C* ForcePullActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RightHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::ForcePullStart(class AGrippableStaticMeshActorBase_C* ForcePullActor, bool RightHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.ForcePullStart");

	APlayerPawnCharacter_C_ForcePullStart_Params params;
	params.ForcePullActor = ForcePullActor;
	params.RightHand = RightHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateForcePull
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::UpdateForcePull(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateForcePull");

	APlayerPawnCharacter_C_UpdateForcePull_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__ForcePullCapsuleLeft_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APlayerPawnCharacter_C::BndEvt__ForcePullCapsuleLeft_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__ForcePullCapsuleLeft_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	APlayerPawnCharacter_C_BndEvt__ForcePullCapsuleLeft_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__ForcePullCapsuleLeft_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::BndEvt__ForcePullCapsuleLeft_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__ForcePullCapsuleLeft_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	APlayerPawnCharacter_C_BndEvt__ForcePullCapsuleLeft_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__OutlineSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APlayerPawnCharacter_C::BndEvt__OutlineSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__OutlineSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	APlayerPawnCharacter_C_BndEvt__OutlineSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__OutlineSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::BndEvt__OutlineSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__OutlineSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	APlayerPawnCharacter_C_BndEvt__OutlineSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetHandState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGripEnum>         HandState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RightHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::SetHandState(TEnumAsByte<EGripEnum> HandState, bool RightHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetHandState");

	APlayerPawnCharacter_C_SetHandState_Params params;
	params.HandState = HandState;
	params.RightHand = RightHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ProjectileFired
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::ProjectileFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.ProjectileFired");

	APlayerPawnCharacter_C_ProjectileFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ProjectileHit
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::ProjectileHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.ProjectileHit");

	APlayerPawnCharacter_C_ProjectileHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ProjectileHitHead
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::ProjectileHitHead()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.ProjectileHitHead");

	APlayerPawnCharacter_C_ProjectileHitHead_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.Kill
// (Public, BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::Kill()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.Kill");

	APlayerPawnCharacter_C_Kill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.Hover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHoverEnum>        InteractType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerPawnCharacter_C::Hover(TEnumAsByte<EHoverEnum> InteractType, class USceneComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.Hover");

	APlayerPawnCharacter_C_Hover_Params params;
	params.InteractType = InteractType;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.Unhover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerPawnCharacter_C::Unhover(class UPrimitiveComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.Unhover");

	APlayerPawnCharacter_C_Unhover_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandleDamageMulti
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DamageCauserOriginalVelocity   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void APlayerPawnCharacter_C::HandleDamageMulti(float Damage, class AActor* DamageInstigator, const struct FVector& DamageCauserOriginalVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandleDamageMulti");

	APlayerPawnCharacter_C_HandleDamageMulti_Params params;
	params.Damage = Damage;
	params.DamageInstigator = DamageInstigator;
	params.DamageCauserOriginalVelocity = DamageCauserOriginalVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandleDamageLocal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DamageCauserOriginalVelocity   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void APlayerPawnCharacter_C::HandleDamageLocal(float Damage, class AActor* DamageInstigator, const struct FVector& DamageCauserOriginalVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandleDamageLocal");

	APlayerPawnCharacter_C_HandleDamageLocal_Params params;
	params.Damage = Damage;
	params.DamageInstigator = DamageInstigator;
	params.DamageCauserOriginalVelocity = DamageCauserOriginalVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateRevivePoi
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::UpdateRevivePoi()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateRevivePoi");

	APlayerPawnCharacter_C_UpdateRevivePoi_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GrabWeaponRight
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  WeaponActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::GrabWeaponRight(class AActor* WeaponActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.GrabWeaponRight");

	APlayerPawnCharacter_C_GrabWeaponRight_Params params;
	params.WeaponActor = WeaponActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.StopHeartbeatSFX
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::StopHeartbeatSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.StopHeartbeatSFX");

	APlayerPawnCharacter_C_StopHeartbeatSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateHeartbeatSFX
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::UpdateHeartbeatSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateHeartbeatSFX");

	APlayerPawnCharacter_C_UpdateHeartbeatSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckOutline
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::CheckOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckOutline");

	APlayerPawnCharacter_C_CheckOutline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckAndOutlineOverlappingActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::CheckAndOutlineOverlappingActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.CheckAndOutlineOverlappingActor");

	APlayerPawnCharacter_C_CheckAndOutlineOverlappingActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OnGrabItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent* OtherHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 GripedItem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::OnGrabItem(class UGripMotionControllerComponent* Hand, class UGripMotionControllerComponent* OtherHand, class UObject* GripedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.OnGrabItem");

	APlayerPawnCharacter_C_OnGrabItem_Params params;
	params.Hand = Hand;
	params.OtherHand = OtherHand;
	params.GripedItem = GripedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetEquipmentServer
// (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerEquipmentStruct  PlayerEquipmentStruct          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void APlayerPawnCharacter_C::GetEquipmentServer(const struct FPlayerEquipmentStruct& PlayerEquipmentStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.GetEquipmentServer");

	APlayerPawnCharacter_C_GetEquipmentServer_Params params;
	params.PlayerEquipmentStruct = PlayerEquipmentStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetHandPoseServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EHandPose>         Pose                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::SetHandPoseServer(EControllerHand Hand, TEnumAsByte<EHandPose> Pose)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetHandPoseServer");

	APlayerPawnCharacter_C_SetHandPoseServer_Params params;
	params.Hand = Hand;
	params.Pose = Pose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetHandPoseMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EHandPose>         Pose                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::SetHandPoseMulti(EControllerHand Hand, TEnumAsByte<EHandPose> Pose)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetHandPoseMulti");

	APlayerPawnCharacter_C_SetHandPoseMulti_Params params;
	params.Hand = Hand;
	params.Pose = Pose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetHandPose
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EHandPose>         Pose                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::SetHandPose(EControllerHand Hand, TEnumAsByte<EHandPose> Pose)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetHandPose");

	APlayerPawnCharacter_C_SetHandPose_Params params;
	params.Hand = Hand;
	params.Pose = Pose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryGrabMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 ObjectToGrab                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSlotGrip                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform_NetQuantize  GripTransform                  (BlueprintVisible, BlueprintReadOnly, Parm)
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            GripSecondaryTag               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   GripBoneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::TryGrabMulti(class UObject* ObjectToGrab, bool IsSlotGrip, const struct FTransform_NetQuantize& GripTransform, EControllerHand Hand, const struct FGameplayTag& GripSecondaryTag, const struct FName& GripBoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryGrabMulti");

	APlayerPawnCharacter_C_TryGrabMulti_Params params;
	params.ObjectToGrab = ObjectToGrab;
	params.IsSlotGrip = IsSlotGrip;
	params.GripTransform = GripTransform;
	params.Hand = Hand;
	params.GripSecondaryTag = GripSecondaryTag;
	params.GripBoneName = GripBoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryToGrabObjectAfterMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 ObjectToTryToGrab              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGripMotionControllerComponent* Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent* OtherHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           IsSlotGrip                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::TryToGrabObjectAfterMulti(class UObject* ObjectToTryToGrab, class UGripMotionControllerComponent* Hand, class UGripMotionControllerComponent* OtherHand, bool IsSlotGrip)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.TryToGrabObjectAfterMulti");

	APlayerPawnCharacter_C_TryToGrabObjectAfterMulti_Params params;
	params.ObjectToTryToGrab = ObjectToTryToGrab;
	params.Hand = Hand;
	params.OtherHand = OtherHand;
	params.IsSlotGrip = IsSlotGrip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.DropOrUseSecondaryAttachmentAfterMulti
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GripMotionController           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerPawnCharacter_C::DropOrUseSecondaryAttachmentAfterMulti(class UGripMotionControllerComponent* GripMotionController)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.DropOrUseSecondaryAttachmentAfterMulti");

	APlayerPawnCharacter_C_DropOrUseSecondaryAttachmentAfterMulti_Params params;
	params.GripMotionController = GripMotionController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.DropOrUseSecondaryAttachmentAfterServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GripMotionController           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerPawnCharacter_C::DropOrUseSecondaryAttachmentAfterServer(class UGripMotionControllerComponent* GripMotionController)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.DropOrUseSecondaryAttachmentAfterServer");

	APlayerPawnCharacter_C_DropOrUseSecondaryAttachmentAfterServer_Params params;
	params.GripMotionController = GripMotionController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.AttachWeaponToSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeaponBase_C*           Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerPawnCharacter_C::AttachWeaponToSlot(class AWeaponBase_C* Weapon, class UPrimitiveComponent* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.AttachWeaponToSlot");

	APlayerPawnCharacter_C_AttachWeaponToSlot_Params params;
	params.Weapon = Weapon;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetSecodarySlotAttachedServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeaponBase_C*           SecondarySlotAttached          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::SetSecodarySlotAttachedServer(class AWeaponBase_C* SecondarySlotAttached)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetSecodarySlotAttachedServer");

	APlayerPawnCharacter_C_SetSecodarySlotAttachedServer_Params params;
	params.SecondarySlotAttached = SecondarySlotAttached;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetPrimarySlotAttachedServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeaponBase_C*           PrimarySlotAttached            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::SetPrimarySlotAttachedServer(class AWeaponBase_C* PrimarySlotAttached)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetPrimarySlotAttachedServer");

	APlayerPawnCharacter_C_SetPrimarySlotAttachedServer_Params params;
	params.PrimarySlotAttached = PrimarySlotAttached;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetGrenadeSlotAttachedServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGrenadeBase_C*          GrenadeSlotAttached            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::SetGrenadeSlotAttachedServer(class AGrenadeBase_C* GrenadeSlotAttached)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetGrenadeSlotAttachedServer");

	APlayerPawnCharacter_C_SetGrenadeSlotAttachedServer_Params params;
	params.GrenadeSlotAttached = GrenadeSlotAttached;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetGreandeSlot2AttachedServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGrenadeBase_C*          GrenadeSlotAttached            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::SetGreandeSlot2AttachedServer(class AGrenadeBase_C* GrenadeSlotAttached)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetGreandeSlot2AttachedServer");

	APlayerPawnCharacter_C_SetGreandeSlot2AttachedServer_Params params;
	params.GrenadeSlotAttached = GrenadeSlotAttached;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OnMenuClose
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::OnMenuClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.OnMenuClose");

	APlayerPawnCharacter_C_OnMenuClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.DropLeft
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::DropLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.DropLeft");

	APlayerPawnCharacter_C_DropLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.DropRight
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::DropRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.DropRight");

	APlayerPawnCharacter_C_DropRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.DropWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::DropWeapon(EControllerHand Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.DropWeapon");

	APlayerPawnCharacter_C_DropWeapon_Params params;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetupOnPossession
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::SetupOnPossession()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetupOnPossession");

	APlayerPawnCharacter_C_SetupOnPossession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.Trigger Grip Or Drop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** Calling_Hand                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent** OtherHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          IsGrip                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    GrabSphere                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerPawnCharacter_C::Trigger_Grip_Or_Drop(class UGripMotionControllerComponent** Calling_Hand, class UGripMotionControllerComponent** OtherHand, bool* IsGrip, class UPrimitiveComponent** GrabSphere)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.Trigger Grip Or Drop");

	APlayerPawnCharacter_C_Trigger_Grip_Or_Drop_Params params;
	params.Calling_Hand = Calling_Hand;
	params.OtherHand = OtherHand;
	params.IsGrip = IsGrip;
	params.GrabSphere = GrabSphere;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandleGripPress_Oculus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* CallingMotionController        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent* OtherController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPrimitiveComponent*     GrabSphere                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerPawnCharacter_C::HandleGripPress_Oculus(class UGripMotionControllerComponent* CallingMotionController, class UGripMotionControllerComponent* OtherController, class UPrimitiveComponent* GrabSphere)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandleGripPress_Oculus");

	APlayerPawnCharacter_C_HandleGripPress_Oculus_Params params;
	params.CallingMotionController = CallingMotionController;
	params.OtherController = OtherController;
	params.GrabSphere = GrabSphere;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandleGripRelease_Oculus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* CallingMotionController        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent* OtherController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPrimitiveComponent*     GrabSphere                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerPawnCharacter_C::HandleGripRelease_Oculus(class UGripMotionControllerComponent* CallingMotionController, class UGripMotionControllerComponent* OtherController, class UPrimitiveComponent* GrabSphere)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandleGripRelease_Oculus");

	APlayerPawnCharacter_C_HandleGripRelease_Oculus_Params params;
	params.CallingMotionController = CallingMotionController;
	params.OtherController = OtherController;
	params.GrabSphere = GrabSphere;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandleTriggerPress_Oculus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* CallingMotionController        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent* OtherController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPrimitiveComponent*     GrabSphere                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerPawnCharacter_C::HandleTriggerPress_Oculus(class UGripMotionControllerComponent* CallingMotionController, class UGripMotionControllerComponent* OtherController, class UPrimitiveComponent* GrabSphere)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandleTriggerPress_Oculus");

	APlayerPawnCharacter_C_HandleTriggerPress_Oculus_Params params;
	params.CallingMotionController = CallingMotionController;
	params.OtherController = OtherController;
	params.GrabSphere = GrabSphere;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandleTriggerRelease_Oculus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* CallingMotionController        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent* OtherController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPrimitiveComponent*     GrabSphere                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerPawnCharacter_C::HandleTriggerRelease_Oculus(class UGripMotionControllerComponent* CallingMotionController, class UGripMotionControllerComponent* OtherController, class UPrimitiveComponent* GrabSphere)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.HandleTriggerRelease_Oculus");

	APlayerPawnCharacter_C_HandleTriggerRelease_Oculus_Params params;
	params.CallingMotionController = CallingMotionController;
	params.OtherController = OtherController;
	params.GrabSphere = GrabSphere;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CallCorrectDropSingleEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent** Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation* Grip                           (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawnCharacter_C::CallCorrectDropSingleEvent(class UGripMotionControllerComponent** Hand, struct FBPActorGripInformation* Grip)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.CallCorrectDropSingleEvent");

	APlayerPawnCharacter_C_CallCorrectDropSingleEvent_Params params;
	params.Hand = Hand;
	params.Grip = Grip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.CallCorrectGrabEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                ObjectToGrip                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EControllerHand*               Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsSlotGrip                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             GripTransform                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FGameplayTag*           GripSecondaryTag               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName*                  OptionalBoneName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsSecondaryGrip                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::CallCorrectGrabEvent(class UObject** ObjectToGrip, EControllerHand* Hand, bool* IsSlotGrip, struct FTransform* GripTransform, struct FGameplayTag* GripSecondaryTag, struct FName* OptionalBoneName, bool* IsSecondaryGrip)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.CallCorrectGrabEvent");

	APlayerPawnCharacter_C_CallCorrectGrabEvent_Params params;
	params.ObjectToGrip = ObjectToGrip;
	params.Hand = Hand;
	params.IsSlotGrip = IsSlotGrip;
	params.GripTransform = GripTransform;
	params.GripSecondaryTag = GripSecondaryTag;
	params.OptionalBoneName = OptionalBoneName;
	params.IsSecondaryGrip = IsSecondaryGrip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetAttachmentReleaseButtonPressedServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AttachmentReleaseButtonPressed (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::SetAttachmentReleaseButtonPressedServer(bool AttachmentReleaseButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetAttachmentReleaseButtonPressedServer");

	APlayerPawnCharacter_C_SetAttachmentReleaseButtonPressedServer_Params params;
	params.AttachmentReleaseButtonPressed = AttachmentReleaseButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateMCTriggerValuesServer
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MC_L_TriggerValue              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MC_R_TriggerValue              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::UpdateMCTriggerValuesServer(float MC_L_TriggerValue, float MC_R_TriggerValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.UpdateMCTriggerValuesServer");

	APlayerPawnCharacter_C_UpdateMCTriggerValuesServer_Params params;
	params.MC_L_TriggerValue = MC_L_TriggerValue;
	params.MC_R_TriggerValue = MC_R_TriggerValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetPlayerRankServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerRank                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::SetPlayerRankServer(int PlayerRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetPlayerRankServer");

	APlayerPawnCharacter_C_SetPlayerRankServer_Params params;
	params.PlayerRank = PlayerRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.StopLowHealthSoundEffect
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::StopLowHealthSoundEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.StopLowHealthSoundEffect");

	APlayerPawnCharacter_C_StopLowHealthSoundEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.ReceiveEndPlay");

	APlayerPawnCharacter_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OpenClosePauseMenu
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::OpenClosePauseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.OpenClosePauseMenu");

	APlayerPawnCharacter_C_OpenClosePauseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.OpenCloseMultiplayerMenu
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::OpenCloseMultiplayerMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.OpenCloseMultiplayerMenu");

	APlayerPawnCharacter_C_OpenCloseMultiplayerMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.HMDRecenter
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::HMDRecenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.HMDRecenter");

	APlayerPawnCharacter_C_HMDRecenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetPlayerHeightServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PlayerHeight                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::SetPlayerHeightServer(float PlayerHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetPlayerHeightServer");

	APlayerPawnCharacter_C_SetPlayerHeightServer_Params params;
	params.PlayerHeight = PlayerHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.GripOrDropAllTags
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* Calling_Hand                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent* OtherHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           IsGrip                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     GrabSphere                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APlayerPawnCharacter_C::GripOrDropAllTags(class UGripMotionControllerComponent* Calling_Hand, class UGripMotionControllerComponent* OtherHand, bool IsGrip, class UPrimitiveComponent* GrabSphere)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.GripOrDropAllTags");

	APlayerPawnCharacter_C_GripOrDropAllTags_Params params;
	params.Calling_Hand = Calling_Hand;
	params.OtherHand = OtherHand;
	params.IsGrip = IsGrip;
	params.GrabSphere = GrabSphere;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetSecondaryGripAsPrimaryServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeaponBase_C*           Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::SetSecondaryGripAsPrimaryServer(class AWeaponBase_C* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.SetSecondaryGripAsPrimaryServer");

	APlayerPawnCharacter_C_SetSecondaryGripAsPrimaryServer_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.LevelDataInitialized
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALevelData_C*            LevelData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::LevelDataInitialized(class ALevelData_C* LevelData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.LevelDataInitialized");

	APlayerPawnCharacter_C_LevelDataInitialized_Params params;
	params.LevelData = LevelData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__EarLeftCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APlayerPawnCharacter_C::BndEvt__EarLeftCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__EarLeftCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	APlayerPawnCharacter_C_BndEvt__EarLeftCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__EarRightCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APlayerPawnCharacter_C::BndEvt__EarRightCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__EarRightCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature");

	APlayerPawnCharacter_C_BndEvt__EarRightCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.StartVoiceChat
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::StartVoiceChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.StartVoiceChat");

	APlayerPawnCharacter_C_StartVoiceChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.StopVoiceChat
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::StopVoiceChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.StopVoiceChat");

	APlayerPawnCharacter_C_StopVoiceChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__EarLeftCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::BndEvt__EarLeftCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__EarLeftCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	APlayerPawnCharacter_C_BndEvt__EarLeftCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__EarRightCollision_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::BndEvt__EarRightCollision_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.BndEvt__EarRightCollision_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature");

	APlayerPawnCharacter_C_BndEvt__EarRightCollision_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.TriggerRightVoiceChatEvent
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::TriggerRightVoiceChatEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.TriggerRightVoiceChatEvent");

	APlayerPawnCharacter_C_TriggerRightVoiceChatEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.TriggerLeftVoiceChatEvent
// (BlueprintCallable, BlueprintEvent)

void APlayerPawnCharacter_C::TriggerLeftVoiceChatEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.TriggerLeftVoiceChatEvent");

	APlayerPawnCharacter_C_TriggerLeftVoiceChatEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.ExecuteUbergraph_PlayerPawnCharacter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::ExecuteUbergraph_PlayerPawnCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.ExecuteUbergraph_PlayerPawnCharacter");

	APlayerPawnCharacter_C_ExecuteUbergraph_PlayerPawnCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.PlayerDamaged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DamageCauserOriginalVelocity   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void APlayerPawnCharacter_C::PlayerDamaged__DelegateSignature(float Damage, class AActor* DamageInstigator, const struct FVector& DamageCauserOriginalVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.PlayerDamaged__DelegateSignature");

	APlayerPawnCharacter_C_PlayerDamaged__DelegateSignature_Params params;
	params.Damage = Damage;
	params.DamageInstigator = DamageInstigator;
	params.DamageCauserOriginalVelocity = DamageCauserOriginalVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawnCharacter.PlayerPawnCharacter_C.Died__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerPawnCharacter_C*  PlayerPawnCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawnCharacter_C::Died__DelegateSignature(class APlayerPawnCharacter_C* PlayerPawnCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawnCharacter.PlayerPawnCharacter_C.Died__DelegateSignature");

	APlayerPawnCharacter_C_Died__DelegateSignature_Params params;
	params.PlayerPawnCharacter = PlayerPawnCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
