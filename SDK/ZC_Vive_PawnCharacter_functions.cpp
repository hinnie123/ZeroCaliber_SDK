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

// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CheckSteamControllerType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsKnuckles                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::CheckSteamControllerType(bool* IsKnuckles)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.CheckSteamControllerType");

	AVive_PawnCharacter_C_CheckSteamControllerType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsKnuckles != nullptr)
		*IsKnuckles = params.IsKnuckles;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InitTeleportControllers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            ValidPlayerState               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::InitTeleportControllers(class APlayerState* ValidPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.InitTeleportControllers");

	AVive_PawnCharacter_C_InitTeleportControllers_Params params;
	params.ValidPlayerState = ValidPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ShouldSocketGrip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBPActorGripInformation Grip                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ShouldSocket                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         SocketParent                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FTransform_NetQuantize  RelativeTransform              (Parm, OutParm)
// struct FName                   OptionalSocketName             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::ShouldSocketGrip(struct FBPActorGripInformation* Grip, bool* ShouldSocket, class USceneComponent** SocketParent, struct FTransform_NetQuantize* RelativeTransform, struct FName* OptionalSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.ShouldSocketGrip");

	AVive_PawnCharacter_C_ShouldSocketGrip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Grip != nullptr)
		*Grip = params.Grip;
	if (ShouldSocket != nullptr)
		*ShouldSocket = params.ShouldSocket;
	if (SocketParent != nullptr)
		*SocketParent = params.SocketParent;
	if (RelativeTransform != nullptr)
		*RelativeTransform = params.RelativeTransform;
	if (OptionalSocketName != nullptr)
		*OptionalSocketName = params.OptionalSocketName;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.RepositionHandElements
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsRightHand                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              NewTransformForProcComps       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AVive_PawnCharacter_C::RepositionHandElements(bool IsRightHand, const struct FTransform& NewTransformForProcComps)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.RepositionHandElements");

	AVive_PawnCharacter_C_RepositionHandElements_Params params;
	params.IsRightHand = IsRightHand;
	params.NewTransformForProcComps = NewTransformForProcComps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.OnRep_RightControllerOffset
// (BlueprintCallable, BlueprintEvent)

void AVive_PawnCharacter_C::OnRep_RightControllerOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.OnRep_RightControllerOffset");

	AVive_PawnCharacter_C_OnRep_RightControllerOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.OnRep_LeftControllerOffset
// (BlueprintCallable, BlueprintEvent)

void AVive_PawnCharacter_C::OnRep_LeftControllerOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.OnRep_LeftControllerOffset");

	AVive_PawnCharacter_C_OnRep_LeftControllerOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.LoadControllerModels
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Succeeded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::LoadControllerModels(bool* Succeeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.LoadControllerModels");

	AVive_PawnCharacter_C_LoadControllerModels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succeeded != nullptr)
		*Succeeded = params.Succeeded;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.SetGripComponents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     LeftHand                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPrimitiveComponent*     RightHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AVive_PawnCharacter_C::SetGripComponents(class UPrimitiveComponent* LeftHand, class UPrimitiveComponent* RightHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.SetGripComponents");

	AVive_PawnCharacter_C_SetGripComponents_Params params;
	params.LeftHand = LeftHand;
	params.RightHand = RightHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.GetCorrectRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                NewParam                       (Parm, OutParm, IsPlainOldData)

void AVive_PawnCharacter_C::GetCorrectRotation(struct FRotator* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.GetCorrectRotation");

	AVive_PawnCharacter_C_GetCorrectRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CanAttemptSecondaryGrabOnObject
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 ObjectToCheck                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanAttemptSecondaryGrab        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// ESecondaryGripType             SecondaryGripType              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::CanAttemptSecondaryGrabOnObject(class UObject* ObjectToCheck, bool* CanAttemptSecondaryGrab, ESecondaryGripType* SecondaryGripType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.CanAttemptSecondaryGrabOnObject");

	AVive_PawnCharacter_C_CanAttemptSecondaryGrabOnObject_Params params;
	params.ObjectToCheck = ObjectToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanAttemptSecondaryGrab != nullptr)
		*CanAttemptSecondaryGrab = params.CanAttemptSecondaryGrab;
	if (SecondaryGripType != nullptr)
		*SecondaryGripType = params.SecondaryGripType;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CanAttemptGrabOnObject
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 ObjectToCheck                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanAttemptGrab                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::CanAttemptGrabOnObject(class UObject* ObjectToCheck, bool* CanAttemptGrab)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.CanAttemptGrabOnObject");

	AVive_PawnCharacter_C_CanAttemptGrabOnObject_Params params;
	params.ObjectToCheck = ObjectToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanAttemptGrab != nullptr)
		*CanAttemptGrab = params.CanAttemptGrab;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CanSecondaryGripObject
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UGripMotionControllerComponent* Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent* OtherHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 ObjectToTryToGrab              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            GripSecodaryTag                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           HadSlot                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESecondaryGripType             SecGripType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanSecondaryGrip               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::CanSecondaryGripObject(class UGripMotionControllerComponent* Hand, class UGripMotionControllerComponent* OtherHand, class UObject* ObjectToTryToGrab, const struct FGameplayTag& GripSecodaryTag, bool HadSlot, ESecondaryGripType SecGripType, bool* CanSecondaryGrip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.CanSecondaryGripObject");

	AVive_PawnCharacter_C_CanSecondaryGripObject_Params params;
	params.Hand = Hand;
	params.OtherHand = OtherHand;
	params.ObjectToTryToGrab = ObjectToTryToGrab;
	params.GripSecodaryTag = GripSecodaryTag;
	params.HadSlot = HadSlot;
	params.SecGripType = SecGripType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanSecondaryGrip != nullptr)
		*CanSecondaryGrip = params.CanSecondaryGrip;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.GetBoneTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              BoneTransform                  (Parm, OutParm, IsPlainOldData)

