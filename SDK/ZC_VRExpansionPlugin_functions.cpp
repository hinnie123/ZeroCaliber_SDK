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

// Function VRExpansionPlugin.GripMotionControllerComponent.UpdatePhysicsHandleTransform_BP
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBPActorGripInformation GrippedActor                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGripMotionControllerComponent::UpdatePhysicsHandleTransform_BP(const struct FBPActorGripInformation& GrippedActor, const struct FTransform& NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.UpdatePhysicsHandleTransform_BP");

	UGripMotionControllerComponent_UpdatePhysicsHandleTransform_BP_Params params;
	params.GrippedActor = GrippedActor;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.TeleportMoveGrippedComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     ComponentToMove                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bTeleportPhysicsGrips          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGripMotionControllerComponent::TeleportMoveGrippedComponent(class UPrimitiveComponent* ComponentToMove, bool bTeleportPhysicsGrips)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.TeleportMoveGrippedComponent");

	UGripMotionControllerComponent_TeleportMoveGrippedComponent_Params params;
	params.ComponentToMove = ComponentToMove;
	params.bTeleportPhysicsGrips = bTeleportPhysicsGrips;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.TeleportMoveGrippedActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  GrippedActorToMove             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTeleportPhysicsGrips          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGripMotionControllerComponent::TeleportMoveGrippedActor(class AActor* GrippedActorToMove, bool bTeleportPhysicsGrips)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.TeleportMoveGrippedActor");

	UGripMotionControllerComponent_TeleportMoveGrippedActor_Params params;
	params.GrippedActorToMove = GrippedActorToMove;
	params.bTeleportPhysicsGrips = bTeleportPhysicsGrips;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.TeleportMoveGrip
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPActorGripInformation Grip                           (Parm, OutParm, ReferenceParm)
// bool                           bTeleportPhysicsGrips          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsForPostTeleport             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGripMotionControllerComponent::TeleportMoveGrip(bool bTeleportPhysicsGrips, bool bIsForPostTeleport, struct FBPActorGripInformation* Grip)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.TeleportMoveGrip");

	UGripMotionControllerComponent_TeleportMoveGrip_Params params;
	params.bTeleportPhysicsGrips = bTeleportPhysicsGrips;
	params.bIsForPostTeleport = bIsForPostTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Grip != nullptr)
		*Grip = params.Grip;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.SetUpPhysicsHandle_BP
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPActorGripInformation newGrip                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGripMotionControllerComponent::SetUpPhysicsHandle_BP(const struct FBPActorGripInformation& newGrip)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.SetUpPhysicsHandle_BP");

	UGripMotionControllerComponent_SetUpPhysicsHandle_BP_Params params;
	params.newGrip = newGrip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.SetSocketTransform
// (Final, Native, Public)
// Parameters:
// class UObject*                 ObjectToSocket                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform_NetQuantize  RelativeTransformToParent      (ConstParm, Parm)

void UGripMotionControllerComponent::SetSocketTransform(class UObject* ObjectToSocket, const struct FTransform_NetQuantize& RelativeTransformToParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.SetSocketTransform");

	UGripMotionControllerComponent_SetSocketTransform_Params params;
	params.ObjectToSocket = ObjectToSocket;
	params.RelativeTransformToParent = RelativeTransformToParent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.SetPausedTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBPActorGripInformation Grip                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              PausedTransform                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)

