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

// BlueprintGeneratedClass GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C
// 0x054C (0x0954 - 0x0408)
class AGrippableStaticMeshActorBase_C : public AGrippableStaticMeshActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (Transient, DuplicateTransient)
	float                                              DisappearTime;                                            // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
	struct FTimerHandle                                DisappearHandler;                                         // 0x0418(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UGripMotionControllerComponent*              GrippingController;                                       // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0428(0x0008) MISSED OFFSET
	struct FBPActorGripInformation                     MyGrip;                                                   // 0x0430(0x0210) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class UCapsuleComponent*                           CollisionCapsule;                                         // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              SoundDropLastTime;                                        // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SoundDropMinInterval;                                     // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SoundDropLimit;                                           // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PreviousVelocity;                                         // 0x0654(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    PickedUp;                                                 // 0x0660(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FText                                       DisplayName;                                              // 0x0670(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       DisplayType;                                              // 0x0688(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Value;                                                    // 0x06A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x06A4(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData03[0x28];                                      // 0x06A4(0x0028) UNKNOWN PROPERTY: SoftObjectProperty GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C.IconAsset
	class APlayerPawnCharacter_C*                      PlayerPawn;                                               // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x06D8(0x0008) MISSED OFFSET
	struct FBPActorGripInformation                     GripInfoSecondary;                                        // 0x06E0(0x0210) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class UGripMotionControllerComponent*              GripControllerSecondary;                                  // 0x08F0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                OutlineColor;                                             // 0x08F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x08FC(0x0004) MISSED OFFSET
	class UFMODEvent*                                  SoundGripRelease;                                         // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFMODEvent*                                  SoundGrip;                                                // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFMODEvent*                                  SoundDrop;                                                // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EHandPose>                             GripPosePrimary;                                          // 0x0918(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0919(0x0003) MISSED OFFSET
	float                                              GripBlendValuePrimary;                                    // 0x091C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EHandPose>                             GripPoseSecondary;                                        // 0x0920(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0921(0x0003) MISSED OFFSET
	float                                              GripBlendValueSecondary;                                  // 0x0924(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketHandGripP1Left;                                     // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketHandGripP1Right;                                    // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketHandGripS1Left;                                     // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketHandGripS1Right;                                    // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HandNameLeft;                                             // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtraThrowForce;                                          // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GrippableStaticMeshActorBase.GrippableStaticMeshActorBase_C");
		return ptr;
	}


	void SetCollisionResponse(TEnumAsByte<ECollisionResponse> NewResponse);
	void AttachHandSecondary(class UGripMotionControllerComponent* GripMotionController);
	void AttachHandPrimary();
	void IsLocallyControlled(bool* LocallyControlled);
	void RumbleController(float Intensity, float Duration);
	void CancelDisappearTimer();
	void SetDisappearTimer();
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void OnGripRelease(class UGripMotionControllerComponent** ReleasingController, struct FBPActorGripInformation* GripInformation, bool* bWasSocketed);
	void Disappear();
	void OnGrip(class UGripMotionControllerComponent** GrippingController, struct FBPActorGripInformation* GripInformation);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void Hover(TEnumAsByte<EHoverEnum> InteractType, class USceneComponent* Component);
	void Unhover(class UPrimitiveComponent* Component);
	void OnSecondaryGrip(class USceneComponent** SecondaryGripComponent, struct FBPActorGripInformation* GripInformation);
	void OnSecondaryGripRelease(class USceneComponent** ReleasingSecondaryGripComponent, struct FBPActorGripInformation* GripInformation);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GrippableStaticMeshActorBase(int EntryPoint);
	void PickedUp__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