void AVive_PawnCharacter_C::GetBoneTransform(class UObject* Object, const struct FName& BoneName, struct FTransform* BoneTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.GetBoneTransform");

	AVive_PawnCharacter_C_GetBoneTransform_Params params;
	params.Object = Object;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BoneTransform != nullptr)
		*BoneTransform = params.BoneTransform;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CheckGripPriority
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 ObjectToCheck                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  PrioToCheckAgainst             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CheckAgainstPrior              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HadHigherPriority              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  NewGripPrio                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::CheckGripPriority(class UObject* ObjectToCheck, unsigned char PrioToCheckAgainst, bool CheckAgainstPrior, bool* HadHigherPriority, unsigned char* NewGripPrio)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.CheckGripPriority");

	AVive_PawnCharacter_C_CheckGripPriority_Params params;
	params.ObjectToCheck = ObjectToCheck;
	params.PrioToCheckAgainst = PrioToCheckAgainst;
	params.CheckAgainstPrior = CheckAgainstPrior;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HadHigherPriority != nullptr)
		*HadHigherPriority = params.HadHigherPriority;
	if (NewGripPrio != nullptr)
		*NewGripPrio = params.NewGripPrio;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.SelectObjectFromHitArray
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FHitResult>      Hits                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bShouldGrip                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ObjectImplementsInterface      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ObjectToGrip                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              WorldTransform                 (Parm, OutParm, IsPlainOldData)
// class UPrimitiveComponent*     FirstPrimitiveHit              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ImpactPoint                    (Parm, OutParm, IsPlainOldData)

void AVive_PawnCharacter_C::SelectObjectFromHitArray(TArray<struct FHitResult>* Hits, bool* bShouldGrip, bool* ObjectImplementsInterface, class UObject** ObjectToGrip, struct FTransform* WorldTransform, class UPrimitiveComponent** FirstPrimitiveHit, struct FName* BoneName, struct FVector* ImpactPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.SelectObjectFromHitArray");

	AVive_PawnCharacter_C_SelectObjectFromHitArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hits != nullptr)
		*Hits = params.Hits;
	if (bShouldGrip != nullptr)
		*bShouldGrip = params.bShouldGrip;
	if (ObjectImplementsInterface != nullptr)
		*ObjectImplementsInterface = params.ObjectImplementsInterface;
	if (ObjectToGrip != nullptr)
		*ObjectToGrip = params.ObjectToGrip;
	if (WorldTransform != nullptr)
		*WorldTransform = params.WorldTransform;
	if (FirstPrimitiveHit != nullptr)
		*FirstPrimitiveHit = params.FirstPrimitiveHit;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (ImpactPoint != nullptr)
		*ImpactPoint = params.ImpactPoint;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.DropOrUseSecondaryAttachment
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* Calling_Motion_Controller      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent* Other_Controller               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTagContainer   GameplayTags                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           DroppedOrUsedSecondary         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HadSecondary                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::DropOrUseSecondaryAttachment(class UGripMotionControllerComponent* Calling_Motion_Controller, class UGripMotionControllerComponent* Other_Controller, const struct FGameplayTagContainer& GameplayTags, bool* DroppedOrUsedSecondary, bool* HadSecondary)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.DropOrUseSecondaryAttachment");

	AVive_PawnCharacter_C_DropOrUseSecondaryAttachment_Params params;
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


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ValidateGameplayTagContainer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTag            BaseTag                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            DefaultTag                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   GameplayTags                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           MatchedOrDefault               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::ValidateGameplayTagContainer(const struct FGameplayTag& BaseTag, class UObject* Object, const struct FGameplayTag& DefaultTag, const struct FGameplayTagContainer& GameplayTags, bool* MatchedOrDefault)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.ValidateGameplayTagContainer");

	AVive_PawnCharacter_C_ValidateGameplayTagContainer_Params params;
	params.BaseTag = BaseTag;
	params.Object = Object;
	params.DefaultTag = DefaultTag;
	params.GameplayTags = GameplayTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MatchedOrDefault != nullptr)
		*MatchedOrDefault = params.MatchedOrDefault;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.GripDropOrUseObjectClean
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* CallingMotionController        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent* OtherController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           CanCheckClimb                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     GrabSphere                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTagContainer   RelevantGameplayTags           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           PerformedAction                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::GripDropOrUseObjectClean(class UGripMotionControllerComponent* CallingMotionController, class UGripMotionControllerComponent* OtherController, bool CanCheckClimb, class UPrimitiveComponent* GrabSphere, const struct FGameplayTagContainer& RelevantGameplayTags, bool* PerformedAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.GripDropOrUseObjectClean");

	AVive_PawnCharacter_C_GripDropOrUseObjectClean_Params params;
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


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ClearMovementVelocities
// (Public, BlueprintCallable, BlueprintEvent)

void AVive_PawnCharacter_C::ClearMovementVelocities()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.ClearMovementVelocities");

	AVive_PawnCharacter_C_ClearMovementVelocities_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.TryToSecondaryGripObject
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent* OtherHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 ObjectToTryToGrab              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            GripSecondaryTag               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ObjectImplementsInterface      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              RelativeSecondaryTransform     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           bHadSlot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SecondaryGripped               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::TryToSecondaryGripObject(class UGripMotionControllerComponent* Hand, class UGripMotionControllerComponent* OtherHand, class UObject* ObjectToTryToGrab, const struct FGameplayTag& GripSecondaryTag, bool ObjectImplementsInterface, const struct FTransform& RelativeSecondaryTransform, bool bHadSlot, bool* SecondaryGripped)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.TryToSecondaryGripObject");

	AVive_PawnCharacter_C_TryToSecondaryGripObject_Params params;
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


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ShouldGripComponent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     ComponentToCheck               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// unsigned char                  GripPrioToCheckAgainst         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCheckAgainstPrior             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldGrip                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ObjectToGrip                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ObjectImplementsInterface      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ObjectsWorldTransform          (Parm, OutParm, IsPlainOldData)
// unsigned char                  GripPrio                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::ShouldGripComponent(class UPrimitiveComponent* ComponentToCheck, unsigned char GripPrioToCheckAgainst, bool bCheckAgainstPrior, const struct FName& BoneName, bool* ShouldGrip, class UObject** ObjectToGrip, bool* ObjectImplementsInterface, struct FTransform* ObjectsWorldTransform, unsigned char* GripPrio)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.ShouldGripComponent");

	AVive_PawnCharacter_C_ShouldGripComponent_Params params;
	params.ComponentToCheck = ComponentToCheck;
	params.GripPrioToCheckAgainst = GripPrioToCheckAgainst;
	params.bCheckAgainstPrior = bCheckAgainstPrior;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldGrip != nullptr)
		*ShouldGrip = params.ShouldGrip;
	if (ObjectToGrip != nullptr)
		*ObjectToGrip = params.ObjectToGrip;
	if (ObjectImplementsInterface != nullptr)
		*ObjectImplementsInterface = params.ObjectImplementsInterface;
	if (ObjectsWorldTransform != nullptr)
		*ObjectsWorldTransform = params.ObjectsWorldTransform;
	if (GripPrio != nullptr)
		*GripPrio = params.GripPrio;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.SetVehicleMode
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInVehicleMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsVR                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::SetVehicleMode(bool IsInVehicleMode, bool* IsVR)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.SetVehicleMode");

	AVive_PawnCharacter_C_SetVehicleMode_Params params;
	params.IsInVehicleMode = IsInVehicleMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsVR != nullptr)
		*IsVR = params.IsVR;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.IsALocalGrip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGripMovementReplicationSettings GripRepType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLocal                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::IsALocalGrip(EGripMovementReplicationSettings GripRepType, bool* IsLocal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.IsALocalGrip");

	AVive_PawnCharacter_C_IsALocalGrip_Params params;
	params.GripRepType = GripRepType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLocal != nullptr)
		*IsLocal = params.IsLocal;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.HasValidGripCollision
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::HasValidGripCollision(class UPrimitiveComponent* Component, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.HasValidGripCollision");

	AVive_PawnCharacter_C_HasValidGripCollision_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CanObjectBeClimbed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     ObjectToCheck                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           CanClimb                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::CanObjectBeClimbed(class UPrimitiveComponent* ObjectToCheck, bool* CanClimb)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.CanObjectBeClimbed");

	AVive_PawnCharacter_C_CanObjectBeClimbed_Params params;
	params.ObjectToCheck = ObjectToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanClimb != nullptr)
		*CanClimb = params.CanClimb;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.GetCorrectPrimarySlotPrefix
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 ObjectToCheckForTag            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketPrefix                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::GetCorrectPrimarySlotPrefix(class UObject* ObjectToCheckForTag, EControllerHand Hand, struct FName* SocketPrefix)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.GetCorrectPrimarySlotPrefix");

	AVive_PawnCharacter_C_GetCorrectPrimarySlotPrefix_Params params;
	params.ObjectToCheckForTag = ObjectToCheckForTag;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SocketPrefix != nullptr)
		*SocketPrefix = params.SocketPrefix;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.OnDestroy
