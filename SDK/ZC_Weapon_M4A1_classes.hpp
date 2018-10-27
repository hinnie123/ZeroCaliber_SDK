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

// BlueprintGeneratedClass Weapon_M4A1.Weapon_M4A1_C
// 0x0055 (0x0EC5 - 0x0E70)
class AWeapon_M4A1_C : public AWeaponBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E70(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        ShellEjectMesh;                                           // 0x0E78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ShellEject_Hatch;                                         // 0x0E80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ShellTray_Pos_B3086DE340C4ACF519CEFAB025D545EE;           // 0x0E88(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ShellTray__Direction_B3086DE340C4ACF519CEFAB025D545EE;    // 0x0E94(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0E95(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ShellTray;                                                // 0x0E98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     EjectShellPos_Pos_3D4E1B12491F9C0E3D279C967646651E;       // 0x0EA0(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    EjectShellPos__Direction_3D4E1B12491F9C0E3D279C967646651E;// 0x0EAC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0EAD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          EjectShellPos;                                            // 0x0EB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ShellEjectPosBack;                                        // 0x0EB8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsShellAnimating;                                         // 0x0EC4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_M4A1.Weapon_M4A1_C");
		return ptr;
	}


	void UserConstructionScript();
	void EjectShellPos__FinishedFunc();
	void EjectShellPos__UpdateFunc();
	void ShellTray__FinishedFunc();
	void ShellTray__UpdateFunc();
	void SpawnCartridge();
	void FireCocking();
	void AmmoFired();
	void ReleaseSliderAuto();
	void ChamberAmmo();
	void ExecuteUbergraph_Weapon_M4A1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
