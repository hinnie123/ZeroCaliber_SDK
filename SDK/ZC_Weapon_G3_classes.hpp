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

// BlueprintGeneratedClass Weapon_G3.Weapon_G3_C
// 0x0024 (0x0EA4 - 0x0E80)
class AWeapon_G3_C : public AWeaponBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E80(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SliderGrip;                                               // 0x0E88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ShellEjectMesh;                                           // 0x0E90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FRotator                                    SliderGripTargetRotation;                                 // 0x0E98(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_G3.Weapon_G3_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void OnChildGrip(class UGripMotionControllerComponent** GrippingController, struct FBPActorGripInformation* GripInformation);
	void OnChildGripRelease(class UGripMotionControllerComponent** ReleasingController, struct FBPActorGripInformation* GripInformation, bool* bWasSocketed);
	void ExecuteUbergraph_Weapon_G3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
