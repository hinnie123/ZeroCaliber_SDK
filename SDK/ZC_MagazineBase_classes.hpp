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

// BlueprintGeneratedClass MagazineBase.MagazineBase_C
// 0x004F (0x0A10 - 0x09C1)
class AMagazineBase_C : public AAttachmentBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x09C1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09C8(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        AmmoMesh;                                                 // 0x09D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                AmmoCount;                                                // 0x09D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DisappearTimeEmpty;                                       // 0x09DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  CurrentOffsetTransform;                                   // 0x09E0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MagazineBase.MagazineBase_C");
		return ptr;
	}


	void KickOutMagazine(class AActor* InputPin);
	void CanBeDetached(class UGripMotionControllerComponent** GrippingController, bool* Detachable);
	void GetAmmoCount(int* AmmoCount);
	void ReduceAmmoCount();
	void GetCurrentOffset(struct FTransform* CurrentOffset);
	void UserConstructionScript();
	void SetDisappearTimer();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void ExecuteUbergraph_MagazineBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
