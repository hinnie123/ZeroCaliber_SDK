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

// BlueprintGeneratedClass AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C
// 0x0064 (0x09B8 - 0x0954)
class AAttachableStaticMeshActorBase_C : public AGrippableStaticMeshActorBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0954(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0958(0x0008) (Transient, DuplicateTransient)
	TEnumAsByte<EAttachmentCategory>                   AttachmentCategory;                                       // 0x0960(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RecoilModifier;                                           // 0x0961(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RecoilModifierOnlySecondary;                              // 0x0962(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0963(0x0001) MISSED OFFSET
	float                                              RecoilHorizontalModifier;                                 // 0x0964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilVerticalModifier;                                   // 0x0968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilBackModifier;                                       // 0x096C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FireSoundModifier;                                        // 0x0970(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0971(0x0003) MISSED OFFSET
	float                                              FireSoundVolumeModifier;                                  // 0x0974(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MuzzleSpeedModify;                                        // 0x0978(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0979(0x0003) MISSED OFFSET
	float                                              MuzzleSpeedModifier;                                      // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastDetachTime;                                           // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinReattachTime;                                          // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanBeActivated;                                           // 0x0988(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0989(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData05[0x28];                                      // 0x0989(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C.AttachmentSound

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AttachableStaticMeshActorBase.AttachableStaticMeshActorBase_C");
		return ptr;
	}


	void IsOtherHandHoldingWeapon(class UGripMotionControllerComponent* Controller, class UGripMotionControllerComponent* OtherController, bool* Bool, class AWeaponBase_C** Weapon);
	void ModifyCollisionWhenBlocked(bool ShouldCollide);
	void ClosestGripSlotInRange(struct FVector* WorldLocation, bool* bSecondarySlot, class UGripMotionControllerComponent** CallingController, struct FName* OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform);
	void CanBeDetached(class UGripMotionControllerComponent* GrippingController, bool* Detachable);
	void UserConstructionScript();
	void Attached(bool WeaponInHand);
	void Released();
	void Activate();
	void OnGrip(class UGripMotionControllerComponent** GrippingController, struct FBPActorGripInformation* GripInformation);
	void ReleasedWithoutAttachedToWeapon();
	void DeactivateWhenWeaponReleased();
	void ActivateWhenWeaponGripped(EControllerHand Hand);
	void AttachSound(float ReloadType);
	void OnGripRelease(class UGripMotionControllerComponent** ReleasingController, struct FBPActorGripInformation* GripInformation, bool* bWasSocketed);
	void ExecuteUbergraph_AttachableStaticMeshActorBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
