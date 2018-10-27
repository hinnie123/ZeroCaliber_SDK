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

// BlueprintGeneratedClass Attachment_Flashlight_01.Attachment_Flashlight_01_C
// 0x0030 (0x09F1 - 0x09C1)
class AAttachment_Flashlight_01_C : public AAttachmentBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x09C1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09C8(0x0008) (Transient, DuplicateTransient)
	class USpotLightComponent*                         SpotLight_MOVABLE;                                        // 0x09D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LightShaftMesh;                                           // 0x09D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Lensflare_Param_01;                                     // 0x09E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LightSwitchMesh;                                          // 0x09E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsLightTurnedOn;                                          // 0x09F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Attachment_Flashlight_01.Attachment_Flashlight_01_C");
		return ptr;
	}


	void TurnOnLight(bool TurnOn);
	void UserConstructionScript();
	void Activate();
	void Attached(bool* WeaponInHand);
	void ReleasedWithoutAttachedToWeapon();
	void DeactivateWhenWeaponReleased();
	void ActivateWhenWeaponGripped(EControllerHand* Hand);
	void ExecuteUbergraph_Attachment_Flashlight_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
