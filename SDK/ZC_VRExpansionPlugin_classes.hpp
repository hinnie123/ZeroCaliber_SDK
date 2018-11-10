#pragma once

// ZeroCaliber (0.6.0 EA) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class VRExpansionPlugin.GripMotionControllerComponent
// 0x01E0 (0x0800 - 0x0620)
class UGripMotionControllerComponent : public UMotionControllerComponent
{
public:
	bool                                               bOffsetByHMD;                                             // 0x0620(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0621(0x000F) MISSED OFFSET
	bool                                               bOffsetByControllerProfile;                               // 0x0630(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3F];                                      // 0x0631(0x003F) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnControllerProfileTransformChanged;                      // 0x0670(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGripOutOfRange;                                         // 0x0680(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x78];                                      // 0x0690(0x0078) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnGrippedObject;                                          // 0x0708(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDroppedObject;                                          // 0x0718(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0728(0x0008) MISSED OFFSET
	TArray<struct FBPActorGripInformation>             GrippedObjects;                                           // 0x0730(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	TArray<struct FBPActorGripInformation>             LocallyGrippedObjects;                                    // 0x0740(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	bool                                               bAlwaysSendTickGrip;                                      // 0x0750(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0751(0x0007) MISSED OFFSET
	TArray<class UPrimitiveComponent*>                 AdditionalLateUpdateComponents;                           // 0x0758(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor)
	struct FBPVRComponentPosRep                        ReplicatedControllerTransform;                            // 0x0768(0x001C) (Edit, Net, DisableEditOnInstance)
	unsigned char                                      UnknownData05[0x1C];                                      // 0x0784(0x001C) MISSED OFFSET
	float                                              ControllerNetUpdateRate;                                  // 0x07A0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x07A4(0x0004) MISSED OFFSET
	bool                                               bSmoothReplicatedMotion;                                  // 0x07A8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicateWithoutTracking;                                // 0x07A9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1F];                                      // 0x07AA(0x001F) MISSED OFFSET
	bool                                               bUseWithoutTracking;                                      // 0x07C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x36];                                      // 0x07CA(0x0036) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.GripMotionControllerComponent");
		return ptr;
	}


	void UpdatePhysicsHandleTransform_BP(const struct FBPActorGripInformation& GrippedActor, const struct FTransform& NewTransform);
	bool TeleportMoveGrippedComponent(class UPrimitiveComponent* ComponentToMove, bool bTeleportPhysicsGrips);
	bool TeleportMoveGrippedActor(class AActor* GrippedActorToMove, bool bTeleportPhysicsGrips);
	bool TeleportMoveGrip(bool bTeleportPhysicsGrips, bool bIsForPostTeleport, struct FBPActorGripInformation* Grip);
	bool SetUpPhysicsHandle_BP(const struct FBPActorGripInformation& newGrip);
	void SetSocketTransform(class UObject* ObjectToSocket, const struct FTransform_NetQuantize& RelativeTransformToParent);
	void SetPausedTransform(const struct FBPActorGripInformation& Grip, const struct FTransform& PausedTransform, bool bTeleport);
	void SetGripStiffnessAndDamping(const struct FBPActorGripInformation& Grip, float NewStiffness, float NewDamping, bool bAlsoSetAngularValues, float OptionalAngularStiffness, float OptionalAngularDamping, EBPVRResultSwitch* Result);
	void SetGripRelativeTransform(const struct FBPActorGripInformation& Grip, const struct FTransform& NewRelativeTransform, EBPVRResultSwitch* Result);
	void SetGripPaused(const struct FBPActorGripInformation& Grip, bool bIsPaused, bool bNoConstraintWhenPaused, EBPVRResultSwitch* Result);
	void SetGripLateUpdateSetting(const struct FBPActorGripInformation& Grip, EGripLateUpdateSettings NewGripLateUpdateSetting, EBPVRResultSwitch* Result);
	void SetGripCollisionType(const struct FBPActorGripInformation& Grip, EGripCollisionType NewGripCollisionType, EBPVRResultSwitch* Result);
	void SetGripAdditionTransform(const struct FBPActorGripInformation& Grip, const struct FTransform& NewAdditionTransform, bool bMakeGripRelative, EBPVRResultSwitch* Result);
	void Server_SendControllerTransform(const struct FBPVRComponentPosRep& NewTransform);
	void Server_NotifySecondaryAttachmentChanged_Retain(unsigned char GripID, const struct FBPSecondaryGripInfo& SecondaryGripInfo, const struct FTransform_NetQuantize& NewRelativeTransform);
	void Server_NotifySecondaryAttachmentChanged(unsigned char GripID, const struct FBPSecondaryGripInfo& SecondaryGripInfo);
	void Server_NotifyLocalGripRemoved(unsigned char GripID, const struct FVector_NetQuantize100& AngularVelocity, const struct FVector_NetQuantize100& LinearVelocity);
	void Server_NotifyLocalGripAddedOrChanged(const struct FBPActorGripInformation& newGrip);
	void Server_NotifyDropAndSocketGrip(unsigned char GripID, class USceneComponent* SocketingParent, const struct FName& OptionalSocketName, const struct FTransform_NetQuantize& RelativeTransformToParent);
	bool RemoveSecondaryAttachmentPoint(class UObject* GrippedObjectToRemoveAttachment, float LerpToTime);
	void PostTeleportMoveGrippedObjects();
	void OnRep_ReplicatedControllerTransform();
	void OnRep_LocallyGrippedObjects();
	void OnRep_GrippedObjects();
	void NotifyDropAndSocket(const struct FBPActorGripInformation& NewDrop);
	void NotifyDrop(const struct FBPActorGripInformation& NewDrop, bool bSimulate);
	void NewControllerProfileLoaded();
	bool HasGrippedObjects();
	bool GripObjectByInterface(class UObject* ObjectToGrip, const struct FTransform& WorldOffset, bool bWorldOffsetIsRelative, const struct FName& OptionalBoneToGripName, bool bIsSlotGrip);
	bool GripObject(class UObject* ObjectToGrip, const struct FTransform& WorldOffset, bool bWorldOffsetIsRelative, const struct FName& OptionalSnapToSocketName, const struct FName& OptionalBoneToGripName, EGripCollisionType GripCollisionType, EGripLateUpdateSettings GripLateUpdateSetting, EGripMovementReplicationSettings GripMovementReplicationSetting, float GripStiffness, float GripDamping, bool bIsSlotGrip);
	bool GripControllerIsTracked();
	bool GripComponent(class UPrimitiveComponent* ComponentToGrip, const struct FTransform& WorldOffset, bool bWorldOffsetIsRelative, const struct FName& OptionalBoneToGrip_Name, const struct FName& OptionalBoneToGripName, EGripCollisionType GripCollisionType, EGripLateUpdateSettings GripLateUpdateSetting, EGripMovementReplicationSettings GripMovementReplicationSetting, float GripStiffness, float GripDamping, bool bIsSlotGrip);
	bool GripActor(class AActor* ActorToGrip, const struct FTransform& WorldOffset, bool bWorldOffsetIsRelative, const struct FName& OptionalSnapToSocketName, const struct FName& OptionalBoneToGripName, EGripCollisionType GripCollisionType, EGripLateUpdateSettings GripLateUpdateSetting, EGripMovementReplicationSettings GripMovementReplicationSetting, float GripStiffness, float GripDamping, bool bIsSlotGrip);
	void GetPhysicsVelocities(const struct FBPActorGripInformation& Grip, struct FVector* AngularVelocity, struct FVector* LinearVelocity);
	bool GetIsSecondaryAttachment(class USceneComponent* ComponentToCheck, struct FBPActorGripInformation* Grip);
	bool GetIsObjectHeld(class UObject* ObjectToCheck);
	bool GetIsHeld(class AActor* ActorToCheck);
	bool GetIsComponentHeld(class UPrimitiveComponent* ComponentToCheck);
	void GetHandType(EControllerHand* Hand);
	void GetGrippedObjects(TArray<class UObject*>* GrippedObjectsArray);
	void GetGrippedComponents(TArray<class UPrimitiveComponent*>* GrippedComponentsArray);
	void GetGrippedActors(TArray<class AActor*>* GrippedActorArray);
	bool GetGripDistance_BP(const struct FVector& ExpectedLocation, struct FBPActorGripInformation* Grip, float* CurrentDistance);
	void GetGripByObject(class UObject* ObjectToLookForGrip, struct FBPActorGripInformation* Grip, EBPVRResultSwitch* Result);
	void GetGripByID(unsigned char IDToLookForGrip, struct FBPActorGripInformation* Grip, EBPVRResultSwitch* Result);
	void GetGripByComponent(class UPrimitiveComponent* ComponentToLookForGrip, struct FBPActorGripInformation* Grip, EBPVRResultSwitch* Result);
	void GetGripByActor(class AActor* ActorToLookForGrip, struct FBPActorGripInformation* Grip, EBPVRResultSwitch* Result);
	void GetControllerDeviceID(bool bCheckOpenVROnly, struct FXRDeviceId* DeviceID, EBPVRResultSwitch* Result);
	void GetAllGrips(TArray<struct FBPActorGripInformation>* GripArray);
	bool DropObjectByInterface(class UObject* ObjectToDrop, const struct FVector& OptionalAngularVelocity, const struct FVector& OptionalLinearVelocity);
	bool DropObject(class UObject* ObjectToDrop, bool bSimulate, const struct FVector& OptionalAngularVelocity, const struct FVector& OptionalLinearVelocity);
	bool DropGrip(const struct FBPActorGripInformation& Grip, bool bSimulate, const struct FVector& OptionalAngularVelocity, const struct FVector& OptionalLinearVelocity);
	bool DropComponent(class UPrimitiveComponent* ComponentToDrop, bool bSimulate, const struct FVector& OptionalAngularVelocity, const struct FVector& OptionalLinearVelocity);
	bool DropAndSocketObject(class UObject* ObjectToDrop, class USceneComponent* SocketingParent, const struct FName& OptionalSocketName, const struct FTransform_NetQuantize& RelativeTransformToParent);
	bool DropAndSocketGrip(const struct FBPActorGripInformation& GripToDrop, class USceneComponent* SocketingParent, const struct FName& OptionalSocketName, const struct FTransform_NetQuantize& RelativeTransformToParent);
	bool DropActor(class AActor* ActorToDrop, bool bSimulate, const struct FVector& OptionalAngularVelocity, const struct FVector& OptionalLinearVelocity);
	bool DestroyPhysicsHandle_BP(const struct FBPActorGripInformation& Grip);
	struct FTransform CreateGripRelativeAdditionTransform_BP(const struct FBPActorGripInformation& GripToSample, const struct FTransform& AdditionTransform, bool bGripRelative);
	struct FTransform STATIC_ConvertToGripRelativeTransform(const struct FTransform& GrippedActorTransform, const struct FTransform& InTransform);
	struct FTransform ConvertToControllerRelativeTransform(const struct FTransform& InTransform);
	void Client_NotifyInvalidLocalGrip(class UObject* LocallyGrippedObject);
	bool BP_HasGripMovementAuthority(const struct FBPActorGripInformation& Grip);
	bool BP_HasGripAuthority(const struct FBPActorGripInformation& Grip);
	bool AddSecondaryAttachmentPoint(class UObject* GrippedObjectToAddAttachment, class USceneComponent* SecondaryPointComponent, const struct FTransform& OriginalTransform, bool bTransformIsAlreadyRelative, float LerpToTime, bool bIsSlotGrip);
};