// (Public, BlueprintCallable, BlueprintEvent)

void AVive_PawnCharacter_C::OnDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.OnDestroy");

	AVive_PawnCharacter_C_OnDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.DropOrUseItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInfo                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   GameplayTags                   (BlueprintVisible, BlueprintReadOnly, Parm)

void AVive_PawnCharacter_C::DropOrUseItem(class UGripMotionControllerComponent* Hand, const struct FBPActorGripInformation& GripInfo, const struct FGameplayTagContainer& GameplayTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.DropOrUseItem");

	AVive_PawnCharacter_C_DropOrUseItem_Params params;
	params.Hand = Hand;
	params.GripInfo = GripInfo;
	params.GameplayTags = GameplayTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.DropOrUseItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTagContainer   GameplayTags                   (BlueprintVisible, BlueprintReadOnly, Parm)

void AVive_PawnCharacter_C::DropOrUseItems(class UGripMotionControllerComponent* Hand, const struct FGameplayTagContainer& GameplayTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.DropOrUseItems");

	AVive_PawnCharacter_C_DropOrUseItems_Params params;
	params.Hand = Hand;
	params.GameplayTags = GameplayTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CycleMovementModes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLeft                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::CycleMovementModes(bool IsLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.CycleMovementModes");

	AVive_PawnCharacter_C_CycleMovementModes_Params params;
	params.IsLeft = IsLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ValidateGameplayTag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTag            BaseTag                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTag            GameplayTag                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            DefaultTag                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           MatchedOrDefault               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::ValidateGameplayTag(const struct FGameplayTag& BaseTag, const struct FGameplayTag& GameplayTag, class UObject* Object, const struct FGameplayTag& DefaultTag, bool* MatchedOrDefault)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.ValidateGameplayTag");

	AVive_PawnCharacter_C_ValidateGameplayTag_Params params;
	params.BaseTag = BaseTag;
	params.GameplayTag = GameplayTag;
	params.Object = Object;
	params.DefaultTag = DefaultTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MatchedOrDefault != nullptr)
		*MatchedOrDefault = params.MatchedOrDefault;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.GetCharacterRotatedPosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 OriginalLocation               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                DeltaRotation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 PivotPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                OutRotation                    (Parm, OutParm, IsPlainOldData)
// struct FVector                 OutNewPosition                 (Parm, OutParm, IsPlainOldData)

void AVive_PawnCharacter_C::GetCharacterRotatedPosition(const struct FVector& OriginalLocation, const struct FRotator& DeltaRotation, const struct FVector& PivotPoint, struct FRotator* OutRotation, struct FVector* OutNewPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.GetCharacterRotatedPosition");

	AVive_PawnCharacter_C_GetCharacterRotatedPosition_Params params;
	params.OriginalLocation = OriginalLocation;
	params.DeltaRotation = DeltaRotation;
	params.PivotPoint = PivotPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
	if (OutNewPosition != nullptr)
		*OutNewPosition = params.OutNewPosition;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.UpdateTeleportRotations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AVive_PawnCharacter_C::UpdateTeleportRotations()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.UpdateTeleportRotations");

	AVive_PawnCharacter_C_UpdateTeleportRotations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CalcPadRotationAndMagnitude
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          YAxis                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          XAxis                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OptMagnitudeScaler             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OptionalDeadzone               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)
// float                          Magnitude                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           WasValid                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::CalcPadRotationAndMagnitude(float YAxis, float XAxis, float OptMagnitudeScaler, float OptionalDeadzone, struct FRotator* Rotation, float* Magnitude, bool* WasValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.CalcPadRotationAndMagnitude");

	AVive_PawnCharacter_C_CalcPadRotationAndMagnitude_Params params;
	params.YAxis = YAxis;
	params.XAxis = XAxis;
	params.OptMagnitudeScaler = OptMagnitudeScaler;
	params.OptionalDeadzone = OptionalDeadzone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rotation != nullptr)
		*Rotation = params.Rotation;
	if (Magnitude != nullptr)
		*Magnitude = params.Magnitude;
	if (WasValid != nullptr)
		*WasValid = params.WasValid;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.HandleSlidingMovement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMovementMode>     MovementMode                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGripMotionControllerComponent* CallingHand                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bThumbPadInfluencesDirection   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::HandleSlidingMovement(TEnumAsByte<EMovementMode> MovementMode, class UGripMotionControllerComponent* CallingHand, bool bThumbPadInfluencesDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.HandleSlidingMovement");

	AVive_PawnCharacter_C_HandleSlidingMovement_Params params;
	params.MovementMode = MovementMode;
	params.CallingHand = CallingHand;
	params.bThumbPadInfluencesDirection = bThumbPadInfluencesDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.SetTeleporterActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::SetTeleporterActive(EControllerHand Hand, bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.SetTeleporterActive");

	AVive_PawnCharacter_C_SetTeleporterActive_Params params;
	params.Hand = Hand;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.SwitchOutOfBodyCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SwitchToOutOfBody              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::SwitchOutOfBodyCamera(bool SwitchToOutOfBody)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.SwitchOutOfBodyCamera");

	AVive_PawnCharacter_C_SwitchOutOfBodyCamera_Params params;
	params.SwitchToOutOfBody = SwitchToOutOfBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.TryRemoveSecondaryAttachment
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* Calling_Motion_Controller      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent* Other_Controller               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTagContainer   GameplayTags                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           DroppedSecondary               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HadSecondary                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::TryRemoveSecondaryAttachment(class UGripMotionControllerComponent* Calling_Motion_Controller, class UGripMotionControllerComponent* Other_Controller, const struct FGameplayTagContainer& GameplayTags, bool* DroppedSecondary, bool* HadSecondary)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.TryRemoveSecondaryAttachment");

	AVive_PawnCharacter_C_TryRemoveSecondaryAttachment_Params params;
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


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.IfOverWidgetUse
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* Calling_Hand                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Pressed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasOverWidget                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::IfOverWidgetUse(class UGripMotionControllerComponent* Calling_Hand, bool Pressed, bool* WasOverWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.IfOverWidgetUse");

	AVive_PawnCharacter_C_IfOverWidgetUse_Params params;
	params.Calling_Hand = Calling_Hand;
	params.Pressed = Pressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WasOverWidget != nullptr)
		*WasOverWidget = params.WasOverWidget;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CallCorrectDropSingleEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation Grip                           (BlueprintVisible, BlueprintReadOnly, Parm)

void AVive_PawnCharacter_C::CallCorrectDropSingleEvent(class UGripMotionControllerComponent* Hand, const struct FBPActorGripInformation& Grip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.CallCorrectDropSingleEvent");

	AVive_PawnCharacter_C_CallCorrectDropSingleEvent_Params params;
	params.Hand = Hand;
	params.Grip = Grip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CallCorrectGrabEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 ObjectToGrip                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSlotGrip                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              GripTransform                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FGameplayTag            GripSecondaryTag               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   OptionalBoneName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSecondaryGrip                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::CallCorrectGrabEvent(class UObject* ObjectToGrip, EControllerHand Hand, bool IsSlotGrip, const struct FTransform& GripTransform, const struct FGameplayTag& GripSecondaryTag, const struct FName& OptionalBoneName, bool IsSecondaryGrip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.CallCorrectGrabEvent");

	AVive_PawnCharacter_C_CallCorrectGrabEvent_Params params;
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


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.GetRelativeVelocityForLocomotion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsHMD                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsMotionZVelBased              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VeloctyVector                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Velocity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::GetRelativeVelocityForLocomotion(bool IsHMD, bool IsMotionZVelBased, const struct FVector& VeloctyVector, float* Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.GetRelativeVelocityForLocomotion");

	AVive_PawnCharacter_C_GetRelativeVelocityForLocomotion_Params params;
	params.IsHMD = IsHMD;
	params.IsMotionZVelBased = IsMotionZVelBased;
	params.VeloctyVector = VeloctyVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Velocity != nullptr)
		*Velocity = params.Velocity;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.GetSmoothedVelocityOfObject
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CurRelLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 LastRelLocation                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 RelativeVelocityOut            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 LowEndRelativeVelocityOut      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bRollingAverage                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::GetSmoothedVelocityOfObject(const struct FVector& CurRelLocation, bool bRollingAverage, struct FVector* LastRelLocation, struct FVector* RelativeVelocityOut, struct FVector* LowEndRelativeVelocityOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.GetSmoothedVelocityOfObject");

	AVive_PawnCharacter_C_GetSmoothedVelocityOfObject_Params params;
	params.CurRelLocation = CurRelLocation;
	params.bRollingAverage = bRollingAverage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LastRelLocation != nullptr)
		*LastRelLocation = params.LastRelLocation;
	if (RelativeVelocityOut != nullptr)
		*RelativeVelocityOut = params.RelativeVelocityOut;
	if (LowEndRelativeVelocityOut != nullptr)
		*LowEndRelativeVelocityOut = params.LowEndRelativeVelocityOut;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.HandleRunInPlace
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ForwardVector                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           IncludeHands                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::HandleRunInPlace(const struct FVector& ForwardVector, bool IncludeHands)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.HandleRunInPlace");

	AVive_PawnCharacter_C_HandleRunInPlace_Params params;
	params.ForwardVector = ForwardVector;
	params.IncludeHands = IncludeHands;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CalculateRelativeVelocities
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AVive_PawnCharacter_C::CalculateRelativeVelocities()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.CalculateRelativeVelocities");

	AVive_PawnCharacter_C_CalculateRelativeVelocities_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.GetNearestOverlapOfHand
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPrimitiveComponent*     OverlapSphere                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 NearestMesh                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::GetNearestOverlapOfHand(class UGripMotionControllerComponent* Hand, class UPrimitiveComponent* OverlapSphere, class UObject** NearestMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.GetNearestOverlapOfHand");

	AVive_PawnCharacter_C_GetNearestOverlapOfHand_Params params;
	params.Hand = Hand;
	params.OverlapSphere = OverlapSphere;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NearestMesh != nullptr)
		*NearestMesh = params.NearestMesh;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CheckAndHandleGripAnimations
// (Public, BlueprintCallable, BlueprintEvent)

void AVive_PawnCharacter_C::CheckAndHandleGripAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.CheckAndHandleGripAnimations");

	AVive_PawnCharacter_C_CheckAndHandleGripAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InitClimbing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsObjectRelative               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::InitClimbing(class UGripMotionControllerComponent* Hand, class UObject* Object, bool IsObjectRelative)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.InitClimbing");

	AVive_PawnCharacter_C_InitClimbing_Params params;
	params.Hand = Hand;
	params.Object = Object;
	params.IsObjectRelative = IsObjectRelative;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ClearClimbing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BecauseOfStepUp                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::ClearClimbing(bool BecauseOfStepUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.ClearClimbing");

	AVive_PawnCharacter_C_ClearClimbing_Params params;
	params.BecauseOfStepUp = BecauseOfStepUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CheckAndHandleClimbingMovement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::CheckAndHandleClimbingMovement(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.CheckAndHandleClimbingMovement");

	AVive_PawnCharacter_C_CheckAndHandleClimbingMovement_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.GripDropOrUseObject
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* CallingMotionController        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent* OtherController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           CanCheckClimb                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     GrabSphere                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTag            GripTag                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTag            DropTag                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTag            UseTag                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTag            EndUseTag                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTag            GripSecondaryTag               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTag            DropSecondaryTag               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Performed_Action               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::GripDropOrUseObject(class UGripMotionControllerComponent* CallingMotionController, class UGripMotionControllerComponent* OtherController, bool CanCheckClimb, class UPrimitiveComponent* GrabSphere, const struct FGameplayTag& GripTag, const struct FGameplayTag& DropTag, const struct FGameplayTag& UseTag, const struct FGameplayTag& EndUseTag, const struct FGameplayTag& GripSecondaryTag, const struct FGameplayTag& DropSecondaryTag, bool* Performed_Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.GripDropOrUseObject");

	AVive_PawnCharacter_C_GripDropOrUseObject_Params params;
	params.CallingMotionController = CallingMotionController;
	params.OtherController = OtherController;
	params.CanCheckClimb = CanCheckClimb;
	params.GrabSphere = GrabSphere;
	params.GripTag = GripTag;
	params.DropTag = DropTag;
	params.UseTag = UseTag;
	params.EndUseTag = EndUseTag;
	params.GripSecondaryTag = GripSecondaryTag;
	params.DropSecondaryTag = DropSecondaryTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Performed_Action != nullptr)
		*Performed_Action = params.Performed_Action;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CheckAndHandleTickedMovement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AVive_PawnCharacter_C::CheckAndHandleTickedMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.CheckAndHandleTickedMovement");

	AVive_PawnCharacter_C_CheckAndHandleTickedMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.GetDPadMovementFacing
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EMovementMode>     MovementMode                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGripMotionControllerComponent* Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent* OtherHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EMovementMode>     OtherHandMovementMode          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ForwardVector                  (Parm, OutParm, IsPlainOldData)
// struct FVector                 RightVector                    (Parm, OutParm, IsPlainOldData)

void AVive_PawnCharacter_C::GetDPadMovementFacing(TEnumAsByte<EMovementMode> MovementMode, class UGripMotionControllerComponent* Hand, class UGripMotionControllerComponent* OtherHand, TEnumAsByte<EMovementMode> OtherHandMovementMode, struct FVector* ForwardVector, struct FVector* RightVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.GetDPadMovementFacing");

	AVive_PawnCharacter_C_GetDPadMovementFacing_Params params;
	params.MovementMode = MovementMode;
	params.Hand = Hand;
	params.OtherHand = OtherHand;
	params.OtherHandMovementMode = OtherHandMovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ForwardVector != nullptr)
		*ForwardVector = params.ForwardVector;
	if (RightVector != nullptr)
		*RightVector = params.RightVector;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.GetNearestOverlappingObject
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlapComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent* Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 NearestObject                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ImplementsInterface            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ObjectTransform                (Parm, OutParm, IsPlainOldData)
// bool                           CanBeClimbed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ImpactLoc                      (Parm, OutParm, IsPlainOldData)

void AVive_PawnCharacter_C::GetNearestOverlappingObject(class UPrimitiveComponent* OverlapComponent, class UGripMotionControllerComponent* Hand, class UObject** NearestObject, bool* ImplementsInterface, struct FTransform* ObjectTransform, bool* CanBeClimbed, struct FName* BoneName, struct FVector* ImpactLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.GetNearestOverlappingObject");

	AVive_PawnCharacter_C_GetNearestOverlappingObject_Params params;
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


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.TryToGrabObject
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 ObjectToTryToGrab              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              WorldTransform                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UGripMotionControllerComponent* Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent* OtherHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           IsSlotGrip                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            GripSecondaryTag               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   GripBoneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSecondaryGrip                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Gripped                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::TryToGrabObject(class UObject* ObjectToTryToGrab, const struct FTransform& WorldTransform, class UGripMotionControllerComponent* Hand, class UGripMotionControllerComponent* OtherHand, bool IsSlotGrip, const struct FGameplayTag& GripSecondaryTag, const struct FName& GripBoneName, bool IsSecondaryGrip, bool* Gripped)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.TryToGrabObject");

	AVive_PawnCharacter_C_TryToGrabObject_Params params;
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


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.WriteToLog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Left                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::WriteToLog(const struct FString& Text, bool Left)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.WriteToLog");

	AVive_PawnCharacter_C_WriteToLog_Params params;
	params.Text = Text;
	params.Left = Left;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVive_PawnCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.UserConstructionScript");

	AVive_PawnCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_TeleportLeft_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AVive_PawnCharacter_C::InpActEvt_TeleportLeft_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_TeleportLeft_K2Node_InputActionEvent_14");

	AVive_PawnCharacter_C_InpActEvt_TeleportLeft_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_TeleportLeft_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AVive_PawnCharacter_C::InpActEvt_TeleportLeft_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_TeleportLeft_K2Node_InputActionEvent_13");

	AVive_PawnCharacter_C_InpActEvt_TeleportLeft_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_TeleportRight_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AVive_PawnCharacter_C::InpActEvt_TeleportRight_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_TeleportRight_K2Node_InputActionEvent_12");

	AVive_PawnCharacter_C_InpActEvt_TeleportRight_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_TeleportRight_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AVive_PawnCharacter_C::InpActEvt_TeleportRight_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_TeleportRight_K2Node_InputActionEvent_11");

	AVive_PawnCharacter_C_InpActEvt_TeleportRight_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.OnFailure_27F56E5242A2DFCE22855195C133461E
// (BlueprintCallable, BlueprintEvent)

void AVive_PawnCharacter_C::OnFailure_27F56E5242A2DFCE22855195C133461E()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.OnFailure_27F56E5242A2DFCE22855195C133461E");

	AVive_PawnCharacter_C_OnFailure_27F56E5242A2DFCE22855195C133461E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.OnSuccess_27F56E5242A2DFCE22855195C133461E
// (BlueprintCallable, BlueprintEvent)

void AVive_PawnCharacter_C::OnSuccess_27F56E5242A2DFCE22855195C133461E()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.OnSuccess_27F56E5242A2DFCE22855195C133461E");

	AVive_PawnCharacter_C_OnSuccess_27F56E5242A2DFCE22855195C133461E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_Escape_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AVive_PawnCharacter_C::InpActEvt_Escape_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_Escape_K2Node_InputKeyEvent_1");

	AVive_PawnCharacter_C_InpActEvt_Escape_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_GrabLeft_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AVive_PawnCharacter_C::InpActEvt_GrabLeft_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_GrabLeft_K2Node_InputActionEvent_10");

	AVive_PawnCharacter_C_InpActEvt_GrabLeft_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_GrabLeft_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AVive_PawnCharacter_C::InpActEvt_GrabLeft_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_GrabLeft_K2Node_InputActionEvent_9");

	AVive_PawnCharacter_C_InpActEvt_GrabLeft_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_GrabRight_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AVive_PawnCharacter_C::InpActEvt_GrabRight_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_GrabRight_K2Node_InputActionEvent_8");

	AVive_PawnCharacter_C_InpActEvt_GrabRight_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_GrabRight_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AVive_PawnCharacter_C::InpActEvt_GrabRight_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_GrabRight_K2Node_InputActionEvent_7");

	AVive_PawnCharacter_C_InpActEvt_GrabRight_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_SideGripPressedL_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AVive_PawnCharacter_C::InpActEvt_SideGripPressedL_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_SideGripPressedL_K2Node_InputActionEvent_6");

	AVive_PawnCharacter_C_InpActEvt_SideGripPressedL_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_SideGripPressedL_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AVive_PawnCharacter_C::InpActEvt_SideGripPressedL_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_SideGripPressedL_K2Node_InputActionEvent_5");

	AVive_PawnCharacter_C_InpActEvt_SideGripPressedL_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_SideGripPressedR_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AVive_PawnCharacter_C::InpActEvt_SideGripPressedR_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_SideGripPressedR_K2Node_InputActionEvent_4");

	AVive_PawnCharacter_C_InpActEvt_SideGripPressedR_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_SideGripPressedR_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AVive_PawnCharacter_C::InpActEvt_SideGripPressedR_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_SideGripPressedR_K2Node_InputActionEvent_3");

	AVive_PawnCharacter_C_InpActEvt_SideGripPressedR_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_LaserBeamLeft_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AVive_PawnCharacter_C::InpActEvt_LaserBeamLeft_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_LaserBeamLeft_K2Node_InputActionEvent_2");

	AVive_PawnCharacter_C_InpActEvt_LaserBeamLeft_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_LaserBeamRight_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AVive_PawnCharacter_C::InpActEvt_LaserBeamRight_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpActEvt_LaserBeamRight_K2Node_InputActionEvent_1");

	AVive_PawnCharacter_C_InpActEvt_LaserBeamRight_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.RemoveSecondaryGrip
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 GrippedActorToRemoveAttachment (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::RemoveSecondaryGrip(class UGripMotionControllerComponent* Hand, class UObject* GrippedActorToRemoveAttachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.RemoveSecondaryGrip");

	AVive_PawnCharacter_C_RemoveSecondaryGrip_Params params;
	params.Hand = Hand;
	params.GrippedActorToRemoveAttachment = GrippedActorToRemoveAttachment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ExecuteTeleportation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Teleport_Controller_C* MotionController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     MovementMode                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::ExecuteTeleportation(class ABP_Teleport_Controller_C* MotionController, TEnumAsByte<EMovementMode> MovementMode, EControllerHand Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.ExecuteTeleportation");

	AVive_PawnCharacter_C_ExecuteTeleportation_Params params;
	params.MotionController = MotionController;
	params.MovementMode = MovementMode;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.VRCapsuleHeightCheck
// (BlueprintCallable, BlueprintEvent)

void AVive_PawnCharacter_C::VRCapsuleHeightCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.VRCapsuleHeightCheck");

	AVive_PawnCharacter_C_VRCapsuleHeightCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ReceiveNavigationMoveCompleted
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult>* PathingResult                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::ReceiveNavigationMoveCompleted(TEnumAsByte<EPathFollowingResult>* PathingResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.ReceiveNavigationMoveCompleted");

	AVive_PawnCharacter_C_ReceiveNavigationMoveCompleted_Params params;
	params.PathingResult = PathingResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpAxisEvt_ControllerMovementLeft_K2Node_InputAxisEvent_284
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::InpAxisEvt_ControllerMovementLeft_K2Node_InputAxisEvent_284(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpAxisEvt_ControllerMovementLeft_K2Node_InputAxisEvent_284");

	AVive_PawnCharacter_C_InpAxisEvt_ControllerMovementLeft_K2Node_InputAxisEvent_284_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpAxisEvt_ControllerMovementRight_K2Node_InputAxisEvent_286
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::InpAxisEvt_ControllerMovementRight_K2Node_InputAxisEvent_286(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.InpAxisEvt_ControllerMovementRight_K2Node_InputAxisEvent_286");

	AVive_PawnCharacter_C_InpAxisEvt_ControllerMovementRight_K2Node_InputAxisEvent_286_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.TryDropSingle
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector_NetQuantize100  AngleVel                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector_NetQuantize100  LinearVel                      (BlueprintVisible, BlueprintReadOnly, Parm)
// unsigned char                  GripHash                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::TryDropSingle(class UGripMotionControllerComponent* Controller, const struct FVector_NetQuantize100& AngleVel, const struct FVector_NetQuantize100& LinearVel, unsigned char GripHash)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.TryDropSingle");

	AVive_PawnCharacter_C_TryDropSingle_Params params;
	params.Controller = Controller;
	params.AngleVel = AngleVel;
	params.LinearVel = LinearVel;
	params.GripHash = GripHash;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.TryGrabServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 ObjectToGrab                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSlotGrip                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform_NetQuantize  GripTransform                  (BlueprintVisible, BlueprintReadOnly, Parm)
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            GripSecondaryTag               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   GripBoneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSecondaryGrip                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::TryGrabServer(class UObject* ObjectToGrab, bool IsSlotGrip, const struct FTransform_NetQuantize& GripTransform, EControllerHand Hand, const struct FGameplayTag& GripSecondaryTag, const struct FName& GripBoneName, bool IsSecondaryGrip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.TryGrabServer");

	AVive_PawnCharacter_C_TryGrabServer_Params params;
	params.ObjectToGrab = ObjectToGrab;
	params.IsSlotGrip = IsSlotGrip;
	params.GripTransform = GripTransform;
	params.Hand = Hand;
	params.GripSecondaryTag = GripSecondaryTag;
	params.GripBoneName = GripBoneName;
	params.IsSecondaryGrip = IsSecondaryGrip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.Trigger Grip Or Drop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* Calling_Hand                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGripMotionControllerComponent* OtherHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           IsGrip                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     GrabSphere                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AVive_PawnCharacter_C::Trigger_Grip_Or_Drop(class UGripMotionControllerComponent* Calling_Hand, class UGripMotionControllerComponent* OtherHand, bool IsGrip, class UPrimitiveComponent* GrabSphere)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.Trigger Grip Or Drop");

	AVive_PawnCharacter_C_Trigger_Grip_Or_Drop_Params params;
	params.Calling_Hand = Calling_Hand;
	params.OtherHand = OtherHand;
	params.IsGrip = IsGrip;
	params.GrabSphere = GrabSphere;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.OnClimbingSteppedUp
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVive_PawnCharacter_C::OnClimbingSteppedUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.OnClimbingSteppedUp");

	AVive_PawnCharacter_C_OnClimbingSteppedUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.InitTeleportControllers_Event
// (BlueprintCallable, BlueprintEvent)

void AVive_PawnCharacter_C::InitTeleportControllers_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.InitTeleportControllers_Event");

	AVive_PawnCharacter_C_InitTeleportControllers_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ActivateBeam
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LeftController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::ActivateBeam(bool LeftController, bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.ActivateBeam");

	AVive_PawnCharacter_C_ActivateBeam_Params params;
	params.LeftController = LeftController;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ActivateBeamMultiCast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LeftController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::ActivateBeamMultiCast(bool LeftController, bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.ActivateBeamMultiCast");

	AVive_PawnCharacter_C_ActivateBeamMultiCast_Params params;
	params.LeftController = LeftController;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.CallTeleport
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 New_Teleport_Location          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AVive_PawnCharacter_C::CallTeleport(const struct FVector& New_Teleport_Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.CallTeleport");

	AVive_PawnCharacter_C_CallTeleport_Params params;
	params.New_Teleport_Location = New_Teleport_Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.TryGrabClient
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 ObjectToGrab                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSlotGrip                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform_NetQuantize  GripTransform                  (BlueprintVisible, BlueprintReadOnly, Parm)
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            GripSecondaryTag               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   GripBoneName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSecondaryGrip                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::TryGrabClient(class UObject* ObjectToGrab, bool IsSlotGrip, const struct FTransform_NetQuantize& GripTransform, EControllerHand Hand, const struct FGameplayTag& GripSecondaryTag, const struct FName& GripBoneName, bool IsSecondaryGrip)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.TryGrabClient");

	AVive_PawnCharacter_C_TryGrabClient_Params params;
	params.ObjectToGrab = ObjectToGrab;
	params.IsSlotGrip = IsSlotGrip;
	params.GripTransform = GripTransform;
	params.Hand = Hand;
	params.GripSecondaryTag = GripSecondaryTag;
	params.GripBoneName = GripBoneName;
	params.IsSecondaryGrip = IsSecondaryGrip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.TryDropSingle_Client
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripToDrop                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 Angle_Vel                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Linear_Vel                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AVive_PawnCharacter_C::TryDropSingle_Client(class UGripMotionControllerComponent* Controller, const struct FBPActorGripInformation& GripToDrop, const struct FVector& Angle_Vel, const struct FVector& Linear_Vel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.TryDropSingle_Client");

	AVive_PawnCharacter_C_TryDropSingle_Client_Params params;
	params.Controller = Controller;
	params.GripToDrop = GripToDrop;
	params.Angle_Vel = Angle_Vel;
	params.Linear_Vel = Linear_Vel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.NotifyTeleportActive
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::NotifyTeleportActive(EControllerHand Hand, bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.NotifyTeleportActive");

	AVive_PawnCharacter_C_NotifyTeleportActive_Params params;
	params.Hand = Hand;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.MulticastTeleportActive
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::MulticastTeleportActive(EControllerHand Hand, bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.MulticastTeleportActive");

	AVive_PawnCharacter_C_MulticastTeleportActive_Params params;
	params.Hand = Hand;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.RequestTeleport
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewTeleportLocation            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AVive_PawnCharacter_C::RequestTeleport(const struct FVector& NewTeleportLocation, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.RequestTeleport");

	AVive_PawnCharacter_C_RequestTeleport_Params params;
	params.NewTeleportLocation = NewTeleportLocation;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.On Possessed
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void AVive_PawnCharacter_C::On_Possessed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.On Possessed");

	AVive_PawnCharacter_C_On_Possessed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AVive_PawnCharacter_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.ReceiveDestroyed");

	AVive_PawnCharacter_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.ReceivePossessed");

	AVive_PawnCharacter_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.ReceiveTick");

	AVive_PawnCharacter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.OnSeatedModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bNewSeatedMode                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWasAlreadySeated              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::OnSeatedModeChanged(bool* bNewSeatedMode, bool* bWasAlreadySeated)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.OnSeatedModeChanged");

	AVive_PawnCharacter_C_OnSeatedModeChanged_Params params;
	params.bNewSeatedMode = bNewSeatedMode;
	params.bWasAlreadySeated = bWasAlreadySeated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.SendControllerProfileToServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsRightHand                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform_NetQuantize  NewTransform                   (BlueprintVisible, BlueprintReadOnly, Parm)

void AVive_PawnCharacter_C::SendControllerProfileToServer(bool IsRightHand, const struct FTransform_NetQuantize& NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.SendControllerProfileToServer");

	AVive_PawnCharacter_C_SendControllerProfileToServer_Params params;
	params.IsRightHand = IsRightHand;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.BndEvt__LeftMotionController_K2Node_ComponentBoundEvent_0_VRGripControllerOnProfileTransformChanged__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FTransform              NewRelTransForProcComps        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FTransform              NewProfileTransform            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AVive_PawnCharacter_C::BndEvt__LeftMotionController_K2Node_ComponentBoundEvent_0_VRGripControllerOnProfileTransformChanged__DelegateSignature(const struct FTransform& NewRelTransForProcComps, const struct FTransform& NewProfileTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.BndEvt__LeftMotionController_K2Node_ComponentBoundEvent_0_VRGripControllerOnProfileTransformChanged__DelegateSignature");

	AVive_PawnCharacter_C_BndEvt__LeftMotionController_K2Node_ComponentBoundEvent_0_VRGripControllerOnProfileTransformChanged__DelegateSignature_Params params;
	params.NewRelTransForProcComps = NewRelTransForProcComps;
	params.NewProfileTransform = NewProfileTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.BndEvt__RightMotionController_K2Node_ComponentBoundEvent_1_VRGripControllerOnProfileTransformChanged__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FTransform              NewRelTransForProcComps        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FTransform              NewProfileTransform            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AVive_PawnCharacter_C::BndEvt__RightMotionController_K2Node_ComponentBoundEvent_1_VRGripControllerOnProfileTransformChanged__DelegateSignature(const struct FTransform& NewRelTransForProcComps, const struct FTransform& NewProfileTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.BndEvt__RightMotionController_K2Node_ComponentBoundEvent_1_VRGripControllerOnProfileTransformChanged__DelegateSignature");

	AVive_PawnCharacter_C_BndEvt__RightMotionController_K2Node_ComponentBoundEvent_1_VRGripControllerOnProfileTransformChanged__DelegateSignature_Params params;
	params.NewRelTransForProcComps = NewRelTransForProcComps;
	params.NewProfileTransform = NewProfileTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.OnPlayerStateReplicated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            NewPlayerState                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::OnPlayerStateReplicated(class APlayerState* NewPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.OnPlayerStateReplicated");

	AVive_PawnCharacter_C_OnPlayerStateReplicated_Params params;
	params.NewPlayerState = NewPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.SetupOnPossession
// (BlueprintCallable, BlueprintEvent)

void AVive_PawnCharacter_C::SetupOnPossession()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.SetupOnPossession");

	AVive_PawnCharacter_C_SetupOnPossession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AVive_PawnCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.ReceiveBeginPlay");

	AVive_PawnCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vive_PawnCharacter.Vive_PawnCharacter_C.ExecuteUbergraph_Vive_PawnCharacter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVive_PawnCharacter_C::ExecuteUbergraph_Vive_PawnCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vive_PawnCharacter.Vive_PawnCharacter_C.ExecuteUbergraph_Vive_PawnCharacter");

	AVive_PawnCharacter_C_ExecuteUbergraph_Vive_PawnCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
