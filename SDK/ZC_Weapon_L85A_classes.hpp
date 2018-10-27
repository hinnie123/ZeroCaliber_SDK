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

// BlueprintGeneratedClass Weapon_L85A.Weapon_L85A_C
// 0x0029 (0x0E99 - 0x0E70)
class AWeapon_L85A_C : public AWeaponBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E70(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        FrontIronSightMesh;                                       // 0x0E78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ShellEjectHatchMesh;                                      // 0x0E80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FrontIronSightTurning_RotationX_EFF7E44B41499877F1499E8BEEFDF11E;// 0x0E88(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FrontIronSightTurning__Direction_EFF7E44B41499877F1499E8BEEFDF11E;// 0x0E8C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0E8D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FrontIronSightTurning;                                    // 0x0E90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsIronSightHidden;                                        // 0x0E98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_L85A.Weapon_L85A_C");
		return ptr;
	}


	void UserConstructionScript();
	void FrontIronSightTurning__FinishedFunc();
	void FrontIronSightTurning__UpdateFunc();
	void AttachmentAttach(class AAttachableStaticMeshActorBase_C** Attachment);
	void AttachmentReleaseLocal(class AAttachmentBase_C** Attachment);
	void ExecuteUbergraph_Weapon_L85A(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
