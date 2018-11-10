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

// BlueprintGeneratedClass Weapon_M4A1.Weapon_M4A1_C
// 0x006D (0x0EED - 0x0E80)
class AWeapon_M4A1_C : public AWeaponBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E80(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SK_AR4_IronSight_Back;                                    // 0x0E88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ShellEjectMesh;                                           // 0x0E90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ShellEject_Hatch;                                         // 0x0E98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_LerpValue_73A1156D44F7BA7A940AFA9EA8AE18B1;    // 0x0EA0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_73A1156D44F7BA7A940AFA9EA8AE18B1;   // 0x0EA4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0EA5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0EA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ShellTray_Pos_B3086DE340C4ACF519CEFAB025D545EE;           // 0x0EB0(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ShellTray__Direction_B3086DE340C4ACF519CEFAB025D545EE;    // 0x0EBC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0EBD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ShellTray;                                                // 0x0EC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     EjectShellPos_Pos_3D4E1B12491F9C0E3D279C967646651E;       // 0x0EC8(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    EjectShellPos__Direction_3D4E1B12491F9C0E3D279C967646651E;// 0x0ED4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0ED5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          EjectShellPos;                                            // 0x0ED8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ShellEjectPosBack;                                        // 0x0EE0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsShellAnimating;                                         // 0x0EEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_M4A1.Weapon_M4A1_C");
		return ptr;
	}


	void UserConstructionScript();
	void ShellTray__FinishedFunc();
	void ShellTray__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void EjectShellPos__FinishedFunc();
	void EjectShellPos__UpdateFunc();
	void SpawnCartridge();
	void FireCocking();
	void AmmoFired();
	void ReleaseSliderAuto();
	void ChamberAmmo();
	void AttachmentAttachLocal(class AAttachableStaticMeshActorBase_C** Attachment);
	void AttachmentReleaseLocal(class AAttachmentBase_C** Attachment);
	void ExecuteUbergraph_Weapon_M4A1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