// Class VRExpansionPlugin.GrippableActor
// 0x00D0 (0x03F8 - 0x0328)
class AGrippableActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0328(0x0010) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0338(0x0020) (Edit, BlueprintVisible, Net)
	bool                                               bAllowIgnoringAttachOnOwner;                              // 0x0358(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bRepGripSettingsAndGameplayTags;                          // 0x0359(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x035A(0x0006) MISSED OFFSET
	struct FBPInterfaceProperties                      VRGripInterfaceSettings;                                  // 0x0360(0x0098) (Edit, BlueprintVisible, Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.GrippableActor");
		return ptr;
	}


	void TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime);
	EGripInterfaceTeleportBehavior TeleportBehavior();
	bool SimulateOnDrop();
	void SetHeld(class UGripMotionControllerComponent* HoldingController, bool bIsHeld);
	ESecondaryGripType SecondaryGripType();
	bool RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform);
	void OnUsed();
	void OnSecondaryUsed();
	void OnSecondaryGripRelease(class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
	void OnSecondaryGrip(class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
	void OnInput(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent);
	void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
	void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
	void OnEndUsed();
	void OnEndSecondaryUsed();
	void OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
	void OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
	void IsHeld(class UGripMotionControllerComponent** HoldingController, bool* bIsHeld);
	EGripMovementReplicationSettings GripMovementReplicationType();
	EGripLateUpdateSettings GripLateUpdateSetting();
	float GripBreakDistance();
	EGripCollisionType GetPrimaryGripType(bool bIsSlot);
	void GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut);
	bool DenyGripping();
	void ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, class UGripMotionControllerComponent* CallingController, const struct FName& OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform);
	struct FBPAdvGripSettings AdvancedGripSettings();
};


// Class VRExpansionPlugin.GrippableBoxComponent
// 0x00D0 (0x0660 - 0x0590)
class UGrippableBoxComponent : public UBoxComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0590(0x0010) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x05A0(0x0020) (Edit, BlueprintVisible, Net)
	bool                                               bRepGripSettingsAndGameplayTags;                          // 0x05C0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicateMovement;                                       // 0x05C1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x05C2(0x0006) MISSED OFFSET
	struct FBPInterfaceProperties                      VRGripInterfaceSettings;                                  // 0x05C8(0x0098) (Edit, BlueprintVisible, Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.GrippableBoxComponent");
		return ptr;
	}


	void TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime);
	EGripInterfaceTeleportBehavior TeleportBehavior();
	bool SimulateOnDrop();
	void SetHeld(class UGripMotionControllerComponent* HoldingController, bool bIsHeld);
	ESecondaryGripType SecondaryGripType();
	bool RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform);
	void OnUsed();
	void OnSecondaryUsed();
	void OnSecondaryGripRelease(class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
	void OnSecondaryGrip(class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
	void OnInput(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent);
	void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
	void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
	void OnEndUsed();
	void OnEndSecondaryUsed();
	void OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
	void OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
	void IsHeld(class UGripMotionControllerComponent** HoldingController, bool* bIsHeld);
	EGripMovementReplicationSettings GripMovementReplicationType();
	EGripLateUpdateSettings GripLateUpdateSetting();
	float GripBreakDistance();
	EGripCollisionType GetPrimaryGripType(bool bIsSlot);
	void GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut);
	bool DenyGripping();
	void ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, class UGripMotionControllerComponent* CallingController, const struct FName& OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform);
	struct FBPAdvGripSettings AdvancedGripSettings();
};


// Class VRExpansionPlugin.GrippableCapsuleComponent
// 0x00D0 (0x0660 - 0x0590)
class UGrippableCapsuleComponent : public UCapsuleComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0590(0x0010) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x05A0(0x0020) (Edit, BlueprintVisible, Net)
	bool                                               bRepGripSettingsAndGameplayTags;                          // 0x05C0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicateMovement;                                       // 0x05C1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x05C2(0x0006) MISSED OFFSET
	struct FBPInterfaceProperties                      VRGripInterfaceSettings;                                  // 0x05C8(0x0098) (Edit, BlueprintVisible, Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.GrippableCapsuleComponent");
		return ptr;
	}


	void TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime);
	EGripInterfaceTeleportBehavior TeleportBehavior();
	bool SimulateOnDrop();
	void SetHeld(class UGripMotionControllerComponent* HoldingController, bool bIsHeld);
	ESecondaryGripType SecondaryGripType();
	bool RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform);
	void OnUsed();
	void OnSecondaryUsed();
	void OnSecondaryGripRelease(class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
	void OnSecondaryGrip(class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
	void OnInput(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent);
	void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
	void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
	void OnEndUsed();
	void OnEndSecondaryUsed();
	void OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
	void OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
	void IsHeld(class UGripMotionControllerComponent** HoldingController, bool* bIsHeld);
	EGripMovementReplicationSettings GripMovementReplicationType();
	EGripLateUpdateSettings GripLateUpdateSetting();
	float GripBreakDistance();
	EGripCollisionType GetPrimaryGripType(bool bIsSlot);
	void GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut);
	bool DenyGripping();
	void ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, class UGripMotionControllerComponent* CallingController, const struct FName& OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform);
	struct FBPAdvGripSettings AdvancedGripSettings();
};


// Class VRExpansionPlugin.OptionalRepSkeletalMeshComponent
// 0x0000 (0x0BA0 - 0x0BA0)
class UOptionalRepSkeletalMeshComponent : public USkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.OptionalRepSkeletalMeshComponent");
		return ptr;
	}

};


// Class VRExpansionPlugin.GrippableSkeletalMeshActor
// 0x00D0 (0x0480 - 0x03B0)
class AGrippableSkeletalMeshActor : public ASkeletalMeshActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03B0(0x0010) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x03C0(0x0020) (Edit, BlueprintVisible, Net)
	bool                                               bAllowIgnoringAttachOnOwner;                              // 0x03E0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bRepGripSettingsAndGameplayTags;                          // 0x03E1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03E2(0x0006) MISSED OFFSET
	struct FBPInterfaceProperties                      VRGripInterfaceSettings;                                  // 0x03E8(0x0098) (Edit, BlueprintVisible, Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.GrippableSkeletalMeshActor");
		return ptr;
	}


	void TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime);
	EGripInterfaceTeleportBehavior TeleportBehavior();
	bool SimulateOnDrop();
	void SetHeld(class UGripMotionControllerComponent* HoldingController, bool bIsHeld);
	ESecondaryGripType SecondaryGripType();
	bool RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform);
	void OnUsed();
	void OnSecondaryUsed();
	void OnSecondaryGripRelease(class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
	void OnSecondaryGrip(class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
	void OnInput(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent);
	void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
	void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
	void OnEndUsed();
	void OnEndSecondaryUsed();
	void OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
	void OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
	void IsHeld(class UGripMotionControllerComponent** HoldingController, bool* bIsHeld);
	EGripMovementReplicationSettings GripMovementReplicationType();
	EGripLateUpdateSettings GripLateUpdateSetting();
	float GripBreakDistance();
	EGripCollisionType GetPrimaryGripType(bool bIsSlot);
	void GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut);
	bool DenyGripping();
	void ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, class UGripMotionControllerComponent* CallingController, const struct FName& OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform);
	struct FBPAdvGripSettings AdvancedGripSettings();
};


