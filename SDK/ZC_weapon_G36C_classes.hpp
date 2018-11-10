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

// BlueprintGeneratedClass weapon_G36C.weapon_G36C_C
// 0x001C (0x0E9C - 0x0E80)
class Aweapon_G36C_C : public AWeaponBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E80(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SliderGrip;                                               // 0x0E88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FRotator                                    SliderGripTargetRotation;                                 // 0x0E90(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass weapon_G36C.weapon_G36C_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void OnChildGrip(class UGripMotionControllerComponent** GrippingController, struct FBPActorGripInformation* GripInformation);
	void OnChildGripRelease(class UGripMotionControllerComponent** ReleasingController, struct FBPActorGripInformation* GripInformation, bool* bWasSocketed);
	void ExecuteUbergraph_weapon_G36C(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
