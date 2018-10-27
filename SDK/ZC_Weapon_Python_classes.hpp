#pragma once

// ZeroCaliber (0.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_Python.Weapon_Python_C
// 0x012C (0x1004 - 0x0ED8)
class AWeapon_Python_C : public AWeaponPistolBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0ED8(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Cartridge5;                                               // 0x0EE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cartridge4;                                               // 0x0EE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cartridge3;                                               // 0x0EF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cartridge2;                                               // 0x0EF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cartridge1;                                               // 0x0F00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cartridge0;                                               // 0x0F08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_CPython_Mag_Cylinder;                                  // 0x0F10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_CPython_Mag_Rollout;                                   // 0x0F18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Timeline_0_0_Rotation_035602EB4E5BE072E4D42FBAF3A4FB0C;   // 0x0F20(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0_0__Direction_035602EB4E5BE072E4D42FBAF3A4FB0C; // 0x0F2C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0F2D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_0_1;                                             // 0x0F30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     RotateCylinder_NewTrack_1_33C0FDA049013CC202F454A4B0CD06B1;// 0x0F38(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    RotateCylinder__Direction_33C0FDA049013CC202F454A4B0CD06B1;// 0x0F44(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0F45(0x0003) MISSED OFFSET
	class UTimelineComponent*                          RotateCylinder;                                           // 0x0F48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ReleaseMagAnim_Rotation_65408D164C0B5065123B31B4BDA57863; // 0x0F50(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ReleaseMagAnim__Direction_65408D164C0B5065123B31B4BDA57863;// 0x0F5C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0F5D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ReleaseMagAnim;                                           // 0x0F60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               MagRolledOut;                                             // 0x0F68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0F69(0x0003) MISSED OFFSET
	int                                                MagCylinderIndex;                                         // 0x0F6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InnerAmmoCount;                                           // 0x0F70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0F74(0x0004) MISSED OFFSET
	TArray<class UStaticMeshComponent*>                Cartridges;                                               // 0x0F78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsMagCylinderEmpty;                                       // 0x0F88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0F89(0x0007) MISSED OFFSET
	class UStaticMesh*                                 NormalMesh;                                               // 0x0F90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 EmptyMesh;                                                // 0x0F98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PrevMagRotation;                                          // 0x0FA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PrevWeaponRotation;                                       // 0x0FA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                MagCylinderRotationCheckTimer;                            // 0x0FA8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              RelaodingCheckTime;                                       // 0x0FB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReloadingMinRotationDiff;                                 // 0x0FB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                MagRolloutTimer;                                          // 0x0FB8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     PrevWeaponPos;                                            // 0x0FC0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ReloadingMinPosDiff;                                      // 0x0FCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CartrideReleaseAngle;                                     // 0x0FD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0FD4(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData07[0x28];                                      // 0x0FD4(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Weapon_Python.Weapon_Python_C.SoundCylinder
	float                                              SoundCylinderState;                                       // 0x1000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Python.Weapon_Python_C");
		return ptr;
	}


	void MagRolloutAllowed(bool* Allowed);
	bool MagRollinAllowed();
	void ReleaseMagazineByTriggerHand();
	void ReleaseMagazine();
	void UserConstructionScript();
	void ReleaseMagAnim__FinishedFunc();
	void ReleaseMagAnim__UpdateFunc();
	void RotateCylinder__FinishedFunc();
	void RotateCylinder__UpdateFunc();
	void Timeline_0_0__FinishedFunc();
	void Timeline_0_0__UpdateFunc();
	void OnReleaseMagazine();
	void BndEvt__MagazineBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	void AttachmentAttach(class AAttachableStaticMeshActorBase_C** Attachment);
	void ReceiveTick(float* DeltaSeconds);
	void ChamberAmmo();
	void FireBullet();
	void Reload();
	void SpawnCartridgeCase();
	void FireModeChangeUpdate(float* Lerp);
	void ReceiveBeginPlay();
	void MagRollout();
	void ReleaseSlider();
	void MagrollOutEnabled();
	void MagRollIn();
	void ExecuteUbergraph_Weapon_Python(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
