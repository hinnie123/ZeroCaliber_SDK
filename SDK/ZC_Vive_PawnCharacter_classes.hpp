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

// BlueprintGeneratedClass Vive_PawnCharacter.Vive_PawnCharacter_C
// 0x0250 (0x0A70 - 0x0820)
class AVive_PawnCharacter_C : public AVRCharacterCustomPerception
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0820(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      HandMesh_Right;                                           // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVOIPTalker*                                 VOIPTalker;                                               // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        HeadMesh;                                                 // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProceduralMeshComponent*                    ProceduralMeshLeft;                                       // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProceduralMeshComponent*                    ProceduralMeshRight;                                      // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            GrabSphereRight;                                          // 0x0850(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TextR;                                                    // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            GrabSphereLeft;                                           // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TetL;                                                     // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      HandMesh_Left;                                            // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Body;                                                     // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        PlayerNameDisplay;                                        // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                ControllerTimerHandle;                                    // 0x0888(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsTeleporting;                                            // 0x0890(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0891(0x0003) MISSED OFFSET
	float                                              FadeInDuration;                                           // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                TeleportFadeColor;                                        // 0x0898(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutDuration;                                          // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08AC(0x0004) MISSED OFFSET
	class ABP_Teleport_Controller_C*                   TeleportControllerLeft;                                   // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	class ABP_Teleport_Controller_C*                   TeleportControllerRight;                                  // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementModeLeft;                                         // 0x08C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementModeRight;                                        // 0x08C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x08C2(0x0002) MISSED OFFSET
	float                                              DPadVelocityScaler;                                       // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GripTraceLength;                                          // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ClimbGripLocation;                                        // 0x08CC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsHandClimbing;                                           // 0x08D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x08D9(0x0007) MISSED OFFSET
	class UGripMotionControllerComponent*              ClimbingHand;                                             // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         GrippedObject;                                            // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               IsObjectRelative;                                         // 0x08F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AlwaysAllowClimbing;                                      // 0x08F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EGripEnum>                             HandStateLeft;                                            // 0x08F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EGripEnum>                             HandStateRight;                                           // 0x08F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwingAndRunMagnitude;                                     // 0x08F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeftControllerRelativeVel;                                // 0x08F8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RightControllerRelativeVel;                               // 0x0904(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HeadRelativeVel;                                          // 0x0910(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningInPlaceScaler;                                     // 0x091C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RIPMotionSmoothingSteps;                                  // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastLContPos;                                             // 0x0924(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastRContPos;                                             // 0x0930(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastHMDPos;                                               // 0x093C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsArmSwingZBased;                                        // 0x0948(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0949(0x0003) MISSED OFFSET
	float                                              MinimumRIPVelocity;                                       // 0x094C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                TrackedDeviceTimerHandle;                                 // 0x0950(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                RipMotionLowPassSmoothingSteps;                           // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LowEndLContRelativeVel;                                   // 0x095C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LowEndRcontRelativeVel;                                   // 0x0968(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LowEndHeadRelativeVel;                                    // 0x0974(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumLowEndRipVelocity;                                 // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIncludeHandsForRIP;                                      // 0x0984(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsOutOfBody;                                             // 0x0985(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bThumbPadEffectsSlidingDirection;                         // 0x0986(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTeleportUsesThumbRotation;                               // 0x0987(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TeleportThumbDeadzone;                                    // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x098C(0x0004) MISSED OFFSET
	struct FGameplayTag                                DefaultGripTag;                                           // 0x0990(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                DefaultDropTag;                                           // 0x0998(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                DefaultSecondaryDropTag;                                  // 0x09A0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                DefaultSecondaryGripTag;                                  // 0x09A8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                DefaultUseTag;                                            // 0x09B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                DefaultEndUseTag;                                         // 0x09B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	EBPHMDDeviceType                                   HeadsetType;                                              // 0x09C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWasAlreadyPossessed;                                     // 0x09C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInVehicle;                                             // 0x09C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableMovement;                                          // 0x09C3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x09C4(0x0004) MISSED OFFSET
	class ACameraActor*                                OutOfBodyCamera;                                          // 0x09C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              CollisionToCheckDuringGrip;                               // 0x09D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bForceOverlapOnlyGripChecks;                              // 0x09E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x09E1(0x0007) MISSED OFFSET
	class USoundAttenuation*                           AttenuationSettingsForVOIP;                               // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPrimitiveComponent*                         LeftHandGripComponent;                                    // 0x09F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         RightHandGripComponent;                                   // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              SlidingMovementDeadZone;                                  // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0xC];                                       // 0x0A04(0x000C) MISSED OFFSET
	struct FTransform_NetQuantize                      LeftControllerOffset;                                     // 0x0A10(0x0030) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FTransform_NetQuantize                      RightControllerOffset;                                    // 0x0A40(0x0030) (Edit, BlueprintVisible, Net, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Vive_PawnCharacter.Vive_PawnCharacter_C");
		return ptr;
	}


	void CheckSteamControllerType(bool* IsKnuckles);
	void InitTeleportControllers(class APlayerState* ValidPlayerState);
	void ShouldSocketGrip(struct FBPActorGripInformation* Grip, bool* ShouldSocket, class USceneComponent** SocketParent, struct FTransform_NetQuantize* RelativeTransform, struct FName* OptionalSocketName);
	void RepositionHandElements(bool IsRightHand, const struct FTransform& NewTransformForProcComps);
	void OnRep_RightControllerOffset();
	void OnRep_LeftControllerOffset();
	void LoadControllerModels(bool* Succeeded);
	void SetGripComponents(class UPrimitiveComponent* LeftHand, class UPrimitiveComponent* RightHand);
	void GetCorrectRotation(struct FRotator* NewParam);
	void CanAttemptSecondaryGrabOnObject(class UObject* ObjectToCheck, bool* CanAttemptSecondaryGrab, ESecondaryGripType* SecondaryGripType);
	void CanAttemptGrabOnObject(class UObject* ObjectToCheck, bool* CanAttemptGrab);
	void CanSecondaryGripObject(class UGripMotionControllerComponent* Hand, class UGripMotionControllerComponent* OtherHand, class UObject* ObjectToTryToGrab, const struct FGameplayTag& GripSecodaryTag, bool HadSlot, ESecondaryGripType SecGripType, bool* CanSecondaryGrip);
	void GetBoneTransform(class UObject* Object, const struct FName& BoneName, struct FTransform* BoneTransform);
	void CheckGripPriority(class UObject* ObjectToCheck, unsigned char PrioToCheckAgainst, bool CheckAgainstPrior, bool* HadHigherPriority, unsigned char* NewGripPrio);
	void SelectObjectFromHitArray(TArray<struct FHitResult>* Hits, bool* bShouldGrip, bool* ObjectImplementsInterface, class UObject** ObjectToGrip, struct FTransform* WorldTransform, class UPrimitiveComponent** FirstPrimitiveHit, struct FName* BoneName, struct FVector* ImpactPoint);
	void DropOrUseSecondaryAttachment(class UGripMotionControllerComponent* Calling_Motion_Controller, class UGripMotionControllerComponent* Other_Controller, const struct FGameplayTagContainer& GameplayTags, bool* DroppedOrUsedSecondary, bool* HadSecondary);
	void ValidateGameplayTagContainer(const struct FGameplayTag& BaseTag, class UObject* Object, const struct FGameplayTag& DefaultTag, const struct FGameplayTagContainer& GameplayTags, bool* MatchedOrDefault);
	void GripDropOrUseObjectClean(class UGripMotionControllerComponent* CallingMotionController, class UGripMotionControllerComponent* OtherController, bool CanCheckClimb, class UPrimitiveComponent* GrabSphere, const struct FGameplayTagContainer& RelevantGameplayTags, bool* PerformedAction);
	void ClearMovementVelocities();
	void TryToSecondaryGripObject(class UGripMotionControllerComponent* Hand, class UGripMotionControllerComponent* OtherHand, class UObject* ObjectToTryToGrab, const struct FGameplayTag& GripSecondaryTag, bool ObjectImplementsInterface, const struct FTransform& RelativeSecondaryTransform, bool bHadSlot, bool* SecondaryGripped);
	void ShouldGripComponent(class UPrimitiveComponent* ComponentToCheck, unsigned char GripPrioToCheckAgainst, bool bCheckAgainstPrior, const struct FName& BoneName, bool* ShouldGrip, class UObject** ObjectToGrip, bool* ObjectImplementsInterface, struct FTransform* ObjectsWorldTransform, unsigned char* GripPrio);
	void SetVehicleMode(bool IsInVehicleMode, bool* IsVR);
	void IsALocalGrip(EGripMovementReplicationSettings GripRepType, bool* IsLocal);
	void HasValidGripCollision(class UPrimitiveComponent* Component, bool* IsValid);
	void CanObjectBeClimbed(class UPrimitiveComponent* ObjectToCheck, bool* CanClimb);
	void GetCorrectPrimarySlotPrefix(class UObject* ObjectToCheckForTag, EControllerHand Hand, struct FName* SocketPrefix);
	void OnDestroy();
	void DropOrUseItem(class UGripMotionControllerComponent* Hand, const struct FBPActorGripInformation& GripInfo, const struct FGameplayTagContainer& GameplayTags);
	void DropOrUseItems(class UGripMotionControllerComponent* Hand, const struct FGameplayTagContainer& GameplayTags);
	void CycleMovementModes(bool IsLeft);
	void ValidateGameplayTag(const struct FGameplayTag& BaseTag, const struct FGameplayTag& GameplayTag, class UObject* Object, const struct FGameplayTag& DefaultTag, bool* MatchedOrDefault);
	void GetCharacterRotatedPosition(const struct FVector& OriginalLocation, const struct FRotator& DeltaRotation, const struct FVector& PivotPoint, struct FRotator* OutRotation, struct FVector* OutNewPosition);
	void UpdateTeleportRotations();
	void CalcPadRotationAndMagnitude(float YAxis, float XAxis, float OptMagnitudeScaler, float OptionalDeadzone, struct FRotator* Rotation, float* Magnitude, bool* WasValid);
	void HandleSlidingMovement(TEnumAsByte<EMovementMode> MovementMode, class UGripMotionControllerComponent* CallingHand, bool bThumbPadInfluencesDirection);
	void SetTeleporterActive(EControllerHand Hand, bool Active);
	void SwitchOutOfBodyCamera(bool SwitchToOutOfBody);
	void TryRemoveSecondaryAttachment(class UGripMotionControllerComponent* Calling_Motion_Controller, class UGripMotionControllerComponent* Other_Controller, const struct FGameplayTagContainer& GameplayTags, bool* DroppedSecondary, bool* HadSecondary);
	void IfOverWidgetUse(class UGripMotionControllerComponent* Calling_Hand, bool Pressed, bool* WasOverWidget);
	void CallCorrectDropSingleEvent(class UGripMotionControllerComponent* Hand, const struct FBPActorGripInformation& Grip);
	void CallCorrectGrabEvent(class UObject* ObjectToGrip, EControllerHand Hand, bool IsSlotGrip, const struct FTransform& GripTransform, const struct FGameplayTag& GripSecondaryTag, const struct FName& OptionalBoneName, bool IsSecondaryGrip);
	void GetRelativeVelocityForLocomotion(bool IsHMD, bool IsMotionZVelBased, const struct FVector& VeloctyVector, float* Velocity);
	void GetSmoothedVelocityOfObject(const struct FVector& CurRelLocation, bool bRollingAverage, struct FVector* LastRelLocation, struct FVector* RelativeVelocityOut, struct FVector* LowEndRelativeVelocityOut);
	void HandleRunInPlace(const struct FVector& ForwardVector, bool IncludeHands);
	void CalculateRelativeVelocities();
	void GetNearestOverlapOfHand(class UGripMotionControllerComponent* Hand, class UPrimitiveComponent* OverlapSphere, class UObject** NearestMesh);
	void CheckAndHandleGripAnimations();
	void InitClimbing(class UGripMotionControllerComponent* Hand, class UObject* Object, bool IsObjectRelative);
	void ClearClimbing(bool BecauseOfStepUp);
	void CheckAndHandleClimbingMovement(float DeltaTime);
	void GripDropOrUseObject(class UGripMotionControllerComponent* CallingMotionController, class UGripMotionControllerComponent* OtherController, bool CanCheckClimb, class UPrimitiveComponent* GrabSphere, const struct FGameplayTag& GripTag, const struct FGameplayTag& DropTag, const struct FGameplayTag& UseTag, const struct FGameplayTag& EndUseTag, const struct FGameplayTag& GripSecondaryTag, const struct FGameplayTag& DropSecondaryTag, bool* Performed_Action);
	void CheckAndHandleTickedMovement();
	void GetDPadMovementFacing(TEnumAsByte<EMovementMode> MovementMode, class UGripMotionControllerComponent* Hand, class UGripMotionControllerComponent* OtherHand, TEnumAsByte<EMovementMode> OtherHandMovementMode, struct FVector* ForwardVector, struct FVector* RightVector);
	void GetNearestOverlappingObject(class UPrimitiveComponent* OverlapComponent, class UGripMotionControllerComponent* Hand, class UObject** NearestObject, bool* ImplementsInterface, struct FTransform* ObjectTransform, bool* CanBeClimbed, struct FName* BoneName, struct FVector* ImpactLoc);
	void TryToGrabObject(class UObject* ObjectToTryToGrab, const struct FTransform& WorldTransform, class UGripMotionControllerComponent* Hand, class UGripMotionControllerComponent* OtherHand, bool IsSlotGrip, const struct FGameplayTag& GripSecondaryTag, const struct FName& GripBoneName, bool IsSecondaryGrip, bool* Gripped);
	void WriteToLog(const struct FString& Text, bool Left);
	void UserConstructionScript();
	void InpActEvt_TeleportLeft_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_TeleportLeft_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_TeleportRight_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_TeleportRight_K2Node_InputActionEvent_11(const struct FKey& Key);
	void OnFailure_27F56E5242A2DFCE22855195C133461E();
	void OnSuccess_27F56E5242A2DFCE22855195C133461E();
	void InpActEvt_Escape_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_GrabLeft_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_GrabLeft_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_GrabRight_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_GrabRight_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_SideGripPressedL_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_SideGripPressedL_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_SideGripPressedR_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_SideGripPressedR_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_LaserBeamLeft_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_LaserBeamRight_K2Node_InputActionEvent_1(const struct FKey& Key);
	void RemoveSecondaryGrip(class UGripMotionControllerComponent* Hand, class UObject* GrippedActorToRemoveAttachment);
	void ExecuteTeleportation(class ABP_Teleport_Controller_C* MotionController, TEnumAsByte<EMovementMode> MovementMode, EControllerHand Hand);
	void VRCapsuleHeightCheck();
	void ReceiveNavigationMoveCompleted(TEnumAsByte<EPathFollowingResult>* PathingResult);
	void InpAxisEvt_ControllerMovementLeft_K2Node_InputAxisEvent_284(float AxisValue);
	void InpAxisEvt_ControllerMovementRight_K2Node_InputAxisEvent_286(float AxisValue);
	void TryDropSingle(class UGripMotionControllerComponent* Controller, const struct FVector_NetQuantize100& AngleVel, const struct FVector_NetQuantize100& LinearVel, unsigned char GripHash);
	void TryGrabServer(class UObject* ObjectToGrab, bool IsSlotGrip, const struct FTransform_NetQuantize& GripTransform, EControllerHand Hand, const struct FGameplayTag& GripSecondaryTag, const struct FName& GripBoneName, bool IsSecondaryGrip);
	void Trigger_Grip_Or_Drop(class UGripMotionControllerComponent* Calling_Hand, class UGripMotionControllerComponent* OtherHand, bool IsGrip, class UPrimitiveComponent* GrabSphere);
	void OnClimbingSteppedUp();
	void InitTeleportControllers_Event();
	void ActivateBeam(bool LeftController, bool Active);
	void ActivateBeamMultiCast(bool LeftController, bool Active);
	void CallTeleport(const struct FVector& New_Teleport_Location, const struct FRotator& Rotation);
	void TryGrabClient(class UObject* ObjectToGrab, bool IsSlotGrip, const struct FTransform_NetQuantize& GripTransform, EControllerHand Hand, const struct FGameplayTag& GripSecondaryTag, const struct FName& GripBoneName, bool IsSecondaryGrip);
	void TryDropSingle_Client(class UGripMotionControllerComponent* Controller, const struct FBPActorGripInformation& GripToDrop, const struct FVector& Angle_Vel, const struct FVector& Linear_Vel);
	void NotifyTeleportActive(EControllerHand Hand, bool State);
	void MulticastTeleportActive(EControllerHand Hand, bool State);
	void RequestTeleport(const struct FVector& NewTeleportLocation, const struct FRotator& Rotation);
	void On_Possessed();
	void ReceiveDestroyed();
	void ReceivePossessed(class AController** NewController);
	void ReceiveTick(float* DeltaSeconds);
	void OnSeatedModeChanged(bool* bNewSeatedMode, bool* bWasAlreadySeated);
	void SendControllerProfileToServer(bool IsRightHand, const struct FTransform_NetQuantize& NewTransform);
	void BndEvt__LeftMotionController_K2Node_ComponentBoundEvent_0_VRGripControllerOnProfileTransformChanged__DelegateSignature(const struct FTransform& NewRelTransForProcComps, const struct FTransform& NewProfileTransform);
	void BndEvt__RightMotionController_K2Node_ComponentBoundEvent_1_VRGripControllerOnProfileTransformChanged__DelegateSignature(const struct FTransform& NewRelTransForProcComps, const struct FTransform& NewProfileTransform);
	void OnPlayerStateReplicated(class APlayerState* NewPlayerState);
	void SetupOnPossession();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Vive_PawnCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
