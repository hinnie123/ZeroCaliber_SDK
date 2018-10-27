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

// BlueprintGeneratedClass WeaponPistolBase.WeaponPistolBase_C
// 0x0068 (0x0ED8 - 0x0E70)
class AWeaponPistolBase_C : public AWeaponBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E70(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            SecondaryGripSphere;                                      // 0x0E78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        HammerMesh;                                               // 0x0E80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SlideStopMesh;                                            // 0x0E88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MagazineEjectTimeLine_MagazineEject_33D39AA94A68E4194C82749F7C05FA78;// 0x0E90(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    MagazineEjectTimeLine__Direction_33D39AA94A68E4194C82749F7C05FA78;// 0x0E94(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0E95(0x0003) MISSED OFFSET
	class UTimelineComponent*                          MagazineEjectTimeLine;                                    // 0x0E98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  HammerBackTransform;                                      // 0x0EA0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MagazineEjectionDirectionRot;                             // 0x0ED0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MagazineEjectionDistance;                                 // 0x0ED4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeaponPistolBase.WeaponPistolBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void MagazineEjectTimeLine__FinishedFunc();
	void MagazineEjectTimeLine__UpdateFunc();
	void FireModeChangeUpdate(float* Lerp);
	void ReleaseMagazinePistol(class AAttachmentBase_C* Attachment);
	void AttachmentReleaseLocal(class AAttachmentBase_C** Attachment);
	void ExecuteUbergraph_WeaponPistolBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
