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

// BlueprintGeneratedClass Attachment_LaserBase.Attachment_LaserBase_C
// 0x0020 (0x09E1 - 0x09C1)
class AAttachment_LaserBase_C : public AAttachmentBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x09C1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09C8(0x0008) (Transient, DuplicateTransient)
	class UDecalComponent*                             Decal;                                                    // 0x09D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_LaserBeam_A;                                            // 0x09D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsLaserActivated;                                         // 0x09E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Attachment_LaserBase.Attachment_LaserBase_C");
		return ptr;
	}


	void SetDecalPositionAndVisibility(const struct FVector& Pos);
	void UserConstructionScript();
	void Attached(bool* WeaponInHand);
	void ReleasedWithoutAttachedToWeapon();
	void DeactivateWhenWeaponReleased();
	void ActivateWhenWeaponGripped(EControllerHand* Hand);
	void OnGrip(class UGripMotionControllerComponent** GrippingController, struct FBPActorGripInformation* GripInformation);
	void ReceiveTick(float* DeltaSeconds);
	void Activate();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Attachment_LaserBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