// Class VRExpansionPlugin.GrippableSkeletalMeshComponent
// 0x00D0 (0x0C70 - 0x0BA0)
class UGrippableSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0BA0(0x0008) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0BA8(0x0020) (Edit, BlueprintVisible, Net)
	bool                                               bRepGripSettingsAndGameplayTags;                          // 0x0BC8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicateMovement;                                       // 0x0BC9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0BCA(0x0006) MISSED OFFSET
	struct FBPInterfaceProperties                      VRGripInterfaceSettings;                                  // 0x0BD0(0x0098) (Edit, BlueprintVisible, Net)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0C68(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.GrippableSkeletalMeshComponent");
		return ptr;
	}


	void TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime);
	EGripInterfaceTeleportBehavior TeleportBehavior();
	bool SimulateOnDrop();
	void SetHeld(class UGripMotionControllerComponent* HoldingController, bool bIsHeld);
	ESecondaryGripType SecondaryGripType();
	bool RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform);
	void OnUsed();
	void OnSecondaryUsed();
	void OnSecondaryGripRelease(class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
	void OnSecondaryGrip(class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
	void OnInput(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent);
	void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
	void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
	void OnEndUsed();
	void OnEndSecondaryUsed();
	void OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
	void OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
	void IsHeld(class UGripMotionControllerComponent** HoldingController, bool* bIsHeld);
	EGripMovementReplicationSettings GripMovementReplicationType();
	EGripLateUpdateSettings GripLateUpdateSetting();
	float GripBreakDistance();
	EGripCollisionType GetPrimaryGripType(bool bIsSlot);
	void GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut);
	bool DenyGripping();
	void ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, class UGripMotionControllerComponent* CallingController, const struct FName& OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform);
	struct FBPAdvGripSettings AdvancedGripSettings();
};


// Class VRExpansionPlugin.GrippableSphereComponent
// 0x00D0 (0x0660 - 0x0590)
class UGrippableSphereComponent : public USphereComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0590(0x0008) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0598(0x0020) (Edit, BlueprintVisible, Net)
	bool                                               bRepGripSettingsAndGameplayTags;                          // 0x05B8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicateMovement;                                       // 0x05B9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x05BA(0x0006) MISSED OFFSET
	struct FBPInterfaceProperties                      VRGripInterfaceSettings;                                  // 0x05C0(0x0098) (Edit, BlueprintVisible, Net)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0658(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.GrippableSphereComponent");
		return ptr;
	}


	void TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime);
	EGripInterfaceTeleportBehavior TeleportBehavior();
	bool SimulateOnDrop();
	void SetHeld(class UGripMotionControllerComponent* HoldingController, bool bIsHeld);
	ESecondaryGripType SecondaryGripType();
	bool RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform);
	void OnUsed();
	void OnSecondaryUsed();
	void OnSecondaryGripRelease(class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
	void OnSecondaryGrip(class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
	void OnInput(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent);
	void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
	void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
	void OnEndUsed();
	void OnEndSecondaryUsed();
	void OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
	void OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
	void IsHeld(class UGripMotionControllerComponent** HoldingController, bool* bIsHeld);
	EGripMovementReplicationSettings GripMovementReplicationType();
	EGripLateUpdateSettings GripLateUpdateSetting();
	float GripBreakDistance();
	EGripCollisionType GetPrimaryGripType(bool bIsSlot);
	void GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut);
	bool DenyGripping();
	void ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, class UGripMotionControllerComponent* CallingController, const struct FName& OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform);
	struct FBPAdvGripSettings AdvancedGripSettings();
};


// Class VRExpansionPlugin.OptionalRepStaticMeshComponent
// 0x0010 (0x0600 - 0x05F0)
class UOptionalRepStaticMeshComponent : public UStaticMeshComponent
{
public:
	bool                                               bReplicateMovement;                                       // 0x05F0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x05F1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.OptionalRepStaticMeshComponent");
		return ptr;
	}

};


// Class VRExpansionPlugin.GrippableStaticMeshActor
// 0x00D0 (0x0408 - 0x0338)
class AGrippableStaticMeshActor : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0338(0x0010) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0348(0x0020) (Edit, BlueprintVisible, Net)
	bool                                               bAllowIgnoringAttachOnOwner;                              // 0x0368(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bRepGripSettingsAndGameplayTags;                          // 0x0369(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x036A(0x0006) MISSED OFFSET
	struct FBPInterfaceProperties                      VRGripInterfaceSettings;                                  // 0x0370(0x0098) (Edit, BlueprintVisible, Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.GrippableStaticMeshActor");
		return ptr;
	}


	void TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime);
	EGripInterfaceTeleportBehavior TeleportBehavior();
	bool SimulateOnDrop();
	void SetHeld(class UGripMotionControllerComponent* HoldingController, bool bIsHeld);
	ESecondaryGripType SecondaryGripType();
	bool RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform);
	void OnUsed();
	void OnSecondaryUsed();
	void OnSecondaryGripRelease(class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
	void OnSecondaryGrip(class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
	void OnInput(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent);
	void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
	void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
	void OnEndUsed();
	void OnEndSecondaryUsed();
	void OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
	void OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
	void IsHeld(class UGripMotionControllerComponent** HoldingController, bool* bIsHeld);
	EGripMovementReplicationSettings GripMovementReplicationType();
	EGripLateUpdateSettings GripLateUpdateSetting();
	float GripBreakDistance();
	EGripCollisionType GetPrimaryGripType(bool bIsSlot);
	void GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut);
	bool DenyGripping();
	void ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, class UGripMotionControllerComponent* CallingController, const struct FName& OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform);
	struct FBPAdvGripSettings AdvancedGripSettings();
};


// Class VRExpansionPlugin.GrippableStaticMeshComponent
// 0x00D0 (0x06C0 - 0x05F0)
class UGrippableStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05F0(0x0010) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0600(0x0020) (Edit, BlueprintVisible, Net)
	bool                                               bRepGripSettingsAndGameplayTags;                          // 0x0620(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicateMovement;                                       // 0x0621(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0622(0x0006) MISSED OFFSET
	struct FBPInterfaceProperties                      VRGripInterfaceSettings;                                  // 0x0628(0x0098) (Edit, BlueprintVisible, Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.GrippableStaticMeshComponent");
		return ptr;
	}


	void TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime);
	EGripInterfaceTeleportBehavior TeleportBehavior();
	bool SimulateOnDrop();
	void SetHeld(class UGripMotionControllerComponent* HoldingController, bool bIsHeld);
	ESecondaryGripType SecondaryGripType();
	bool RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform);
	void OnUsed();
	void OnSecondaryUsed();
	void OnSecondaryGripRelease(class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
	void OnSecondaryGrip(class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
	void OnInput(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent);
	void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
	void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
	void OnEndUsed();
	void OnEndSecondaryUsed();
	void OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
	void OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
	void IsHeld(class UGripMotionControllerComponent** HoldingController, bool* bIsHeld);
	EGripMovementReplicationSettings GripMovementReplicationType();
	EGripLateUpdateSettings GripLateUpdateSetting();
	float GripBreakDistance();
	EGripCollisionType GetPrimaryGripType(bool bIsSlot);
	void GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut);
	bool DenyGripping();
	void ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, class UGripMotionControllerComponent* CallingController, const struct FName& OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform);
	struct FBPAdvGripSettings AdvancedGripSettings();
};


// Class VRExpansionPlugin.ParentRelativeAttachmentComponent
// 0x0040 (0x0280 - 0x0240)
class UParentRelativeAttachmentComponent : public USceneComponent
{
public:
	float                                              YawTolerance;                                             // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LerpSpeed;                                                // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLerpTransition;                                          // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0249(0x0010) MISSED OFFSET
	bool                                               bUseFeetLocation;                                         // 0x0259(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOffsetByHMD;                                             // 0x025A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreRotationFromParent;                                // 0x025B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x025C(0x0004) MISSED OFFSET
	struct FBPVRWaistTracking_Info                     OptionalWaistTrackingParent;                              // 0x0260(0x0020) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.ParentRelativeAttachmentComponent");
		return ptr;
	}

};


