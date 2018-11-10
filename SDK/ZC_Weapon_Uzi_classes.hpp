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

// BlueprintGeneratedClass Weapon_Uzi.Weapon_Uzi_C
// 0x0018 (0x0E98 - 0x0E80)
class AWeapon_Uzi_C : public AWeaponBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E80(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        ShellEjectMesh;                                           // 0x0E88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMeshRem;                                          // 0x0E90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Uzi.Weapon_Uzi_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnSecondaryGrip(class USceneComponent** SecondaryGripComponent, struct FBPActorGripInformation* GripInformation);
	void OnSecondaryGripRelease(class USceneComponent** ReleasingSecondaryGripComponent, struct FBPActorGripInformation* GripInformation);
	void ExecuteUbergraph_Weapon_Uzi(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