void UGripMotionControllerComponent::SetPausedTransform(const struct FBPActorGripInformation& Grip, const struct FTransform& PausedTransform, bool bTeleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.SetPausedTransform");

	UGripMotionControllerComponent_SetPausedTransform_Params params;
	params.Grip = Grip;
	params.PausedTransform = PausedTransform;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.SetGripStiffnessAndDamping
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPActorGripInformation Grip                           (ConstParm, Parm, OutParm, ReferenceParm)
// EBPVRResultSwitch              Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          NewStiffness                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewDamping                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAlsoSetAngularValues          (Parm, ZeroConstructor, IsPlainOldData)
// float                          OptionalAngularStiffness       (Parm, ZeroConstructor, IsPlainOldData)
// float                          OptionalAngularDamping         (Parm, ZeroConstructor, IsPlainOldData)

void UGripMotionControllerComponent::SetGripStiffnessAndDamping(const struct FBPActorGripInformation& Grip, float NewStiffness, float NewDamping, bool bAlsoSetAngularValues, float OptionalAngularStiffness, float OptionalAngularDamping, EBPVRResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.SetGripStiffnessAndDamping");

	UGripMotionControllerComponent_SetGripStiffnessAndDamping_Params params;
	params.Grip = Grip;
	params.NewStiffness = NewStiffness;
	params.NewDamping = NewDamping;
	params.bAlsoSetAngularValues = bAlsoSetAngularValues;
	params.OptionalAngularStiffness = OptionalAngularStiffness;
	params.OptionalAngularDamping = OptionalAngularDamping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.SetGripRelativeTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBPActorGripInformation Grip                           (ConstParm, Parm, OutParm, ReferenceParm)
// EBPVRResultSwitch              Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              NewRelativeTransform           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGripMotionControllerComponent::SetGripRelativeTransform(const struct FBPActorGripInformation& Grip, const struct FTransform& NewRelativeTransform, EBPVRResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.SetGripRelativeTransform");

	UGripMotionControllerComponent_SetGripRelativeTransform_Params params;
	params.Grip = Grip;
	params.NewRelativeTransform = NewRelativeTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.SetGripPaused
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPActorGripInformation Grip                           (ConstParm, Parm, OutParm, ReferenceParm)
// EBPVRResultSwitch              Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPaused                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNoConstraintWhenPaused        (Parm, ZeroConstructor, IsPlainOldData)

void UGripMotionControllerComponent::SetGripPaused(const struct FBPActorGripInformation& Grip, bool bIsPaused, bool bNoConstraintWhenPaused, EBPVRResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.SetGripPaused");

	UGripMotionControllerComponent_SetGripPaused_Params params;
	params.Grip = Grip;
	params.bIsPaused = bIsPaused;
	params.bNoConstraintWhenPaused = bNoConstraintWhenPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.SetGripLateUpdateSetting
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPActorGripInformation Grip                           (ConstParm, Parm, OutParm, ReferenceParm)
// EBPVRResultSwitch              Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EGripLateUpdateSettings        NewGripLateUpdateSetting       (Parm, ZeroConstructor, IsPlainOldData)

void UGripMotionControllerComponent::SetGripLateUpdateSetting(const struct FBPActorGripInformation& Grip, EGripLateUpdateSettings NewGripLateUpdateSetting, EBPVRResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.SetGripLateUpdateSetting");

	UGripMotionControllerComponent_SetGripLateUpdateSetting_Params params;
	params.Grip = Grip;
	params.NewGripLateUpdateSetting = NewGripLateUpdateSetting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.SetGripCollisionType
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPActorGripInformation Grip                           (ConstParm, Parm, OutParm, ReferenceParm)
// EBPVRResultSwitch              Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EGripCollisionType             NewGripCollisionType           (Parm, ZeroConstructor, IsPlainOldData)

void UGripMotionControllerComponent::SetGripCollisionType(const struct FBPActorGripInformation& Grip, EGripCollisionType NewGripCollisionType, EBPVRResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.SetGripCollisionType");

	UGripMotionControllerComponent_SetGripCollisionType_Params params;
	params.Grip = Grip;
	params.NewGripCollisionType = NewGripCollisionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.SetGripAdditionTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBPActorGripInformation Grip                           (ConstParm, Parm, OutParm, ReferenceParm)
// EBPVRResultSwitch              Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              NewAdditionTransform           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bMakeGripRelative              (Parm, ZeroConstructor, IsPlainOldData)

void UGripMotionControllerComponent::SetGripAdditionTransform(const struct FBPActorGripInformation& Grip, const struct FTransform& NewAdditionTransform, bool bMakeGripRelative, EBPVRResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.SetGripAdditionTransform");

	UGripMotionControllerComponent_SetGripAdditionTransform_Params params;
	params.Grip = Grip;
	params.NewAdditionTransform = NewAdditionTransform;
	params.bMakeGripRelative = bMakeGripRelative;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.Server_SendControllerTransform
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FBPVRComponentPosRep    NewTransform                   (Parm)

void UGripMotionControllerComponent::Server_SendControllerTransform(const struct FBPVRComponentPosRep& NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.Server_SendControllerTransform");

	UGripMotionControllerComponent_Server_SendControllerTransform_Params params;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifySecondaryAttachmentChanged_Retain
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// unsigned char                  GripID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPSecondaryGripInfo    SecondaryGripInfo              (ConstParm, Parm, ReferenceParm)
// struct FTransform_NetQuantize  NewRelativeTransform           (ConstParm, Parm, ReferenceParm)

void UGripMotionControllerComponent::Server_NotifySecondaryAttachmentChanged_Retain(unsigned char GripID, const struct FBPSecondaryGripInfo& SecondaryGripInfo, const struct FTransform_NetQuantize& NewRelativeTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifySecondaryAttachmentChanged_Retain");

	UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain_Params params;
	params.GripID = GripID;
	params.SecondaryGripInfo = SecondaryGripInfo;
	params.NewRelativeTransform = NewRelativeTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifySecondaryAttachmentChanged
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// unsigned char                  GripID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPSecondaryGripInfo    SecondaryGripInfo              (ConstParm, Parm, ReferenceParm)

void UGripMotionControllerComponent::Server_NotifySecondaryAttachmentChanged(unsigned char GripID, const struct FBPSecondaryGripInfo& SecondaryGripInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifySecondaryAttachmentChanged");

	UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Params params;
	params.GripID = GripID;
	params.SecondaryGripInfo = SecondaryGripInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifyLocalGripRemoved
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// unsigned char                  GripID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize100  AngularVelocity                (Parm)
// struct FVector_NetQuantize100  LinearVelocity                 (Parm)

void UGripMotionControllerComponent::Server_NotifyLocalGripRemoved(unsigned char GripID, const struct FVector_NetQuantize100& AngularVelocity, const struct FVector_NetQuantize100& LinearVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifyLocalGripRemoved");

	UGripMotionControllerComponent_Server_NotifyLocalGripRemoved_Params params;
	params.GripID = GripID;
	params.AngularVelocity = AngularVelocity;
	params.LinearVelocity = LinearVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifyLocalGripAddedOrChanged
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FBPActorGripInformation newGrip                        (ConstParm, Parm, ReferenceParm)

void UGripMotionControllerComponent::Server_NotifyLocalGripAddedOrChanged(const struct FBPActorGripInformation& newGrip)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifyLocalGripAddedOrChanged");

	UGripMotionControllerComponent_Server_NotifyLocalGripAddedOrChanged_Params params;
	params.newGrip = newGrip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifyDropAndSocketGrip
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// unsigned char                  GripID                         (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         SocketingParent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OptionalSocketName             (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform_NetQuantize  RelativeTransformToParent      (ConstParm, Parm, ReferenceParm)

void UGripMotionControllerComponent::Server_NotifyDropAndSocketGrip(unsigned char GripID, class USceneComponent* SocketingParent, const struct FName& OptionalSocketName, const struct FTransform_NetQuantize& RelativeTransformToParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifyDropAndSocketGrip");

	UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Params params;
	params.GripID = GripID;
	params.SocketingParent = SocketingParent;
	params.OptionalSocketName = OptionalSocketName;
	params.RelativeTransformToParent = RelativeTransformToParent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.RemoveSecondaryAttachmentPoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 GrippedObjectToRemoveAttachment (Parm, ZeroConstructor, IsPlainOldData)
// float                          LerpToTime                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGripMotionControllerComponent::RemoveSecondaryAttachmentPoint(class UObject* GrippedObjectToRemoveAttachment, float LerpToTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.RemoveSecondaryAttachmentPoint");

	UGripMotionControllerComponent_RemoveSecondaryAttachmentPoint_Params params;
	params.GrippedObjectToRemoveAttachment = GrippedObjectToRemoveAttachment;
	params.LerpToTime = LerpToTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.PostTeleportMoveGrippedObjects
// (Final, Native, Public, BlueprintCallable)

void UGripMotionControllerComponent::PostTeleportMoveGrippedObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.PostTeleportMoveGrippedObjects");

	UGripMotionControllerComponent_PostTeleportMoveGrippedObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.OnRep_ReplicatedControllerTransform
// (Native, Public)

void UGripMotionControllerComponent::OnRep_ReplicatedControllerTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.OnRep_ReplicatedControllerTransform");

	UGripMotionControllerComponent_OnRep_ReplicatedControllerTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.OnRep_LocallyGrippedObjects
// (Native, Public)

void UGripMotionControllerComponent::OnRep_LocallyGrippedObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.OnRep_LocallyGrippedObjects");

	UGripMotionControllerComponent_OnRep_LocallyGrippedObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.OnRep_GrippedObjects
// (Native, Public)

void UGripMotionControllerComponent::OnRep_GrippedObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.OnRep_GrippedObjects");

	UGripMotionControllerComponent_OnRep_GrippedObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.NotifyDropAndSocket
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FBPActorGripInformation NewDrop                        (ConstParm, Parm, ReferenceParm)

void UGripMotionControllerComponent::NotifyDropAndSocket(const struct FBPActorGripInformation& NewDrop)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.NotifyDropAndSocket");

	UGripMotionControllerComponent_NotifyDropAndSocket_Params params;
	params.NewDrop = NewDrop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.NotifyDrop
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FBPActorGripInformation NewDrop                        (ConstParm, Parm, ReferenceParm)
// bool                           bSimulate                      (Parm, ZeroConstructor, IsPlainOldData)

void UGripMotionControllerComponent::NotifyDrop(const struct FBPActorGripInformation& NewDrop, bool bSimulate)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.NotifyDrop");

	UGripMotionControllerComponent_NotifyDrop_Params params;
	params.NewDrop = NewDrop;
	params.bSimulate = bSimulate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.NewControllerProfileLoaded
// (Final, Native, Protected)

void UGripMotionControllerComponent::NewControllerProfileLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.NewControllerProfileLoaded");

	UGripMotionControllerComponent_NewControllerProfileLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.HasGrippedObjects
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGripMotionControllerComponent::HasGrippedObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.HasGrippedObjects");

	UGripMotionControllerComponent_HasGrippedObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.GripObjectByInterface
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 ObjectToGrip                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              WorldOffset                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bWorldOffsetIsRelative         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   OptionalBoneToGripName         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsSlotGrip                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGripMotionControllerComponent::GripObjectByInterface(class UObject* ObjectToGrip, const struct FTransform& WorldOffset, bool bWorldOffsetIsRelative, const struct FName& OptionalBoneToGripName, bool bIsSlotGrip)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GripObjectByInterface");

	UGripMotionControllerComponent_GripObjectByInterface_Params params;
	params.ObjectToGrip = ObjectToGrip;
	params.WorldOffset = WorldOffset;
	params.bWorldOffsetIsRelative = bWorldOffsetIsRelative;
	params.OptionalBoneToGripName = OptionalBoneToGripName;
	params.bIsSlotGrip = bIsSlotGrip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.GripObject
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 ObjectToGrip                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              WorldOffset                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bWorldOffsetIsRelative         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   OptionalSnapToSocketName       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   OptionalBoneToGripName         (Parm, ZeroConstructor, IsPlainOldData)
// EGripCollisionType             GripCollisionType              (Parm, ZeroConstructor, IsPlainOldData)
// EGripLateUpdateSettings        GripLateUpdateSetting          (Parm, ZeroConstructor, IsPlainOldData)
// EGripMovementReplicationSettings GripMovementReplicationSetting (Parm, ZeroConstructor, IsPlainOldData)
// float                          GripStiffness                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          GripDamping                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsSlotGrip                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGripMotionControllerComponent::GripObject(class UObject* ObjectToGrip, const struct FTransform& WorldOffset, bool bWorldOffsetIsRelative, const struct FName& OptionalSnapToSocketName, const struct FName& OptionalBoneToGripName, EGripCollisionType GripCollisionType, EGripLateUpdateSettings GripLateUpdateSetting, EGripMovementReplicationSettings GripMovementReplicationSetting, float GripStiffness, float GripDamping, bool bIsSlotGrip)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GripObject");

	UGripMotionControllerComponent_GripObject_Params params;
	params.ObjectToGrip = ObjectToGrip;
	params.WorldOffset = WorldOffset;
	params.bWorldOffsetIsRelative = bWorldOffsetIsRelative;
	params.OptionalSnapToSocketName = OptionalSnapToSocketName;
	params.OptionalBoneToGripName = OptionalBoneToGripName;
	params.GripCollisionType = GripCollisionType;
	params.GripLateUpdateSetting = GripLateUpdateSetting;
	params.GripMovementReplicationSetting = GripMovementReplicationSetting;
	params.GripStiffness = GripStiffness;
	params.GripDamping = GripDamping;
	params.bIsSlotGrip = bIsSlotGrip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.GripControllerIsTracked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGripMotionControllerComponent::GripControllerIsTracked()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GripControllerIsTracked");

	UGripMotionControllerComponent_GripControllerIsTracked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.GripComponent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     ComponentToGrip                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FTransform              WorldOffset                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bWorldOffsetIsRelative         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   OptionalBoneToGrip_Name        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   OptionalBoneToGripName         (Parm, ZeroConstructor, IsPlainOldData)
// EGripCollisionType             GripCollisionType              (Parm, ZeroConstructor, IsPlainOldData)
// EGripLateUpdateSettings        GripLateUpdateSetting          (Parm, ZeroConstructor, IsPlainOldData)
// EGripMovementReplicationSettings GripMovementReplicationSetting (Parm, ZeroConstructor, IsPlainOldData)
// float                          GripStiffness                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          GripDamping                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsSlotGrip                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGripMotionControllerComponent::GripComponent(class UPrimitiveComponent* ComponentToGrip, const struct FTransform& WorldOffset, bool bWorldOffsetIsRelative, const struct FName& OptionalBoneToGrip_Name, const struct FName& OptionalBoneToGripName, EGripCollisionType GripCollisionType, EGripLateUpdateSettings GripLateUpdateSetting, EGripMovementReplicationSettings GripMovementReplicationSetting, float GripStiffness, float GripDamping, bool bIsSlotGrip)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GripComponent");

	UGripMotionControllerComponent_GripComponent_Params params;
	params.ComponentToGrip = ComponentToGrip;
	params.WorldOffset = WorldOffset;
	params.bWorldOffsetIsRelative = bWorldOffsetIsRelative;
	params.OptionalBoneToGrip_Name = OptionalBoneToGrip_Name;
	params.OptionalBoneToGripName = OptionalBoneToGripName;
	params.GripCollisionType = GripCollisionType;
	params.GripLateUpdateSetting = GripLateUpdateSetting;
	params.GripMovementReplicationSetting = GripMovementReplicationSetting;
	params.GripStiffness = GripStiffness;
	params.GripDamping = GripDamping;
	params.bIsSlotGrip = bIsSlotGrip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.GripActor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  ActorToGrip                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              WorldOffset                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bWorldOffsetIsRelative         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   OptionalSnapToSocketName       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   OptionalBoneToGripName         (Parm, ZeroConstructor, IsPlainOldData)
// EGripCollisionType             GripCollisionType              (Parm, ZeroConstructor, IsPlainOldData)
// EGripLateUpdateSettings        GripLateUpdateSetting          (Parm, ZeroConstructor, IsPlainOldData)
// EGripMovementReplicationSettings GripMovementReplicationSetting (Parm, ZeroConstructor, IsPlainOldData)
// float                          GripStiffness                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          GripDamping                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsSlotGrip                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGripMotionControllerComponent::GripActor(class AActor* ActorToGrip, const struct FTransform& WorldOffset, bool bWorldOffsetIsRelative, const struct FName& OptionalSnapToSocketName, const struct FName& OptionalBoneToGripName, EGripCollisionType GripCollisionType, EGripLateUpdateSettings GripLateUpdateSetting, EGripMovementReplicationSettings GripMovementReplicationSetting, float GripStiffness, float GripDamping, bool bIsSlotGrip)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GripActor");

	UGripMotionControllerComponent_GripActor_Params params;
	params.ActorToGrip = ActorToGrip;
	params.WorldOffset = WorldOffset;
	params.bWorldOffsetIsRelative = bWorldOffsetIsRelative;
	params.OptionalSnapToSocketName = OptionalSnapToSocketName;
	params.OptionalBoneToGripName = OptionalBoneToGripName;
	params.GripCollisionType = GripCollisionType;
	params.GripLateUpdateSetting = GripLateUpdateSetting;
	params.GripMovementReplicationSetting = GripMovementReplicationSetting;
	params.GripStiffness = GripStiffness;
	params.GripDamping = GripDamping;
	params.bIsSlotGrip = bIsSlotGrip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.GetPhysicsVelocities
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPActorGripInformation Grip                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 AngularVelocity                (Parm, OutParm, IsPlainOldData)
// struct FVector                 LinearVelocity                 (Parm, OutParm, IsPlainOldData)

void UGripMotionControllerComponent::GetPhysicsVelocities(const struct FBPActorGripInformation& Grip, struct FVector* AngularVelocity, struct FVector* LinearVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetPhysicsVelocities");

	UGripMotionControllerComponent_GetPhysicsVelocities_Params params;
	params.Grip = Grip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AngularVelocity != nullptr)
		*AngularVelocity = params.AngularVelocity;
	if (LinearVelocity != nullptr)
		*LinearVelocity = params.LinearVelocity;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.GetIsSecondaryAttachment
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USceneComponent*         ComponentToCheck               (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation Grip                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGripMotionControllerComponent::GetIsSecondaryAttachment(class USceneComponent* ComponentToCheck, struct FBPActorGripInformation* Grip)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetIsSecondaryAttachment");

	UGripMotionControllerComponent_GetIsSecondaryAttachment_Params params;
	params.ComponentToCheck = ComponentToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Grip != nullptr)
		*Grip = params.Grip;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.GetIsObjectHeld
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 ObjectToCheck                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGripMotionControllerComponent::GetIsObjectHeld(class UObject* ObjectToCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetIsObjectHeld");

	UGripMotionControllerComponent_GetIsObjectHeld_Params params;
	params.ObjectToCheck = ObjectToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.GetIsHeld
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  ActorToCheck                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGripMotionControllerComponent::GetIsHeld(class AActor* ActorToCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetIsHeld");

	UGripMotionControllerComponent_GetIsHeld_Params params;
	params.ActorToCheck = ActorToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.GetIsComponentHeld
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     ComponentToCheck               (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGripMotionControllerComponent::GetIsComponentHeld(class UPrimitiveComponent* ComponentToCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetIsComponentHeld");

	UGripMotionControllerComponent_GetIsComponentHeld_Params params;
	params.ComponentToCheck = ComponentToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.GetHandType
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// EControllerHand                Hand                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGripMotionControllerComponent::GetHandType(EControllerHand* Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetHandType");

	UGripMotionControllerComponent_GetHandType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hand != nullptr)
		*Hand = params.Hand;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.GetGrippedObjects
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UObject*>         GrippedObjectsArray            (Parm, OutParm, ZeroConstructor)

void UGripMotionControllerComponent::GetGrippedObjects(TArray<class UObject*>* GrippedObjectsArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetGrippedObjects");

	UGripMotionControllerComponent_GetGrippedObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GrippedObjectsArray != nullptr)
		*GrippedObjectsArray = params.GrippedObjectsArray;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.GetGrippedComponents
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UPrimitiveComponent*> GrippedComponentsArray         (Parm, OutParm, ZeroConstructor)

void UGripMotionControllerComponent::GetGrippedComponents(TArray<class UPrimitiveComponent*>* GrippedComponentsArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetGrippedComponents");

	UGripMotionControllerComponent_GetGrippedComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GrippedComponentsArray != nullptr)
		*GrippedComponentsArray = params.GrippedComponentsArray;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.GetGrippedActors
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class AActor*>          GrippedActorArray              (Parm, OutParm, ZeroConstructor)

void UGripMotionControllerComponent::GetGrippedActors(TArray<class AActor*>* GrippedActorArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetGrippedActors");

	UGripMotionControllerComponent_GetGrippedActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GrippedActorArray != nullptr)
		*GrippedActorArray = params.GrippedActorArray;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.GetGripDistance_BP
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBPActorGripInformation Grip                           (Parm, OutParm, ReferenceParm)
// struct FVector                 ExpectedLocation               (Parm, IsPlainOldData)
// float                          CurrentDistance                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGripMotionControllerComponent::GetGripDistance_BP(const struct FVector& ExpectedLocation, struct FBPActorGripInformation* Grip, float* CurrentDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetGripDistance_BP");

	UGripMotionControllerComponent_GetGripDistance_BP_Params params;
	params.ExpectedLocation = ExpectedLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Grip != nullptr)
		*Grip = params.Grip;
	if (CurrentDistance != nullptr)
		*CurrentDistance = params.CurrentDistance;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.GetGripByObject
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPActorGripInformation Grip                           (Parm, OutParm)
// class UObject*                 ObjectToLookForGrip            (Parm, ZeroConstructor, IsPlainOldData)
// EBPVRResultSwitch              Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGripMotionControllerComponent::GetGripByObject(class UObject* ObjectToLookForGrip, struct FBPActorGripInformation* Grip, EBPVRResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetGripByObject");

	UGripMotionControllerComponent_GetGripByObject_Params params;
	params.ObjectToLookForGrip = ObjectToLookForGrip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Grip != nullptr)
		*Grip = params.Grip;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.GetGripByID
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPActorGripInformation Grip                           (Parm, OutParm)
// unsigned char                  IDToLookForGrip                (Parm, ZeroConstructor, IsPlainOldData)
// EBPVRResultSwitch              Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGripMotionControllerComponent::GetGripByID(unsigned char IDToLookForGrip, struct FBPActorGripInformation* Grip, EBPVRResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetGripByID");

	UGripMotionControllerComponent_GetGripByID_Params params;
	params.IDToLookForGrip = IDToLookForGrip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Grip != nullptr)
		*Grip = params.Grip;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.GetGripByComponent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPActorGripInformation Grip                           (Parm, OutParm)
// class UPrimitiveComponent*     ComponentToLookForGrip         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EBPVRResultSwitch              Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGripMotionControllerComponent::GetGripByComponent(class UPrimitiveComponent* ComponentToLookForGrip, struct FBPActorGripInformation* Grip, EBPVRResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetGripByComponent");

	UGripMotionControllerComponent_GetGripByComponent_Params params;
	params.ComponentToLookForGrip = ComponentToLookForGrip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Grip != nullptr)
		*Grip = params.Grip;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.GetGripByActor
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPActorGripInformation Grip                           (Parm, OutParm)
// class AActor*                  ActorToLookForGrip             (Parm, ZeroConstructor, IsPlainOldData)
// EBPVRResultSwitch              Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGripMotionControllerComponent::GetGripByActor(class AActor* ActorToLookForGrip, struct FBPActorGripInformation* Grip, EBPVRResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetGripByActor");

	UGripMotionControllerComponent_GetGripByActor_Params params;
	params.ActorToLookForGrip = ActorToLookForGrip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Grip != nullptr)
		*Grip = params.Grip;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.GetControllerDeviceID
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FXRDeviceId             DeviceID                       (Parm, OutParm)
// EBPVRResultSwitch              Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bCheckOpenVROnly               (Parm, ZeroConstructor, IsPlainOldData)

void UGripMotionControllerComponent::GetControllerDeviceID(bool bCheckOpenVROnly, struct FXRDeviceId* DeviceID, EBPVRResultSwitch* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetControllerDeviceID");

	UGripMotionControllerComponent_GetControllerDeviceID_Params params;
	params.bCheckOpenVROnly = bCheckOpenVROnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeviceID != nullptr)
		*DeviceID = params.DeviceID;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.GetAllGrips
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FBPActorGripInformation> GripArray                      (Parm, OutParm, ZeroConstructor)

void UGripMotionControllerComponent::GetAllGrips(TArray<struct FBPActorGripInformation>* GripArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetAllGrips");

	UGripMotionControllerComponent_GetAllGrips_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GripArray != nullptr)
		*GripArray = params.GripArray;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.DropObjectByInterface
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 ObjectToDrop                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OptionalAngularVelocity        (Parm, IsPlainOldData)
// struct FVector                 OptionalLinearVelocity         (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGripMotionControllerComponent::DropObjectByInterface(class UObject* ObjectToDrop, const struct FVector& OptionalAngularVelocity, const struct FVector& OptionalLinearVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.DropObjectByInterface");

	UGripMotionControllerComponent_DropObjectByInterface_Params params;
	params.ObjectToDrop = ObjectToDrop;
	params.OptionalAngularVelocity = OptionalAngularVelocity;
	params.OptionalLinearVelocity = OptionalLinearVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.DropObject
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 ObjectToDrop                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSimulate                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OptionalAngularVelocity        (Parm, IsPlainOldData)
// struct FVector                 OptionalLinearVelocity         (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGripMotionControllerComponent::DropObject(class UObject* ObjectToDrop, bool bSimulate, const struct FVector& OptionalAngularVelocity, const struct FVector& OptionalLinearVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.DropObject");

	UGripMotionControllerComponent_DropObject_Params params;
	params.ObjectToDrop = ObjectToDrop;
	params.bSimulate = bSimulate;
	params.OptionalAngularVelocity = OptionalAngularVelocity;
	params.OptionalLinearVelocity = OptionalLinearVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.DropGrip
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBPActorGripInformation Grip                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bSimulate                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OptionalAngularVelocity        (Parm, IsPlainOldData)
// struct FVector                 OptionalLinearVelocity         (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGripMotionControllerComponent::DropGrip(const struct FBPActorGripInformation& Grip, bool bSimulate, const struct FVector& OptionalAngularVelocity, const struct FVector& OptionalLinearVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.DropGrip");

	UGripMotionControllerComponent_DropGrip_Params params;
	params.Grip = Grip;
	params.bSimulate = bSimulate;
	params.OptionalAngularVelocity = OptionalAngularVelocity;
	params.OptionalLinearVelocity = OptionalLinearVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.DropComponent
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     ComponentToDrop                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bSimulate                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OptionalAngularVelocity        (Parm, IsPlainOldData)
// struct FVector                 OptionalLinearVelocity         (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGripMotionControllerComponent::DropComponent(class UPrimitiveComponent* ComponentToDrop, bool bSimulate, const struct FVector& OptionalAngularVelocity, const struct FVector& OptionalLinearVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.DropComponent");

	UGripMotionControllerComponent_DropComponent_Params params;
	params.ComponentToDrop = ComponentToDrop;
	params.bSimulate = bSimulate;
	params.OptionalAngularVelocity = OptionalAngularVelocity;
	params.OptionalLinearVelocity = OptionalLinearVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.DropAndSocketObject
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 ObjectToDrop                   (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         SocketingParent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OptionalSocketName             (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform_NetQuantize  RelativeTransformToParent      (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGripMotionControllerComponent::DropAndSocketObject(class UObject* ObjectToDrop, class USceneComponent* SocketingParent, const struct FName& OptionalSocketName, const struct FTransform_NetQuantize& RelativeTransformToParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.DropAndSocketObject");

	UGripMotionControllerComponent_DropAndSocketObject_Params params;
	params.ObjectToDrop = ObjectToDrop;
	params.SocketingParent = SocketingParent;
	params.OptionalSocketName = OptionalSocketName;
	params.RelativeTransformToParent = RelativeTransformToParent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.DropAndSocketGrip
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPActorGripInformation GripToDrop                     (ConstParm, Parm, OutParm, ReferenceParm)
// class USceneComponent*         SocketingParent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OptionalSocketName             (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform_NetQuantize  RelativeTransformToParent      (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGripMotionControllerComponent::DropAndSocketGrip(const struct FBPActorGripInformation& GripToDrop, class USceneComponent* SocketingParent, const struct FName& OptionalSocketName, const struct FTransform_NetQuantize& RelativeTransformToParent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.DropAndSocketGrip");

	UGripMotionControllerComponent_DropAndSocketGrip_Params params;
	params.GripToDrop = GripToDrop;
	params.SocketingParent = SocketingParent;
	params.OptionalSocketName = OptionalSocketName;
	params.RelativeTransformToParent = RelativeTransformToParent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.DropActor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  ActorToDrop                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSimulate                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OptionalAngularVelocity        (Parm, IsPlainOldData)
// struct FVector                 OptionalLinearVelocity         (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGripMotionControllerComponent::DropActor(class AActor* ActorToDrop, bool bSimulate, const struct FVector& OptionalAngularVelocity, const struct FVector& OptionalLinearVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.DropActor");

	UGripMotionControllerComponent_DropActor_Params params;
	params.ActorToDrop = ActorToDrop;
	params.bSimulate = bSimulate;
	params.OptionalAngularVelocity = OptionalAngularVelocity;
	params.OptionalLinearVelocity = OptionalLinearVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.DestroyPhysicsHandle_BP
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPActorGripInformation Grip                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGripMotionControllerComponent::DestroyPhysicsHandle_BP(const struct FBPActorGripInformation& Grip)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.DestroyPhysicsHandle_BP");

	UGripMotionControllerComponent_DestroyPhysicsHandle_BP_Params params;
	params.Grip = Grip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.CreateGripRelativeAdditionTransform_BP
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPActorGripInformation GripToSample                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              AdditionTransform              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bGripRelative                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UGripMotionControllerComponent::CreateGripRelativeAdditionTransform_BP(const struct FBPActorGripInformation& GripToSample, const struct FTransform& AdditionTransform, bool bGripRelative)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.CreateGripRelativeAdditionTransform_BP");

	UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Params params;
	params.GripToSample = GripToSample;
	params.AdditionTransform = AdditionTransform;
	params.bGripRelative = bGripRelative;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.ConvertToGripRelativeTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              GrippedActorTransform          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FTransform              InTransform                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UGripMotionControllerComponent::STATIC_ConvertToGripRelativeTransform(const struct FTransform& GrippedActorTransform, const struct FTransform& InTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.ConvertToGripRelativeTransform");

	UGripMotionControllerComponent_ConvertToGripRelativeTransform_Params params;
	params.GrippedActorTransform = GrippedActorTransform;
	params.InTransform = InTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.ConvertToControllerRelativeTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              InTransform                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UGripMotionControllerComponent::ConvertToControllerRelativeTransform(const struct FTransform& InTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.ConvertToControllerRelativeTransform");

	UGripMotionControllerComponent_ConvertToControllerRelativeTransform_Params params;
	params.InTransform = InTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.Client_NotifyInvalidLocalGrip
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// class UObject*                 LocallyGrippedObject           (Parm, ZeroConstructor, IsPlainOldData)

void UGripMotionControllerComponent::Client_NotifyInvalidLocalGrip(class UObject* LocallyGrippedObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.Client_NotifyInvalidLocalGrip");

	UGripMotionControllerComponent_Client_NotifyInvalidLocalGrip_Params params;
	params.LocallyGrippedObject = LocallyGrippedObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.BP_HasGripMovementAuthority
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPActorGripInformation Grip                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGripMotionControllerComponent::BP_HasGripMovementAuthority(const struct FBPActorGripInformation& Grip)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.BP_HasGripMovementAuthority");

	UGripMotionControllerComponent_BP_HasGripMovementAuthority_Params params;
	params.Grip = Grip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.BP_HasGripAuthority
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPActorGripInformation Grip                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGripMotionControllerComponent::BP_HasGripAuthority(const struct FBPActorGripInformation& Grip)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.BP_HasGripAuthority");

	UGripMotionControllerComponent_BP_HasGripAuthority_Params params;
	params.Grip = Grip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GripMotionControllerComponent.AddSecondaryAttachmentPoint
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 GrippedObjectToAddAttachment   (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         SecondaryPointComponent        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FTransform              OriginalTransform              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bTransformIsAlreadyRelative    (Parm, ZeroConstructor, IsPlainOldData)
// float                          LerpToTime                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsSlotGrip                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGripMotionControllerComponent::AddSecondaryAttachmentPoint(class UObject* GrippedObjectToAddAttachment, class USceneComponent* SecondaryPointComponent, const struct FTransform& OriginalTransform, bool bTransformIsAlreadyRelative, float LerpToTime, bool bIsSlotGrip)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.AddSecondaryAttachmentPoint");

	UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Params params;
	params.GrippedObjectToAddAttachment = GrippedObjectToAddAttachment;
	params.SecondaryPointComponent = SecondaryPointComponent;
	params.OriginalTransform = OriginalTransform;
	params.bTransformIsAlreadyRelative = bTransformIsAlreadyRelative;
	params.LerpToTime = LerpToTime;
	params.bIsSlotGrip = bIsSlotGrip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableActor.TickGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AGrippableActor::TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.TickGrip");

	AGrippableActor_TickGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableActor.TeleportBehavior
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripInterfaceTeleportBehavior ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripInterfaceTeleportBehavior AGrippableActor::TeleportBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.TeleportBehavior");

	AGrippableActor_TeleportBehavior_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableActor.SimulateOnDrop
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGrippableActor::SimulateOnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.SimulateOnDrop");

	AGrippableActor_SimulateOnDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableActor.SetHeld
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* HoldingController              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsHeld                        (Parm, ZeroConstructor, IsPlainOldData)

void AGrippableActor::SetHeld(class UGripMotionControllerComponent* HoldingController, bool bIsHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.SetHeld");

	AGrippableActor_SetHeld_Params params;
	params.HoldingController = HoldingController;
	params.bIsHeld = bIsHeld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableActor.SecondaryGripType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESecondaryGripType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESecondaryGripType AGrippableActor::SecondaryGripType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.SecondaryGripType");

	AGrippableActor_SecondaryGripType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableActor.RequestsSocketing
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         ParentToSocketTo               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OptionalSocketName             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform_NetQuantize  RelativeTransform              (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGrippableActor::RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.RequestsSocketing");

	AGrippableActor_RequestsSocketing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParentToSocketTo != nullptr)
		*ParentToSocketTo = params.ParentToSocketTo;
	if (OptionalSocketName != nullptr)
		*OptionalSocketName = params.OptionalSocketName;
	if (RelativeTransform != nullptr)
		*RelativeTransform = params.RelativeTransform;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableActor.OnUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void AGrippableActor::OnUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.OnUsed");

	AGrippableActor_OnUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableActor.OnSecondaryUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void AGrippableActor::OnSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.OnSecondaryUsed");

	AGrippableActor_OnSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableActor.OnSecondaryGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent*         ReleasingSecondaryGripComponent (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void AGrippableActor::OnSecondaryGripRelease(class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.OnSecondaryGripRelease");

	AGrippableActor_OnSecondaryGripRelease_Params params;
	params.ReleasingSecondaryGripComponent = ReleasingSecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableActor.OnSecondaryGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent*         SecondaryGripComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void AGrippableActor::OnSecondaryGrip(class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.OnSecondaryGrip");

	AGrippableActor_OnSecondaryGrip_Params params;
	params.SecondaryGripComponent = SecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableActor.OnInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)
// TEnumAsByte<EInputEvent>       KeyEvent                       (Parm, ZeroConstructor, IsPlainOldData)

void AGrippableActor::OnInput(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.OnInput");

	AGrippableActor_OnInput_Params params;
	params.Key = Key;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableActor.OnGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* ReleasingController            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasSocketed                   (Parm, ZeroConstructor, IsPlainOldData)

void AGrippableActor::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.OnGripRelease");

	AGrippableActor_OnGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableActor.OnGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void AGrippableActor::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.OnGrip");

	AGrippableActor_OnGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableActor.OnEndUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void AGrippableActor::OnEndUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.OnEndUsed");

	AGrippableActor_OnEndUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableActor.OnEndSecondaryUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void AGrippableActor::OnEndSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.OnEndSecondaryUsed");

	AGrippableActor_OnEndSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableActor.OnChildGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* ReleasingController            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasSocketed                   (Parm, ZeroConstructor, IsPlainOldData)

void AGrippableActor::OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.OnChildGripRelease");

	AGrippableActor_OnChildGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableActor.OnChildGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void AGrippableActor::OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.OnChildGrip");

	AGrippableActor_OnChildGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableActor.IsHeld
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* HoldingController              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsHeld                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGrippableActor::IsHeld(class UGripMotionControllerComponent** HoldingController, bool* bIsHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.IsHeld");

	AGrippableActor_IsHeld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HoldingController != nullptr)
		*HoldingController = params.HoldingController;
	if (bIsHeld != nullptr)
		*bIsHeld = params.bIsHeld;
}


// Function VRExpansionPlugin.GrippableActor.GripMovementReplicationType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripMovementReplicationSettings ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripMovementReplicationSettings AGrippableActor::GripMovementReplicationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.GripMovementReplicationType");

	AGrippableActor_GripMovementReplicationType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableActor.GripLateUpdateSetting
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripLateUpdateSettings        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripLateUpdateSettings AGrippableActor::GripLateUpdateSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.GripLateUpdateSetting");

	AGrippableActor_GripLateUpdateSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableActor.GripBreakDistance
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGrippableActor::GripBreakDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.GripBreakDistance");

	AGrippableActor_GripBreakDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableActor.GetPrimaryGripType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsSlot                        (Parm, ZeroConstructor, IsPlainOldData)
// EGripCollisionType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripCollisionType AGrippableActor::GetPrimaryGripType(bool bIsSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.GetPrimaryGripType");

	AGrippableActor_GetPrimaryGripType_Params params;
	params.bIsSlot = bIsSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableActor.GetGripStiffnessAndDamping
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GripStiffnessOut               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          GripDampingOut                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGrippableActor::GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.GetGripStiffnessAndDamping");

	AGrippableActor_GetGripStiffnessAndDamping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GripStiffnessOut != nullptr)
		*GripStiffnessOut = params.GripStiffnessOut;
	if (GripDampingOut != nullptr)
		*GripDampingOut = params.GripDampingOut;
}


// Function VRExpansionPlugin.GrippableActor.DenyGripping
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGrippableActor::DenyGripping()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.DenyGripping");

	AGrippableActor_DenyGripping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableActor.ClosestGripSlotInRange
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, IsPlainOldData)
// bool                           bSecondarySlot                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHadSlotInRange                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SlotWorldTransform             (Parm, OutParm, IsPlainOldData)
// class UGripMotionControllerComponent* CallingController              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverridePrefix                 (Parm, ZeroConstructor, IsPlainOldData)

void AGrippableActor::ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, class UGripMotionControllerComponent* CallingController, const struct FName& OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.ClosestGripSlotInRange");

	AGrippableActor_ClosestGripSlotInRange_Params params;
	params.WorldLocation = WorldLocation;
	params.bSecondarySlot = bSecondarySlot;
	params.CallingController = CallingController;
	params.OverridePrefix = OverridePrefix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHadSlotInRange != nullptr)
		*bHadSlotInRange = params.bHadSlotInRange;
	if (SlotWorldTransform != nullptr)
		*SlotWorldTransform = params.SlotWorldTransform;
}


// Function VRExpansionPlugin.GrippableActor.AdvancedGripSettings
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBPAdvGripSettings      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBPAdvGripSettings AGrippableActor::AdvancedGripSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.AdvancedGripSettings");

	AGrippableActor_AdvancedGripSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableBoxComponent.TickGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableBoxComponent::TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.TickGrip");

	UGrippableBoxComponent_TickGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableBoxComponent.TeleportBehavior
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripInterfaceTeleportBehavior ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripInterfaceTeleportBehavior UGrippableBoxComponent::TeleportBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.TeleportBehavior");

	UGrippableBoxComponent_TeleportBehavior_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableBoxComponent.SimulateOnDrop
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGrippableBoxComponent::SimulateOnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.SimulateOnDrop");

	UGrippableBoxComponent_SimulateOnDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableBoxComponent.SetHeld
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* HoldingController              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsHeld                        (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableBoxComponent::SetHeld(class UGripMotionControllerComponent* HoldingController, bool bIsHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.SetHeld");

	UGrippableBoxComponent_SetHeld_Params params;
	params.HoldingController = HoldingController;
	params.bIsHeld = bIsHeld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableBoxComponent.SecondaryGripType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESecondaryGripType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESecondaryGripType UGrippableBoxComponent::SecondaryGripType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.SecondaryGripType");

	UGrippableBoxComponent_SecondaryGripType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableBoxComponent.RequestsSocketing
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         ParentToSocketTo               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OptionalSocketName             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform_NetQuantize  RelativeTransform              (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGrippableBoxComponent::RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.RequestsSocketing");

	UGrippableBoxComponent_RequestsSocketing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParentToSocketTo != nullptr)
		*ParentToSocketTo = params.ParentToSocketTo;
	if (OptionalSocketName != nullptr)
		*OptionalSocketName = params.OptionalSocketName;
	if (RelativeTransform != nullptr)
		*RelativeTransform = params.RelativeTransform;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableBoxComponent.OnUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UGrippableBoxComponent::OnUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.OnUsed");

	UGrippableBoxComponent_OnUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableBoxComponent.OnSecondaryUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UGrippableBoxComponent::OnSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.OnSecondaryUsed");

	UGrippableBoxComponent_OnSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableBoxComponent.OnSecondaryGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent*         ReleasingSecondaryGripComponent (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UGrippableBoxComponent::OnSecondaryGripRelease(class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.OnSecondaryGripRelease");

	UGrippableBoxComponent_OnSecondaryGripRelease_Params params;
	params.ReleasingSecondaryGripComponent = ReleasingSecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableBoxComponent.OnSecondaryGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent*         SecondaryGripComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UGrippableBoxComponent::OnSecondaryGrip(class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.OnSecondaryGrip");

	UGrippableBoxComponent_OnSecondaryGrip_Params params;
	params.SecondaryGripComponent = SecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableBoxComponent.OnInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)
// TEnumAsByte<EInputEvent>       KeyEvent                       (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableBoxComponent::OnInput(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.OnInput");

	UGrippableBoxComponent_OnInput_Params params;
	params.Key = Key;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableBoxComponent.OnGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* ReleasingController            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasSocketed                   (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableBoxComponent::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.OnGripRelease");

	UGrippableBoxComponent_OnGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableBoxComponent.OnGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UGrippableBoxComponent::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.OnGrip");

	UGrippableBoxComponent_OnGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableBoxComponent.OnEndUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UGrippableBoxComponent::OnEndUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.OnEndUsed");

	UGrippableBoxComponent_OnEndUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableBoxComponent.OnEndSecondaryUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UGrippableBoxComponent::OnEndSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.OnEndSecondaryUsed");

	UGrippableBoxComponent_OnEndSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableBoxComponent.OnChildGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* ReleasingController            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasSocketed                   (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableBoxComponent::OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.OnChildGripRelease");

	UGrippableBoxComponent_OnChildGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableBoxComponent.OnChildGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UGrippableBoxComponent::OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.OnChildGrip");

	UGrippableBoxComponent_OnChildGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableBoxComponent.IsHeld
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* HoldingController              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsHeld                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGrippableBoxComponent::IsHeld(class UGripMotionControllerComponent** HoldingController, bool* bIsHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.IsHeld");

	UGrippableBoxComponent_IsHeld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HoldingController != nullptr)
		*HoldingController = params.HoldingController;
	if (bIsHeld != nullptr)
		*bIsHeld = params.bIsHeld;
}


// Function VRExpansionPlugin.GrippableBoxComponent.GripMovementReplicationType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripMovementReplicationSettings ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripMovementReplicationSettings UGrippableBoxComponent::GripMovementReplicationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.GripMovementReplicationType");

	UGrippableBoxComponent_GripMovementReplicationType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableBoxComponent.GripLateUpdateSetting
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripLateUpdateSettings        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripLateUpdateSettings UGrippableBoxComponent::GripLateUpdateSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.GripLateUpdateSetting");

	UGrippableBoxComponent_GripLateUpdateSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableBoxComponent.GripBreakDistance
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGrippableBoxComponent::GripBreakDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.GripBreakDistance");

	UGrippableBoxComponent_GripBreakDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableBoxComponent.GetPrimaryGripType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsSlot                        (Parm, ZeroConstructor, IsPlainOldData)
// EGripCollisionType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripCollisionType UGrippableBoxComponent::GetPrimaryGripType(bool bIsSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.GetPrimaryGripType");

	UGrippableBoxComponent_GetPrimaryGripType_Params params;
	params.bIsSlot = bIsSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableBoxComponent.GetGripStiffnessAndDamping
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GripStiffnessOut               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          GripDampingOut                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGrippableBoxComponent::GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.GetGripStiffnessAndDamping");

	UGrippableBoxComponent_GetGripStiffnessAndDamping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GripStiffnessOut != nullptr)
		*GripStiffnessOut = params.GripStiffnessOut;
	if (GripDampingOut != nullptr)
		*GripDampingOut = params.GripDampingOut;
}


// Function VRExpansionPlugin.GrippableBoxComponent.DenyGripping
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGrippableBoxComponent::DenyGripping()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.DenyGripping");

	UGrippableBoxComponent_DenyGripping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableBoxComponent.ClosestGripSlotInRange
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, IsPlainOldData)
// bool                           bSecondarySlot                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHadSlotInRange                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SlotWorldTransform             (Parm, OutParm, IsPlainOldData)
// class UGripMotionControllerComponent* CallingController              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverridePrefix                 (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableBoxComponent::ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, class UGripMotionControllerComponent* CallingController, const struct FName& OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.ClosestGripSlotInRange");

	UGrippableBoxComponent_ClosestGripSlotInRange_Params params;
	params.WorldLocation = WorldLocation;
	params.bSecondarySlot = bSecondarySlot;
	params.CallingController = CallingController;
	params.OverridePrefix = OverridePrefix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHadSlotInRange != nullptr)
		*bHadSlotInRange = params.bHadSlotInRange;
	if (SlotWorldTransform != nullptr)
		*SlotWorldTransform = params.SlotWorldTransform;
}


// Function VRExpansionPlugin.GrippableBoxComponent.AdvancedGripSettings
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBPAdvGripSettings      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBPAdvGripSettings UGrippableBoxComponent::AdvancedGripSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.AdvancedGripSettings");

	UGrippableBoxComponent_AdvancedGripSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableCapsuleComponent.TickGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableCapsuleComponent::TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.TickGrip");

	UGrippableCapsuleComponent_TickGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableCapsuleComponent.TeleportBehavior
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripInterfaceTeleportBehavior ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripInterfaceTeleportBehavior UGrippableCapsuleComponent::TeleportBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.TeleportBehavior");

	UGrippableCapsuleComponent_TeleportBehavior_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableCapsuleComponent.SimulateOnDrop
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGrippableCapsuleComponent::SimulateOnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.SimulateOnDrop");

	UGrippableCapsuleComponent_SimulateOnDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableCapsuleComponent.SetHeld
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* HoldingController              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsHeld                        (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableCapsuleComponent::SetHeld(class UGripMotionControllerComponent* HoldingController, bool bIsHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.SetHeld");

	UGrippableCapsuleComponent_SetHeld_Params params;
	params.HoldingController = HoldingController;
	params.bIsHeld = bIsHeld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableCapsuleComponent.SecondaryGripType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESecondaryGripType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESecondaryGripType UGrippableCapsuleComponent::SecondaryGripType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.SecondaryGripType");

	UGrippableCapsuleComponent_SecondaryGripType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableCapsuleComponent.RequestsSocketing
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         ParentToSocketTo               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OptionalSocketName             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform_NetQuantize  RelativeTransform              (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGrippableCapsuleComponent::RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.RequestsSocketing");

	UGrippableCapsuleComponent_RequestsSocketing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParentToSocketTo != nullptr)
		*ParentToSocketTo = params.ParentToSocketTo;
	if (OptionalSocketName != nullptr)
		*OptionalSocketName = params.OptionalSocketName;
	if (RelativeTransform != nullptr)
		*RelativeTransform = params.RelativeTransform;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableCapsuleComponent.OnUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UGrippableCapsuleComponent::OnUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.OnUsed");

	UGrippableCapsuleComponent_OnUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableCapsuleComponent.OnSecondaryUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UGrippableCapsuleComponent::OnSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.OnSecondaryUsed");

	UGrippableCapsuleComponent_OnSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableCapsuleComponent.OnSecondaryGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent*         ReleasingSecondaryGripComponent (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UGrippableCapsuleComponent::OnSecondaryGripRelease(class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.OnSecondaryGripRelease");

	UGrippableCapsuleComponent_OnSecondaryGripRelease_Params params;
	params.ReleasingSecondaryGripComponent = ReleasingSecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableCapsuleComponent.OnSecondaryGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent*         SecondaryGripComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UGrippableCapsuleComponent::OnSecondaryGrip(class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.OnSecondaryGrip");

	UGrippableCapsuleComponent_OnSecondaryGrip_Params params;
	params.SecondaryGripComponent = SecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableCapsuleComponent.OnInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)
// TEnumAsByte<EInputEvent>       KeyEvent                       (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableCapsuleComponent::OnInput(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.OnInput");

	UGrippableCapsuleComponent_OnInput_Params params;
	params.Key = Key;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableCapsuleComponent.OnGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* ReleasingController            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasSocketed                   (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableCapsuleComponent::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.OnGripRelease");

	UGrippableCapsuleComponent_OnGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableCapsuleComponent.OnGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UGrippableCapsuleComponent::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.OnGrip");

	UGrippableCapsuleComponent_OnGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableCapsuleComponent.OnEndUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UGrippableCapsuleComponent::OnEndUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.OnEndUsed");

	UGrippableCapsuleComponent_OnEndUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableCapsuleComponent.OnEndSecondaryUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UGrippableCapsuleComponent::OnEndSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.OnEndSecondaryUsed");

	UGrippableCapsuleComponent_OnEndSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableCapsuleComponent.OnChildGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* ReleasingController            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasSocketed                   (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableCapsuleComponent::OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.OnChildGripRelease");

	UGrippableCapsuleComponent_OnChildGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableCapsuleComponent.OnChildGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UGrippableCapsuleComponent::OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.OnChildGrip");

	UGrippableCapsuleComponent_OnChildGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableCapsuleComponent.IsHeld
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* HoldingController              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsHeld                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGrippableCapsuleComponent::IsHeld(class UGripMotionControllerComponent** HoldingController, bool* bIsHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.IsHeld");

	UGrippableCapsuleComponent_IsHeld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HoldingController != nullptr)
		*HoldingController = params.HoldingController;
	if (bIsHeld != nullptr)
		*bIsHeld = params.bIsHeld;
}


// Function VRExpansionPlugin.GrippableCapsuleComponent.GripMovementReplicationType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripMovementReplicationSettings ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripMovementReplicationSettings UGrippableCapsuleComponent::GripMovementReplicationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.GripMovementReplicationType");

	UGrippableCapsuleComponent_GripMovementReplicationType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableCapsuleComponent.GripLateUpdateSetting
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripLateUpdateSettings        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripLateUpdateSettings UGrippableCapsuleComponent::GripLateUpdateSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.GripLateUpdateSetting");

	UGrippableCapsuleComponent_GripLateUpdateSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableCapsuleComponent.GripBreakDistance
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGrippableCapsuleComponent::GripBreakDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.GripBreakDistance");

	UGrippableCapsuleComponent_GripBreakDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableCapsuleComponent.GetPrimaryGripType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsSlot                        (Parm, ZeroConstructor, IsPlainOldData)
// EGripCollisionType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripCollisionType UGrippableCapsuleComponent::GetPrimaryGripType(bool bIsSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.GetPrimaryGripType");

	UGrippableCapsuleComponent_GetPrimaryGripType_Params params;
	params.bIsSlot = bIsSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableCapsuleComponent.GetGripStiffnessAndDamping
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GripStiffnessOut               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          GripDampingOut                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGrippableCapsuleComponent::GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.GetGripStiffnessAndDamping");

	UGrippableCapsuleComponent_GetGripStiffnessAndDamping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GripStiffnessOut != nullptr)
		*GripStiffnessOut = params.GripStiffnessOut;
	if (GripDampingOut != nullptr)
		*GripDampingOut = params.GripDampingOut;
}


// Function VRExpansionPlugin.GrippableCapsuleComponent.DenyGripping
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGrippableCapsuleComponent::DenyGripping()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.DenyGripping");

	UGrippableCapsuleComponent_DenyGripping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableCapsuleComponent.ClosestGripSlotInRange
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, IsPlainOldData)
// bool                           bSecondarySlot                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHadSlotInRange                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SlotWorldTransform             (Parm, OutParm, IsPlainOldData)
// class UGripMotionControllerComponent* CallingController              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverridePrefix                 (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableCapsuleComponent::ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, class UGripMotionControllerComponent* CallingController, const struct FName& OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.ClosestGripSlotInRange");

	UGrippableCapsuleComponent_ClosestGripSlotInRange_Params params;
	params.WorldLocation = WorldLocation;
	params.bSecondarySlot = bSecondarySlot;
	params.CallingController = CallingController;
	params.OverridePrefix = OverridePrefix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHadSlotInRange != nullptr)
		*bHadSlotInRange = params.bHadSlotInRange;
	if (SlotWorldTransform != nullptr)
		*SlotWorldTransform = params.SlotWorldTransform;
}


// Function VRExpansionPlugin.GrippableCapsuleComponent.AdvancedGripSettings
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBPAdvGripSettings      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBPAdvGripSettings UGrippableCapsuleComponent::AdvancedGripSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.AdvancedGripSettings");

	UGrippableCapsuleComponent_AdvancedGripSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshActor.TickGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AGrippableSkeletalMeshActor::TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.TickGrip");

	AGrippableSkeletalMeshActor_TickGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshActor.TeleportBehavior
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripInterfaceTeleportBehavior ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripInterfaceTeleportBehavior AGrippableSkeletalMeshActor::TeleportBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.TeleportBehavior");

	AGrippableSkeletalMeshActor_TeleportBehavior_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshActor.SimulateOnDrop
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGrippableSkeletalMeshActor::SimulateOnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.SimulateOnDrop");

	AGrippableSkeletalMeshActor_SimulateOnDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshActor.SetHeld
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* HoldingController              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsHeld                        (Parm, ZeroConstructor, IsPlainOldData)

void AGrippableSkeletalMeshActor::SetHeld(class UGripMotionControllerComponent* HoldingController, bool bIsHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.SetHeld");

	AGrippableSkeletalMeshActor_SetHeld_Params params;
	params.HoldingController = HoldingController;
	params.bIsHeld = bIsHeld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshActor.SecondaryGripType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESecondaryGripType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESecondaryGripType AGrippableSkeletalMeshActor::SecondaryGripType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.SecondaryGripType");

	AGrippableSkeletalMeshActor_SecondaryGripType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshActor.RequestsSocketing
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         ParentToSocketTo               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OptionalSocketName             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform_NetQuantize  RelativeTransform              (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGrippableSkeletalMeshActor::RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.RequestsSocketing");

	AGrippableSkeletalMeshActor_RequestsSocketing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParentToSocketTo != nullptr)
		*ParentToSocketTo = params.ParentToSocketTo;
	if (OptionalSocketName != nullptr)
		*OptionalSocketName = params.OptionalSocketName;
	if (RelativeTransform != nullptr)
		*RelativeTransform = params.RelativeTransform;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void AGrippableSkeletalMeshActor::OnUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnUsed");

	AGrippableSkeletalMeshActor_OnUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnSecondaryUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void AGrippableSkeletalMeshActor::OnSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnSecondaryUsed");

	AGrippableSkeletalMeshActor_OnSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnSecondaryGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent*         ReleasingSecondaryGripComponent (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void AGrippableSkeletalMeshActor::OnSecondaryGripRelease(class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnSecondaryGripRelease");

	AGrippableSkeletalMeshActor_OnSecondaryGripRelease_Params params;
	params.ReleasingSecondaryGripComponent = ReleasingSecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnSecondaryGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent*         SecondaryGripComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void AGrippableSkeletalMeshActor::OnSecondaryGrip(class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnSecondaryGrip");

	AGrippableSkeletalMeshActor_OnSecondaryGrip_Params params;
	params.SecondaryGripComponent = SecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)
// TEnumAsByte<EInputEvent>       KeyEvent                       (Parm, ZeroConstructor, IsPlainOldData)

void AGrippableSkeletalMeshActor::OnInput(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnInput");

	AGrippableSkeletalMeshActor_OnInput_Params params;
	params.Key = Key;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* ReleasingController            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasSocketed                   (Parm, ZeroConstructor, IsPlainOldData)

void AGrippableSkeletalMeshActor::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnGripRelease");

	AGrippableSkeletalMeshActor_OnGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void AGrippableSkeletalMeshActor::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnGrip");

	AGrippableSkeletalMeshActor_OnGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnEndUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void AGrippableSkeletalMeshActor::OnEndUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnEndUsed");

	AGrippableSkeletalMeshActor_OnEndUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnEndSecondaryUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void AGrippableSkeletalMeshActor::OnEndSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnEndSecondaryUsed");

	AGrippableSkeletalMeshActor_OnEndSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnChildGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* ReleasingController            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasSocketed                   (Parm, ZeroConstructor, IsPlainOldData)

void AGrippableSkeletalMeshActor::OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnChildGripRelease");

	AGrippableSkeletalMeshActor_OnChildGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnChildGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void AGrippableSkeletalMeshActor::OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.OnChildGrip");

	AGrippableSkeletalMeshActor_OnChildGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshActor.IsHeld
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* HoldingController              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsHeld                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGrippableSkeletalMeshActor::IsHeld(class UGripMotionControllerComponent** HoldingController, bool* bIsHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.IsHeld");

	AGrippableSkeletalMeshActor_IsHeld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HoldingController != nullptr)
		*HoldingController = params.HoldingController;
	if (bIsHeld != nullptr)
		*bIsHeld = params.bIsHeld;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshActor.GripMovementReplicationType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripMovementReplicationSettings ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripMovementReplicationSettings AGrippableSkeletalMeshActor::GripMovementReplicationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.GripMovementReplicationType");

	AGrippableSkeletalMeshActor_GripMovementReplicationType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshActor.GripLateUpdateSetting
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripLateUpdateSettings        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripLateUpdateSettings AGrippableSkeletalMeshActor::GripLateUpdateSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.GripLateUpdateSetting");

	AGrippableSkeletalMeshActor_GripLateUpdateSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshActor.GripBreakDistance
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGrippableSkeletalMeshActor::GripBreakDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.GripBreakDistance");

	AGrippableSkeletalMeshActor_GripBreakDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshActor.GetPrimaryGripType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsSlot                        (Parm, ZeroConstructor, IsPlainOldData)
// EGripCollisionType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripCollisionType AGrippableSkeletalMeshActor::GetPrimaryGripType(bool bIsSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.GetPrimaryGripType");

	AGrippableSkeletalMeshActor_GetPrimaryGripType_Params params;
	params.bIsSlot = bIsSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshActor.GetGripStiffnessAndDamping
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GripStiffnessOut               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          GripDampingOut                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGrippableSkeletalMeshActor::GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.GetGripStiffnessAndDamping");

	AGrippableSkeletalMeshActor_GetGripStiffnessAndDamping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GripStiffnessOut != nullptr)
		*GripStiffnessOut = params.GripStiffnessOut;
	if (GripDampingOut != nullptr)
		*GripDampingOut = params.GripDampingOut;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshActor.DenyGripping
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGrippableSkeletalMeshActor::DenyGripping()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.DenyGripping");

	AGrippableSkeletalMeshActor_DenyGripping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshActor.ClosestGripSlotInRange
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, IsPlainOldData)
// bool                           bSecondarySlot                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHadSlotInRange                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SlotWorldTransform             (Parm, OutParm, IsPlainOldData)
// class UGripMotionControllerComponent* CallingController              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverridePrefix                 (Parm, ZeroConstructor, IsPlainOldData)

void AGrippableSkeletalMeshActor::ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, class UGripMotionControllerComponent* CallingController, const struct FName& OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.ClosestGripSlotInRange");

	AGrippableSkeletalMeshActor_ClosestGripSlotInRange_Params params;
	params.WorldLocation = WorldLocation;
	params.bSecondarySlot = bSecondarySlot;
	params.CallingController = CallingController;
	params.OverridePrefix = OverridePrefix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHadSlotInRange != nullptr)
		*bHadSlotInRange = params.bHadSlotInRange;
	if (SlotWorldTransform != nullptr)
		*SlotWorldTransform = params.SlotWorldTransform;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshActor.AdvancedGripSettings
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBPAdvGripSettings      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBPAdvGripSettings AGrippableSkeletalMeshActor::AdvancedGripSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.AdvancedGripSettings");

	AGrippableSkeletalMeshActor_AdvancedGripSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.TickGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableSkeletalMeshComponent::TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.TickGrip");

	UGrippableSkeletalMeshComponent_TickGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.TeleportBehavior
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripInterfaceTeleportBehavior ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripInterfaceTeleportBehavior UGrippableSkeletalMeshComponent::TeleportBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.TeleportBehavior");

	UGrippableSkeletalMeshComponent_TeleportBehavior_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.SimulateOnDrop
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGrippableSkeletalMeshComponent::SimulateOnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.SimulateOnDrop");

	UGrippableSkeletalMeshComponent_SimulateOnDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.SetHeld
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* HoldingController              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsHeld                        (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableSkeletalMeshComponent::SetHeld(class UGripMotionControllerComponent* HoldingController, bool bIsHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.SetHeld");

	UGrippableSkeletalMeshComponent_SetHeld_Params params;
	params.HoldingController = HoldingController;
	params.bIsHeld = bIsHeld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.SecondaryGripType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESecondaryGripType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESecondaryGripType UGrippableSkeletalMeshComponent::SecondaryGripType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.SecondaryGripType");

	UGrippableSkeletalMeshComponent_SecondaryGripType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.RequestsSocketing
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         ParentToSocketTo               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OptionalSocketName             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform_NetQuantize  RelativeTransform              (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGrippableSkeletalMeshComponent::RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.RequestsSocketing");

	UGrippableSkeletalMeshComponent_RequestsSocketing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParentToSocketTo != nullptr)
		*ParentToSocketTo = params.ParentToSocketTo;
	if (OptionalSocketName != nullptr)
		*OptionalSocketName = params.OptionalSocketName;
	if (RelativeTransform != nullptr)
		*RelativeTransform = params.RelativeTransform;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UGrippableSkeletalMeshComponent::OnUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnUsed");

	UGrippableSkeletalMeshComponent_OnUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnSecondaryUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UGrippableSkeletalMeshComponent::OnSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnSecondaryUsed");

	UGrippableSkeletalMeshComponent_OnSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnSecondaryGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent*         ReleasingSecondaryGripComponent (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UGrippableSkeletalMeshComponent::OnSecondaryGripRelease(class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnSecondaryGripRelease");

	UGrippableSkeletalMeshComponent_OnSecondaryGripRelease_Params params;
	params.ReleasingSecondaryGripComponent = ReleasingSecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnSecondaryGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent*         SecondaryGripComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UGrippableSkeletalMeshComponent::OnSecondaryGrip(class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnSecondaryGrip");

	UGrippableSkeletalMeshComponent_OnSecondaryGrip_Params params;
	params.SecondaryGripComponent = SecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)
// TEnumAsByte<EInputEvent>       KeyEvent                       (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableSkeletalMeshComponent::OnInput(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnInput");

	UGrippableSkeletalMeshComponent_OnInput_Params params;
	params.Key = Key;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* ReleasingController            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasSocketed                   (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableSkeletalMeshComponent::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnGripRelease");

	UGrippableSkeletalMeshComponent_OnGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UGrippableSkeletalMeshComponent::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnGrip");

	UGrippableSkeletalMeshComponent_OnGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnEndUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UGrippableSkeletalMeshComponent::OnEndUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnEndUsed");

	UGrippableSkeletalMeshComponent_OnEndUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnEndSecondaryUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UGrippableSkeletalMeshComponent::OnEndSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnEndSecondaryUsed");

	UGrippableSkeletalMeshComponent_OnEndSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnChildGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* ReleasingController            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasSocketed                   (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableSkeletalMeshComponent::OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnChildGripRelease");

	UGrippableSkeletalMeshComponent_OnChildGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnChildGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UGrippableSkeletalMeshComponent::OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.OnChildGrip");

	UGrippableSkeletalMeshComponent_OnChildGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.IsHeld
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* HoldingController              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsHeld                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGrippableSkeletalMeshComponent::IsHeld(class UGripMotionControllerComponent** HoldingController, bool* bIsHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.IsHeld");

	UGrippableSkeletalMeshComponent_IsHeld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HoldingController != nullptr)
		*HoldingController = params.HoldingController;
	if (bIsHeld != nullptr)
		*bIsHeld = params.bIsHeld;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.GripMovementReplicationType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripMovementReplicationSettings ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripMovementReplicationSettings UGrippableSkeletalMeshComponent::GripMovementReplicationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.GripMovementReplicationType");

	UGrippableSkeletalMeshComponent_GripMovementReplicationType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.GripLateUpdateSetting
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripLateUpdateSettings        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripLateUpdateSettings UGrippableSkeletalMeshComponent::GripLateUpdateSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.GripLateUpdateSetting");

	UGrippableSkeletalMeshComponent_GripLateUpdateSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.GripBreakDistance
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGrippableSkeletalMeshComponent::GripBreakDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.GripBreakDistance");

	UGrippableSkeletalMeshComponent_GripBreakDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.GetPrimaryGripType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsSlot                        (Parm, ZeroConstructor, IsPlainOldData)
// EGripCollisionType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripCollisionType UGrippableSkeletalMeshComponent::GetPrimaryGripType(bool bIsSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.GetPrimaryGripType");

	UGrippableSkeletalMeshComponent_GetPrimaryGripType_Params params;
	params.bIsSlot = bIsSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.GetGripStiffnessAndDamping
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GripStiffnessOut               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          GripDampingOut                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGrippableSkeletalMeshComponent::GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.GetGripStiffnessAndDamping");

	UGrippableSkeletalMeshComponent_GetGripStiffnessAndDamping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GripStiffnessOut != nullptr)
		*GripStiffnessOut = params.GripStiffnessOut;
	if (GripDampingOut != nullptr)
		*GripDampingOut = params.GripDampingOut;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.DenyGripping
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGrippableSkeletalMeshComponent::DenyGripping()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.DenyGripping");

	UGrippableSkeletalMeshComponent_DenyGripping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.ClosestGripSlotInRange
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, IsPlainOldData)
// bool                           bSecondarySlot                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHadSlotInRange                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SlotWorldTransform             (Parm, OutParm, IsPlainOldData)
// class UGripMotionControllerComponent* CallingController              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverridePrefix                 (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableSkeletalMeshComponent::ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, class UGripMotionControllerComponent* CallingController, const struct FName& OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.ClosestGripSlotInRange");

	UGrippableSkeletalMeshComponent_ClosestGripSlotInRange_Params params;
	params.WorldLocation = WorldLocation;
	params.bSecondarySlot = bSecondarySlot;
	params.CallingController = CallingController;
	params.OverridePrefix = OverridePrefix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHadSlotInRange != nullptr)
		*bHadSlotInRange = params.bHadSlotInRange;
	if (SlotWorldTransform != nullptr)
		*SlotWorldTransform = params.SlotWorldTransform;
}


// Function VRExpansionPlugin.GrippableSkeletalMeshComponent.AdvancedGripSettings
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBPAdvGripSettings      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBPAdvGripSettings UGrippableSkeletalMeshComponent::AdvancedGripSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.AdvancedGripSettings");

	UGrippableSkeletalMeshComponent_AdvancedGripSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSphereComponent.TickGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableSphereComponent::TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.TickGrip");

	UGrippableSphereComponent_TickGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSphereComponent.TeleportBehavior
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripInterfaceTeleportBehavior ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripInterfaceTeleportBehavior UGrippableSphereComponent::TeleportBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.TeleportBehavior");

	UGrippableSphereComponent_TeleportBehavior_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSphereComponent.SimulateOnDrop
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGrippableSphereComponent::SimulateOnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.SimulateOnDrop");

	UGrippableSphereComponent_SimulateOnDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSphereComponent.SetHeld
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* HoldingController              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsHeld                        (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableSphereComponent::SetHeld(class UGripMotionControllerComponent* HoldingController, bool bIsHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.SetHeld");

	UGrippableSphereComponent_SetHeld_Params params;
	params.HoldingController = HoldingController;
	params.bIsHeld = bIsHeld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSphereComponent.SecondaryGripType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESecondaryGripType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESecondaryGripType UGrippableSphereComponent::SecondaryGripType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.SecondaryGripType");

	UGrippableSphereComponent_SecondaryGripType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSphereComponent.RequestsSocketing
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         ParentToSocketTo               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OptionalSocketName             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform_NetQuantize  RelativeTransform              (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGrippableSphereComponent::RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.RequestsSocketing");

	UGrippableSphereComponent_RequestsSocketing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParentToSocketTo != nullptr)
		*ParentToSocketTo = params.ParentToSocketTo;
	if (OptionalSocketName != nullptr)
		*OptionalSocketName = params.OptionalSocketName;
	if (RelativeTransform != nullptr)
		*RelativeTransform = params.RelativeTransform;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSphereComponent.OnUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UGrippableSphereComponent::OnUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.OnUsed");

	UGrippableSphereComponent_OnUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSphereComponent.OnSecondaryUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UGrippableSphereComponent::OnSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.OnSecondaryUsed");

	UGrippableSphereComponent_OnSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSphereComponent.OnSecondaryGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent*         ReleasingSecondaryGripComponent (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UGrippableSphereComponent::OnSecondaryGripRelease(class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.OnSecondaryGripRelease");

	UGrippableSphereComponent_OnSecondaryGripRelease_Params params;
	params.ReleasingSecondaryGripComponent = ReleasingSecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSphereComponent.OnSecondaryGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent*         SecondaryGripComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UGrippableSphereComponent::OnSecondaryGrip(class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.OnSecondaryGrip");

	UGrippableSphereComponent_OnSecondaryGrip_Params params;
	params.SecondaryGripComponent = SecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSphereComponent.OnInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)
// TEnumAsByte<EInputEvent>       KeyEvent                       (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableSphereComponent::OnInput(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.OnInput");

	UGrippableSphereComponent_OnInput_Params params;
	params.Key = Key;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSphereComponent.OnGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* ReleasingController            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasSocketed                   (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableSphereComponent::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.OnGripRelease");

	UGrippableSphereComponent_OnGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSphereComponent.OnGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UGrippableSphereComponent::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.OnGrip");

	UGrippableSphereComponent_OnGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSphereComponent.OnEndUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UGrippableSphereComponent::OnEndUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.OnEndUsed");

	UGrippableSphereComponent_OnEndUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSphereComponent.OnEndSecondaryUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UGrippableSphereComponent::OnEndSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.OnEndSecondaryUsed");

	UGrippableSphereComponent_OnEndSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSphereComponent.OnChildGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* ReleasingController            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasSocketed                   (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableSphereComponent::OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.OnChildGripRelease");

	UGrippableSphereComponent_OnChildGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSphereComponent.OnChildGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UGrippableSphereComponent::OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.OnChildGrip");

	UGrippableSphereComponent_OnChildGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableSphereComponent.IsHeld
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* HoldingController              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsHeld                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGrippableSphereComponent::IsHeld(class UGripMotionControllerComponent** HoldingController, bool* bIsHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.IsHeld");

	UGrippableSphereComponent_IsHeld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HoldingController != nullptr)
		*HoldingController = params.HoldingController;
	if (bIsHeld != nullptr)
		*bIsHeld = params.bIsHeld;
}


// Function VRExpansionPlugin.GrippableSphereComponent.GripMovementReplicationType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripMovementReplicationSettings ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripMovementReplicationSettings UGrippableSphereComponent::GripMovementReplicationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.GripMovementReplicationType");

	UGrippableSphereComponent_GripMovementReplicationType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSphereComponent.GripLateUpdateSetting
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripLateUpdateSettings        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripLateUpdateSettings UGrippableSphereComponent::GripLateUpdateSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.GripLateUpdateSetting");

	UGrippableSphereComponent_GripLateUpdateSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSphereComponent.GripBreakDistance
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGrippableSphereComponent::GripBreakDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.GripBreakDistance");

	UGrippableSphereComponent_GripBreakDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSphereComponent.GetPrimaryGripType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsSlot                        (Parm, ZeroConstructor, IsPlainOldData)
// EGripCollisionType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripCollisionType UGrippableSphereComponent::GetPrimaryGripType(bool bIsSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.GetPrimaryGripType");

	UGrippableSphereComponent_GetPrimaryGripType_Params params;
	params.bIsSlot = bIsSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSphereComponent.GetGripStiffnessAndDamping
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GripStiffnessOut               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          GripDampingOut                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGrippableSphereComponent::GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.GetGripStiffnessAndDamping");

	UGrippableSphereComponent_GetGripStiffnessAndDamping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GripStiffnessOut != nullptr)
		*GripStiffnessOut = params.GripStiffnessOut;
	if (GripDampingOut != nullptr)
		*GripDampingOut = params.GripDampingOut;
}


// Function VRExpansionPlugin.GrippableSphereComponent.DenyGripping
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGrippableSphereComponent::DenyGripping()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.DenyGripping");

	UGrippableSphereComponent_DenyGripping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableSphereComponent.ClosestGripSlotInRange
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, IsPlainOldData)
// bool                           bSecondarySlot                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHadSlotInRange                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SlotWorldTransform             (Parm, OutParm, IsPlainOldData)
// class UGripMotionControllerComponent* CallingController              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverridePrefix                 (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableSphereComponent::ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, class UGripMotionControllerComponent* CallingController, const struct FName& OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.ClosestGripSlotInRange");

	UGrippableSphereComponent_ClosestGripSlotInRange_Params params;
	params.WorldLocation = WorldLocation;
	params.bSecondarySlot = bSecondarySlot;
	params.CallingController = CallingController;
	params.OverridePrefix = OverridePrefix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHadSlotInRange != nullptr)
		*bHadSlotInRange = params.bHadSlotInRange;
	if (SlotWorldTransform != nullptr)
		*SlotWorldTransform = params.SlotWorldTransform;
}


// Function VRExpansionPlugin.GrippableSphereComponent.AdvancedGripSettings
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBPAdvGripSettings      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBPAdvGripSettings UGrippableSphereComponent::AdvancedGripSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.AdvancedGripSettings");

	UGrippableSphereComponent_AdvancedGripSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableStaticMeshActor.TickGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AGrippableStaticMeshActor::TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.TickGrip");

	AGrippableStaticMeshActor_TickGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableStaticMeshActor.TeleportBehavior
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripInterfaceTeleportBehavior ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripInterfaceTeleportBehavior AGrippableStaticMeshActor::TeleportBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.TeleportBehavior");

	AGrippableStaticMeshActor_TeleportBehavior_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableStaticMeshActor.SimulateOnDrop
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGrippableStaticMeshActor::SimulateOnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.SimulateOnDrop");

	AGrippableStaticMeshActor_SimulateOnDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableStaticMeshActor.SetHeld
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* HoldingController              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsHeld                        (Parm, ZeroConstructor, IsPlainOldData)

void AGrippableStaticMeshActor::SetHeld(class UGripMotionControllerComponent* HoldingController, bool bIsHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.SetHeld");

	AGrippableStaticMeshActor_SetHeld_Params params;
	params.HoldingController = HoldingController;
	params.bIsHeld = bIsHeld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableStaticMeshActor.SecondaryGripType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESecondaryGripType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESecondaryGripType AGrippableStaticMeshActor::SecondaryGripType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.SecondaryGripType");

	AGrippableStaticMeshActor_SecondaryGripType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableStaticMeshActor.RequestsSocketing
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         ParentToSocketTo               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OptionalSocketName             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform_NetQuantize  RelativeTransform              (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGrippableStaticMeshActor::RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.RequestsSocketing");

	AGrippableStaticMeshActor_RequestsSocketing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParentToSocketTo != nullptr)
		*ParentToSocketTo = params.ParentToSocketTo;
	if (OptionalSocketName != nullptr)
		*OptionalSocketName = params.OptionalSocketName;
	if (RelativeTransform != nullptr)
		*RelativeTransform = params.RelativeTransform;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableStaticMeshActor.OnUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void AGrippableStaticMeshActor::OnUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.OnUsed");

	AGrippableStaticMeshActor_OnUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableStaticMeshActor.OnSecondaryUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void AGrippableStaticMeshActor::OnSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.OnSecondaryUsed");

	AGrippableStaticMeshActor_OnSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableStaticMeshActor.OnSecondaryGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent*         ReleasingSecondaryGripComponent (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void AGrippableStaticMeshActor::OnSecondaryGripRelease(class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.OnSecondaryGripRelease");

	AGrippableStaticMeshActor_OnSecondaryGripRelease_Params params;
	params.ReleasingSecondaryGripComponent = ReleasingSecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableStaticMeshActor.OnSecondaryGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent*         SecondaryGripComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void AGrippableStaticMeshActor::OnSecondaryGrip(class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.OnSecondaryGrip");

	AGrippableStaticMeshActor_OnSecondaryGrip_Params params;
	params.SecondaryGripComponent = SecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableStaticMeshActor.OnInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)
// TEnumAsByte<EInputEvent>       KeyEvent                       (Parm, ZeroConstructor, IsPlainOldData)

void AGrippableStaticMeshActor::OnInput(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.OnInput");

	AGrippableStaticMeshActor_OnInput_Params params;
	params.Key = Key;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableStaticMeshActor.OnGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* ReleasingController            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasSocketed                   (Parm, ZeroConstructor, IsPlainOldData)

void AGrippableStaticMeshActor::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.OnGripRelease");

	AGrippableStaticMeshActor_OnGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableStaticMeshActor.OnGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void AGrippableStaticMeshActor::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.OnGrip");

	AGrippableStaticMeshActor_OnGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableStaticMeshActor.OnEndUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void AGrippableStaticMeshActor::OnEndUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.OnEndUsed");

	AGrippableStaticMeshActor_OnEndUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableStaticMeshActor.OnEndSecondaryUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void AGrippableStaticMeshActor::OnEndSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.OnEndSecondaryUsed");

	AGrippableStaticMeshActor_OnEndSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableStaticMeshActor.OnChildGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* ReleasingController            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasSocketed                   (Parm, ZeroConstructor, IsPlainOldData)

void AGrippableStaticMeshActor::OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.OnChildGripRelease");

	AGrippableStaticMeshActor_OnChildGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableStaticMeshActor.OnChildGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void AGrippableStaticMeshActor::OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.OnChildGrip");

	AGrippableStaticMeshActor_OnChildGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableStaticMeshActor.IsHeld
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* HoldingController              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsHeld                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGrippableStaticMeshActor::IsHeld(class UGripMotionControllerComponent** HoldingController, bool* bIsHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.IsHeld");

	AGrippableStaticMeshActor_IsHeld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HoldingController != nullptr)
		*HoldingController = params.HoldingController;
	if (bIsHeld != nullptr)
		*bIsHeld = params.bIsHeld;
}


// Function VRExpansionPlugin.GrippableStaticMeshActor.GripMovementReplicationType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripMovementReplicationSettings ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripMovementReplicationSettings AGrippableStaticMeshActor::GripMovementReplicationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.GripMovementReplicationType");

	AGrippableStaticMeshActor_GripMovementReplicationType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableStaticMeshActor.GripLateUpdateSetting
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripLateUpdateSettings        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripLateUpdateSettings AGrippableStaticMeshActor::GripLateUpdateSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.GripLateUpdateSetting");

	AGrippableStaticMeshActor_GripLateUpdateSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableStaticMeshActor.GripBreakDistance
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGrippableStaticMeshActor::GripBreakDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.GripBreakDistance");

	AGrippableStaticMeshActor_GripBreakDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableStaticMeshActor.GetPrimaryGripType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsSlot                        (Parm, ZeroConstructor, IsPlainOldData)
// EGripCollisionType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripCollisionType AGrippableStaticMeshActor::GetPrimaryGripType(bool bIsSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.GetPrimaryGripType");

	AGrippableStaticMeshActor_GetPrimaryGripType_Params params;
	params.bIsSlot = bIsSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableStaticMeshActor.GetGripStiffnessAndDamping
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GripStiffnessOut               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          GripDampingOut                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGrippableStaticMeshActor::GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.GetGripStiffnessAndDamping");

	AGrippableStaticMeshActor_GetGripStiffnessAndDamping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GripStiffnessOut != nullptr)
		*GripStiffnessOut = params.GripStiffnessOut;
	if (GripDampingOut != nullptr)
		*GripDampingOut = params.GripDampingOut;
}


// Function VRExpansionPlugin.GrippableStaticMeshActor.DenyGripping
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGrippableStaticMeshActor::DenyGripping()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.DenyGripping");

	AGrippableStaticMeshActor_DenyGripping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableStaticMeshActor.ClosestGripSlotInRange
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, IsPlainOldData)
// bool                           bSecondarySlot                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHadSlotInRange                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SlotWorldTransform             (Parm, OutParm, IsPlainOldData)
// class UGripMotionControllerComponent* CallingController              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverridePrefix                 (Parm, ZeroConstructor, IsPlainOldData)

void AGrippableStaticMeshActor::ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, class UGripMotionControllerComponent* CallingController, const struct FName& OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.ClosestGripSlotInRange");

	AGrippableStaticMeshActor_ClosestGripSlotInRange_Params params;
	params.WorldLocation = WorldLocation;
	params.bSecondarySlot = bSecondarySlot;
	params.CallingController = CallingController;
	params.OverridePrefix = OverridePrefix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHadSlotInRange != nullptr)
		*bHadSlotInRange = params.bHadSlotInRange;
	if (SlotWorldTransform != nullptr)
		*SlotWorldTransform = params.SlotWorldTransform;
}


// Function VRExpansionPlugin.GrippableStaticMeshActor.AdvancedGripSettings
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBPAdvGripSettings      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBPAdvGripSettings AGrippableStaticMeshActor::AdvancedGripSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.AdvancedGripSettings");

	AGrippableStaticMeshActor_AdvancedGripSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableStaticMeshComponent.TickGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableStaticMeshComponent::TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.TickGrip");

	UGrippableStaticMeshComponent_TickGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableStaticMeshComponent.TeleportBehavior
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripInterfaceTeleportBehavior ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripInterfaceTeleportBehavior UGrippableStaticMeshComponent::TeleportBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.TeleportBehavior");

	UGrippableStaticMeshComponent_TeleportBehavior_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableStaticMeshComponent.SimulateOnDrop
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGrippableStaticMeshComponent::SimulateOnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.SimulateOnDrop");

	UGrippableStaticMeshComponent_SimulateOnDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableStaticMeshComponent.SetHeld
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* HoldingController              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsHeld                        (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableStaticMeshComponent::SetHeld(class UGripMotionControllerComponent* HoldingController, bool bIsHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.SetHeld");

	UGrippableStaticMeshComponent_SetHeld_Params params;
	params.HoldingController = HoldingController;
	params.bIsHeld = bIsHeld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableStaticMeshComponent.SecondaryGripType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESecondaryGripType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESecondaryGripType UGrippableStaticMeshComponent::SecondaryGripType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.SecondaryGripType");

	UGrippableStaticMeshComponent_SecondaryGripType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableStaticMeshComponent.RequestsSocketing
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         ParentToSocketTo               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OptionalSocketName             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform_NetQuantize  RelativeTransform              (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGrippableStaticMeshComponent::RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.RequestsSocketing");

	UGrippableStaticMeshComponent_RequestsSocketing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParentToSocketTo != nullptr)
		*ParentToSocketTo = params.ParentToSocketTo;
	if (OptionalSocketName != nullptr)
		*OptionalSocketName = params.OptionalSocketName;
	if (RelativeTransform != nullptr)
		*RelativeTransform = params.RelativeTransform;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableStaticMeshComponent.OnUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UGrippableStaticMeshComponent::OnUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.OnUsed");

	UGrippableStaticMeshComponent_OnUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableStaticMeshComponent.OnSecondaryUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UGrippableStaticMeshComponent::OnSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.OnSecondaryUsed");

	UGrippableStaticMeshComponent_OnSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableStaticMeshComponent.OnSecondaryGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent*         ReleasingSecondaryGripComponent (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UGrippableStaticMeshComponent::OnSecondaryGripRelease(class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.OnSecondaryGripRelease");

	UGrippableStaticMeshComponent_OnSecondaryGripRelease_Params params;
	params.ReleasingSecondaryGripComponent = ReleasingSecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableStaticMeshComponent.OnSecondaryGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent*         SecondaryGripComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UGrippableStaticMeshComponent::OnSecondaryGrip(class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.OnSecondaryGrip");

	UGrippableStaticMeshComponent_OnSecondaryGrip_Params params;
	params.SecondaryGripComponent = SecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableStaticMeshComponent.OnInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)
// TEnumAsByte<EInputEvent>       KeyEvent                       (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableStaticMeshComponent::OnInput(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.OnInput");

	UGrippableStaticMeshComponent_OnInput_Params params;
	params.Key = Key;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableStaticMeshComponent.OnGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* ReleasingController            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasSocketed                   (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableStaticMeshComponent::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.OnGripRelease");

	UGrippableStaticMeshComponent_OnGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableStaticMeshComponent.OnGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UGrippableStaticMeshComponent::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.OnGrip");

	UGrippableStaticMeshComponent_OnGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableStaticMeshComponent.OnEndUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UGrippableStaticMeshComponent::OnEndUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.OnEndUsed");

	UGrippableStaticMeshComponent_OnEndUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableStaticMeshComponent.OnEndSecondaryUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UGrippableStaticMeshComponent::OnEndSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.OnEndSecondaryUsed");

	UGrippableStaticMeshComponent_OnEndSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableStaticMeshComponent.OnChildGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* ReleasingController            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasSocketed                   (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableStaticMeshComponent::OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.OnChildGripRelease");

	UGrippableStaticMeshComponent_OnChildGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableStaticMeshComponent.OnChildGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UGrippableStaticMeshComponent::OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.OnChildGrip");

	UGrippableStaticMeshComponent_OnChildGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GrippableStaticMeshComponent.IsHeld
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* HoldingController              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsHeld                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGrippableStaticMeshComponent::IsHeld(class UGripMotionControllerComponent** HoldingController, bool* bIsHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.IsHeld");

	UGrippableStaticMeshComponent_IsHeld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HoldingController != nullptr)
		*HoldingController = params.HoldingController;
	if (bIsHeld != nullptr)
		*bIsHeld = params.bIsHeld;
}


// Function VRExpansionPlugin.GrippableStaticMeshComponent.GripMovementReplicationType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripMovementReplicationSettings ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripMovementReplicationSettings UGrippableStaticMeshComponent::GripMovementReplicationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.GripMovementReplicationType");

	UGrippableStaticMeshComponent_GripMovementReplicationType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableStaticMeshComponent.GripLateUpdateSetting
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripLateUpdateSettings        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripLateUpdateSettings UGrippableStaticMeshComponent::GripLateUpdateSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.GripLateUpdateSetting");

	UGrippableStaticMeshComponent_GripLateUpdateSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableStaticMeshComponent.GripBreakDistance
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGrippableStaticMeshComponent::GripBreakDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.GripBreakDistance");

	UGrippableStaticMeshComponent_GripBreakDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableStaticMeshComponent.GetPrimaryGripType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsSlot                        (Parm, ZeroConstructor, IsPlainOldData)
// EGripCollisionType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripCollisionType UGrippableStaticMeshComponent::GetPrimaryGripType(bool bIsSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.GetPrimaryGripType");

	UGrippableStaticMeshComponent_GetPrimaryGripType_Params params;
	params.bIsSlot = bIsSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableStaticMeshComponent.GetGripStiffnessAndDamping
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GripStiffnessOut               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          GripDampingOut                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGrippableStaticMeshComponent::GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.GetGripStiffnessAndDamping");

	UGrippableStaticMeshComponent_GetGripStiffnessAndDamping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GripStiffnessOut != nullptr)
		*GripStiffnessOut = params.GripStiffnessOut;
	if (GripDampingOut != nullptr)
		*GripDampingOut = params.GripDampingOut;
}


// Function VRExpansionPlugin.GrippableStaticMeshComponent.DenyGripping
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGrippableStaticMeshComponent::DenyGripping()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.DenyGripping");

	UGrippableStaticMeshComponent_DenyGripping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GrippableStaticMeshComponent.ClosestGripSlotInRange
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, IsPlainOldData)
// bool                           bSecondarySlot                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHadSlotInRange                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SlotWorldTransform             (Parm, OutParm, IsPlainOldData)
// class UGripMotionControllerComponent* CallingController              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverridePrefix                 (Parm, ZeroConstructor, IsPlainOldData)

void UGrippableStaticMeshComponent::ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, class UGripMotionControllerComponent* CallingController, const struct FName& OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.ClosestGripSlotInRange");

	UGrippableStaticMeshComponent_ClosestGripSlotInRange_Params params;
	params.WorldLocation = WorldLocation;
	params.bSecondarySlot = bSecondarySlot;
	params.CallingController = CallingController;
	params.OverridePrefix = OverridePrefix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHadSlotInRange != nullptr)
		*bHadSlotInRange = params.bHadSlotInRange;
	if (SlotWorldTransform != nullptr)
		*SlotWorldTransform = params.SlotWorldTransform;
}


// Function VRExpansionPlugin.GrippableStaticMeshComponent.AdvancedGripSettings
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBPAdvGripSettings      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBPAdvGripSettings UGrippableStaticMeshComponent::AdvancedGripSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.AdvancedGripSettings");

	UGrippableStaticMeshComponent_AdvancedGripSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.ReplicatedVRCameraComponent.Server_SendCameraTransform
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FBPVRComponentPosRep    NewTransform                   (Parm)

void UReplicatedVRCameraComponent::Server_SendCameraTransform(const struct FBPVRComponentPosRep& NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.ReplicatedVRCameraComponent.Server_SendCameraTransform");

	UReplicatedVRCameraComponent_Server_SendCameraTransform_Params params;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.ReplicatedVRCameraComponent.OnRep_ReplicatedCameraTransform
// (Native, Public)

void UReplicatedVRCameraComponent::OnRep_ReplicatedCameraTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.ReplicatedVRCameraComponent.OnRep_ReplicatedCameraTransform");

	UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacter.StopNavigationMovement
// (Final, Native, Public, BlueprintCallable)

void AVRBaseCharacter::StopNavigationMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.StopNavigationMovement");

	AVRBaseCharacter_StopNavigationMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacter.SetCharacterSizeVR
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          NewRadius                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewHalfHeight                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUpdateOverlaps                (Parm, ZeroConstructor, IsPlainOldData)

void AVRBaseCharacter::SetCharacterSizeVR(float NewRadius, float NewHalfHeight, bool bUpdateOverlaps)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.SetCharacterSizeVR");

	AVRBaseCharacter_SetCharacterSizeVR_Params params;
	params.NewRadius = NewRadius;
	params.NewHalfHeight = NewHalfHeight;
	params.bUpdateOverlaps = bUpdateOverlaps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacter.SetCharacterHalfHeightVR
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          HalfHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUpdateOverlaps                (Parm, ZeroConstructor, IsPlainOldData)

void AVRBaseCharacter::SetCharacterHalfHeightVR(float HalfHeight, bool bUpdateOverlaps)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.SetCharacterHalfHeightVR");

	AVRBaseCharacter_SetCharacterHalfHeightVR_Params params;
	params.HalfHeight = HalfHeight;
	params.bUpdateOverlaps = bUpdateOverlaps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacter.SetActorRotationVR
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                NewRot                         (Parm, IsPlainOldData)
// bool                           bUseYawOnly                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAccountForHMDRotation         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AVRBaseCharacter::SetActorRotationVR(const struct FRotator& NewRot, bool bUseYawOnly, bool bAccountForHMDRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.SetActorRotationVR");

	AVRBaseCharacter_SetActorRotationVR_Params params;
	params.NewRot = NewRot;
	params.bUseYawOnly = bUseYawOnly;
	params.bAccountForHMDRotation = bAccountForHMDRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRBaseCharacter.SetActorLocationAndRotationVR
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewLoc                         (Parm, IsPlainOldData)
// struct FRotator                NewRot                         (Parm, IsPlainOldData)
// bool                           bUseYawOnly                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAccountForHMDRotation         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AVRBaseCharacter::SetActorLocationAndRotationVR(const struct FVector& NewLoc, const struct FRotator& NewRot, bool bUseYawOnly, bool bAccountForHMDRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.SetActorLocationAndRotationVR");

	AVRBaseCharacter_SetActorLocationAndRotationVR_Params params;
	params.NewLoc = NewLoc;
	params.NewRot = NewRot;
	params.bUseYawOnly = bUseYawOnly;
	params.bAccountForHMDRotation = bAccountForHMDRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRBaseCharacter.Server_SetSeatedMode
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class USceneComponent*         SeatParent                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bSetSeatedMode                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize100  TargetLoc                      (Parm)
// float                          TargetYaw                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          AllowedRadius                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          AllowedRadiusThreshold         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bZeroToHead                    (Parm, ZeroConstructor, IsPlainOldData)

void AVRBaseCharacter::Server_SetSeatedMode(class USceneComponent* SeatParent, bool bSetSeatedMode, const struct FVector_NetQuantize100& TargetLoc, float TargetYaw, float AllowedRadius, float AllowedRadiusThreshold, bool bZeroToHead)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.Server_SetSeatedMode");

	AVRBaseCharacter_Server_SetSeatedMode_Params params;
	params.SeatParent = SeatParent;
	params.bSetSeatedMode = bSetSeatedMode;
	params.TargetLoc = TargetLoc;
	params.TargetYaw = TargetYaw;
	params.AllowedRadius = AllowedRadius;
	params.AllowedRadiusThreshold = AllowedRadiusThreshold;
	params.bZeroToHead = bZeroToHead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacter.Server_SendTransformRightController
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FBPVRComponentPosRep    NewTransform                   (Parm)

void AVRBaseCharacter::Server_SendTransformRightController(const struct FBPVRComponentPosRep& NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.Server_SendTransformRightController");

	AVRBaseCharacter_Server_SendTransformRightController_Params params;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacter.Server_SendTransformLeftController
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FBPVRComponentPosRep    NewTransform                   (Parm)

void AVRBaseCharacter::Server_SendTransformLeftController(const struct FBPVRComponentPosRep& NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.Server_SendTransformLeftController");

	AVRBaseCharacter_Server_SendTransformLeftController_Params params;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacter.Server_SendTransformCamera
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FBPVRComponentPosRep    NewTransform                   (Parm)

void AVRBaseCharacter::Server_SendTransformCamera(const struct FBPVRComponentPosRep& NewTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.Server_SendTransformCamera");

	AVRBaseCharacter_Server_SendTransformCamera_Params params;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacter.Server_ReZeroSeating
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// struct FVector_NetQuantize100  NewRelativeHeadLoc             (Parm)
// float                          NewRelativeHeadYaw             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bZeroToHead                    (Parm, ZeroConstructor, IsPlainOldData)

void AVRBaseCharacter::Server_ReZeroSeating(const struct FVector_NetQuantize100& NewRelativeHeadLoc, float NewRelativeHeadYaw, bool bZeroToHead)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.Server_ReZeroSeating");

	AVRBaseCharacter_Server_ReZeroSeating_Params params;
	params.NewRelativeHeadLoc = NewRelativeHeadLoc;
	params.NewRelativeHeadYaw = NewRelativeHeadYaw;
	params.bZeroToHead = bZeroToHead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacter.RegenerateOffsetComponentToWorld
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bUpdateBounds                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCalculatePureYaw              (Parm, ZeroConstructor, IsPlainOldData)

void AVRBaseCharacter::RegenerateOffsetComponentToWorld(bool bUpdateBounds, bool bCalculatePureYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.RegenerateOffsetComponentToWorld");

	AVRBaseCharacter_RegenerateOffsetComponentToWorld_Params params;
	params.bUpdateBounds = bUpdateBounds;
	params.bCalculatePureYaw = bCalculatePureYaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacter.ReceiveNavigationMoveCompleted
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> PathingResult                  (Parm, ZeroConstructor, IsPlainOldData)

void AVRBaseCharacter::ReceiveNavigationMoveCompleted(TEnumAsByte<EPathFollowingResult> PathingResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.ReceiveNavigationMoveCompleted");

	AVRBaseCharacter_ReceiveNavigationMoveCompleted_Params params;
	params.PathingResult = PathingResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacter.OnSeatThreshholdChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsWithinThreshold             (Parm, ZeroConstructor, IsPlainOldData)
// float                          ToThresholdScaler              (Parm, ZeroConstructor, IsPlainOldData)

void AVRBaseCharacter::OnSeatThreshholdChanged(bool bIsWithinThreshold, float ToThresholdScaler)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.OnSeatThreshholdChanged");

	AVRBaseCharacter_OnSeatThreshholdChanged_Params params;
	params.bIsWithinThreshold = bIsWithinThreshold;
	params.ToThresholdScaler = ToThresholdScaler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacter.OnSeatedModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewSeatedMode                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWasAlreadySeated              (Parm, ZeroConstructor, IsPlainOldData)

void AVRBaseCharacter::OnSeatedModeChanged(bool bNewSeatedMode, bool bWasAlreadySeated)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.OnSeatedModeChanged");

	AVRBaseCharacter_OnSeatedModeChanged_Params params;
	params.bNewSeatedMode = bNewSeatedMode;
	params.bWasAlreadySeated = bWasAlreadySeated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacter.OnRep_SeatedCharInfo
// (Native, Public)

void AVRBaseCharacter::OnRep_SeatedCharInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.OnRep_SeatedCharInfo");

	AVRBaseCharacter_OnRep_SeatedCharInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacter.OnRep_CapsuleHeight
// (Final, Native, Public)

void AVRBaseCharacter::OnRep_CapsuleHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.OnRep_CapsuleHeight");

	AVRBaseCharacter_OnRep_CapsuleHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacter.OnEndWallPushback
// (Native, Event, Public, BlueprintEvent)

void AVRBaseCharacter::OnEndWallPushback()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.OnEndWallPushback");

	AVRBaseCharacter_OnEndWallPushback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacter.OnCustomMoveActionPerformed
// (Native, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// EVRMoveAction                  MoveActionType                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MoveActionVector               (Parm, IsPlainOldData)
// struct FRotator                MoveActionRotator              (Parm, IsPlainOldData)

void AVRBaseCharacter::OnCustomMoveActionPerformed(EVRMoveAction MoveActionType, const struct FVector& MoveActionVector, const struct FRotator& MoveActionRotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.OnCustomMoveActionPerformed");

	AVRBaseCharacter_OnCustomMoveActionPerformed_Params params;
	params.MoveActionType = MoveActionType;
	params.MoveActionVector = MoveActionVector;
	params.MoveActionRotator = MoveActionRotator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacter.OnClimbingSteppedUp
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVRBaseCharacter::OnClimbingSteppedUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.OnClimbingSteppedUp");

	AVRBaseCharacter_OnClimbingSteppedUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacter.OnBeginWallPushback
// (Native, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FHitResult              HitResultOfImpact              (Parm, IsPlainOldData)
// bool                           bHadLocomotionInput            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HmdInput                       (Parm, IsPlainOldData)

void AVRBaseCharacter::OnBeginWallPushback(const struct FHitResult& HitResultOfImpact, bool bHadLocomotionInput, const struct FVector& HmdInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.OnBeginWallPushback");

	AVRBaseCharacter_OnBeginWallPushback_Params params;
	params.HitResultOfImpact = HitResultOfImpact;
	params.bHadLocomotionInput = bHadLocomotionInput;
	params.HmdInput = HmdInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacter.NotifyOfTeleport
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void AVRBaseCharacter::NotifyOfTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.NotifyOfTeleport");

	AVRBaseCharacter_NotifyOfTeleport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacter.HasPartialPath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVRBaseCharacter::HasPartialPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.HasPartialPath");

	AVRBaseCharacter_HasPartialPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRBaseCharacter.GetVRUpVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AVRBaseCharacter::GetVRUpVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.GetVRUpVector");

	AVRBaseCharacter_GetVRUpVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRBaseCharacter.GetVRRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator AVRBaseCharacter::GetVRRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.GetVRRotation");

	AVRBaseCharacter_GetVRRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRBaseCharacter.GetVRRightVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AVRBaseCharacter::GetVRRightVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.GetVRRightVector");

	AVRBaseCharacter_GetVRRightVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRBaseCharacter.GetVRLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AVRBaseCharacter::GetVRLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.GetVRLocation");

	AVRBaseCharacter_GetVRLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRBaseCharacter.GetVRForwardVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AVRBaseCharacter::GetVRForwardVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.GetVRForwardVector");

	AVRBaseCharacter_GetVRForwardVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRBaseCharacter.GetTeleportLocation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 OriginalLocation               (Parm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AVRBaseCharacter::GetTeleportLocation(const struct FVector& OriginalLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.GetTeleportLocation");

	AVRBaseCharacter_GetTeleportLocation_Params params;
	params.OriginalLocation = OriginalLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRBaseCharacter.GetMoveStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EPathFollowingStatus> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EPathFollowingStatus> AVRBaseCharacter::GetMoveStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.GetMoveStatus");

	AVRBaseCharacter_GetMoveStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRBaseCharacter.GetIKMesh
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* AVRBaseCharacter::GetIKMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.GetIKMesh");

	AVRBaseCharacter_GetIKMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRBaseCharacter.ExtendedSimpleMoveToLocation
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 GoalLocation                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          AcceptanceRadius               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopOnOverlap                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUsePathfinding                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bProjectDestinationToNavigation (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCanStrafe                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  FilterClass                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowPartialPath              (Parm, ZeroConstructor, IsPlainOldData)

void AVRBaseCharacter::ExtendedSimpleMoveToLocation(const struct FVector& GoalLocation, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.ExtendedSimpleMoveToLocation");

	AVRBaseCharacter_ExtendedSimpleMoveToLocation_Params params;
	params.GoalLocation = GoalLocation;
	params.AcceptanceRadius = AcceptanceRadius;
	params.bStopOnOverlap = bStopOnOverlap;
	params.bUsePathfinding = bUsePathfinding;
	params.bProjectDestinationToNavigation = bProjectDestinationToNavigation;
	params.bCanStrafe = bCanStrafe;
	params.FilterClass = FilterClass;
	params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacter.AddActorWorldRotationVR
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                DeltaRot                       (Parm, IsPlainOldData)
// bool                           bUseYawOnly                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AVRBaseCharacter::AddActorWorldRotationVR(const struct FRotator& DeltaRot, bool bUseYawOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.AddActorWorldRotationVR");

	AVRBaseCharacter_AddActorWorldRotationVR_Params params;
	params.DeltaRot = DeltaRot;
	params.bUseYawOnly = bUseYawOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRBaseCharacterMovementComponent.SetReplicatedMovementMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EVRConjoinedMovementModes      NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)

void UVRBaseCharacterMovementComponent::SetReplicatedMovementMode(EVRConjoinedMovementModes NewMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacterMovementComponent.SetReplicatedMovementMode");

	UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacterMovementComponent.SetCrouchedHalfHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewCrouchedHalfHeight          (Parm, ZeroConstructor, IsPlainOldData)

void UVRBaseCharacterMovementComponent::SetCrouchedHalfHeight(float NewCrouchedHalfHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacterMovementComponent.SetCrouchedHalfHeight");

	UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight_Params params;
	params.NewCrouchedHalfHeight = NewCrouchedHalfHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacterMovementComponent.SetClimbingMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsClimbing                    (Parm, ZeroConstructor, IsPlainOldData)

void UVRBaseCharacterMovementComponent::SetClimbingMode(bool bIsClimbing)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacterMovementComponent.SetClimbingMode");

	UVRBaseCharacterMovementComponent_SetClimbingMode_Params params;
	params.bIsClimbing = bIsClimbing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacterMovementComponent.RewindVRMovement
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UVRBaseCharacterMovementComponent::RewindVRMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacterMovementComponent.RewindVRMovement");

	UVRBaseCharacterMovementComponent_RewindVRMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_Teleport
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 TeleportLocation               (Parm, IsPlainOldData)
// struct FRotator                TeleportRotation               (Parm, IsPlainOldData)
// bool                           bSkipEncroachmentCheck         (Parm, ZeroConstructor, IsPlainOldData)

void UVRBaseCharacterMovementComponent::PerformMoveAction_Teleport(const struct FVector& TeleportLocation, const struct FRotator& TeleportRotation, bool bSkipEncroachmentCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_Teleport");

	UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Params params;
	params.TeleportLocation = TeleportLocation;
	params.TeleportRotation = TeleportRotation;
	params.bSkipEncroachmentCheck = bSkipEncroachmentCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_StopAllMovement
// (Final, Native, Public, BlueprintCallable)

void UVRBaseCharacterMovementComponent::PerformMoveAction_StopAllMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_StopAllMovement");

	UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_SnapTurn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          SnapTurnDeltaYaw               (Parm, ZeroConstructor, IsPlainOldData)

void UVRBaseCharacterMovementComponent::PerformMoveAction_SnapTurn(float SnapTurnDeltaYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_SnapTurn");

	UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Params params;
	params.SnapTurnDeltaYaw = SnapTurnDeltaYaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_SetRotation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewYaw                         (Parm, ZeroConstructor, IsPlainOldData)

void UVRBaseCharacterMovementComponent::PerformMoveAction_SetRotation(float NewYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_SetRotation");

	UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Params params;
	params.NewYaw = NewYaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_Custom
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// EVRMoveAction                  MoveActionToPerform            (Parm, ZeroConstructor, IsPlainOldData)
// EVRMoveActionDataReq           DataRequirementsForMoveAction  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MoveActionVector               (Parm, IsPlainOldData)
// struct FRotator                MoveActionRotator              (Parm, IsPlainOldData)

void UVRBaseCharacterMovementComponent::PerformMoveAction_Custom(EVRMoveAction MoveActionToPerform, EVRMoveActionDataReq DataRequirementsForMoveAction, const struct FVector& MoveActionVector, const struct FRotator& MoveActionRotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_Custom");

	UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Params params;
	params.MoveActionToPerform = MoveActionToPerform;
	params.DataRequirementsForMoveAction = DataRequirementsForMoveAction;
	params.MoveActionVector = MoveActionVector;
	params.MoveActionRotator = MoveActionRotator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacterMovementComponent.GetCustomInputVector
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UVRBaseCharacterMovementComponent::GetCustomInputVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacterMovementComponent.GetCustomInputVector");

	UVRBaseCharacterMovementComponent_GetCustomInputVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRBaseCharacterMovementComponent.ClientVeryShortAdjustPosition
// (Net, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// float                          Timestamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLoc                         (Parm, IsPlainOldData)
// class UPrimitiveComponent*     NewBase                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   NewBaseBoneName                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasBase                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBaseRelativePosition          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ServerMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void UVRBaseCharacterMovementComponent::ClientVeryShortAdjustPosition(float Timestamp, const struct FVector& NewLoc, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacterMovementComponent.ClientVeryShortAdjustPosition");

	UVRBaseCharacterMovementComponent_ClientVeryShortAdjustPosition_Params params;
	params.Timestamp = Timestamp;
	params.NewLoc = NewLoc;
	params.NewBase = NewBase;
	params.NewBaseBoneName = NewBaseBoneName;
	params.bHasBase = bHasBase;
	params.bBaseRelativePosition = bBaseRelativePosition;
	params.ServerMovementMode = ServerMovementMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacterMovementComponent.ClientAdjustPosition
// (Net, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// float                          Timestamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLoc                         (Parm, IsPlainOldData)
// struct FVector                 NewVel                         (Parm, IsPlainOldData)
// class UPrimitiveComponent*     NewBase                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   NewBaseBoneName                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasBase                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBaseRelativePosition          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ServerMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void UVRBaseCharacterMovementComponent::ClientAdjustPosition(float Timestamp, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacterMovementComponent.ClientAdjustPosition");

	UVRBaseCharacterMovementComponent_ClientAdjustPosition_Params params;
	params.Timestamp = Timestamp;
	params.NewLoc = NewLoc;
	params.NewVel = NewVel;
	params.NewBase = NewBase;
	params.NewBaseBoneName = NewBaseBoneName;
	params.bHasBase = bHasBase;
	params.bBaseRelativePosition = bBaseRelativePosition;
	params.ServerMovementMode = ServerMovementMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRBaseCharacterMovementComponent.AddCustomReplicatedMovement
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Movement                       (Parm, IsPlainOldData)

void UVRBaseCharacterMovementComponent::AddCustomReplicatedMovement(const struct FVector& Movement)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacterMovementComponent.AddCustomReplicatedMovement");

	UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Params params;
	params.Movement = Movement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRButtonComponent.SetButtonToRestingPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bLerpToPosition                (Parm, ZeroConstructor, IsPlainOldData)

void UVRButtonComponent::SetButtonToRestingPosition(bool bLerpToPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRButtonComponent.SetButtonToRestingPosition");

	UVRButtonComponent_SetButtonToRestingPosition_Params params;
	params.bLerpToPosition = bLerpToPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRButtonComponent.SetButtonState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewButtonState                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCallButtonChangedEvent        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSnapIntoPosition              (Parm, ZeroConstructor, IsPlainOldData)

void UVRButtonComponent::SetButtonState(bool bNewButtonState, bool bCallButtonChangedEvent, bool bSnapIntoPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRButtonComponent.SetButtonState");

	UVRButtonComponent_SetButtonState_Params params;
	params.bNewButtonState = bNewButtonState;
	params.bCallButtonChangedEvent = bCallButtonChangedEvent;
	params.bSnapIntoPosition = bSnapIntoPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRButtonComponent.ResetInitialButtonLocation
// (Final, Native, Public, BlueprintCallable)

void UVRButtonComponent::ResetInitialButtonLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRButtonComponent.ResetInitialButtonLocation");

	UVRButtonComponent_ResetInitialButtonLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRButtonComponent.ReceiveButtonStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bCurButtonState                (Parm, ZeroConstructor, IsPlainOldData)

void UVRButtonComponent::ReceiveButtonStateChanged(bool bCurButtonState)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRButtonComponent.ReceiveButtonStateChanged");

	UVRButtonComponent_ReceiveButtonStateChanged_Params params;
	params.bCurButtonState = bCurButtonState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRButtonComponent.OnOverlapEnd
// (Final, Native, Public)
// Parameters:
// class UPrimitiveComponent*     OverlappedComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void UVRButtonComponent::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRButtonComponent.OnOverlapEnd");

	UVRButtonComponent_OnOverlapEnd_Params params;
	params.OverlappedComp = OverlappedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRButtonComponent.OnOverlapBegin
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UVRButtonComponent::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRButtonComponent.OnOverlapBegin");

	UVRButtonComponent_OnOverlapBegin_Params params;
	params.OverlappedComp = OverlappedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRButtonComponent.IsValidOverlap
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlapComponent               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRButtonComponent::IsValidOverlap(class UPrimitiveComponent* OverlapComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRButtonComponent.IsValidOverlap");

	UVRButtonComponent_IsValidOverlap_Params params;
	params.OverlapComponent = OverlapComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRButtonComponent.IsButtonInUse
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRButtonComponent::IsButtonInUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRButtonComponent.IsButtonInUse");

	UVRButtonComponent_IsButtonInUse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRCharacter.ServerMoveVRExLight
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          Timestamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize100  ClientLoc                      (Parm)
// struct FVector_NetQuantize100  CapsuleLoc                     (Parm)
// struct FVRConditionalMoveRep   ConditionalReps                (Parm)
// struct FVector_NetQuantize100  LFDiff                         (Parm)
// uint16_t                       CapsuleYaw                     (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  CompressedMoveFlags            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVRConditionalMoveRep2  MoveReps                       (Parm)
// unsigned char                  ClientMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void AVRCharacter::ServerMoveVRExLight(float Timestamp, const struct FVector_NetQuantize100& ClientLoc, const struct FVector_NetQuantize100& CapsuleLoc, const struct FVRConditionalMoveRep& ConditionalReps, const struct FVector_NetQuantize100& LFDiff, uint16_t CapsuleYaw, unsigned char CompressedMoveFlags, const struct FVRConditionalMoveRep2& MoveReps, unsigned char ClientMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRCharacter.ServerMoveVRExLight");

	AVRCharacter_ServerMoveVRExLight_Params params;
	params.Timestamp = Timestamp;
	params.ClientLoc = ClientLoc;
	params.CapsuleLoc = CapsuleLoc;
	params.ConditionalReps = ConditionalReps;
	params.LFDiff = LFDiff;
	params.CapsuleYaw = CapsuleYaw;
	params.CompressedMoveFlags = CompressedMoveFlags;
	params.MoveReps = MoveReps;
	params.ClientMovementMode = ClientMovementMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRCharacter.ServerMoveVRDualHybridRootMotion
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          TimeStamp0                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10   InAccel0                       (Parm)
// unsigned char                  PendingFlags                   (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       View0                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize100  OldCapsuleLoc                  (Parm)
// struct FVRConditionalMoveRep   OldConditionalReps             (Parm)
// struct FVector_NetQuantize100  OldLFDiff                      (Parm)
// uint16_t                       OldCapsuleYaw                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Timestamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10   InAccel                        (Parm)
// struct FVector_NetQuantize100  ClientLoc                      (Parm)
// struct FVector_NetQuantize100  CapsuleLoc                     (Parm)
// struct FVRConditionalMoveRep   ConditionalReps                (Parm)
// struct FVector_NetQuantize100  LFDiff                         (Parm)
// uint16_t                       CapsuleYaw                     (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  NewFlags                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVRConditionalMoveRep2  MoveReps                       (Parm)
// unsigned char                  ClientMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void AVRCharacter::ServerMoveVRDualHybridRootMotion(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, const struct FVector_NetQuantize100& OldCapsuleLoc, const struct FVRConditionalMoveRep& OldConditionalReps, const struct FVector_NetQuantize100& OldLFDiff, uint16_t OldCapsuleYaw, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, const struct FVector_NetQuantize100& CapsuleLoc, const struct FVRConditionalMoveRep& ConditionalReps, const struct FVector_NetQuantize100& LFDiff, uint16_t CapsuleYaw, unsigned char NewFlags, const struct FVRConditionalMoveRep2& MoveReps, unsigned char ClientMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRCharacter.ServerMoveVRDualHybridRootMotion");

	AVRCharacter_ServerMoveVRDualHybridRootMotion_Params params;
	params.TimeStamp0 = TimeStamp0;
	params.InAccel0 = InAccel0;
	params.PendingFlags = PendingFlags;
	params.View0 = View0;
	params.OldCapsuleLoc = OldCapsuleLoc;
	params.OldConditionalReps = OldConditionalReps;
	params.OldLFDiff = OldLFDiff;
	params.OldCapsuleYaw = OldCapsuleYaw;
	params.Timestamp = Timestamp;
	params.InAccel = InAccel;
	params.ClientLoc = ClientLoc;
	params.CapsuleLoc = CapsuleLoc;
	params.ConditionalReps = ConditionalReps;
	params.LFDiff = LFDiff;
	params.CapsuleYaw = CapsuleYaw;
	params.NewFlags = NewFlags;
	params.MoveReps = MoveReps;
	params.ClientMovementMode = ClientMovementMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRCharacter.ServerMoveVRDualExLight
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          TimeStamp0                     (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  PendingFlags                   (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       View0                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize100  OldCapsuleLoc                  (Parm)
// struct FVRConditionalMoveRep   OldConditionalReps             (Parm)
// struct FVector_NetQuantize100  OldLFDiff                      (Parm)
// uint16_t                       OldCapsuleYaw                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Timestamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize100  ClientLoc                      (Parm)
// struct FVector_NetQuantize100  CapsuleLoc                     (Parm)
// struct FVRConditionalMoveRep   ConditionalReps                (Parm)
// struct FVector_NetQuantize100  LFDiff                         (Parm)
// uint16_t                       CapsuleYaw                     (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  NewFlags                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVRConditionalMoveRep2  MoveReps                       (Parm)
// unsigned char                  ClientMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void AVRCharacter::ServerMoveVRDualExLight(float TimeStamp0, unsigned char PendingFlags, uint32_t View0, const struct FVector_NetQuantize100& OldCapsuleLoc, const struct FVRConditionalMoveRep& OldConditionalReps, const struct FVector_NetQuantize100& OldLFDiff, uint16_t OldCapsuleYaw, float Timestamp, const struct FVector_NetQuantize100& ClientLoc, const struct FVector_NetQuantize100& CapsuleLoc, const struct FVRConditionalMoveRep& ConditionalReps, const struct FVector_NetQuantize100& LFDiff, uint16_t CapsuleYaw, unsigned char NewFlags, const struct FVRConditionalMoveRep2& MoveReps, unsigned char ClientMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRCharacter.ServerMoveVRDualExLight");

	AVRCharacter_ServerMoveVRDualExLight_Params params;
	params.TimeStamp0 = TimeStamp0;
	params.PendingFlags = PendingFlags;
	params.View0 = View0;
	params.OldCapsuleLoc = OldCapsuleLoc;
	params.OldConditionalReps = OldConditionalReps;
	params.OldLFDiff = OldLFDiff;
	params.OldCapsuleYaw = OldCapsuleYaw;
	params.Timestamp = Timestamp;
	params.ClientLoc = ClientLoc;
	params.CapsuleLoc = CapsuleLoc;
	params.ConditionalReps = ConditionalReps;
	params.LFDiff = LFDiff;
	params.CapsuleYaw = CapsuleYaw;
	params.NewFlags = NewFlags;
	params.MoveReps = MoveReps;
	params.ClientMovementMode = ClientMovementMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRCharacter.ServerMoveVRDual
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          TimeStamp0                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10   InAccel0                       (Parm)
// unsigned char                  PendingFlags                   (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       View0                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize100  OldCapsuleLoc                  (Parm)
// struct FVRConditionalMoveRep   OldConditionalReps             (Parm)
// struct FVector_NetQuantize100  OldLFDiff                      (Parm)
// uint16_t                       OldCapsuleYaw                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Timestamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10   InAccel                        (Parm)
// struct FVector_NetQuantize100  ClientLoc                      (Parm)
// struct FVector_NetQuantize100  CapsuleLoc                     (Parm)
// struct FVRConditionalMoveRep   ConditionalReps                (Parm)
// struct FVector_NetQuantize100  LFDiff                         (Parm)
// uint16_t                       CapsuleYaw                     (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  NewFlags                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVRConditionalMoveRep2  MoveReps                       (Parm)
// unsigned char                  ClientMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void AVRCharacter::ServerMoveVRDual(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, const struct FVector_NetQuantize100& OldCapsuleLoc, const struct FVRConditionalMoveRep& OldConditionalReps, const struct FVector_NetQuantize100& OldLFDiff, uint16_t OldCapsuleYaw, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, const struct FVector_NetQuantize100& CapsuleLoc, const struct FVRConditionalMoveRep& ConditionalReps, const struct FVector_NetQuantize100& LFDiff, uint16_t CapsuleYaw, unsigned char NewFlags, const struct FVRConditionalMoveRep2& MoveReps, unsigned char ClientMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRCharacter.ServerMoveVRDual");

	AVRCharacter_ServerMoveVRDual_Params params;
	params.TimeStamp0 = TimeStamp0;
	params.InAccel0 = InAccel0;
	params.PendingFlags = PendingFlags;
	params.View0 = View0;
	params.OldCapsuleLoc = OldCapsuleLoc;
	params.OldConditionalReps = OldConditionalReps;
	params.OldLFDiff = OldLFDiff;
	params.OldCapsuleYaw = OldCapsuleYaw;
	params.Timestamp = Timestamp;
	params.InAccel = InAccel;
	params.ClientLoc = ClientLoc;
	params.CapsuleLoc = CapsuleLoc;
	params.ConditionalReps = ConditionalReps;
	params.LFDiff = LFDiff;
	params.CapsuleYaw = CapsuleYaw;
	params.NewFlags = NewFlags;
	params.MoveReps = MoveReps;
	params.ClientMovementMode = ClientMovementMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRCharacter.ServerMoveVR
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          Timestamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10   InAccel                        (Parm)
// struct FVector_NetQuantize100  ClientLoc                      (Parm)
// struct FVector_NetQuantize100  CapsuleLoc                     (Parm)
// struct FVRConditionalMoveRep   ConditionalReps                (Parm)
// struct FVector_NetQuantize100  LFDiff                         (Parm)
// uint16_t                       CapsuleYaw                     (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  CompressedMoveFlags            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVRConditionalMoveRep2  MoveReps                       (Parm)
// unsigned char                  ClientMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void AVRCharacter::ServerMoveVR(float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, const struct FVector_NetQuantize100& CapsuleLoc, const struct FVRConditionalMoveRep& ConditionalReps, const struct FVector_NetQuantize100& LFDiff, uint16_t CapsuleYaw, unsigned char CompressedMoveFlags, const struct FVRConditionalMoveRep2& MoveReps, unsigned char ClientMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRCharacter.ServerMoveVR");

	AVRCharacter_ServerMoveVR_Params params;
	params.Timestamp = Timestamp;
	params.InAccel = InAccel;
	params.ClientLoc = ClientLoc;
	params.CapsuleLoc = CapsuleLoc;
	params.ConditionalReps = ConditionalReps;
	params.LFDiff = LFDiff;
	params.CapsuleYaw = CapsuleYaw;
	params.CompressedMoveFlags = CompressedMoveFlags;
	params.MoveReps = MoveReps;
	params.ClientMovementMode = ClientMovementMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRCharacter.ClientVeryShortAdjustPositionVR
// (Net, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// float                          Timestamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLoc                         (Parm, IsPlainOldData)
// uint16_t                       NewYaw                         (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     NewBase                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   NewBaseBoneName                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasBase                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBaseRelativePosition          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ServerMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void AVRCharacter::ClientVeryShortAdjustPositionVR(float Timestamp, const struct FVector& NewLoc, uint16_t NewYaw, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRCharacter.ClientVeryShortAdjustPositionVR");

	AVRCharacter_ClientVeryShortAdjustPositionVR_Params params;
	params.Timestamp = Timestamp;
	params.NewLoc = NewLoc;
	params.NewYaw = NewYaw;
	params.NewBase = NewBase;
	params.NewBaseBoneName = NewBaseBoneName;
	params.bHasBase = bHasBase;
	params.bBaseRelativePosition = bBaseRelativePosition;
	params.ServerMovementMode = ServerMovementMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRCharacter.ClientAdjustPositionVR
// (Net, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// float                          Timestamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLoc                         (Parm, IsPlainOldData)
// uint16_t                       NewYaw                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewVel                         (Parm, IsPlainOldData)
// class UPrimitiveComponent*     NewBase                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   NewBaseBoneName                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasBase                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBaseRelativePosition          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ServerMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void AVRCharacter::ClientAdjustPositionVR(float Timestamp, const struct FVector& NewLoc, uint16_t NewYaw, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRCharacter.ClientAdjustPositionVR");

	AVRCharacter_ClientAdjustPositionVR_Params params;
	params.Timestamp = Timestamp;
	params.NewLoc = NewLoc;
	params.NewYaw = NewYaw;
	params.NewVel = NewVel;
	params.NewBase = NewBase;
	params.NewBaseBoneName = NewBaseBoneName;
	params.bHasBase = bHasBase;
	params.bBaseRelativePosition = bBaseRelativePosition;
	params.ServerMovementMode = ServerMovementMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRDialComponent.TickGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UVRDialComponent::TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.TickGrip");

	UVRDialComponent_TickGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRDialComponent.TeleportBehavior
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripInterfaceTeleportBehavior ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripInterfaceTeleportBehavior UVRDialComponent::TeleportBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.TeleportBehavior");

	UVRDialComponent_TeleportBehavior_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRDialComponent.SimulateOnDrop
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRDialComponent::SimulateOnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.SimulateOnDrop");

	UVRDialComponent_SimulateOnDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRDialComponent.SetHeld
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* NewHoldingController           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bNewIsHeld                     (Parm, ZeroConstructor, IsPlainOldData)

void UVRDialComponent::SetHeld(class UGripMotionControllerComponent* NewHoldingController, bool bNewIsHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.SetHeld");

	UVRDialComponent_SetHeld_Params params;
	params.NewHoldingController = NewHoldingController;
	params.bNewIsHeld = bNewIsHeld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRDialComponent.SetDialAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DialAngle                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCallEvents                    (Parm, ZeroConstructor, IsPlainOldData)

void UVRDialComponent::SetDialAngle(float DialAngle, bool bCallEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.SetDialAngle");

	UVRDialComponent_SetDialAngle_Params params;
	params.DialAngle = DialAngle;
	params.bCallEvents = bCallEvents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRDialComponent.SecondaryGripType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESecondaryGripType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESecondaryGripType UVRDialComponent::SecondaryGripType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.SecondaryGripType");

	UVRDialComponent_SecondaryGripType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRDialComponent.ResetInitialDialLocation
// (Final, Native, Public, BlueprintCallable)

void UVRDialComponent::ResetInitialDialLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.ResetInitialDialLocation");

	UVRDialComponent_ResetInitialDialLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRDialComponent.RequestsSocketing
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         ParentToSocketTo               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OptionalSocketName             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform_NetQuantize  RelativeTransform              (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRDialComponent::RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.RequestsSocketing");

	UVRDialComponent_RequestsSocketing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParentToSocketTo != nullptr)
		*ParentToSocketTo = params.ParentToSocketTo;
	if (OptionalSocketName != nullptr)
		*OptionalSocketName = params.OptionalSocketName;
	if (RelativeTransform != nullptr)
		*RelativeTransform = params.RelativeTransform;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRDialComponent.ReceiveDialHitSnapAngle
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DialMilestoneAngle             (Parm, ZeroConstructor, IsPlainOldData)

void UVRDialComponent::ReceiveDialHitSnapAngle(float DialMilestoneAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.ReceiveDialHitSnapAngle");

	UVRDialComponent_ReceiveDialHitSnapAngle_Params params;
	params.DialMilestoneAngle = DialMilestoneAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRDialComponent.ReceiveDialFinishedLerping
// (Event, Public, BlueprintEvent)

void UVRDialComponent::ReceiveDialFinishedLerping()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.ReceiveDialFinishedLerping");

	UVRDialComponent_ReceiveDialFinishedLerping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRDialComponent.OnUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UVRDialComponent::OnUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.OnUsed");

	UVRDialComponent_OnUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRDialComponent.OnSecondaryUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UVRDialComponent::OnSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.OnSecondaryUsed");

	UVRDialComponent_OnSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRDialComponent.OnSecondaryGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent*         ReleasingSecondaryGripComponent (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UVRDialComponent::OnSecondaryGripRelease(class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.OnSecondaryGripRelease");

	UVRDialComponent_OnSecondaryGripRelease_Params params;
	params.ReleasingSecondaryGripComponent = ReleasingSecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRDialComponent.OnSecondaryGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent*         SecondaryGripComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UVRDialComponent::OnSecondaryGrip(class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.OnSecondaryGrip");

	UVRDialComponent_OnSecondaryGrip_Params params;
	params.SecondaryGripComponent = SecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRDialComponent.OnInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)
// TEnumAsByte<EInputEvent>       KeyEvent                       (Parm, ZeroConstructor, IsPlainOldData)

void UVRDialComponent::OnInput(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.OnInput");

	UVRDialComponent_OnInput_Params params;
	params.Key = Key;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRDialComponent.OnGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* ReleasingController            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasSocketed                   (Parm, ZeroConstructor, IsPlainOldData)

void UVRDialComponent::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.OnGripRelease");

	UVRDialComponent_OnGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRDialComponent.OnGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UVRDialComponent::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.OnGrip");

	UVRDialComponent_OnGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRDialComponent.OnEndUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UVRDialComponent::OnEndUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.OnEndUsed");

	UVRDialComponent_OnEndUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRDialComponent.OnEndSecondaryUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UVRDialComponent::OnEndSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.OnEndSecondaryUsed");

	UVRDialComponent_OnEndSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRDialComponent.OnChildGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* ReleasingController            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasSocketed                   (Parm, ZeroConstructor, IsPlainOldData)

void UVRDialComponent::OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.OnChildGripRelease");

	UVRDialComponent_OnChildGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRDialComponent.OnChildGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UVRDialComponent::OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.OnChildGrip");

	UVRDialComponent_OnChildGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRDialComponent.IsHeld
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* CurHoldingController           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bCurIsHeld                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVRDialComponent::IsHeld(class UGripMotionControllerComponent** CurHoldingController, bool* bCurIsHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.IsHeld");

	UVRDialComponent_IsHeld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurHoldingController != nullptr)
		*CurHoldingController = params.CurHoldingController;
	if (bCurIsHeld != nullptr)
		*bCurIsHeld = params.bCurIsHeld;
}


// Function VRExpansionPlugin.VRDialComponent.GripMovementReplicationType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripMovementReplicationSettings ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripMovementReplicationSettings UVRDialComponent::GripMovementReplicationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.GripMovementReplicationType");

	UVRDialComponent_GripMovementReplicationType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRDialComponent.GripLateUpdateSetting
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripLateUpdateSettings        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripLateUpdateSettings UVRDialComponent::GripLateUpdateSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.GripLateUpdateSetting");

	UVRDialComponent_GripLateUpdateSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRDialComponent.GripBreakDistance
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVRDialComponent::GripBreakDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.GripBreakDistance");

	UVRDialComponent_GripBreakDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRDialComponent.GetPrimaryGripType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsSlot                        (Parm, ZeroConstructor, IsPlainOldData)
// EGripCollisionType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripCollisionType UVRDialComponent::GetPrimaryGripType(bool bIsSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.GetPrimaryGripType");

	UVRDialComponent_GetPrimaryGripType_Params params;
	params.bIsSlot = bIsSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRDialComponent.GetGripStiffnessAndDamping
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GripStiffnessOut               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          GripDampingOut                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVRDialComponent::GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.GetGripStiffnessAndDamping");

	UVRDialComponent_GetGripStiffnessAndDamping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GripStiffnessOut != nullptr)
		*GripStiffnessOut = params.GripStiffnessOut;
	if (GripDampingOut != nullptr)
		*GripDampingOut = params.GripDampingOut;
}


// Function VRExpansionPlugin.VRDialComponent.DenyGripping
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRDialComponent::DenyGripping()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.DenyGripping");

	UVRDialComponent_DenyGripping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRDialComponent.ClosestGripSlotInRange
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, IsPlainOldData)
// bool                           bSecondarySlot                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHadSlotInRange                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SlotWorldTransform             (Parm, OutParm, IsPlainOldData)
// class UGripMotionControllerComponent* CallingController              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverridePrefix                 (Parm, ZeroConstructor, IsPlainOldData)

void UVRDialComponent::ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, class UGripMotionControllerComponent* CallingController, const struct FName& OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.ClosestGripSlotInRange");

	UVRDialComponent_ClosestGripSlotInRange_Params params;
	params.WorldLocation = WorldLocation;
	params.bSecondarySlot = bSecondarySlot;
	params.CallingController = CallingController;
	params.OverridePrefix = OverridePrefix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHadSlotInRange != nullptr)
		*bHadSlotInRange = params.bHadSlotInRange;
	if (SlotWorldTransform != nullptr)
		*SlotWorldTransform = params.SlotWorldTransform;
}


// Function VRExpansionPlugin.VRDialComponent.AdvancedGripSettings
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBPAdvGripSettings      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBPAdvGripSettings UVRDialComponent::AdvancedGripSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.AdvancedGripSettings");

	UVRDialComponent_AdvancedGripSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRDialComponent.AddDialAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DialAngleDelta                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCallEvents                    (Parm, ZeroConstructor, IsPlainOldData)

void UVRDialComponent::AddDialAngle(float DialAngleDelta, bool bCallEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.AddDialAngle");

	UVRDialComponent_AddDialAngle_Params params;
	params.DialAngleDelta = DialAngleDelta;
	params.bCallEvents = bCallEvents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.SmoothUpdateLaserSpline
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USplineComponent*        LaserSplineComponent           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class USplineMeshComponent*> LaserSplineMeshComponents      (Parm, ZeroConstructor)
// struct FVector                 InStartLocation                (Parm, IsPlainOldData)
// struct FVector                 InEndLocation                  (Parm, IsPlainOldData)
// struct FVector                 InForward                      (Parm, IsPlainOldData)
// float                          LaserRadius                    (Parm, ZeroConstructor, IsPlainOldData)

void UVRExpansionFunctionLibrary::STATIC_SmoothUpdateLaserSpline(class USplineComponent* LaserSplineComponent, TArray<class USplineMeshComponent*> LaserSplineMeshComponents, const struct FVector& InStartLocation, const struct FVector& InEndLocation, const struct FVector& InForward, float LaserRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.SmoothUpdateLaserSpline");

	UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Params params;
	params.LaserSplineComponent = LaserSplineComponent;
	params.LaserSplineMeshComponents = LaserSplineMeshComponents;
	params.InStartLocation = InStartLocation;
	params.InEndLocation = InEndLocation;
	params.InForward = InForward;
	params.LaserRadius = LaserRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.RunEuroSmoothingFilter
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBPEuroLowPassFilter    TargetEuroFilter               (Parm, OutParm, ReferenceParm)
// struct FVector                 InRawValue                     (Parm, IsPlainOldData)
// float                          DeltaTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SmoothedValue                  (Parm, OutParm, IsPlainOldData)

void UVRExpansionFunctionLibrary::STATIC_RunEuroSmoothingFilter(const struct FVector& InRawValue, float DeltaTime, struct FBPEuroLowPassFilter* TargetEuroFilter, struct FVector* SmoothedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.RunEuroSmoothingFilter");

	UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Params params;
	params.InRawValue = InRawValue;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetEuroFilter != nullptr)
		*TargetEuroFilter = params.TargetEuroFilter;
	if (SmoothedValue != nullptr)
		*SmoothedValue = params.SmoothedValue;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.RotateAroundPivot
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                RotationDelta                  (Parm, IsPlainOldData)
// struct FVector                 OriginalLocation               (Parm, IsPlainOldData)
// struct FRotator                OriginalRotation               (Parm, IsPlainOldData)
// struct FVector                 PivotPoint                     (Parm, IsPlainOldData)
// struct FVector                 NewLocation                    (Parm, OutParm, IsPlainOldData)
// struct FRotator                NewRotation                    (Parm, OutParm, IsPlainOldData)
// bool                           bUseOriginalYawOnly            (Parm, ZeroConstructor, IsPlainOldData)

void UVRExpansionFunctionLibrary::STATIC_RotateAroundPivot(const struct FRotator& RotationDelta, const struct FVector& OriginalLocation, const struct FRotator& OriginalRotation, const struct FVector& PivotPoint, bool bUseOriginalYawOnly, struct FVector* NewLocation, struct FRotator* NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.RotateAroundPivot");

	UVRExpansionFunctionLibrary_RotateAroundPivot_Params params;
	params.RotationDelta = RotationDelta;
	params.OriginalLocation = OriginalLocation;
	params.OriginalRotation = OriginalRotation;
	params.PivotPoint = PivotPoint;
	params.bUseOriginalYawOnly = bUseOriginalYawOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewLocation != nullptr)
		*NewLocation = params.NewLocation;
	if (NewRotation != nullptr)
		*NewRotation = params.NewRotation;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.ResetEuroSmoothingFilter
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPEuroLowPassFilter    TargetEuroFilter               (Parm, OutParm, ReferenceParm)

void UVRExpansionFunctionLibrary::STATIC_ResetEuroSmoothingFilter(struct FBPEuroLowPassFilter* TargetEuroFilter)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.ResetEuroSmoothingFilter");

	UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetEuroFilter != nullptr)
		*TargetEuroFilter = params.TargetEuroFilter;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.NonAuthorityMinimumAreaRectangle
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         InVerts                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 SampleSurfaceNormal            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 OutRectCenter                  (Parm, OutParm, IsPlainOldData)
// struct FRotator                OutRectRotation                (Parm, OutParm, IsPlainOldData)
// float                          OutSideLengthX                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutSideLengthY                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bDebugDraw                     (Parm, ZeroConstructor, IsPlainOldData)

void UVRExpansionFunctionLibrary::STATIC_NonAuthorityMinimumAreaRectangle(class UObject* WorldContextObject, TArray<struct FVector> InVerts, const struct FVector& SampleSurfaceNormal, bool bDebugDraw, struct FVector* OutRectCenter, struct FRotator* OutRectRotation, float* OutSideLengthX, float* OutSideLengthY)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.NonAuthorityMinimumAreaRectangle");

	UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InVerts = InVerts;
	params.SampleSurfaceNormal = SampleSurfaceNormal;
	params.bDebugDraw = bDebugDraw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRectCenter != nullptr)
		*OutRectCenter = params.OutRectCenter;
	if (OutRectRotation != nullptr)
		*OutRectRotation = params.OutRectRotation;
	if (OutSideLengthX != nullptr)
		*OutSideLengthX = params.OutSideLengthX;
	if (OutSideLengthY != nullptr)
		*OutSideLengthY = params.OutSideLengthY;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.MatchesAnyTagsWithDirectParentTag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag            DirectParentTag                (Parm)
// struct FGameplayTagContainer   BaseContainer                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   OtherContainer                 (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRExpansionFunctionLibrary::STATIC_MatchesAnyTagsWithDirectParentTag(const struct FGameplayTag& DirectParentTag, const struct FGameplayTagContainer& BaseContainer, const struct FGameplayTagContainer& OtherContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.MatchesAnyTagsWithDirectParentTag");

	UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Params params;
	params.DirectParentTag = DirectParentTag;
	params.BaseContainer = BaseContainer;
	params.OtherContainer = OtherContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.MakeVector_NetQuantize100
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 InVector                       (Parm, IsPlainOldData)
// struct FVector_NetQuantize100  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector_NetQuantize100 UVRExpansionFunctionLibrary::STATIC_MakeVector_NetQuantize100(const struct FVector& InVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.MakeVector_NetQuantize100");

	UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Params params;
	params.InVector = InVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.MakeVector_NetQuantize10
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 InVector                       (Parm, IsPlainOldData)
// struct FVector_NetQuantize10   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector_NetQuantize10 UVRExpansionFunctionLibrary::STATIC_MakeVector_NetQuantize10(const struct FVector& InVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.MakeVector_NetQuantize10");

	UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Params params;
	params.InVector = InVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.MakeVector_NetQuantize
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 InVector                       (Parm, IsPlainOldData)
// struct FVector_NetQuantize     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector_NetQuantize UVRExpansionFunctionLibrary::STATIC_MakeVector_NetQuantize(const struct FVector& InVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.MakeVector_NetQuantize");

	UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Params params;
	params.InVector = InVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.MakeTransform_NetQuantize
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// struct FVector                 Scale                          (Parm, IsPlainOldData)
// struct FTransform_NetQuantize  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTransform_NetQuantize UVRExpansionFunctionLibrary::STATIC_MakeTransform_NetQuantize(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.MakeTransform_NetQuantize");

	UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.LowPassFilter_RollingAverage
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 lastAverage                    (Parm, IsPlainOldData)
// struct FVector                 newSample                      (Parm, IsPlainOldData)
// struct FVector                 newAverage                     (Parm, OutParm, IsPlainOldData)
// int                            numSamples                     (Parm, ZeroConstructor, IsPlainOldData)

void UVRExpansionFunctionLibrary::STATIC_LowPassFilter_RollingAverage(const struct FVector& lastAverage, const struct FVector& newSample, int numSamples, struct FVector* newAverage)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.LowPassFilter_RollingAverage");

	UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Params params;
	params.lastAverage = lastAverage;
	params.newSample = newSample;
	params.numSamples = numSamples;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newAverage != nullptr)
		*newAverage = params.newAverage;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.LowPassFilter_Exponential
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 lastAverage                    (Parm, IsPlainOldData)
// struct FVector                 newSample                      (Parm, IsPlainOldData)
// struct FVector                 newAverage                     (Parm, OutParm, IsPlainOldData)
// float                          sampleFactor                   (Parm, ZeroConstructor, IsPlainOldData)

void UVRExpansionFunctionLibrary::STATIC_LowPassFilter_Exponential(const struct FVector& lastAverage, const struct FVector& newSample, float sampleFactor, struct FVector* newAverage)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.LowPassFilter_Exponential");

	UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Params params;
	params.lastAverage = lastAverage;
	params.newSample = newSample;
	params.sampleFactor = sampleFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (newAverage != nullptr)
		*newAverage = params.newAverage;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.IsInVREditorPreviewOrGame
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRExpansionFunctionLibrary::STATIC_IsInVREditorPreviewOrGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.IsInVREditorPreviewOrGame");

	UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.IsInVREditorPreview
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRExpansionFunctionLibrary::STATIC_IsInVREditorPreview()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.IsInVREditorPreview");

	UVRExpansionFunctionLibrary_IsInVREditorPreview_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetIsHMDWorn
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EBPHMDWornState                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EBPHMDWornState UVRExpansionFunctionLibrary::STATIC_GetIsHMDWorn()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetIsHMDWorn");

	UVRExpansionFunctionLibrary_GetIsHMDWorn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetIsHMDConnected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRExpansionFunctionLibrary::STATIC_GetIsHMDConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetIsHMDConnected");

	UVRExpansionFunctionLibrary_GetIsHMDConnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetIsActorMovable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  ActorToCheck                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRExpansionFunctionLibrary::STATIC_GetIsActorMovable(class AActor* ActorToCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetIsActorMovable");

	UVRExpansionFunctionLibrary_GetIsActorMovable_Params params;
	params.ActorToCheck = ActorToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetHMDType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EBPHMDDeviceType               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EBPHMDDeviceType UVRExpansionFunctionLibrary::STATIC_GetHMDType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetHMDType");

	UVRExpansionFunctionLibrary_GetHMDType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetHMDPureYaw
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                HMDRotation                    (Parm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UVRExpansionFunctionLibrary::STATIC_GetHMDPureYaw(const struct FRotator& HMDRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetHMDPureYaw");

	UVRExpansionFunctionLibrary_GetHMDPureYaw_Params params;
	params.HMDRotation = HMDRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetHandFromMotionSourceName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   MotionSource                   (Parm, ZeroConstructor, IsPlainOldData)
// EControllerHand                Hand                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRExpansionFunctionLibrary::STATIC_GetHandFromMotionSourceName(const struct FName& MotionSource, EControllerHand* Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetHandFromMotionSourceName");

	UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Params params;
	params.MotionSource = MotionSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hand != nullptr)
		*Hand = params.Hand;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetGripSlotInRangeByTypeName_Component
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   SlotType                       (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 WorldLocation                  (Parm, IsPlainOldData)
// float                          MaxRange                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHadSlotInRange                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SlotWorldTransform             (Parm, OutParm, IsPlainOldData)

void UVRExpansionFunctionLibrary::STATIC_GetGripSlotInRangeByTypeName_Component(const struct FName& SlotType, class UPrimitiveComponent* Component, const struct FVector& WorldLocation, float MaxRange, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetGripSlotInRangeByTypeName_Component");

	UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Params params;
	params.SlotType = SlotType;
	params.Component = Component;
	params.WorldLocation = WorldLocation;
	params.MaxRange = MaxRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHadSlotInRange != nullptr)
		*bHadSlotInRange = params.bHadSlotInRange;
	if (SlotWorldTransform != nullptr)
		*SlotWorldTransform = params.SlotWorldTransform;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetGripSlotInRangeByTypeName
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   SlotType                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldLocation                  (Parm, IsPlainOldData)
// float                          MaxRange                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHadSlotInRange                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SlotWorldTransform             (Parm, OutParm, IsPlainOldData)

void UVRExpansionFunctionLibrary::STATIC_GetGripSlotInRangeByTypeName(const struct FName& SlotType, class AActor* Actor, const struct FVector& WorldLocation, float MaxRange, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetGripSlotInRangeByTypeName");

	UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Params params;
	params.SlotType = SlotType;
	params.Actor = Actor;
	params.WorldLocation = WorldLocation;
	params.MaxRange = MaxRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHadSlotInRange != nullptr)
		*bHadSlotInRange = params.bHadSlotInRange;
	if (SlotWorldTransform != nullptr)
		*SlotWorldTransform = params.SlotWorldTransform;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetFirstGameplayTagWithExactParent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag            DirectParentTag                (Parm)
// struct FGameplayTagContainer   BaseContainer                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            FoundTag                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRExpansionFunctionLibrary::STATIC_GetFirstGameplayTagWithExactParent(const struct FGameplayTag& DirectParentTag, const struct FGameplayTagContainer& BaseContainer, struct FGameplayTag* FoundTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetFirstGameplayTagWithExactParent");

	UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Params params;
	params.DirectParentTag = DirectParentTag;
	params.BaseContainer = BaseContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundTag != nullptr)
		*FoundTag = params.FoundTag;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.EqualEqual_FBPActorGripInformation
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPActorGripInformation A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FBPActorGripInformation B                              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRExpansionFunctionLibrary::STATIC_EqualEqual_FBPActorGripInformation(const struct FBPActorGripInformation& A, const struct FBPActorGripInformation& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.EqualEqual_FBPActorGripInformation");

	UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_TransformToTransformNetQuantize
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              InTransform                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FTransform_NetQuantize  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTransform_NetQuantize UVRExpansionFunctionLibrary::STATIC_Conv_TransformToTransformNetQuantize(const struct FTransform& InTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_TransformToTransformNetQuantize");

	UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Params params;
	params.InTransform = InTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_FVectorToFVectorNetQuantize100
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 InVector                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector_NetQuantize100  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector_NetQuantize100 UVRExpansionFunctionLibrary::STATIC_Conv_FVectorToFVectorNetQuantize100(const struct FVector& InVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_FVectorToFVectorNetQuantize100");

	UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Params params;
	params.InVector = InVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_FVectorToFVectorNetQuantize10
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 InVector                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector_NetQuantize10   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector_NetQuantize10 UVRExpansionFunctionLibrary::STATIC_Conv_FVectorToFVectorNetQuantize10(const struct FVector& InVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_FVectorToFVectorNetQuantize10");

	UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Params params;
	params.InVector = InVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_FVectorToFVectorNetQuantize
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 InVector                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector_NetQuantize     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector_NetQuantize UVRExpansionFunctionLibrary::STATIC_Conv_FVectorToFVectorNetQuantize(const struct FVector& InVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_FVectorToFVectorNetQuantize");

	UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Params params;
	params.InVector = InVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.BreakTransform_NetQuantize
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform_NetQuantize  InTransform                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)
// struct FVector                 Scale                          (Parm, OutParm, IsPlainOldData)

void UVRExpansionFunctionLibrary::STATIC_BreakTransform_NetQuantize(const struct FTransform_NetQuantize& InTransform, struct FVector* Location, struct FRotator* Rotation, struct FVector* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.BreakTransform_NetQuantize");

	UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Params params;
	params.InTransform = InTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function VRExpansionPlugin.VRExpansionFunctionLibrary.AddSceneComponentByClass
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ComponentRelativeTransform     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* UVRExpansionFunctionLibrary::STATIC_AddSceneComponentByClass(class UObject* Outer, class UClass* Class, const struct FTransform& ComponentRelativeTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.AddSceneComponentByClass");

	UVRExpansionFunctionLibrary_AddSceneComponentByClass_Params params;
	params.Outer = Outer;
	params.Class = Class;
	params.ComponentRelativeTransform = ComponentRelativeTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GesturesDatabase.RecalculateGestures
// (Final, Native, Public, BlueprintCallable)

void UGesturesDatabase::RecalculateGestures()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GesturesDatabase.RecalculateGestures");

	UGesturesDatabase_RecalculateGestures_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.GesturesDatabase.ImportSplineAsGesture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USplineComponent*        HostSplineComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 GestureName                    (Parm, ZeroConstructor)
// bool                           bKeepSplineCurves              (Parm, ZeroConstructor, IsPlainOldData)
// float                          SegmentLen                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGesturesDatabase::ImportSplineAsGesture(class USplineComponent* HostSplineComponent, const struct FString& GestureName, bool bKeepSplineCurves, float SegmentLen)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GesturesDatabase.ImportSplineAsGesture");

	UGesturesDatabase_ImportSplineAsGesture_Params params;
	params.HostSplineComponent = HostSplineComponent;
	params.GestureName = GestureName;
	params.bKeepSplineCurves = bKeepSplineCurves;
	params.SegmentLen = SegmentLen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.GesturesDatabase.FillSplineWithGesture
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FVRGesture              Gesture                        (Parm, OutParm, ReferenceParm)
// class USplineComponent*        SplineComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bCenterPointsOnSpline          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bScaleToBounds                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          OptionalBounds                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseCurvedPoints               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFillInSplineMeshComponents    (Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh*             Mesh                           (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterial*               MeshMat                        (Parm, ZeroConstructor, IsPlainOldData)

void UGesturesDatabase::FillSplineWithGesture(class USplineComponent* SplineComponent, bool bCenterPointsOnSpline, bool bScaleToBounds, float OptionalBounds, bool bUseCurvedPoints, bool bFillInSplineMeshComponents, class UStaticMesh* Mesh, class UMaterial* MeshMat, struct FVRGesture* Gesture)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GesturesDatabase.FillSplineWithGesture");

	UGesturesDatabase_FillSplineWithGesture_Params params;
	params.SplineComponent = SplineComponent;
	params.bCenterPointsOnSpline = bCenterPointsOnSpline;
	params.bScaleToBounds = bScaleToBounds;
	params.OptionalBounds = OptionalBounds;
	params.bUseCurvedPoints = bUseCurvedPoints;
	params.bFillInSplineMeshComponents = bFillInSplineMeshComponents;
	params.Mesh = Mesh;
	params.MeshMat = MeshMat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Gesture != nullptr)
		*Gesture = params.Gesture;
}


// Function VRExpansionPlugin.VRGestureComponent.SaveRecording
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FVRGesture              Recording                      (Parm, OutParm, ReferenceParm)
// struct FString                 RecordingName                  (Parm, ZeroConstructor)

void UVRGestureComponent::SaveRecording(const struct FString& RecordingName, struct FVRGesture* Recording)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGestureComponent.SaveRecording");

	UVRGestureComponent_SaveRecording_Params params;
	params.RecordingName = RecordingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Recording != nullptr)
		*Recording = params.Recording;
}


// Function VRExpansionPlugin.VRGestureComponent.RecalculateGestureSize
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FVRGesture              InputGesture                   (Parm, OutParm, ReferenceParm)
// class UGesturesDatabase*       GestureDB                      (Parm, ZeroConstructor, IsPlainOldData)

void UVRGestureComponent::RecalculateGestureSize(class UGesturesDatabase* GestureDB, struct FVRGesture* InputGesture)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGestureComponent.RecalculateGestureSize");

	UVRGestureComponent_RecalculateGestureSize_Params params;
	params.GestureDB = GestureDB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputGesture != nullptr)
		*InputGesture = params.InputGesture;
}


// Function VRExpansionPlugin.VRGestureComponent.OnGestureDetected
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// unsigned char                  GestureType                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DetectedGestureName            (Parm, OutParm, ZeroConstructor)
// int                            DetectedGestureIndex           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UGesturesDatabase*       GestureDataBase                (Parm, ZeroConstructor, IsPlainOldData)

void UVRGestureComponent::OnGestureDetected(unsigned char GestureType, class UGesturesDatabase* GestureDataBase, struct FString* DetectedGestureName, int* DetectedGestureIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGestureComponent.OnGestureDetected");

	UVRGestureComponent_OnGestureDetected_Params params;
	params.GestureType = GestureType;
	params.GestureDataBase = GestureDataBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DetectedGestureName != nullptr)
		*DetectedGestureName = params.DetectedGestureName;
	if (DetectedGestureIndex != nullptr)
		*DetectedGestureIndex = params.DetectedGestureIndex;
}


// Function VRExpansionPlugin.VRGestureComponent.EndRecording
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FVRGesture              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVRGesture UVRGestureComponent::EndRecording()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGestureComponent.EndRecording");

	UVRGestureComponent_EndRecording_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRGestureComponent.DrawDebugGesture
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              StartTransform                 (Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVRGesture              GestureToDraw                  (Parm)
// struct FColor                  Color                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bPersistentLines               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  DepthPriority                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          LifeTime                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)

void UVRGestureComponent::DrawDebugGesture(class UObject* WorldContextObject, const struct FVRGesture& GestureToDraw, const struct FColor& Color, bool bPersistentLines, unsigned char DepthPriority, float LifeTime, float Thickness, struct FTransform* StartTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGestureComponent.DrawDebugGesture");

	UVRGestureComponent_DrawDebugGesture_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GestureToDraw = GestureToDraw;
	params.Color = Color;
	params.bPersistentLines = bPersistentLines;
	params.DepthPriority = DepthPriority;
	params.LifeTime = LifeTime;
	params.Thickness = Thickness;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StartTransform != nullptr)
		*StartTransform = params.StartTransform;
}


// Function VRExpansionPlugin.VRGestureComponent.ClearRecording
// (Final, Native, Public, BlueprintCallable)

void UVRGestureComponent::ClearRecording()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGestureComponent.ClearRecording");

	UVRGestureComponent_ClearRecording_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRGestureComponent.BeginRecording
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bRunDetection                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFlattenGesture                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDrawGesture                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDrawAsSpline                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            SamplingHTZ                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            SampleBufferSize               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ClampingTolerance              (Parm, ZeroConstructor, IsPlainOldData)

void UVRGestureComponent::BeginRecording(bool bRunDetection, bool bFlattenGesture, bool bDrawGesture, bool bDrawAsSpline, int SamplingHTZ, int SampleBufferSize, float ClampingTolerance)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGestureComponent.BeginRecording");

	UVRGestureComponent_BeginRecording_Params params;
	params.bRunDetection = bRunDetection;
	params.bFlattenGesture = bFlattenGesture;
	params.bDrawGesture = bDrawGesture;
	params.bDrawAsSpline = bDrawAsSpline;
	params.SamplingHTZ = SamplingHTZ;
	params.SampleBufferSize = SampleBufferSize;
	params.ClampingTolerance = ClampingTolerance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRGlobalSettings.SaveControllerProfiles
// (Final, Native, Static, Public, BlueprintCallable)

void UVRGlobalSettings::STATIC_SaveControllerProfiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.SaveControllerProfiles");

	UVRGlobalSettings_SaveControllerProfiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRGlobalSettings.OverwriteControllerProfile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPVRControllerProfile  OverwritingProfile             (Parm, OutParm, ReferenceParm)
// bool                           bSaveOutToConfig               (Parm, ZeroConstructor, IsPlainOldData)

void UVRGlobalSettings::STATIC_OverwriteControllerProfile(bool bSaveOutToConfig, struct FBPVRControllerProfile* OverwritingProfile)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.OverwriteControllerProfile");

	UVRGlobalSettings_OverwriteControllerProfile_Params params;
	params.bSaveOutToConfig = bSaveOutToConfig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverwritingProfile != nullptr)
		*OverwritingProfile = params.OverwritingProfile;
}


// Function VRExpansionPlugin.VRGlobalSettings.LoadControllerProfileByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ControllerProfileName          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetAsCurrentProfile           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRGlobalSettings::STATIC_LoadControllerProfileByName(const struct FName& ControllerProfileName, bool bSetAsCurrentProfile)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.LoadControllerProfileByName");

	UVRGlobalSettings_LoadControllerProfileByName_Params params;
	params.ControllerProfileName = ControllerProfileName;
	params.bSetAsCurrentProfile = bSetAsCurrentProfile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRGlobalSettings.LoadControllerProfile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPVRControllerProfile  ControllerProfile              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bSetAsCurrentProfile           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRGlobalSettings::STATIC_LoadControllerProfile(const struct FBPVRControllerProfile& ControllerProfile, bool bSetAsCurrentProfile)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.LoadControllerProfile");

	UVRGlobalSettings_LoadControllerProfile_Params params;
	params.ControllerProfile = ControllerProfile;
	params.bSetAsCurrentProfile = bSetAsCurrentProfile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRGlobalSettings.GetCurrentProfileName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           bHadLoadedProfile              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UVRGlobalSettings::STATIC_GetCurrentProfileName(bool* bHadLoadedProfile)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.GetCurrentProfileName");

	UVRGlobalSettings_GetCurrentProfileName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHadLoadedProfile != nullptr)
		*bHadLoadedProfile = params.bHadLoadedProfile;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRGlobalSettings.GetCurrentProfile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           bHadLoadedProfile              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FBPVRControllerProfile  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBPVRControllerProfile UVRGlobalSettings::STATIC_GetCurrentProfile(bool* bHadLoadedProfile)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.GetCurrentProfile");

	UVRGlobalSettings_GetCurrentProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHadLoadedProfile != nullptr)
		*bHadLoadedProfile = params.bHadLoadedProfile;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRGlobalSettings.GetControllerProfiles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FBPVRControllerProfile> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBPVRControllerProfile> UVRGlobalSettings::STATIC_GetControllerProfiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.GetControllerProfiles");

	UVRGlobalSettings_GetControllerProfiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRGlobalSettings.GetControllerProfile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ControllerProfileName          (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPVRControllerProfile  OutProfile                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRGlobalSettings::STATIC_GetControllerProfile(const struct FName& ControllerProfileName, struct FBPVRControllerProfile* OutProfile)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.GetControllerProfile");

	UVRGlobalSettings_GetControllerProfile_Params params;
	params.ControllerProfileName = ControllerProfileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutProfile != nullptr)
		*OutProfile = params.OutProfile;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRGlobalSettings.DeleteControllerProfile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ControllerProfileName          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSaveOutToConfig               (Parm, ZeroConstructor, IsPlainOldData)

void UVRGlobalSettings::STATIC_DeleteControllerProfile(const struct FName& ControllerProfileName, bool bSaveOutToConfig)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.DeleteControllerProfile");

	UVRGlobalSettings_DeleteControllerProfile_Params params;
	params.ControllerProfileName = ControllerProfileName;
	params.bSaveOutToConfig = bSaveOutToConfig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRGlobalSettings.AdjustTransformByGivenControllerProfile
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBPVRControllerProfile  ControllerProfile              (Parm, OutParm, ReferenceParm)
// struct FTransform              SocketTransform                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bIsRightHand                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UVRGlobalSettings::STATIC_AdjustTransformByGivenControllerProfile(const struct FTransform& SocketTransform, bool bIsRightHand, struct FBPVRControllerProfile* ControllerProfile)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.AdjustTransformByGivenControllerProfile");

	UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Params params;
	params.SocketTransform = SocketTransform;
	params.bIsRightHand = bIsRightHand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ControllerProfile != nullptr)
		*ControllerProfile = params.ControllerProfile;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRGlobalSettings.AdjustTransformByControllerProfile
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   OptionalControllerProfileName  (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SocketTransform                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bIsRightHand                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UVRGlobalSettings::STATIC_AdjustTransformByControllerProfile(const struct FName& OptionalControllerProfileName, const struct FTransform& SocketTransform, bool bIsRightHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.AdjustTransformByControllerProfile");

	UVRGlobalSettings_AdjustTransformByControllerProfile_Params params;
	params.OptionalControllerProfileName = OptionalControllerProfileName;
	params.SocketTransform = SocketTransform;
	params.bIsRightHand = bIsRightHand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRGlobalSettings.AddControllerProfile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBPVRControllerProfile  NewProfile                     (Parm, OutParm, ReferenceParm)
// bool                           bSaveOutToConfig               (Parm, ZeroConstructor, IsPlainOldData)

void UVRGlobalSettings::STATIC_AddControllerProfile(bool bSaveOutToConfig, struct FBPVRControllerProfile* NewProfile)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.AddControllerProfile");

	UVRGlobalSettings_AddControllerProfile_Params params;
	params.bSaveOutToConfig = bSaveOutToConfig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewProfile != nullptr)
		*NewProfile = params.NewProfile;
}


// Function VRExpansionPlugin.VRGripInterface.TickGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UVRGripInterface::TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.TickGrip");

	UVRGripInterface_TickGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRGripInterface.TeleportBehavior
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripInterfaceTeleportBehavior ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripInterfaceTeleportBehavior UVRGripInterface::TeleportBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.TeleportBehavior");

	UVRGripInterface_TeleportBehavior_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRGripInterface.SimulateOnDrop
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRGripInterface::SimulateOnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.SimulateOnDrop");

	UVRGripInterface_SimulateOnDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRGripInterface.SetHeld
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* HoldingController              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsHeld                        (Parm, ZeroConstructor, IsPlainOldData)

void UVRGripInterface::SetHeld(class UGripMotionControllerComponent* HoldingController, bool bIsHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.SetHeld");

	UVRGripInterface_SetHeld_Params params;
	params.HoldingController = HoldingController;
	params.bIsHeld = bIsHeld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRGripInterface.SecondaryGripType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESecondaryGripType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESecondaryGripType UVRGripInterface::SecondaryGripType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.SecondaryGripType");

	UVRGripInterface_SecondaryGripType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRGripInterface.RequestsSocketing
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         ParentToSocketTo               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OptionalSocketName             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform_NetQuantize  RelativeTransform              (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRGripInterface::RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.RequestsSocketing");

	UVRGripInterface_RequestsSocketing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParentToSocketTo != nullptr)
		*ParentToSocketTo = params.ParentToSocketTo;
	if (OptionalSocketName != nullptr)
		*OptionalSocketName = params.OptionalSocketName;
	if (RelativeTransform != nullptr)
		*RelativeTransform = params.RelativeTransform;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRGripInterface.OnUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UVRGripInterface::OnUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.OnUsed");

	UVRGripInterface_OnUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRGripInterface.OnSecondaryUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UVRGripInterface::OnSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.OnSecondaryUsed");

	UVRGripInterface_OnSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRGripInterface.OnSecondaryGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent*         ReleasingSecondaryGripComponent (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UVRGripInterface::OnSecondaryGripRelease(class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.OnSecondaryGripRelease");

	UVRGripInterface_OnSecondaryGripRelease_Params params;
	params.ReleasingSecondaryGripComponent = ReleasingSecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRGripInterface.OnSecondaryGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent*         SecondaryGripComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UVRGripInterface::OnSecondaryGrip(class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.OnSecondaryGrip");

	UVRGripInterface_OnSecondaryGrip_Params params;
	params.SecondaryGripComponent = SecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRGripInterface.OnInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)
// TEnumAsByte<EInputEvent>       KeyEvent                       (Parm, ZeroConstructor, IsPlainOldData)

void UVRGripInterface::OnInput(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.OnInput");

	UVRGripInterface_OnInput_Params params;
	params.Key = Key;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRGripInterface.OnGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* ReleasingController            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasSocketed                   (Parm, ZeroConstructor, IsPlainOldData)

void UVRGripInterface::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.OnGripRelease");

	UVRGripInterface_OnGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRGripInterface.OnGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UVRGripInterface::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.OnGrip");

	UVRGripInterface_OnGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRGripInterface.OnEndUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UVRGripInterface::OnEndUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.OnEndUsed");

	UVRGripInterface_OnEndUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRGripInterface.OnEndSecondaryUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UVRGripInterface::OnEndSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.OnEndSecondaryUsed");

	UVRGripInterface_OnEndSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRGripInterface.OnChildGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* ReleasingController            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasSocketed                   (Parm, ZeroConstructor, IsPlainOldData)

void UVRGripInterface::OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.OnChildGripRelease");

	UVRGripInterface_OnChildGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRGripInterface.OnChildGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UVRGripInterface::OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.OnChildGrip");

	UVRGripInterface_OnChildGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRGripInterface.IsHeld
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* HoldingController              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsHeld                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVRGripInterface::IsHeld(class UGripMotionControllerComponent** HoldingController, bool* bIsHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.IsHeld");

	UVRGripInterface_IsHeld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HoldingController != nullptr)
		*HoldingController = params.HoldingController;
	if (bIsHeld != nullptr)
		*bIsHeld = params.bIsHeld;
}


// Function VRExpansionPlugin.VRGripInterface.GripMovementReplicationType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripMovementReplicationSettings ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripMovementReplicationSettings UVRGripInterface::GripMovementReplicationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.GripMovementReplicationType");

	UVRGripInterface_GripMovementReplicationType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRGripInterface.GripLateUpdateSetting
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripLateUpdateSettings        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripLateUpdateSettings UVRGripInterface::GripLateUpdateSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.GripLateUpdateSetting");

	UVRGripInterface_GripLateUpdateSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRGripInterface.GripBreakDistance
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVRGripInterface::GripBreakDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.GripBreakDistance");

	UVRGripInterface_GripBreakDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRGripInterface.GetPrimaryGripType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsSlot                        (Parm, ZeroConstructor, IsPlainOldData)
// EGripCollisionType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripCollisionType UVRGripInterface::GetPrimaryGripType(bool bIsSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.GetPrimaryGripType");

	UVRGripInterface_GetPrimaryGripType_Params params;
	params.bIsSlot = bIsSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRGripInterface.GetGripStiffnessAndDamping
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GripStiffnessOut               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          GripDampingOut                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVRGripInterface::GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.GetGripStiffnessAndDamping");

	UVRGripInterface_GetGripStiffnessAndDamping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GripStiffnessOut != nullptr)
		*GripStiffnessOut = params.GripStiffnessOut;
	if (GripDampingOut != nullptr)
		*GripDampingOut = params.GripDampingOut;
}


// Function VRExpansionPlugin.VRGripInterface.DenyGripping
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRGripInterface::DenyGripping()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.DenyGripping");

	UVRGripInterface_DenyGripping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRGripInterface.ClosestGripSlotInRange
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, IsPlainOldData)
// bool                           bSecondarySlot                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHadSlotInRange                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SlotWorldTransform             (Parm, OutParm, IsPlainOldData)
// class UGripMotionControllerComponent* CallingController              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverridePrefix                 (Parm, ZeroConstructor, IsPlainOldData)

void UVRGripInterface::ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, class UGripMotionControllerComponent* CallingController, const struct FName& OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.ClosestGripSlotInRange");

	UVRGripInterface_ClosestGripSlotInRange_Params params;
	params.WorldLocation = WorldLocation;
	params.bSecondarySlot = bSecondarySlot;
	params.CallingController = CallingController;
	params.OverridePrefix = OverridePrefix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHadSlotInRange != nullptr)
		*bHadSlotInRange = params.bHadSlotInRange;
	if (SlotWorldTransform != nullptr)
		*SlotWorldTransform = params.SlotWorldTransform;
}


// Function VRExpansionPlugin.VRGripInterface.AdvancedGripSettings
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBPAdvGripSettings      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBPAdvGripSettings UVRGripInterface::AdvancedGripSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.AdvancedGripSettings");

	UVRGripInterface_AdvancedGripSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_OnGripInit
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USceneComponent*         InteractibleComp               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (Parm, OutParm, ReferenceParm)
// struct FBPVRInteractibleBaseData BaseDataToInit                 (Parm, OutParm, ReferenceParm)

void UVRInteractibleFunctionLibrary::STATIC_Interactible_OnGripInit(class USceneComponent* InteractibleComp, struct FBPActorGripInformation* GripInformation, struct FBPVRInteractibleBaseData* BaseDataToInit)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_OnGripInit");

	UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Params params;
	params.InteractibleComp = InteractibleComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GripInformation != nullptr)
		*GripInformation = params.GripInformation;
	if (BaseDataToInit != nullptr)
		*BaseDataToInit = params.BaseDataToInit;
}


// Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetThresholdSnappedValue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ValueToSnap                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          SnapIncrement                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          SnapThreshold                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVRInteractibleFunctionLibrary::STATIC_Interactible_GetThresholdSnappedValue(float ValueToSnap, float SnapIncrement, float SnapThreshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetThresholdSnappedValue");

	UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Params params;
	params.ValueToSnap = ValueToSnap;
	params.SnapIncrement = SnapIncrement;
	params.SnapThreshold = SnapThreshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetCurrentRelativeTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USceneComponent*         SceneComponentToCheck          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPVRInteractibleBaseData BaseData                       (Parm, OutParm, ReferenceParm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UVRInteractibleFunctionLibrary::STATIC_Interactible_GetCurrentRelativeTransform(class USceneComponent* SceneComponentToCheck, struct FBPVRInteractibleBaseData* BaseData)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetCurrentRelativeTransform");

	UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Params params;
	params.SceneComponentToCheck = SceneComponentToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BaseData != nullptr)
		*BaseData = params.BaseData;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetCurrentParentTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USceneComponent*         SceneComponentToCheck          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UVRInteractibleFunctionLibrary::STATIC_Interactible_GetCurrentParentTransform(class USceneComponent* SceneComponentToCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetCurrentParentTransform");

	UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Params params;
	params.SceneComponentToCheck = SceneComponentToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetAngleAroundAxisDelta
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// EVRInteractibleAxis            AxisToCalc                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CurInteractorLocation          (Parm, IsPlainOldData)
// float                          InitialAngle                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVRInteractibleFunctionLibrary::STATIC_Interactible_GetAngleAroundAxisDelta(EVRInteractibleAxis AxisToCalc, const struct FVector& CurInteractorLocation, float InitialAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetAngleAroundAxisDelta");

	UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Params params;
	params.AxisToCalc = AxisToCalc;
	params.CurInteractorLocation = CurInteractorLocation;
	params.InitialAngle = InitialAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetAngleAroundAxis
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// EVRInteractibleAxis            AxisToCalc                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CurInteractorLocation          (Parm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVRInteractibleFunctionLibrary::STATIC_Interactible_GetAngleAroundAxis(EVRInteractibleAxis AxisToCalc, const struct FVector& CurInteractorLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetAngleAroundAxis");

	UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Params params;
	params.AxisToCalc = AxisToCalc;
	params.CurInteractorLocation = CurInteractorLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_BeginPlayInit
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class USceneComponent*         InteractibleComp               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPVRInteractibleBaseData BaseDataToInit                 (Parm, OutParm, ReferenceParm)

void UVRInteractibleFunctionLibrary::STATIC_Interactible_BeginPlayInit(class USceneComponent* InteractibleComp, struct FBPVRInteractibleBaseData* BaseDataToInit)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_BeginPlayInit");

	UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Params params;
	params.InteractibleComp = InteractibleComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BaseDataToInit != nullptr)
		*BaseDataToInit = params.BaseDataToInit;
}


// Function VRExpansionPlugin.VRLeverComponent.TickGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UVRLeverComponent::TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.TickGrip");

	UVRLeverComponent_TickGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRLeverComponent.TeleportBehavior
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripInterfaceTeleportBehavior ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripInterfaceTeleportBehavior UVRLeverComponent::TeleportBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.TeleportBehavior");

	UVRLeverComponent_TeleportBehavior_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRLeverComponent.SimulateOnDrop
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRLeverComponent::SimulateOnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.SimulateOnDrop");

	UVRLeverComponent_SimulateOnDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRLeverComponent.SetHeld
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* NewHoldingController           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bNewIsHeld                     (Parm, ZeroConstructor, IsPlainOldData)

void UVRLeverComponent::SetHeld(class UGripMotionControllerComponent* NewHoldingController, bool bNewIsHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.SetHeld");

	UVRLeverComponent_SetHeld_Params params;
	params.NewHoldingController = NewHoldingController;
	params.bNewIsHeld = bNewIsHeld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRLeverComponent.SecondaryGripType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESecondaryGripType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESecondaryGripType UVRLeverComponent::SecondaryGripType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.SecondaryGripType");

	UVRLeverComponent_SecondaryGripType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRLeverComponent.ResetInitialLeverLocation
// (Final, Native, Public, BlueprintCallable)

void UVRLeverComponent::ResetInitialLeverLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.ResetInitialLeverLocation");

	UVRLeverComponent_ResetInitialLeverLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRLeverComponent.RequestsSocketing
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         ParentToSocketTo               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OptionalSocketName             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform_NetQuantize  RelativeTransform              (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRLeverComponent::RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.RequestsSocketing");

	UVRLeverComponent_RequestsSocketing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParentToSocketTo != nullptr)
		*ParentToSocketTo = params.ParentToSocketTo;
	if (OptionalSocketName != nullptr)
		*OptionalSocketName = params.OptionalSocketName;
	if (RelativeTransform != nullptr)
		*RelativeTransform = params.RelativeTransform;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRLeverComponent.ReceiveLeverStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           LeverStatus                    (Parm, ZeroConstructor, IsPlainOldData)
// EVRInteractibleLeverEventType  LeverStatusType                (Parm, ZeroConstructor, IsPlainOldData)
// float                          LeverAngleAtTime               (Parm, ZeroConstructor, IsPlainOldData)

void UVRLeverComponent::ReceiveLeverStateChanged(bool LeverStatus, EVRInteractibleLeverEventType LeverStatusType, float LeverAngleAtTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.ReceiveLeverStateChanged");

	UVRLeverComponent_ReceiveLeverStateChanged_Params params;
	params.LeverStatus = LeverStatus;
	params.LeverStatusType = LeverStatusType;
	params.LeverAngleAtTime = LeverAngleAtTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRLeverComponent.ReceiveLeverFinishedLerping
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          LeverFinalAngle                (Parm, ZeroConstructor, IsPlainOldData)

void UVRLeverComponent::ReceiveLeverFinishedLerping(float LeverFinalAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.ReceiveLeverFinishedLerping");

	UVRLeverComponent_ReceiveLeverFinishedLerping_Params params;
	params.LeverFinalAngle = LeverFinalAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRLeverComponent.ReCalculateCurrentAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVRLeverComponent::ReCalculateCurrentAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.ReCalculateCurrentAngle");

	UVRLeverComponent_ReCalculateCurrentAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRLeverComponent.OnUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UVRLeverComponent::OnUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.OnUsed");

	UVRLeverComponent_OnUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRLeverComponent.OnSecondaryUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UVRLeverComponent::OnSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.OnSecondaryUsed");

	UVRLeverComponent_OnSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRLeverComponent.OnSecondaryGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent*         ReleasingSecondaryGripComponent (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UVRLeverComponent::OnSecondaryGripRelease(class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.OnSecondaryGripRelease");

	UVRLeverComponent_OnSecondaryGripRelease_Params params;
	params.ReleasingSecondaryGripComponent = ReleasingSecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRLeverComponent.OnSecondaryGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent*         SecondaryGripComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UVRLeverComponent::OnSecondaryGrip(class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.OnSecondaryGrip");

	UVRLeverComponent_OnSecondaryGrip_Params params;
	params.SecondaryGripComponent = SecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRLeverComponent.OnRep_InitialRelativeTransform
// (Native, Public)

void UVRLeverComponent::OnRep_InitialRelativeTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.OnRep_InitialRelativeTransform");

	UVRLeverComponent_OnRep_InitialRelativeTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRLeverComponent.OnInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)
// TEnumAsByte<EInputEvent>       KeyEvent                       (Parm, ZeroConstructor, IsPlainOldData)

void UVRLeverComponent::OnInput(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.OnInput");

	UVRLeverComponent_OnInput_Params params;
	params.Key = Key;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRLeverComponent.OnGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* ReleasingController            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasSocketed                   (Parm, ZeroConstructor, IsPlainOldData)

void UVRLeverComponent::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.OnGripRelease");

	UVRLeverComponent_OnGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRLeverComponent.OnGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UVRLeverComponent::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.OnGrip");

	UVRLeverComponent_OnGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRLeverComponent.OnEndUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UVRLeverComponent::OnEndUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.OnEndUsed");

	UVRLeverComponent_OnEndUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRLeverComponent.OnEndSecondaryUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UVRLeverComponent::OnEndSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.OnEndSecondaryUsed");

	UVRLeverComponent_OnEndSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRLeverComponent.OnChildGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* ReleasingController            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasSocketed                   (Parm, ZeroConstructor, IsPlainOldData)

void UVRLeverComponent::OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.OnChildGripRelease");

	UVRLeverComponent_OnChildGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRLeverComponent.OnChildGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UVRLeverComponent::OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.OnChildGrip");

	UVRLeverComponent_OnChildGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRLeverComponent.IsHeld
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* CurHoldingController           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bCurIsHeld                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVRLeverComponent::IsHeld(class UGripMotionControllerComponent** CurHoldingController, bool* bCurIsHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.IsHeld");

	UVRLeverComponent_IsHeld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurHoldingController != nullptr)
		*CurHoldingController = params.CurHoldingController;
	if (bCurIsHeld != nullptr)
		*bCurIsHeld = params.bCurIsHeld;
}


// Function VRExpansionPlugin.VRLeverComponent.GripMovementReplicationType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripMovementReplicationSettings ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripMovementReplicationSettings UVRLeverComponent::GripMovementReplicationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.GripMovementReplicationType");

	UVRLeverComponent_GripMovementReplicationType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRLeverComponent.GripLateUpdateSetting
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripLateUpdateSettings        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripLateUpdateSettings UVRLeverComponent::GripLateUpdateSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.GripLateUpdateSetting");

	UVRLeverComponent_GripLateUpdateSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRLeverComponent.GripBreakDistance
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVRLeverComponent::GripBreakDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.GripBreakDistance");

	UVRLeverComponent_GripBreakDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRLeverComponent.GetPrimaryGripType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsSlot                        (Parm, ZeroConstructor, IsPlainOldData)
// EGripCollisionType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripCollisionType UVRLeverComponent::GetPrimaryGripType(bool bIsSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.GetPrimaryGripType");

	UVRLeverComponent_GetPrimaryGripType_Params params;
	params.bIsSlot = bIsSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRLeverComponent.GetGripStiffnessAndDamping
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GripStiffnessOut               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          GripDampingOut                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVRLeverComponent::GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.GetGripStiffnessAndDamping");

	UVRLeverComponent_GetGripStiffnessAndDamping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GripStiffnessOut != nullptr)
		*GripStiffnessOut = params.GripStiffnessOut;
	if (GripDampingOut != nullptr)
		*GripDampingOut = params.GripDampingOut;
}


// Function VRExpansionPlugin.VRLeverComponent.DenyGripping
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRLeverComponent::DenyGripping()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.DenyGripping");

	UVRLeverComponent_DenyGripping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRLeverComponent.ClosestGripSlotInRange
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, IsPlainOldData)
// bool                           bSecondarySlot                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHadSlotInRange                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SlotWorldTransform             (Parm, OutParm, IsPlainOldData)
// class UGripMotionControllerComponent* CallingController              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverridePrefix                 (Parm, ZeroConstructor, IsPlainOldData)

void UVRLeverComponent::ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, class UGripMotionControllerComponent* CallingController, const struct FName& OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.ClosestGripSlotInRange");

	UVRLeverComponent_ClosestGripSlotInRange_Params params;
	params.WorldLocation = WorldLocation;
	params.bSecondarySlot = bSecondarySlot;
	params.CallingController = CallingController;
	params.OverridePrefix = OverridePrefix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHadSlotInRange != nullptr)
		*bHadSlotInRange = params.bHadSlotInRange;
	if (SlotWorldTransform != nullptr)
		*SlotWorldTransform = params.SlotWorldTransform;
}


// Function VRExpansionPlugin.VRLeverComponent.AdvancedGripSettings
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBPAdvGripSettings      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBPAdvGripSettings UVRLeverComponent::AdvancedGripSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.AdvancedGripSettings");

	UVRLeverComponent_AdvancedGripSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRLogComponent.SetConsoleText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Text                           (Parm, ZeroConstructor)

void UVRLogComponent::SetConsoleText(const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLogComponent.SetConsoleText");

	UVRLogComponent_SetConsoleText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRLogComponent.SendKeyEventToConsole
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                    Key                            (Parm)
// TEnumAsByte<EInputEvent>       KeyEvent                       (Parm, ZeroConstructor, IsPlainOldData)

void UVRLogComponent::SendKeyEventToConsole(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLogComponent.SendKeyEventToConsole");

	UVRLogComponent_SendKeyEventToConsole_Params params;
	params.Key = Key;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRLogComponent.DrawConsoleToRenderTarget2D
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EBPVRConsoleDrawType           DrawType                       (Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D*  Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ScrollOffset                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceDraw                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRLogComponent::DrawConsoleToRenderTarget2D(EBPVRConsoleDrawType DrawType, class UTextureRenderTarget2D* Texture, float ScrollOffset, bool bForceDraw)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLogComponent.DrawConsoleToRenderTarget2D");

	UVRLogComponent_DrawConsoleToRenderTarget2D_Params params;
	params.DrawType = DrawType;
	params.Texture = Texture;
	params.ScrollOffset = ScrollOffset;
	params.bForceDraw = bForceDraw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRLogComponent.AppendTextToConsole
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Text                           (Parm, ZeroConstructor)
// bool                           bReturnAtEnd                   (Parm, ZeroConstructor, IsPlainOldData)

void UVRLogComponent::AppendTextToConsole(const struct FString& Text, bool bReturnAtEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLogComponent.AppendTextToConsole");

	UVRLogComponent_AppendTextToConsole_Params params;
	params.Text = Text;
	params.bReturnAtEnd = bReturnAtEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRMountComponent.TickGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UVRMountComponent::TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.TickGrip");

	UVRMountComponent_TickGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRMountComponent.TeleportBehavior
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripInterfaceTeleportBehavior ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripInterfaceTeleportBehavior UVRMountComponent::TeleportBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.TeleportBehavior");

	UVRMountComponent_TeleportBehavior_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRMountComponent.SimulateOnDrop
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRMountComponent::SimulateOnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.SimulateOnDrop");

	UVRMountComponent_SimulateOnDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRMountComponent.SetHeld
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* NewHoldingController           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bNewIsHeld                     (Parm, ZeroConstructor, IsPlainOldData)

void UVRMountComponent::SetHeld(class UGripMotionControllerComponent* NewHoldingController, bool bNewIsHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.SetHeld");

	UVRMountComponent_SetHeld_Params params;
	params.NewHoldingController = NewHoldingController;
	params.bNewIsHeld = bNewIsHeld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRMountComponent.SecondaryGripType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESecondaryGripType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESecondaryGripType UVRMountComponent::SecondaryGripType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.SecondaryGripType");

	UVRMountComponent_SecondaryGripType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRMountComponent.ResetInitialMountLocation
// (Final, Native, Public, BlueprintCallable)

void UVRMountComponent::ResetInitialMountLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.ResetInitialMountLocation");

	UVRMountComponent_ResetInitialMountLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRMountComponent.RequestsSocketing
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         ParentToSocketTo               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OptionalSocketName             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform_NetQuantize  RelativeTransform              (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRMountComponent::RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.RequestsSocketing");

	UVRMountComponent_RequestsSocketing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParentToSocketTo != nullptr)
		*ParentToSocketTo = params.ParentToSocketTo;
	if (OptionalSocketName != nullptr)
		*OptionalSocketName = params.OptionalSocketName;
	if (RelativeTransform != nullptr)
		*RelativeTransform = params.RelativeTransform;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRMountComponent.OnUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UVRMountComponent::OnUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.OnUsed");

	UVRMountComponent_OnUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRMountComponent.OnSecondaryUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UVRMountComponent::OnSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.OnSecondaryUsed");

	UVRMountComponent_OnSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRMountComponent.OnSecondaryGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent*         ReleasingSecondaryGripComponent (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UVRMountComponent::OnSecondaryGripRelease(class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.OnSecondaryGripRelease");

	UVRMountComponent_OnSecondaryGripRelease_Params params;
	params.ReleasingSecondaryGripComponent = ReleasingSecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRMountComponent.OnSecondaryGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent*         SecondaryGripComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UVRMountComponent::OnSecondaryGrip(class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.OnSecondaryGrip");

	UVRMountComponent_OnSecondaryGrip_Params params;
	params.SecondaryGripComponent = SecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRMountComponent.OnInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)
// TEnumAsByte<EInputEvent>       KeyEvent                       (Parm, ZeroConstructor, IsPlainOldData)

void UVRMountComponent::OnInput(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.OnInput");

	UVRMountComponent_OnInput_Params params;
	params.Key = Key;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRMountComponent.OnGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* ReleasingController            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasSocketed                   (Parm, ZeroConstructor, IsPlainOldData)

void UVRMountComponent::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.OnGripRelease");

	UVRMountComponent_OnGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRMountComponent.OnGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UVRMountComponent::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.OnGrip");

	UVRMountComponent_OnGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRMountComponent.OnEndUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UVRMountComponent::OnEndUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.OnEndUsed");

	UVRMountComponent_OnEndUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRMountComponent.OnEndSecondaryUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UVRMountComponent::OnEndSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.OnEndSecondaryUsed");

	UVRMountComponent_OnEndSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRMountComponent.OnChildGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* ReleasingController            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasSocketed                   (Parm, ZeroConstructor, IsPlainOldData)

void UVRMountComponent::OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.OnChildGripRelease");

	UVRMountComponent_OnChildGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRMountComponent.OnChildGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UVRMountComponent::OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.OnChildGrip");

	UVRMountComponent_OnChildGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRMountComponent.IsHeld
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* CurHoldingController           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bCurIsHeld                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVRMountComponent::IsHeld(class UGripMotionControllerComponent** CurHoldingController, bool* bCurIsHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.IsHeld");

	UVRMountComponent_IsHeld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurHoldingController != nullptr)
		*CurHoldingController = params.CurHoldingController;
	if (bCurIsHeld != nullptr)
		*bCurIsHeld = params.bCurIsHeld;
}


// Function VRExpansionPlugin.VRMountComponent.GripMovementReplicationType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripMovementReplicationSettings ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripMovementReplicationSettings UVRMountComponent::GripMovementReplicationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.GripMovementReplicationType");

	UVRMountComponent_GripMovementReplicationType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRMountComponent.GripLateUpdateSetting
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripLateUpdateSettings        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripLateUpdateSettings UVRMountComponent::GripLateUpdateSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.GripLateUpdateSetting");

	UVRMountComponent_GripLateUpdateSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRMountComponent.GripBreakDistance
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVRMountComponent::GripBreakDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.GripBreakDistance");

	UVRMountComponent_GripBreakDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRMountComponent.GetPrimaryGripType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsSlot                        (Parm, ZeroConstructor, IsPlainOldData)
// EGripCollisionType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripCollisionType UVRMountComponent::GetPrimaryGripType(bool bIsSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.GetPrimaryGripType");

	UVRMountComponent_GetPrimaryGripType_Params params;
	params.bIsSlot = bIsSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRMountComponent.GetGripStiffnessAndDamping
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GripStiffnessOut               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          GripDampingOut                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVRMountComponent::GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.GetGripStiffnessAndDamping");

	UVRMountComponent_GetGripStiffnessAndDamping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GripStiffnessOut != nullptr)
		*GripStiffnessOut = params.GripStiffnessOut;
	if (GripDampingOut != nullptr)
		*GripDampingOut = params.GripDampingOut;
}


// Function VRExpansionPlugin.VRMountComponent.DenyGripping
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRMountComponent::DenyGripping()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.DenyGripping");

	UVRMountComponent_DenyGripping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRMountComponent.ClosestGripSlotInRange
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, IsPlainOldData)
// bool                           bSecondarySlot                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHadSlotInRange                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SlotWorldTransform             (Parm, OutParm, IsPlainOldData)
// class UGripMotionControllerComponent* CallingController              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverridePrefix                 (Parm, ZeroConstructor, IsPlainOldData)

void UVRMountComponent::ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, class UGripMotionControllerComponent* CallingController, const struct FName& OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.ClosestGripSlotInRange");

	UVRMountComponent_ClosestGripSlotInRange_Params params;
	params.WorldLocation = WorldLocation;
	params.bSecondarySlot = bSecondarySlot;
	params.CallingController = CallingController;
	params.OverridePrefix = OverridePrefix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHadSlotInRange != nullptr)
		*bHadSlotInRange = params.bHadSlotInRange;
	if (SlotWorldTransform != nullptr)
		*SlotWorldTransform = params.SlotWorldTransform;
}


// Function VRExpansionPlugin.VRMountComponent.AdvancedGripSettings
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBPAdvGripSettings      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBPAdvGripSettings UVRMountComponent::AdvancedGripSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.AdvancedGripSettings");

	UVRMountComponent_AdvancedGripSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRRootComponent.SetCapsuleSizeVR
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          NewRadius                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewHalfHeight                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUpdateOverlaps                (Parm, ZeroConstructor, IsPlainOldData)

void UVRRootComponent::SetCapsuleSizeVR(float NewRadius, float NewHalfHeight, bool bUpdateOverlaps)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRRootComponent.SetCapsuleSizeVR");

	UVRRootComponent_SetCapsuleSizeVR_Params params;
	params.NewRadius = NewRadius;
	params.NewHalfHeight = NewHalfHeight;
	params.bUpdateOverlaps = bUpdateOverlaps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRRootComponent.SetCapsuleHalfHeightVR
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          HalfHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUpdateOverlaps                (Parm, ZeroConstructor, IsPlainOldData)

void UVRRootComponent::SetCapsuleHalfHeightVR(float HalfHeight, bool bUpdateOverlaps)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRRootComponent.SetCapsuleHalfHeightVR");

	UVRRootComponent_SetCapsuleHalfHeightVR_Params params;
	params.HalfHeight = HalfHeight;
	params.bUpdateOverlaps = bUpdateOverlaps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRSimpleCharacter.ServerMoveVRDualHybridRootMotion
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          TimeStamp0                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10   InAccel0                       (Parm)
// unsigned char                  PendingFlags                   (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       View0                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVRConditionalMoveRep   OldConditionalReps             (Parm)
// struct FVector_NetQuantize100  OldLFDiff                      (Parm)
// float                          Timestamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10   InAccel                        (Parm)
// struct FVector_NetQuantize100  ClientLoc                      (Parm)
// struct FVRConditionalMoveRep   ConditionalReps                (Parm)
// struct FVector_NetQuantize100  LFDiff                         (Parm)
// unsigned char                  NewFlags                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVRConditionalMoveRep2  MoveReps                       (Parm)
// unsigned char                  ClientMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void AVRSimpleCharacter::ServerMoveVRDualHybridRootMotion(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, const struct FVRConditionalMoveRep& OldConditionalReps, const struct FVector_NetQuantize100& OldLFDiff, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, const struct FVRConditionalMoveRep& ConditionalReps, const struct FVector_NetQuantize100& LFDiff, unsigned char NewFlags, const struct FVRConditionalMoveRep2& MoveReps, unsigned char ClientMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSimpleCharacter.ServerMoveVRDualHybridRootMotion");

	AVRSimpleCharacter_ServerMoveVRDualHybridRootMotion_Params params;
	params.TimeStamp0 = TimeStamp0;
	params.InAccel0 = InAccel0;
	params.PendingFlags = PendingFlags;
	params.View0 = View0;
	params.OldConditionalReps = OldConditionalReps;
	params.OldLFDiff = OldLFDiff;
	params.Timestamp = Timestamp;
	params.InAccel = InAccel;
	params.ClientLoc = ClientLoc;
	params.ConditionalReps = ConditionalReps;
	params.LFDiff = LFDiff;
	params.NewFlags = NewFlags;
	params.MoveReps = MoveReps;
	params.ClientMovementMode = ClientMovementMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRSimpleCharacter.ServerMoveVRDual
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          TimeStamp0                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10   InAccel0                       (Parm)
// unsigned char                  PendingFlags                   (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       View0                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVRConditionalMoveRep   OldConditionalReps             (Parm)
// struct FVector_NetQuantize100  OldLFDiff                      (Parm)
// float                          Timestamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10   InAccel                        (Parm)
// struct FVector_NetQuantize100  ClientLoc                      (Parm)
// struct FVRConditionalMoveRep   ConditionalReps                (Parm)
// struct FVector_NetQuantize100  LFDiff                         (Parm)
// unsigned char                  NewFlags                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVRConditionalMoveRep2  MoveReps                       (Parm)
// unsigned char                  ClientMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void AVRSimpleCharacter::ServerMoveVRDual(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, const struct FVRConditionalMoveRep& OldConditionalReps, const struct FVector_NetQuantize100& OldLFDiff, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, const struct FVRConditionalMoveRep& ConditionalReps, const struct FVector_NetQuantize100& LFDiff, unsigned char NewFlags, const struct FVRConditionalMoveRep2& MoveReps, unsigned char ClientMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSimpleCharacter.ServerMoveVRDual");

	AVRSimpleCharacter_ServerMoveVRDual_Params params;
	params.TimeStamp0 = TimeStamp0;
	params.InAccel0 = InAccel0;
	params.PendingFlags = PendingFlags;
	params.View0 = View0;
	params.OldConditionalReps = OldConditionalReps;
	params.OldLFDiff = OldLFDiff;
	params.Timestamp = Timestamp;
	params.InAccel = InAccel;
	params.ClientLoc = ClientLoc;
	params.ConditionalReps = ConditionalReps;
	params.LFDiff = LFDiff;
	params.NewFlags = NewFlags;
	params.MoveReps = MoveReps;
	params.ClientMovementMode = ClientMovementMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRSimpleCharacter.ServerMoveVR
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                          Timestamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10   InAccel                        (Parm)
// struct FVector_NetQuantize100  ClientLoc                      (Parm)
// struct FVRConditionalMoveRep   ConditionalReps                (Parm)
// struct FVector_NetQuantize100  LFDiff                         (Parm)
// unsigned char                  CompressedMoveFlags            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVRConditionalMoveRep2  MoveReps                       (Parm)
// unsigned char                  ClientMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void AVRSimpleCharacter::ServerMoveVR(float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, const struct FVRConditionalMoveRep& ConditionalReps, const struct FVector_NetQuantize100& LFDiff, unsigned char CompressedMoveFlags, const struct FVRConditionalMoveRep2& MoveReps, unsigned char ClientMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSimpleCharacter.ServerMoveVR");

	AVRSimpleCharacter_ServerMoveVR_Params params;
	params.Timestamp = Timestamp;
	params.InAccel = InAccel;
	params.ClientLoc = ClientLoc;
	params.ConditionalReps = ConditionalReps;
	params.LFDiff = LFDiff;
	params.CompressedMoveFlags = CompressedMoveFlags;
	params.MoveReps = MoveReps;
	params.ClientMovementMode = ClientMovementMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRSliderComponent.TickGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UVRSliderComponent::TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.TickGrip");

	UVRSliderComponent_TickGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRSliderComponent.TeleportBehavior
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripInterfaceTeleportBehavior ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripInterfaceTeleportBehavior UVRSliderComponent::TeleportBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.TeleportBehavior");

	UVRSliderComponent_TeleportBehavior_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRSliderComponent.SimulateOnDrop
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRSliderComponent::SimulateOnDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.SimulateOnDrop");

	UVRSliderComponent_SimulateOnDrop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRSliderComponent.SetSplineComponentToFollow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USplineComponent*        SplineToFollow                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UVRSliderComponent::SetSplineComponentToFollow(class USplineComponent* SplineToFollow)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.SetSplineComponentToFollow");

	UVRSliderComponent_SetSplineComponentToFollow_Params params;
	params.SplineToFollow = SplineToFollow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRSliderComponent.SetSliderProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewSliderProgress              (Parm, ZeroConstructor, IsPlainOldData)

void UVRSliderComponent::SetSliderProgress(float NewSliderProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.SetSliderProgress");

	UVRSliderComponent_SetSliderProgress_Params params;
	params.NewSliderProgress = NewSliderProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRSliderComponent.SetHeld
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* NewHoldingController           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bNewIsHeld                     (Parm, ZeroConstructor, IsPlainOldData)

void UVRSliderComponent::SetHeld(class UGripMotionControllerComponent* NewHoldingController, bool bNewIsHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.SetHeld");

	UVRSliderComponent_SetHeld_Params params;
	params.NewHoldingController = NewHoldingController;
	params.bNewIsHeld = bNewIsHeld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRSliderComponent.SecondaryGripType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESecondaryGripType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESecondaryGripType UVRSliderComponent::SecondaryGripType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.SecondaryGripType");

	UVRSliderComponent_SecondaryGripType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRSliderComponent.ResetInitialSliderLocation
// (Final, Native, Public, BlueprintCallable)

void UVRSliderComponent::ResetInitialSliderLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.ResetInitialSliderLocation");

	UVRSliderComponent_ResetInitialSliderLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRSliderComponent.RequestsSocketing
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         ParentToSocketTo               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OptionalSocketName             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform_NetQuantize  RelativeTransform              (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRSliderComponent::RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.RequestsSocketing");

	UVRSliderComponent_RequestsSocketing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParentToSocketTo != nullptr)
		*ParentToSocketTo = params.ParentToSocketTo;
	if (OptionalSocketName != nullptr)
		*OptionalSocketName = params.OptionalSocketName;
	if (RelativeTransform != nullptr)
		*RelativeTransform = params.RelativeTransform;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRSliderComponent.ReceiveSliderHitPoint
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          SliderProgressPoint            (Parm, ZeroConstructor, IsPlainOldData)

void UVRSliderComponent::ReceiveSliderHitPoint(float SliderProgressPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.ReceiveSliderHitPoint");

	UVRSliderComponent_ReceiveSliderHitPoint_Params params;
	params.SliderProgressPoint = SliderProgressPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRSliderComponent.ReceiveSliderFinishedLerping
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          FinalProgress                  (Parm, ZeroConstructor, IsPlainOldData)

void UVRSliderComponent::ReceiveSliderFinishedLerping(float FinalProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.ReceiveSliderFinishedLerping");

	UVRSliderComponent_ReceiveSliderFinishedLerping_Params params;
	params.FinalProgress = FinalProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRSliderComponent.OnUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UVRSliderComponent::OnUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.OnUsed");

	UVRSliderComponent_OnUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRSliderComponent.OnSecondaryUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UVRSliderComponent::OnSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.OnSecondaryUsed");

	UVRSliderComponent_OnSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRSliderComponent.OnSecondaryGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent*         ReleasingSecondaryGripComponent (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UVRSliderComponent::OnSecondaryGripRelease(class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.OnSecondaryGripRelease");

	UVRSliderComponent_OnSecondaryGripRelease_Params params;
	params.ReleasingSecondaryGripComponent = ReleasingSecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRSliderComponent.OnSecondaryGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class USceneComponent*         SecondaryGripComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UVRSliderComponent::OnSecondaryGrip(class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.OnSecondaryGrip");

	UVRSliderComponent_OnSecondaryGrip_Params params;
	params.SecondaryGripComponent = SecondaryGripComponent;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRSliderComponent.OnRep_InitialRelativeTransform
// (Native, Public)

void UVRSliderComponent::OnRep_InitialRelativeTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.OnRep_InitialRelativeTransform");

	UVRSliderComponent_OnRep_InitialRelativeTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRSliderComponent.OnInput
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)
// TEnumAsByte<EInputEvent>       KeyEvent                       (Parm, ZeroConstructor, IsPlainOldData)

void UVRSliderComponent::OnInput(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.OnInput");

	UVRSliderComponent_OnInput_Params params;
	params.Key = Key;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRSliderComponent.OnGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* ReleasingController            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasSocketed                   (Parm, ZeroConstructor, IsPlainOldData)

void UVRSliderComponent::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.OnGripRelease");

	UVRSliderComponent_OnGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRSliderComponent.OnGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UVRSliderComponent::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.OnGrip");

	UVRSliderComponent_OnGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRSliderComponent.OnEndUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UVRSliderComponent::OnEndUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.OnEndUsed");

	UVRSliderComponent_OnEndUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRSliderComponent.OnEndSecondaryUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UVRSliderComponent::OnEndSecondaryUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.OnEndSecondaryUsed");

	UVRSliderComponent_OnEndSecondaryUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRSliderComponent.OnChildGripRelease
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* ReleasingController            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bWasSocketed                   (Parm, ZeroConstructor, IsPlainOldData)

void UVRSliderComponent::OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.OnChildGripRelease");

	UVRSliderComponent_OnChildGripRelease_Params params;
	params.ReleasingController = ReleasingController;
	params.GripInformation = GripInformation;
	params.bWasSocketed = bWasSocketed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRSliderComponent.OnChildGrip
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* GrippingController             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBPActorGripInformation GripInformation                (ConstParm, Parm, OutParm, ReferenceParm)

void UVRSliderComponent::OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.OnChildGrip");

	UVRSliderComponent_OnChildGrip_Params params;
	params.GrippingController = GrippingController;
	params.GripInformation = GripInformation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRSliderComponent.IsHeld
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGripMotionControllerComponent* CurHoldingController           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bCurIsHeld                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVRSliderComponent::IsHeld(class UGripMotionControllerComponent** CurHoldingController, bool* bCurIsHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.IsHeld");

	UVRSliderComponent_IsHeld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurHoldingController != nullptr)
		*CurHoldingController = params.CurHoldingController;
	if (bCurIsHeld != nullptr)
		*bCurIsHeld = params.bCurIsHeld;
}


// Function VRExpansionPlugin.VRSliderComponent.GripMovementReplicationType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripMovementReplicationSettings ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripMovementReplicationSettings UVRSliderComponent::GripMovementReplicationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.GripMovementReplicationType");

	UVRSliderComponent_GripMovementReplicationType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRSliderComponent.GripLateUpdateSetting
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGripLateUpdateSettings        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripLateUpdateSettings UVRSliderComponent::GripLateUpdateSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.GripLateUpdateSetting");

	UVRSliderComponent_GripLateUpdateSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRSliderComponent.GripBreakDistance
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVRSliderComponent::GripBreakDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.GripBreakDistance");

	UVRSliderComponent_GripBreakDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRSliderComponent.GetPrimaryGripType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsSlot                        (Parm, ZeroConstructor, IsPlainOldData)
// EGripCollisionType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGripCollisionType UVRSliderComponent::GetPrimaryGripType(bool bIsSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.GetPrimaryGripType");

	UVRSliderComponent_GetPrimaryGripType_Params params;
	params.bIsSlot = bIsSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRSliderComponent.GetGripStiffnessAndDamping
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GripStiffnessOut               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          GripDampingOut                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVRSliderComponent::GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.GetGripStiffnessAndDamping");

	UVRSliderComponent_GetGripStiffnessAndDamping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GripStiffnessOut != nullptr)
		*GripStiffnessOut = params.GripStiffnessOut;
	if (GripDampingOut != nullptr)
		*GripDampingOut = params.GripDampingOut;
}


// Function VRExpansionPlugin.VRSliderComponent.DenyGripping
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRSliderComponent::DenyGripping()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.DenyGripping");

	UVRSliderComponent_DenyGripping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRSliderComponent.ClosestGripSlotInRange
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, IsPlainOldData)
// bool                           bSecondarySlot                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHadSlotInRange                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FTransform              SlotWorldTransform             (Parm, OutParm, IsPlainOldData)
// class UGripMotionControllerComponent* CallingController              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   OverridePrefix                 (Parm, ZeroConstructor, IsPlainOldData)

void UVRSliderComponent::ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, class UGripMotionControllerComponent* CallingController, const struct FName& OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.ClosestGripSlotInRange");

	UVRSliderComponent_ClosestGripSlotInRange_Params params;
	params.WorldLocation = WorldLocation;
	params.bSecondarySlot = bSecondarySlot;
	params.CallingController = CallingController;
	params.OverridePrefix = OverridePrefix;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHadSlotInRange != nullptr)
		*bHadSlotInRange = params.bHadSlotInRange;
	if (SlotWorldTransform != nullptr)
		*SlotWorldTransform = params.SlotWorldTransform;
}


// Function VRExpansionPlugin.VRSliderComponent.CalculateSliderProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVRSliderComponent::CalculateSliderProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.CalculateSliderProgress");

	UVRSliderComponent_CalculateSliderProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRSliderComponent.AdvancedGripSettings
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBPAdvGripSettings      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBPAdvGripSettings UVRSliderComponent::AdvancedGripSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.AdvancedGripSettings");

	UVRSliderComponent_AdvancedGripSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRStereoWidgetComponent.SetPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InPriority                     (Parm, ZeroConstructor, IsPlainOldData)

void UVRStereoWidgetComponent::SetPriority(int InPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRStereoWidgetComponent.SetPriority");

	UVRStereoWidgetComponent_SetPriority_Params params;
	params.InPriority = InPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRStereoWidgetComponent.GetPriority
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVRStereoWidgetComponent::GetPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRStereoWidgetComponent.GetPriority");

	UVRStereoWidgetComponent_GetPriority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRTrackedParentInterface.SetTrackedParent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     NewParentComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          WaistRadius                    (Parm, ZeroConstructor, IsPlainOldData)
// EBPVRWaistTrackingMode         WaistTrackingMode              (Parm, ZeroConstructor, IsPlainOldData)

void UVRTrackedParentInterface::SetTrackedParent(class UPrimitiveComponent* NewParentComponent, float WaistRadius, EBPVRWaistTrackingMode WaistTrackingMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRTrackedParentInterface.SetTrackedParent");

	UVRTrackedParentInterface_SetTrackedParent_Params params;
	params.NewParentComponent = NewParentComponent;
	params.WaistRadius = WaistRadius;
	params.WaistTrackingMode = WaistTrackingMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRExpansionPlugin.VRVehiclePawn.SetBindToInput
// (Native, Public, BlueprintCallable)
// Parameters:
// class AController*             CController                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBindToInput                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVRVehiclePawn::SetBindToInput(class AController* CController, bool bBindToInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRVehiclePawn.SetBindToInput");

	AVRVehiclePawn_SetBindToInput_Params params;
	params.CController = CController;
	params.bBindToInput = bBindToInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRVehiclePawn.ForceSecondaryPossession
// (Native, Public, BlueprintCallable)
// Parameters:
// class AController*             NewController                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVRVehiclePawn::ForceSecondaryPossession(class AController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRVehiclePawn.ForceSecondaryPossession");

	AVRVehiclePawn_ForceSecondaryPossession_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRWheeledVehicle.SetOverrideController
// (Native, Public, BlueprintCallable)
// Parameters:
// class AController*             NewController                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVRWheeledVehicle::SetOverrideController(class AController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRWheeledVehicle.SetOverrideController");

	AVRWheeledVehicle_SetOverrideController_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRWheeledVehicle.SetBindToInput
// (Native, Public, BlueprintCallable)
// Parameters:
// class AController*             CController                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBindToInput                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVRWheeledVehicle::SetBindToInput(class AController* CController, bool bBindToInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRWheeledVehicle.SetBindToInput");

	AVRWheeledVehicle_SetBindToInput_Params params;
	params.CController = CController;
	params.bBindToInput = bBindToInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRExpansionPlugin.VRWheeledVehicle.ForceSecondaryPossession
// (Native, Public, BlueprintCallable)
// Parameters:
// class AController*             NewController                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVRWheeledVehicle::ForceSecondaryPossession(class AController* NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRWheeledVehicle.ForceSecondaryPossession");

	AVRWheeledVehicle_ForceSecondaryPossession_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