// Class VRExpansionPlugin.ReplicatedVRCameraComponent
// 0x0060 (0x0840 - 0x07E0)
class UReplicatedVRCameraComponent : public UCameraComponent
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x07E0(0x0002) MISSED OFFSET
	bool                                               bSetPositionDuringTick;                                   // 0x07E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOffsetByHMD;                                             // 0x07E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAutoSetLockToHmd : 1;                                    // 0x07E4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07E5(0x0003) MISSED OFFSET
	struct FBPVRComponentPosRep                        ReplicatedCameraTransform;                                // 0x07E8(0x001C) (Edit, Net, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x1A];                                      // 0x0804(0x001A) MISSED OFFSET
	bool                                               bSmoothReplicatedMotion;                                  // 0x081E(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x081F(0x0001) MISSED OFFSET
	float                                              NetUpdateRate;                                            // 0x0820(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1C];                                      // 0x0824(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.ReplicatedVRCameraComponent");
		return ptr;
	}


	void Server_SendCameraTransform(const struct FBPVRComponentPosRep& NewTransform);
	void OnRep_ReplicatedCameraTransform();
};


// Class VRExpansionPlugin.VRAIController
// 0x0000 (0x0438 - 0x0438)
class AVRAIController : public AAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRAIController");
		return ptr;
	}

};


// Class VRExpansionPlugin.VRDetourCrowdAIController
// 0x0000 (0x0438 - 0x0438)
class AVRDetourCrowdAIController : public AVRAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRDetourCrowdAIController");
		return ptr;
	}

};


// Class VRExpansionPlugin.VRBaseCharacter
// 0x00C0 (0x0800 - 0x0740)
class AVRBaseCharacter : public ACharacter
{
public:
	struct FScriptMulticastDelegate                    OnPlayerStateReplicated_Bind;                             // 0x0740(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               VRReplicateCapsuleHeight;                                 // 0x0750(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0751(0x0003) MISSED OFFSET
	struct FVRReplicatedCapsuleHeight                  ReplicatedCapsuleHeight;                                  // 0x0754(0x0004) (Net)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0758(0x0008) MISSED OFFSET
	struct FTransform                                  OffsetComponentToWorld;                                   // 0x0760(0x0030) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVRSeatedCharacterInfo                      SeatInformation;                                          // 0x0790(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      UnknownData02[0x4];                                       // 0x07B4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSeatThreshholdChanged_Bind;                             // 0x07B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class USceneComponent*                             NetSmoother;                                              // 0x07C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UVRBaseCharacterMovementComponent*           VRMovementReference;                                      // 0x07D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class UReplicatedVRCameraComponent*                VRReplicatedCamera;                                       // 0x07D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UParentRelativeAttachmentComponent*          ParentRelativeAttachment;                                 // 0x07E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              LeftMotionController;                                     // 0x07E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UGripMotionControllerComponent*              RightMotionController;                                    // 0x07F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UClass*                                      DefaultNavigationFilterClass;                             // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRBaseCharacter");
		return ptr;
	}


	void StopNavigationMovement();
	void SetCharacterSizeVR(float NewRadius, float NewHalfHeight, bool bUpdateOverlaps);
	void SetCharacterHalfHeightVR(float HalfHeight, bool bUpdateOverlaps);
	struct FVector SetActorRotationVR(const struct FRotator& NewRot, bool bUseYawOnly, bool bAccountForHMDRotation);
	struct FVector SetActorLocationAndRotationVR(const struct FVector& NewLoc, const struct FRotator& NewRot, bool bUseYawOnly, bool bAccountForHMDRotation);
	void Server_SetSeatedMode(class USceneComponent* SeatParent, bool bSetSeatedMode, const struct FVector_NetQuantize100& TargetLoc, float TargetYaw, float AllowedRadius, float AllowedRadiusThreshold, bool bZeroToHead);
	void Server_SendTransformRightController(const struct FBPVRComponentPosRep& NewTransform);
	void Server_SendTransformLeftController(const struct FBPVRComponentPosRep& NewTransform);
	void Server_SendTransformCamera(const struct FBPVRComponentPosRep& NewTransform);
	void Server_ReZeroSeating(const struct FVector_NetQuantize100& NewRelativeHeadLoc, float NewRelativeHeadYaw, bool bZeroToHead);
	void RegenerateOffsetComponentToWorld(bool bUpdateBounds, bool bCalculatePureYaw);
	void ReceiveNavigationMoveCompleted(TEnumAsByte<EPathFollowingResult> PathingResult);
	void OnSeatThreshholdChanged(bool bIsWithinThreshold, float ToThresholdScaler);
	void OnSeatedModeChanged(bool bNewSeatedMode, bool bWasAlreadySeated);
	void OnRep_SeatedCharInfo();
	void OnRep_CapsuleHeight();
	void OnEndWallPushback();
	void OnCustomMoveActionPerformed(EVRMoveAction MoveActionType, const struct FVector& MoveActionVector, const struct FRotator& MoveActionRotator);
	void OnClimbingSteppedUp();
	void OnBeginWallPushback(const struct FHitResult& HitResultOfImpact, bool bHadLocomotionInput, const struct FVector& HmdInput);
	void NotifyOfTeleport();
	bool HasPartialPath();
	struct FVector GetVRUpVector();
	struct FRotator GetVRRotation();
	struct FVector GetVRRightVector();
	struct FVector GetVRLocation();
	struct FVector GetVRForwardVector();
	struct FVector GetTeleportLocation(const struct FVector& OriginalLocation);
	TEnumAsByte<EPathFollowingStatus> GetMoveStatus();
	class USkeletalMeshComponent* GetIKMesh();
	void ExtendedSimpleMoveToLocation(const struct FVector& GoalLocation, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	struct FVector AddActorWorldRotationVR(const struct FRotator& DeltaRot, bool bUseYawOnly);
};


// Class VRExpansionPlugin.VRBaseCharacterMovementComponent
// 0x0060 (0x07D0 - 0x0770)
class UVRBaseCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x37];                                      // 0x0770(0x0037) MISSED OFFSET
	bool                                               bIgnoreSimulatingComponentsInFloorCheck;                  // 0x07A7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRunControlRotationInMovementComponent;                   // 0x07A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07A9(0x0003) MISSED OFFSET
	float                                              VRClimbingStepHeight;                                     // 0x07AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VRClimbingEdgeRejectDistance;                             // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VRClimbingStepUpMultiplier;                               // 0x07B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SetDefaultPostClimbMovementOnStepUp;                      // 0x07B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07B9(0x0003) MISSED OFFSET
	float                                              VRClimbingMaxReleaseVelocitySize;                         // 0x07BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VREdgeRejectDistance;                                     // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EVRConjoinedMovementModes                          DefaultPostClimbMovement;                                 // 0x07C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x07C5(0x0003) MISSED OFFSET
	float                                              VRLowGravWallFrictionScaler;                              // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               VRLowGravIgnoresDefaultFluidFriction;                     // 0x07CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x07CD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRBaseCharacterMovementComponent");
		return ptr;
	}


	void SetReplicatedMovementMode(EVRConjoinedMovementModes NewMovementMode);
	void SetCrouchedHalfHeight(float NewCrouchedHalfHeight);
	void SetClimbingMode(bool bIsClimbing);
	struct FVector RewindVRMovement();
	void PerformMoveAction_Teleport(const struct FVector& TeleportLocation, const struct FRotator& TeleportRotation, bool bSkipEncroachmentCheck);
	void PerformMoveAction_StopAllMovement();
	void PerformMoveAction_SnapTurn(float SnapTurnDeltaYaw);
	void PerformMoveAction_SetRotation(float NewYaw);
	void PerformMoveAction_Custom(EVRMoveAction MoveActionToPerform, EVRMoveActionDataReq DataRequirementsForMoveAction, const struct FVector& MoveActionVector, const struct FRotator& MoveActionRotator);
	struct FVector GetCustomInputVector();
	void ClientVeryShortAdjustPosition(float Timestamp, const struct FVector& NewLoc, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAdjustPosition(float Timestamp, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void AddCustomReplicatedMovement(const struct FVector& Movement);
};


// Class VRExpansionPlugin.VRButtonComponent
// 0x0090 (0x0680 - 0x05F0)
class UVRButtonComponent : public UStaticMeshComponent
{
public:
	struct FScriptMulticastDelegate                    OnButtonStateChanged;                                     // 0x05F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TWeakObjectPtr<class UPrimitiveComponent>          InteractingComponent;                                     // 0x0600(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsEnabled;                                               // 0x0608(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bButtonState;                                             // 0x0609(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x060A(0x0002) MISSED OFFSET
	float                                              DepressSpeed;                                             // 0x060C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepressDistance;                                          // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EVRButtonType                                      ButtonType;                                               // 0x0614(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EVRInteractibleAxis                                ButtonAxis;                                               // 0x0615(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0616(0x0002) MISSED OFFSET
	float                                              ButtonEngageDepth;                                        // 0x0618(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinTimeBetweenEngaging;                                   // 0x061C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipOverlapFiltering;                                    // 0x0620(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5F];                                      // 0x0621(0x005F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRButtonComponent");
		return ptr;
	}


	void SetButtonToRestingPosition(bool bLerpToPosition);
	void SetButtonState(bool bNewButtonState, bool bCallButtonChangedEvent, bool bSnapIntoPosition);
	void ResetInitialButtonLocation();
	void ReceiveButtonStateChanged(bool bCurButtonState);
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	bool IsValidOverlap(class UPrimitiveComponent* OverlapComponent);
	bool IsButtonInUse();
};


