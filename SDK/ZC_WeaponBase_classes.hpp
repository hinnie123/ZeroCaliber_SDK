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

// BlueprintGeneratedClass WeaponBase.WeaponBase_C
// 0x04B6 (0x0E80 - 0x09CA)
class AWeaponBase_C : public AGunBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x09CA(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09D0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SliderStaticMesh;                                         // 0x09D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFMODAudioComponent*                         WeaponTail;                                               // 0x09E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFMODAudioComponent*                         WeaponSound;                                              // 0x09E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    BarrelHeatSmokePS;                                        // 0x09F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               AttachmentStockBox;                                       // 0x09F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MagazineReleaseMesh;                                      // 0x0A00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        TriggerMesh;                                              // 0x0A08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCableComponent*                             Cable;                                                    // 0x0A10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               AttachmentSideBox;                                        // 0x0A18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               AttachmentUnderbarrelBox;                                 // 0x0A20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               AttachmentBarrelEndBox;                                   // 0x0A28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               AttachmentScopeBox;                                       // 0x0A30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        FireModeMesh;                                             // 0x0A38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             EjectionPartArrow;                                        // 0x0A40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               MagazineBox;                                              // 0x0A48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TimelineFireModeChange_Lerp_735456E74B2C6E0F5842DD9CD5892A48;// 0x0A50(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TimelineFireModeChange__Direction_735456E74B2C6E0F5842DD9CD5892A48;// 0x0A54(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A55(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TimelineFireModeChange;                                   // 0x0A58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FireRateRPM;                                              // 0x0A60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AmmoChambered;                                            // 0x0A64(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0A65(0x0003) MISSED OFFSET
	class UClass*                                      Projectile;                                               // 0x0A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilHorizontalMin;                                      // 0x0A70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilHorizontalMax;                                      // 0x0A74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilVerticalMin;                                        // 0x0A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilVerticalMax;                                        // 0x0A7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilBackMin;                                            // 0x0A80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilBackMax;                                            // 0x0A84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AMagazineBase_C*                             Magazine;                                                 // 0x0A88(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CockingPosInitial;                                        // 0x0A90(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CockingPosBack;                                           // 0x0A9C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              CockingRepositionTime;                                    // 0x0AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CockingReleasedTime;                                      // 0x0AAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CockingGripped;                                           // 0x0AB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0AB1(0x0003) MISSED OFFSET
	struct FVector                                     CockingPosPrevious;                                       // 0x0AB4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             AudioComponent;                                           // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UClass*                                      ProjectileEnemy;                                          // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ProjectileFriend;                                         // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Cartridge;                                                // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CartridgeCase;                                            // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CartridgeCaseEjectionImpulse;                             // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CockedManually;                                           // 0x0AEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0AED(0x0003) MISSED OFFSET
	float                                              RecoilOneHandMultiplier;                                  // 0x0AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdditionLerptimeCurrent;                                  // 0x0AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DefaultMagazine;                                          // 0x0AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdditionLerptimeKickback;                                 // 0x0B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdditionLerpCounterKickback;                              // 0x0B04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0B08(0x0008) MISSED OFFSET
	struct FTransform                                  AdditionTransformLerpPrevious;                            // 0x0B10(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TMap<TEnumAsByte<EFireModes>, struct FTransform>   FireModes;                                                // 0x0B40(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EFireModes>                            SelectedFireMode;                                         // 0x0B90(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0xF];                                       // 0x0B91(0x000F) MISSED OFFSET
	struct FTransform                                  FireModeTransformPrevoius;                                // 0x0BA0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketNameMag;                                            // 0x0BD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketNameSlider;                                         // 0x0BD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketNameFireMode;                                       // 0x0BE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EReloadModes>                          ReloadMode;                                               // 0x0BE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0BE9(0x0003) MISSED OFFSET
	float                                              RecoilBackBreakLimit;                                     // 0x0BEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MuzzleFlashPS;                                            // 0x0BF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EWeaponCategories>                     WeaponCategory;                                           // 0x0BF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0BF9(0x0003) MISSED OFFSET
	struct FVector                                     MuzzleFlasPsScale;                                        // 0x0BFC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MuzzleFlashPsEnemy;                                       // 0x0C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MuzzleFlasPsEnemyScaleMin;                                // 0x0C10(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MuzzleFlasPsEnemyScaleMax;                                // 0x0C1C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             MuzzleFlashPsFriend;                                      // 0x0C28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MuzzleFlasPsFriendScale;                                  // 0x0C30(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MuzzleVelocity;                                           // 0x0C3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<EAttachmentCategory>>           AllowedAttachments;                                       // 0x0C40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AAttachableStaticMeshActorBase_C*            AttachmentScope;                                          // 0x0C50(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketNameAttachmentScope;                                // 0x0C58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AAttachableStaticMeshActorBase_C*            AttachmentUnderBarrel;                                    // 0x0C60(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AAttachableStaticMeshActorBase_C*            AttachmentBarrelEnd;                                      // 0x0C68(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketNameAttachmentUnderbarrel;                          // 0x0C70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketNameAttachmentBarrelEnd;                            // 0x0C78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketNameAttachmentSide;                                 // 0x0C80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AAttachableStaticMeshActorBase_C*            AttachmentSide;                                           // 0x0C88(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               GrippableBoxOverlap;                                      // 0x0C90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WeaponStrap;                                              // 0x0C91(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x0C92(0x0002) MISSED OFFSET
	float                                              LastDetachTime;                                           // 0x0C94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinReattachTime;                                          // 0x0C98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0C9C(0x0004) MISSED OFFSET
	class AAttachableStaticMeshActorBase_C*            AttachmentStock;                                          // 0x0CA0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketNameAttachmentStock;                                // 0x0CA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              CompatibleAttachments;                                    // 0x0CB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               UseBarrelSmokeAfterFire;                                  // 0x0CC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSmokeAfterFireActivated;                                // 0x0CC1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x0CC2(0x0002) MISSED OFFSET
	float                                              BarrelSmokeProjectileLimit;                               // 0x0CC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BarrelSmokeProjectileCount;                               // 0x0CC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BarrelSmokeCoolDownSpeed;                                 // 0x0CCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BarrelSmokeProjectileLimitOffset;                         // 0x0CD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BarrelSmokeLifeTime;                                      // 0x0CD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CockingReachedBack;                                       // 0x0CD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0CD9(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData13[0x50];                                      // 0x0CD9(0x0050) UNKNOWN PROPERTY: MapProperty WeaponBase.WeaponBase_C.PlayerFMODEvent
	bool                                               IsFiring;                                                 // 0x0D30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0D31(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData15[0x50];                                      // 0x0D31(0x0050) UNKNOWN PROPERTY: MapProperty WeaponBase.WeaponBase_C.EnemyFMODEvent
	TEnumAsByte<ECharacterEnum>                        WeaponOwnerCategory;                                      // 0x0D88(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x0D89(0x0003) MISSED OFFSET
	float                                              ExtendedMagazineOffset;                                   // 0x0D8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CurrentMagazine;                                          // 0x0D90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x28];                                      // 0x0D98(0x0028) UNKNOWN PROPERTY: SoftObjectProperty WeaponBase.WeaponBase_C.SoundChamberFmod
	int                                                WeaponTailLocation;                                       // 0x0DC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x0DC4(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData19[0x10];                                      // 0x0DC4(0x0010) UNKNOWN PROPERTY: ArrayProperty WeaponBase.WeaponBase_C.WeaponTails
	int                                                WeaponTailSize;                                           // 0x0DD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x0DDC(0x0004) MISSED OFFSET
	struct FTransform                                  EjectionPartArrowOffsetTransform;                         // 0x0DE0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  EjectionPartArrowOriginalTransform;                       // 0x0E10(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  AttachmentDenySound;                                      // 0x0E40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileParticleImpactProbability;                      // 0x0E48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x0E4C(0x0004) MISSED OFFSET
	struct FName                                       HandNameLeft_1;                                           // 0x0E50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HandNameRight;                                            // 0x0E58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SecondaryGripAsPrimary;                                   // 0x0E60(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SlideBacked;                                              // 0x0E61(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoSliderRelease;                                        // 0x0E62(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SliderStaysBackWhenEmptied;                               // 0x0E63(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SecondaryGripAsPrimaryAllowed;                            // 0x0E64(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x0E65(0x0003) MISSED OFFSET
	class UFMODEvent*                                  SoundEmptyFmod;                                           // 0x0E68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFMODEvent*                                  SoundLastBulletFMOD;                                      // 0x0E70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        AttachmentIndicatorMesh;                                  // 0x0E78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeaponBase.WeaponBase_C");
		return ptr;
	}


	void CheckAttachmnetInOtherHand(class UGripMotionControllerComponent* GrippingController, bool* Bool, class AAttachableStaticMeshActorBase_C** Attachment);
	void TurnOnAttachmentIndicator(TEnumAsByte<EAttachmentCategory> AttachmentCategory, bool TurnOn, class AAttachableStaticMeshActorBase_C* Attachment);
	void OnRep_SecondaryGripAsPrimary();
	void AttachmentAttachTransforms(class AAttachableStaticMeshActorBase_C* Attachment);
	void OnRep_Magazine();
	void OnRep_AttachmentStock();
	void OnRep_AttachmentSide();
	void OnRep_AttachmentBarrelEnd();
	void OnRep_AttachmentUnderBarrel();
	void OnRep_AttachmentScope();
	void AttachmentAttachLocal(class AAttachableStaticMeshActorBase_C* Attachment);
	void OnRep_SelectedFireMode();
	void OnRep_WeaponOwnerCategory();
	float AmmoCountScaleToTen();
	void DetachAttachmentFromHand(class AAttachableStaticMeshActorBase_C* Attachment);
	void SetFmodEventparam();
	void SetupProperties(class UObject* Character);
	void GetMuzzlePsScaleByDistance(struct FVector* Scale);
	void UpdateBarrelSmokeProjectileCount();
	void DeactivateAttachmentsOnRelease();
	void ActivateAttachmentOnGrip();
	void GetAdditionalMuzzleSpeedAttachment(class AAttachableStaticMeshActorBase_C* Attachment, float* Speed);
	void GetAdditionalMuzzleSpeed(float* MuzzleSpeed);
	void GetModifiedVolumeAttachment(class AAttachableStaticMeshActorBase_C* Attachment, float* Volume);
	void GetModifiedVolume(float* Volume);
	void ClosestGripSlotInRange(struct FVector* WorldLocation, bool* bSecondarySlot, class UGripMotionControllerComponent** CallingController, struct FName* OverridePrefix, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform);
	void GetProjectileInstigator(class APawn** AsPawn);
	void FireCocking();
	void FireParticles();
	void FireSound();
	void GetAdditionalRecoilForAttachment(bool OneHanded, class AAttachableStaticMeshActorBase_C* Attachment, float* RecoilBack, float* RecoilHorizontal, float* RecoilVertical);
	void InstantCocking();
	void GetAdditionalRecoil(bool OneHanded, float* RecoilBack, float* RecoilHorizontal, float* RecoilVertical);
	void AttachmentAttachCheck(class AAttachableStaticMeshActorBase_C* Attachment, class AActor* NewAttachment, TEnumAsByte<EAttachmentCategory> AttachmentCategory, bool* Attachable, class AAttachableStaticMeshActorBase_C** AttachableAttachment, bool* IsIndicatorShown);
	void AttachmentReleaseLocal(class AAttachmentBase_C* Attachment);
	void AttachmentAttach(class AAttachableStaticMeshActorBase_C* Attachment);
	void AmmoFired();
	void FireModeSetExplicit(TEnumAsByte<EFireModes> FireMode);
	void DropWeapon(const struct FVector& Force);
	void ReleaseMagazine();
	void ReleaseMagazineByTriggerHand();
	void Recoil();
	void SpawnCartridge();
	void SpawnCartridgeCase();
	void PlayAudioComponent(class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier);
	void ChamberAmmo();
	void FireProjectile();
	void HandleCocking(float DeltaTime);
	void HandleRecoil(float DeltaTime);
	void SetCockingPositions();
	void CalculateFireRateRPM();
	void UserConstructionScript();
	void TimelineFireModeChange__FinishedFunc();
	void TimelineFireModeChange__UpdateFunc();
	void ReceiveBeginPlay();
	void FireBullet();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__MagazineBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnChildGrip(class UGripMotionControllerComponent** GrippingController, struct FBPActorGripInformation* GripInformation);
	void OnChildGripRelease(class UGripMotionControllerComponent** ReleasingController, struct FBPActorGripInformation* GripInformation, bool* bWasSocketed);
	void OnGrip(class UGripMotionControllerComponent** GrippingController, struct FBPActorGripInformation* GripInformation);
	void FireModeChangeLocal();
	void FireGunLocal();
	void BndEvt__AttachmentScopeBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__AttachmentBarrelEndBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__AttachmentUnderbarrelBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__AttachmentSideBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void FireModeChangeUpdate(float Lerp);
	void BndEvt__AttachmentStockBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void InstantReloadAndCocking();
	void InstantReloadAndCockingLocal();
	void InstantReloadAndCockingMulti();
	void SpawnMagazineServer();
	void InstantCockingServer();
	void InstantCockingMulti();
	void AttachmentRelativeLocationFix();
	void OnGripRelease(class UGripMotionControllerComponent** ReleasingController, struct FBPActorGripInformation* GripInformation, bool* bWasSocketed);
	void UpdateBarrelSmokeAfterFire(float Delta);
	void AfterLastFire();
	void AttachmentAttachServer(class AAttachableStaticMeshActorBase_C* Attachment);
	void AttachmentAttachMulti(class AAttachableStaticMeshActorBase_C* Attachment);
	void FireGunServer();
	void EndFireGunServer();
	void DropWeaponServer(const struct FVector& Force);
	void DropWeaponMulti(const struct FVector& Force);
	void OnStocked();
	void OnUnstocked();
	void EndFireGunLocal();
	void AttachmentReleaseServer(class AAttachmentBase_C* Attachment);
	void AttachmentReleaseMulti(class AAttachmentBase_C* Attachment);
	void FireModeChangeServer();
	void FireModeChangeMulti();
	void FireModeChange();
	void AttachHandPrimary();
	void AttachHandSecondary(class UGripMotionControllerComponent** GripMotionController);
	void Disappear();
	void Hover(TEnumAsByte<EHoverEnum>* InteractType, class USceneComponent** Component);
	void Unhover(class UPrimitiveComponent** Component);
	void SetCollisionResponse(TEnumAsByte<ECollisionResponse>* NewResponse);
	void BndEvt__VRSlider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__VRSlider_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnUsed();
	void AttachmentRelease(class AAttachmentBase_C* Attachment);
	void ReleaseSliderServer();
	void ReleaseSliderMulti();
	void ReleaseSliderLocal();
	void ReleaseSlider();
	void ReleaseSliderAuto();
	void TryToActivateAttachment();
	void TryToActivateAttachmentServer();
	void TryToActivateAttachmentMulti();
	void TryToActivateAttachmentLocal();
	void ExecuteUbergraph_WeaponBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
