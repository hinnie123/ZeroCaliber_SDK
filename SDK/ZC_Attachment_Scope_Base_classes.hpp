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

// BlueprintGeneratedClass Attachment_Scope_Base.Attachment_Scope_Base_C
// 0x0053 (0x0A14 - 0x09C1)
class AAttachment_Scope_Base_C : public AAttachmentBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x09C1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09C8(0x0008) (Transient, DuplicateTransient)
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D;                                  // 0x09D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        RenderCylinder;                                           // 0x09D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DMI_RenderCylinder;                                       // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FLinearColor>                        Colors;                                                   // 0x09E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                ColorIndex;                                               // 0x09F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x09FC(0x0004) MISSED OFFSET
	TArray<float>                                      Fovs;                                                     // 0x0A00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                FovIndex;                                                 // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Attachment_Scope_Base.Attachment_Scope_Base_C");
		return ptr;
	}


	void ActivateScope(EControllerHand Hand, bool Turn_On);
	void TurnOnRendering(bool TurnOn);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnGrip(class UGripMotionControllerComponent** GrippingController, struct FBPActorGripInformation* GripInformation);
	void ReleasedWithoutAttachedToWeapon();
	void DeactivateWhenWeaponReleased();
	void Attached(bool* WeaponInHand);
	void ActivateWhenWeaponGripped(EControllerHand* Hand);
	void Activate();
	void Hover(TEnumAsByte<EHoverEnum>* InteractType, class USceneComponent** Component);
	void ExecuteUbergraph_Attachment_Scope_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