// Class VRExpansionPlugin.VRCharacter
// 0x0010 (0x0810 - 0x0800)
class AVRCharacter : public AVRBaseCharacter
{
public:
	class UVRRootComponent*                            VRRootReference;                                          // 0x0800(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0808(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRCharacter");
		return ptr;
	}


	void ServerMoveVRExLight(float Timestamp, const struct FVector_NetQuantize100& ClientLoc, const struct FVector_NetQuantize100& CapsuleLoc, const struct FVRConditionalMoveRep& ConditionalReps, const struct FVector_NetQuantize100& LFDiff, uint16_t CapsuleYaw, unsigned char CompressedMoveFlags, const struct FVRConditionalMoveRep2& MoveReps, unsigned char ClientMovementMode);
	void ServerMoveVRDualHybridRootMotion(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, const struct FVector_NetQuantize100& OldCapsuleLoc, const struct FVRConditionalMoveRep& OldConditionalReps, const struct FVector_NetQuantize100& OldLFDiff, uint16_t OldCapsuleYaw, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, const struct FVector_NetQuantize100& CapsuleLoc, const struct FVRConditionalMoveRep& ConditionalReps, const struct FVector_NetQuantize100& LFDiff, uint16_t CapsuleYaw, unsigned char NewFlags, const struct FVRConditionalMoveRep2& MoveReps, unsigned char ClientMovementMode);
	void ServerMoveVRDualExLight(float TimeStamp0, unsigned char PendingFlags, uint32_t View0, const struct FVector_NetQuantize100& OldCapsuleLoc, const struct FVRConditionalMoveRep& OldConditionalReps, const struct FVector_NetQuantize100& OldLFDiff, uint16_t OldCapsuleYaw, float Timestamp, const struct FVector_NetQuantize100& ClientLoc, const struct FVector_NetQuantize100& CapsuleLoc, const struct FVRConditionalMoveRep& ConditionalReps, const struct FVector_NetQuantize100& LFDiff, uint16_t CapsuleYaw, unsigned char NewFlags, const struct FVRConditionalMoveRep2& MoveReps, unsigned char ClientMovementMode);
	void ServerMoveVRDual(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, const struct FVector_NetQuantize100& OldCapsuleLoc, const struct FVRConditionalMoveRep& OldConditionalReps, const struct FVector_NetQuantize100& OldLFDiff, uint16_t OldCapsuleYaw, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, const struct FVector_NetQuantize100& CapsuleLoc, const struct FVRConditionalMoveRep& ConditionalReps, const struct FVector_NetQuantize100& LFDiff, uint16_t CapsuleYaw, unsigned char NewFlags, const struct FVRConditionalMoveRep2& MoveReps, unsigned char ClientMovementMode);
	void ServerMoveVR(float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, const struct FVector_NetQuantize100& CapsuleLoc, const struct FVRConditionalMoveRep& ConditionalReps, const struct FVector_NetQuantize100& LFDiff, uint16_t CapsuleYaw, unsigned char CompressedMoveFlags, const struct FVRConditionalMoveRep2& MoveReps, unsigned char ClientMovementMode);
	void ClientVeryShortAdjustPositionVR(float Timestamp, const struct FVector& NewLoc, uint16_t NewYaw, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	void ClientAdjustPositionVR(float Timestamp, const struct FVector& NewLoc, uint16_t NewYaw, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
};


// Class VRExpansionPlugin.VRCharacterMovementComponent
// 0x0010 (0x07E0 - 0x07D0)
class UVRCharacterMovementComponent : public UVRBaseCharacterMovementComponent
{
public:
	class UVRRootComponent*                            VRRootCapsule;                                            // 0x07D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               bUseClientControlRotation;                                // 0x07D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowMovementMerging;                                    // 0x07D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x07DA(0x0002) MISSED OFFSET
	float                                              WallRepulsionMultiplier;                                  // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRCharacterMovementComponent");
		return ptr;
	}

};


// Class VRExpansionPlugin.VRDialComponent
// 0x0110 (0x0700 - 0x05F0)
class UVRDialComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05F0(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDialHitSnapAngle;                                       // 0x0600(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bLerpBackOnRelease;                                       // 0x0610(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSendDialEventsDuringLerp;                                // 0x0611(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0612(0x0002) MISSED OFFSET
	float                                              DialReturnSpeed;                                          // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLerping;                                               // 0x0618(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0619(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDialFinishedLerping;                                    // 0x0620(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              CurrentDialAngle;                                         // 0x0630(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ClockwiseMaximumDialAngle;                                // 0x0634(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CClockwiseMaximumDialAngle;                               // 0x0638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDialUsesAngleSnap;                                       // 0x063C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x063D(0x0003) MISSED OFFSET
	float                                              SnapAngleIncrement;                                       // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SnapAngleThreshold;                                       // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationScaler;                                           // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EVRInteractibleAxis                                DialRotationAxis;                                         // 0x064C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EVRInteractibleAxis                                InteractorRotationAxis;                                   // 0x064D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x064E(0x0002) MISSED OFFSET
	int                                                GripPriority;                                             // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6C];                                      // 0x0654(0x006C) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x06C0(0x0020) (Edit, BlueprintVisible, Net)
	bool                                               bRepGameplayTags;                                         // 0x06E0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicateMovement;                                       // 0x06E1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	EGripMovementReplicationSettings                   MovementReplicationSetting;                               // 0x06E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x06E3(0x0001) MISSED OFFSET
	float                                              BreakDistance;                                            // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHeld;                                                  // 0x06E8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x06E9(0x0007) MISSED OFFSET
	class UGripMotionControllerComponent*              HoldingController;                                        // 0x06F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bDenyGripping;                                            // 0x06F8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x06F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRDialComponent");
		return ptr;
	}


	void TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime);
	EGripInterfaceTeleportBehavior TeleportBehavior();
	bool SimulateOnDrop();
	void SetHeld(class UGripMotionControllerComponent* NewHoldingController, bool bNewIsHeld);
	void SetDialAngle(float DialAngle, bool bCallEvents);
	ESecondaryGripType SecondaryGripType();
	void ResetInitialDialLocation();
	bool RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform);
	void ReceiveDialHitSnapAngle(float DialMilestoneAngle);
	void ReceiveDialFinishedLerping();
	void OnUsed();
	void OnSecondaryUsed();
	void OnSecondaryGripRelease(class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
	void OnSecondaryGrip(class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
	void OnInput(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent);
	void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
	void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
	void OnEndUsed();
	void OnEndSecondaryUsed();
	void OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
	void OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
	void IsHeld(class UGripMotionControllerComponent** CurHoldingController, bool* bCurIsHeld);
	EGripMovementReplicationSettings GripMovementReplicationType();
	EGripLateUpdateSettings GripLateUpdateSetting();
	float GripBreakDistance();
	EGripCollisionType GetPrimaryGripType(bool bIsSlot);
	void GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut);
	bool DenyGripping();
	void ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, class UGripMotionControllerComponent* CallingController, const struct FName& OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform);
	struct FBPAdvGripSettings AdvancedGripSettings();
	void AddDialAngle(float DialAngleDelta, bool bCallEvents);
};


