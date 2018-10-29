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

// BlueprintGeneratedClass GunBase.GunBase_C
// 0x0076 (0x09CA - 0x0954)
class AGunBase_C : public AGrippableStaticMeshActorBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0954(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0958(0x0008) (Transient, DuplicateTransient)
	class UVRSliderComponent*                          VRSlider;                                                 // 0x0960(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0968(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            FireLoc;                                                  // 0x0970(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FireRate;                                                 // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x097C(0x0004) MISSED OFFSET
	struct FTimerHandle                                FireTimer;                                                // 0x0980(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0988(0x0008) MISSED OFFSET
	struct FTransform                                  AdditionTransformLerp;                                    // 0x0990(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              AdditionLerpTime;                                         // 0x09C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdditionLerpCounter;                                      // 0x09C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanBeFired;                                               // 0x09C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WasSocketed;                                              // 0x09C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GunBase.GunBase_C");
		return ptr;
	}


	bool RequestsSocketing(class USceneComponent** ParentToSocketTo, struct FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform);
	void UserConstructionScript();
	void OnUsed();
	void OnSecondaryUsed();
	void OnEndSecondaryUsed();
	void FireGun();
	void EndFireGun();
	void FireGunServer();
	void EndFireGunServer();
	void OnGrip(class UGripMotionControllerComponent** GrippingController, struct FBPActorGripInformation* GripInformation);
	void OnGripRelease(class UGripMotionControllerComponent** ReleasingController, struct FBPActorGripInformation* GripInformation, bool* bWasSocketed);
	void FireGunLocal();
	void EndFireGunLocal();
	void FireBullet();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void OnEndUsed();
	void ExecuteUbergraph_GunBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