// Class VRExpansionPlugin.VRExpansionFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UVRExpansionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRExpansionFunctionLibrary");
		return ptr;
	}


	void STATIC_SmoothUpdateLaserSpline(class USplineComponent* LaserSplineComponent, TArray<class USplineMeshComponent*> LaserSplineMeshComponents, const struct FVector& InStartLocation, const struct FVector& InEndLocation, const struct FVector& InForward, float LaserRadius);
	void STATIC_RunEuroSmoothingFilter(const struct FVector& InRawValue, float DeltaTime, struct FBPEuroLowPassFilter* TargetEuroFilter, struct FVector* SmoothedValue);
	void STATIC_RotateAroundPivot(const struct FRotator& RotationDelta, const struct FVector& OriginalLocation, const struct FRotator& OriginalRotation, const struct FVector& PivotPoint, bool bUseOriginalYawOnly, struct FVector* NewLocation, struct FRotator* NewRotation);
	void STATIC_ResetEuroSmoothingFilter(struct FBPEuroLowPassFilter* TargetEuroFilter);
	void STATIC_NonAuthorityMinimumAreaRectangle(class UObject* WorldContextObject, TArray<struct FVector> InVerts, const struct FVector& SampleSurfaceNormal, bool bDebugDraw, struct FVector* OutRectCenter, struct FRotator* OutRectRotation, float* OutSideLengthX, float* OutSideLengthY);
	bool STATIC_MatchesAnyTagsWithDirectParentTag(const struct FGameplayTag& DirectParentTag, const struct FGameplayTagContainer& BaseContainer, const struct FGameplayTagContainer& OtherContainer);
	struct FVector_NetQuantize100 STATIC_MakeVector_NetQuantize100(const struct FVector& InVector);
	struct FVector_NetQuantize10 STATIC_MakeVector_NetQuantize10(const struct FVector& InVector);
	struct FVector_NetQuantize STATIC_MakeVector_NetQuantize(const struct FVector& InVector);
	struct FTransform_NetQuantize STATIC_MakeTransform_NetQuantize(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale);
	void STATIC_LowPassFilter_RollingAverage(const struct FVector& lastAverage, const struct FVector& newSample, int numSamples, struct FVector* newAverage);
	void STATIC_LowPassFilter_Exponential(const struct FVector& lastAverage, const struct FVector& newSample, float sampleFactor, struct FVector* newAverage);
	bool STATIC_IsInVREditorPreviewOrGame();
	bool STATIC_IsInVREditorPreview();
	EBPHMDWornState STATIC_GetIsHMDWorn();
	bool STATIC_GetIsHMDConnected();
	bool STATIC_GetIsActorMovable(class AActor* ActorToCheck);
	EBPHMDDeviceType STATIC_GetHMDType();
	struct FRotator STATIC_GetHMDPureYaw(const struct FRotator& HMDRotation);
	bool STATIC_GetHandFromMotionSourceName(const struct FName& MotionSource, EControllerHand* Hand);
	void STATIC_GetGripSlotInRangeByTypeName_Component(const struct FName& SlotType, class UPrimitiveComponent* Component, const struct FVector& WorldLocation, float MaxRange, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform);
	void STATIC_GetGripSlotInRangeByTypeName(const struct FName& SlotType, class AActor* Actor, const struct FVector& WorldLocation, float MaxRange, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform);
	bool STATIC_GetFirstGameplayTagWithExactParent(const struct FGameplayTag& DirectParentTag, const struct FGameplayTagContainer& BaseContainer, struct FGameplayTag* FoundTag);
	bool STATIC_EqualEqual_FBPActorGripInformation(const struct FBPActorGripInformation& A, const struct FBPActorGripInformation& B);
	struct FTransform_NetQuantize STATIC_Conv_TransformToTransformNetQuantize(const struct FTransform& InTransform);
	struct FVector_NetQuantize100 STATIC_Conv_FVectorToFVectorNetQuantize100(const struct FVector& InVector);
	struct FVector_NetQuantize10 STATIC_Conv_FVectorToFVectorNetQuantize10(const struct FVector& InVector);
	struct FVector_NetQuantize STATIC_Conv_FVectorToFVectorNetQuantize(const struct FVector& InVector);
	void STATIC_BreakTransform_NetQuantize(const struct FTransform_NetQuantize& InTransform, struct FVector* Location, struct FRotator* Rotation, struct FVector* Scale);
	class USceneComponent* STATIC_AddSceneComponentByClass(class UObject* Outer, class UClass* Class, const struct FTransform& ComponentRelativeTransform);
};


// Class VRExpansionPlugin.VRGameViewportClient
// 0x0008 (0x02F0 - 0x02E8)
class UVRGameViewportClient : public UGameViewportClient
{
public:
	EVRGameInputMethod                                 GameInputMethod;                                          // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02E9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRGameViewportClient");
		return ptr;
	}

};


// Class VRExpansionPlugin.GesturesDatabase
// 0x0018 (0x0048 - 0x0030)
class UGesturesDatabase : public UDataAsset
{
public:
	TArray<struct FVRGesture>                          Gestures;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              TargetGestureScale;                                       // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.GesturesDatabase");
		return ptr;
	}


	void RecalculateGestures();
	bool ImportSplineAsGesture(class USplineComponent* HostSplineComponent, const struct FString& GestureName, bool bKeepSplineCurves, float SegmentLen);
	void FillSplineWithGesture(class USplineComponent* SplineComponent, bool bCenterPointsOnSpline, bool bScaleToBounds, float OptionalBounds, bool bUseCurvedPoints, bool bFillInSplineMeshComponents, class UStaticMesh* Mesh, class UMaterial* MeshMat, struct FVRGesture* Gesture);
};


// Class VRExpansionPlugin.VRGestureComponent
// 0x0110 (0x0350 - 0x0240)
class UVRGestureComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0240(0x0008) MISSED OFFSET
	class UGesturesDatabase*                           GesturesDB;                                               // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SameSampleTolerance;                                      // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EVRGestureMirrorMode                               MirroringHand;                                            // 0x0254(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0255(0x0003) MISSED OFFSET
	class AVRBaseCharacter*                            TargetCharacter;                                          // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0260(0x0020) MISSED OFFSET
	bool                                               bDrawSplinesCurved;                                       // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGetGestureInWorldSpace;                                  // 0x0281(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0282(0x0006) MISSED OFFSET
	class UStaticMesh*                                 SplineMesh;                                               // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   SplineMaterial;                                           // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x18];                                      // 0x0298(0x0018) MISSED OFFSET
	int                                                maxSlope;                                                 // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EVRGestureState                                    CurrentState;                                             // 0x02B4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x02B5(0x0003) MISSED OFFSET
	struct FVRGesture                                  GestureLog;                                               // 0x02B8(0x0058) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData06[0x40];                                      // 0x0310(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRGestureComponent");
		return ptr;
	}


	void SaveRecording(const struct FString& RecordingName, struct FVRGesture* Recording);
	void RecalculateGestureSize(class UGesturesDatabase* GestureDB, struct FVRGesture* InputGesture);
	void OnGestureDetected(unsigned char GestureType, class UGesturesDatabase* GestureDataBase, struct FString* DetectedGestureName, int* DetectedGestureIndex);
	struct FVRGesture EndRecording();
	void DrawDebugGesture(class UObject* WorldContextObject, const struct FVRGesture& GestureToDraw, const struct FColor& Color, bool bPersistentLines, unsigned char DepthPriority, float LifeTime, float Thickness, struct FTransform* StartTransform);
	void ClearRecording();
	void BeginRecording(bool bRunDetection, bool bFlattenGesture, bool bDrawGesture, bool bDrawAsSpline, int SamplingHTZ, int SampleBufferSize, float ClampingTolerance);
};


// Class VRExpansionPlugin.VRGlobalSettings
// 0x00B8 (0x00E0 - 0x0028)
class UVRGlobalSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	TArray<struct FBPVRControllerProfile>              ControllerProfiles;                                       // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x80];                                      // 0x0050(0x0080) MISSED OFFSET
	float                                              OneEuroMinCutoff;                                         // 0x00D0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              OneEuroCutoffSlope;                                       // 0x00D4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              OneEuroDeltaCutoff;                                       // 0x00D8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRGlobalSettings");
		return ptr;
	}


	void STATIC_SaveControllerProfiles();
	void STATIC_OverwriteControllerProfile(bool bSaveOutToConfig, struct FBPVRControllerProfile* OverwritingProfile);
	bool STATIC_LoadControllerProfileByName(const struct FName& ControllerProfileName, bool bSetAsCurrentProfile);
	bool STATIC_LoadControllerProfile(const struct FBPVRControllerProfile& ControllerProfile, bool bSetAsCurrentProfile);
	struct FName STATIC_GetCurrentProfileName(bool* bHadLoadedProfile);
	struct FBPVRControllerProfile STATIC_GetCurrentProfile(bool* bHadLoadedProfile);
	TArray<struct FBPVRControllerProfile> STATIC_GetControllerProfiles();
	bool STATIC_GetControllerProfile(const struct FName& ControllerProfileName, struct FBPVRControllerProfile* OutProfile);
	void STATIC_DeleteControllerProfile(const struct FName& ControllerProfileName, bool bSaveOutToConfig);
	struct FTransform STATIC_AdjustTransformByGivenControllerProfile(const struct FTransform& SocketTransform, bool bIsRightHand, struct FBPVRControllerProfile* ControllerProfile);
	struct FTransform STATIC_AdjustTransformByControllerProfile(const struct FName& OptionalControllerProfileName, const struct FTransform& SocketTransform, bool bIsRightHand);
	void STATIC_AddControllerProfile(bool bSaveOutToConfig, struct FBPVRControllerProfile* NewProfile);
};


// Class VRExpansionPlugin.VRGripInterface
// 0x0000 (0x0028 - 0x0028)
class UVRGripInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRGripInterface");
		return ptr;
	}


	void TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime);
	EGripInterfaceTeleportBehavior TeleportBehavior();
	bool SimulateOnDrop();
	void SetHeld(class UGripMotionControllerComponent* HoldingController, bool bIsHeld);
	ESecondaryGripType SecondaryGripType();
	bool RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform);
	void OnUsed();
	void OnSecondaryUsed();
	void OnSecondaryGripRelease(class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
	void OnSecondaryGrip(class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
	void OnInput(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent);
	void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
	void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
	void OnEndUsed();
	void OnEndSecondaryUsed();
	void OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
	void OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
	void IsHeld(class UGripMotionControllerComponent** HoldingController, bool* bIsHeld);
	EGripMovementReplicationSettings GripMovementReplicationType();
	EGripLateUpdateSettings GripLateUpdateSetting();
	float GripBreakDistance();
	EGripCollisionType GetPrimaryGripType(bool bIsSlot);
	void GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut);
	bool DenyGripping();
	void ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, class UGripMotionControllerComponent* CallingController, const struct FName& OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform);
	struct FBPAdvGripSettings AdvancedGripSettings();
};


// Class VRExpansionPlugin.VRInteractibleFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UVRInteractibleFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRInteractibleFunctionLibrary");
		return ptr;
	}


	void STATIC_Interactible_OnGripInit(class USceneComponent* InteractibleComp, struct FBPActorGripInformation* GripInformation, struct FBPVRInteractibleBaseData* BaseDataToInit);
	float STATIC_Interactible_GetThresholdSnappedValue(float ValueToSnap, float SnapIncrement, float SnapThreshold);
	struct FTransform STATIC_Interactible_GetCurrentRelativeTransform(class USceneComponent* SceneComponentToCheck, struct FBPVRInteractibleBaseData* BaseData);
	struct FTransform STATIC_Interactible_GetCurrentParentTransform(class USceneComponent* SceneComponentToCheck);
	float STATIC_Interactible_GetAngleAroundAxisDelta(EVRInteractibleAxis AxisToCalc, const struct FVector& CurInteractorLocation, float InitialAngle);
	float STATIC_Interactible_GetAngleAroundAxis(EVRInteractibleAxis AxisToCalc, const struct FVector& CurInteractorLocation);
	void STATIC_Interactible_BeginPlayInit(class USceneComponent* InteractibleComp, struct FBPVRInteractibleBaseData* BaseDataToInit);
};


// Class VRExpansionPlugin.VRLeverComponent
// 0x0150 (0x0740 - 0x05F0)
class UVRLeverComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05F0(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnLeverStateChanged;                                      // 0x0600(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLeverFinishedLerping;                                   // 0x0610(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              CurrentLeverAngle;                                        // 0x0620(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurrentLeverForwardVector;                                // 0x0624(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bIsPhysicsLever;                                          // 0x0630(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUngripAtTargetRotation;                                  // 0x0631(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EVRInteractibleLeverAxis                           LeverRotationAxis;                                        // 0x0632(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0633(0x0001) MISSED OFFSET
	float                                              LeverTogglePercentage;                                    // 0x0634(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LeverLimitPositive;                                       // 0x0638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LeverLimitNegative;                                       // 0x063C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EVRInteractibleLeverReturnType                     LeverReturnTypeWhenReleased;                              // 0x0640(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSendLeverEventsDuringLerp;                               // 0x0641(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0642(0x0002) MISSED OFFSET
	float                                              LeverReturnSpeed;                                         // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FramesToAverage;                                          // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LeverMomentumFriction;                                    // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LeverRestitution;                                         // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLeverMomentum;                                         // 0x0654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLerping;                                               // 0x0658(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0659(0x0003) MISSED OFFSET
	int                                                GripPriority;                                             // 0x065C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0660(0x0010) MISSED OFFSET
	struct FTransform_NetQuantize                      InitialRelativeTransform;                                 // 0x0670(0x0030) (BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      UnknownData05[0x40];                                      // 0x06A0(0x0040) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x06E0(0x0020) (Edit, BlueprintVisible, Net)
	bool                                               bRepGameplayTags;                                         // 0x0700(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicateMovement;                                       // 0x0701(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	EGripMovementReplicationSettings                   MovementReplicationSetting;                               // 0x0702(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x0703(0x0001) MISSED OFFSET
	float                                              BreakDistance;                                            // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Stiffness;                                                // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x070C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDenyGripping;                                            // 0x0710(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHeld;                                                  // 0x0711(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x0712(0x0006) MISSED OFFSET
	class UGripMotionControllerComponent*              HoldingController;                                        // 0x0718(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData08[0x20];                                      // 0x0720(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRLeverComponent");
		return ptr;
	}


	void TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime);
	EGripInterfaceTeleportBehavior TeleportBehavior();
	bool SimulateOnDrop();
	void SetHeld(class UGripMotionControllerComponent* NewHoldingController, bool bNewIsHeld);
	ESecondaryGripType SecondaryGripType();
	void ResetInitialLeverLocation();
	bool RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform);
	void ReceiveLeverStateChanged(bool LeverStatus, EVRInteractibleLeverEventType LeverStatusType, float LeverAngleAtTime);
	void ReceiveLeverFinishedLerping(float LeverFinalAngle);
	float ReCalculateCurrentAngle();
	void OnUsed();
	void OnSecondaryUsed();
	void OnSecondaryGripRelease(class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
	void OnSecondaryGrip(class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
	void OnRep_InitialRelativeTransform();
	void OnInput(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent);
	void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
	void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
	void OnEndUsed();
	void OnEndSecondaryUsed();
	void OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
	void OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
	void IsHeld(class UGripMotionControllerComponent** CurHoldingController, bool* bCurIsHeld);
	EGripMovementReplicationSettings GripMovementReplicationType();
	EGripLateUpdateSettings GripLateUpdateSetting();
	float GripBreakDistance();
	EGripCollisionType GetPrimaryGripType(bool bIsSlot);
	void GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut);
	bool DenyGripping();
	void ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, class UGripMotionControllerComponent* CallingController, const struct FName& OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform);
	struct FBPAdvGripSettings AdvancedGripSettings();
};


// Class VRExpansionPlugin.VRLogComponent
// 0x0038 (0x0128 - 0x00F0)
class UVRLogComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00F0(0x0030) MISSED OFFSET
	int                                                MaxLineLength;                                            // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxStoredMessages;                                        // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRLogComponent");
		return ptr;
	}


	void SetConsoleText(const struct FString& Text);
	void SendKeyEventToConsole(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent);
	bool DrawConsoleToRenderTarget2D(EBPVRConsoleDrawType DrawType, class UTextureRenderTarget2D* Texture, float ScrollOffset, bool bForceDraw);
	void AppendTextToConsole(const struct FString& Text, bool bReturnAtEnd);
};


// Class VRExpansionPlugin.VRMountComponent
// 0x0160 (0x0750 - 0x05F0)
class UVRMountComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05F0(0x0010) MISSED OFFSET
	EVRInteractibleMountAxis                           MountRotationAxis;                                        // 0x0600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6F];                                      // 0x0601(0x006F) MISSED OFFSET
	float                                              FlipingZone;                                              // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlipReajustYawSpeed;                                      // 0x0674(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GripPriority;                                             // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x94];                                      // 0x067C(0x0094) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0710(0x0020) (Edit, BlueprintVisible, Net)
	bool                                               bRepGameplayTags;                                         // 0x0730(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicateMovement;                                       // 0x0731(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	EGripMovementReplicationSettings                   MovementReplicationSetting;                               // 0x0732(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0733(0x0001) MISSED OFFSET
	float                                              BreakDistance;                                            // 0x0734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Stiffness;                                                // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x073C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDenyGripping;                                            // 0x0740(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHeld;                                                  // 0x0741(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0742(0x0006) MISSED OFFSET
	class UGripMotionControllerComponent*              HoldingController;                                        // 0x0748(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRMountComponent");
		return ptr;
	}


	void TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime);
	EGripInterfaceTeleportBehavior TeleportBehavior();
	bool SimulateOnDrop();
	void SetHeld(class UGripMotionControllerComponent* NewHoldingController, bool bNewIsHeld);
	ESecondaryGripType SecondaryGripType();
	void ResetInitialMountLocation();
	bool RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform);
	void OnUsed();
	void OnSecondaryUsed();
	void OnSecondaryGripRelease(class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
	void OnSecondaryGrip(class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
	void OnInput(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent);
	void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
	void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
	void OnEndUsed();
	void OnEndSecondaryUsed();
	void OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
	void OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
	void IsHeld(class UGripMotionControllerComponent** CurHoldingController, bool* bCurIsHeld);
	EGripMovementReplicationSettings GripMovementReplicationType();
	EGripLateUpdateSettings GripLateUpdateSetting();
	float GripBreakDistance();
	EGripCollisionType GetPrimaryGripType(bool bIsSlot);
	void GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut);
	bool DenyGripping();
	void ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, class UGripMotionControllerComponent* CallingController, const struct FName& OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform);
	struct FBPAdvGripSettings AdvancedGripSettings();
};


// Class VRExpansionPlugin.VRPathFollowingComponent
// 0x0008 (0x02D0 - 0x02C8)
class UVRPathFollowingComponent : public UPathFollowingComponent
{
public:
	class UVRCharacterMovementComponent*               VRMovementComp;                                           // 0x02C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRPathFollowingComponent");
		return ptr;
	}

};


// Class VRExpansionPlugin.VRPlayerController
// 0x0010 (0x0688 - 0x0678)
class AVRPlayerController : public APlayerController
{
public:
	bool                                               bDisableServerUpdateCamera;                               // 0x0678(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0679(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRPlayerController");
		return ptr;
	}

};


// Class VRExpansionPlugin.VRPlayerStart
// 0x0008 (0x0360 - 0x0358)
class AVRPlayerStart : public APlayerStart
{
public:
	class USceneComponent*                             VRRootComp;                                               // 0x0358(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRPlayerStart");
		return ptr;
	}

};


// Class VRExpansionPlugin.VRRootComponent
// 0x00D0 (0x0660 - 0x0590)
class UVRRootComponent : public UCapsuleComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0590(0x0010) MISSED OFFSET
	struct FBPVRWaistTracking_Info                     OptionalWaistTrackingParent;                              // 0x05A0(0x0020) (Edit, BlueprintVisible)
	class USceneComponent*                             TargetPrimitiveComponent;                                 // 0x05C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x05C8(0x0048) MISSED OFFSET
	struct FVector                                     VRCapsuleOffset;                                          // 0x0610(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bCenterCapsuleOnHMD;                                      // 0x061C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowSimulatingCollision;                                // 0x061D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseWalkingCollisionOverride;                             // 0x061E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     WalkingCollisionOverride;                                 // 0x061F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3C];                                      // 0x0620(0x003C) MISSED OFFSET
	bool                                               bHadRelativeMovement;                                     // 0x065C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x065D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRRootComponent");
		return ptr;
	}


	void SetCapsuleSizeVR(float NewRadius, float NewHalfHeight, bool bUpdateOverlaps);
	void SetCapsuleHalfHeightVR(float HalfHeight, bool bUpdateOverlaps);
};


// Class VRExpansionPlugin.VRSimpleCharacter
// 0x0010 (0x0810 - 0x0800)
class AVRSimpleCharacter : public AVRBaseCharacter
{
public:
	class USceneComponent*                             VRSceneComponent;                                         // 0x0800(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0808(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRSimpleCharacter");
		return ptr;
	}


	void ServerMoveVRDualHybridRootMotion(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, const struct FVRConditionalMoveRep& OldConditionalReps, const struct FVector_NetQuantize100& OldLFDiff, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, const struct FVRConditionalMoveRep& ConditionalReps, const struct FVector_NetQuantize100& LFDiff, unsigned char NewFlags, const struct FVRConditionalMoveRep2& MoveReps, unsigned char ClientMovementMode);
	void ServerMoveVRDual(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, const struct FVRConditionalMoveRep& OldConditionalReps, const struct FVector_NetQuantize100& OldLFDiff, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, const struct FVRConditionalMoveRep& ConditionalReps, const struct FVector_NetQuantize100& LFDiff, unsigned char NewFlags, const struct FVRConditionalMoveRep2& MoveReps, unsigned char ClientMovementMode);
	void ServerMoveVR(float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, const struct FVRConditionalMoveRep& ConditionalReps, const struct FVector_NetQuantize100& LFDiff, unsigned char CompressedMoveFlags, const struct FVRConditionalMoveRep2& MoveReps, unsigned char ClientMovementMode);
};


// Class VRExpansionPlugin.VRSimpleCharacterMovementComponent
// 0x0050 (0x0820 - 0x07D0)
class UVRSimpleCharacterMovementComponent : public UVRBaseCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x07D0(0x0038) MISSED OFFSET
	class UCapsuleComponent*                           VRRootCapsule;                                            // 0x0808(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            VRCameraComponent;                                        // 0x0810(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               bSkipHMDChecks;                                           // 0x0818(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0819(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRSimpleCharacterMovementComponent");
		return ptr;
	}

};


// Class VRExpansionPlugin.VRSliderComponent
// 0x0140 (0x0730 - 0x05F0)
class UVRSliderComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05F0(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSliderHitPoint;                                         // 0x0600(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSliderFinishedLerping;                                  // 0x0610(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0620(0x0004) MISSED OFFSET
	struct FVector                                     MaxSlideDistance;                                         // 0x0624(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     MinSlideDistance;                                         // 0x0630(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	EVRInteractibleSliderDropBehavior                  SliderBehaviorWhenReleased;                               // 0x063C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x063D(0x0003) MISSED OFFSET
	int                                                FramesToAverage;                                          // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SliderMomentumFriction;                                   // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SliderRestitution;                                        // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSliderMomentum;                                        // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLerping;                                               // 0x0650(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xB];                                       // 0x0651(0x000B) MISSED OFFSET
	float                                              CurrentSliderProgress;                                    // 0x065C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSlideDistanceIsInParentSpace;                            // 0x0660(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0661(0x0003) MISSED OFFSET
	float                                              EventThrowThreshold;                                      // 0x0664(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0668(0x0004) MISSED OFFSET
	int                                                GripPriority;                                             // 0x066C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USplineComponent*                            SplineComponentToFollow;                                  // 0x0670(0x0008) (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bFollowSplineRotationAndScale;                            // 0x0678(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnforceSplineLinearity;                                  // 0x0679(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xA];                                       // 0x067A(0x000A) MISSED OFFSET
	EVRInteractibleSliderLerpType                      SplineLerpType;                                           // 0x0684(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0685(0x0003) MISSED OFFSET
	float                                              SplineLerpValue;                                          // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSliderUsesSnapPoints;                                    // 0x068C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x068D(0x0003) MISSED OFFSET
	float                                              SnapIncrement;                                            // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SnapThreshold;                                            // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x8];                                       // 0x0698(0x0008) MISSED OFFSET
	struct FTransform_NetQuantize                      InitialRelativeTransform;                                 // 0x06A0(0x0030) (BlueprintVisible, BlueprintReadOnly, Net)
	unsigned char                                      UnknownData10[0x28];                                      // 0x06D0(0x0028) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x06F8(0x0020) (Edit, BlueprintVisible, Net)
	bool                                               bRepGameplayTags;                                         // 0x0718(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicateMovement;                                       // 0x0719(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	EGripMovementReplicationSettings                   MovementReplicationSetting;                               // 0x071A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x071B(0x0001) MISSED OFFSET
	float                                              BreakDistance;                                            // 0x071C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDenyGripping;                                            // 0x0720(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHeld;                                                  // 0x0721(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x6];                                       // 0x0722(0x0006) MISSED OFFSET
	class UGripMotionControllerComponent*              HoldingController;                                        // 0x0728(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRSliderComponent");
		return ptr;
	}


	void TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime);
	EGripInterfaceTeleportBehavior TeleportBehavior();
	bool SimulateOnDrop();
	void SetSplineComponentToFollow(class USplineComponent* SplineToFollow);
	void SetSliderProgress(float NewSliderProgress);
	void SetHeld(class UGripMotionControllerComponent* NewHoldingController, bool bNewIsHeld);
	ESecondaryGripType SecondaryGripType();
	void ResetInitialSliderLocation();
	bool RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform);
	void ReceiveSliderHitPoint(float SliderProgressPoint);
	void ReceiveSliderFinishedLerping(float FinalProgress);
	void OnUsed();
	void OnSecondaryUsed();
	void OnSecondaryGripRelease(class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
	void OnSecondaryGrip(class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
	void OnRep_InitialRelativeTransform();
	void OnInput(const struct FKey& Key, TEnumAsByte<EInputEvent> KeyEvent);
	void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
	void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
	void OnEndUsed();
	void OnEndSecondaryUsed();
	void OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
	void OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
	void IsHeld(class UGripMotionControllerComponent** CurHoldingController, bool* bCurIsHeld);
	EGripMovementReplicationSettings GripMovementReplicationType();
	EGripLateUpdateSettings GripLateUpdateSetting();
	float GripBreakDistance();
	EGripCollisionType GetPrimaryGripType(bool bIsSlot);
	void GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut);
	bool DenyGripping();
	void ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, class UGripMotionControllerComponent* CallingController, const struct FName& OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform);
	float CalculateSliderProgress();
	struct FBPAdvGripSettings AdvancedGripSettings();
};


// Class VRExpansionPlugin.VRStereoWidgetComponent
// 0x0060 (0x0710 - 0x06B0)
class UVRStereoWidgetComponent : public UWidgetComponent
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x06B0(0x0014) MISSED OFFSET
	int                                                Priority;                                                 // 0x06C4(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x06C8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRStereoWidgetComponent");
		return ptr;
	}


	void SetPriority(int InPriority);
	int GetPriority();
};


// Class VRExpansionPlugin.VRTrackedParentInterface
// 0x0000 (0x0028 - 0x0028)
class UVRTrackedParentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRTrackedParentInterface");
		return ptr;
	}


	void SetTrackedParent(class UPrimitiveComponent* NewParentComponent, float WaistRadius, EBPVRWaistTrackingMode WaistTrackingMode);
};


// Class VRExpansionPlugin.VRVehiclePawn
// 0x0000 (0x0388 - 0x0388)
class AVRVehiclePawn : public APawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRVehiclePawn");
		return ptr;
	}


	bool SetBindToInput(class AController* CController, bool bBindToInput);
	bool ForceSecondaryPossession(class AController* NewController);
};


// Class VRExpansionPlugin.VRWheeledVehicle
// 0x0000 (0x0398 - 0x0398)
class AVRWheeledVehicle : public AWheeledVehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRWheeledVehicle");
		return ptr;
	}


	bool SetOverrideController(class AController* NewController);
	bool SetBindToInput(class AController* CController, bool bBindToInput);
	bool ForceSecondaryPossession(class AController* NewController);
};


// Class VRExpansionPlugin.VRSimpleWheeledVehicle
// 0x0000 (0x0398 - 0x0398)
class AVRSimpleWheeledVehicle : public AVRWheeledVehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRExpansionPlugin.VRSimpleWheeledVehicle");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
