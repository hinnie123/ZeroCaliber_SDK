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

// BlueprintGeneratedClass ExtendedMagazineBase.ExtendedMagazineBase_C
// 0x0080 (0x0A90 - 0x0A10)
class AExtendedMagazineBase_C : public AMagazineBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A10(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SecondaryAmmoMesh;                                        // 0x0A18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               PrimaryAmmoUsed;                                          // 0x0A20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0A21(0x0003) MISSED OFFSET
	int                                                SecondaryAmmo;                                            // 0x0A24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0A28(0x0008) MISSED OFFSET
	struct FTransform                                  LeftLocalOffsetTransform;                                 // 0x0A30(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  RightLocalOffsetTransform;                                // 0x0A60(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ExtendedMagazineBase.ExtendedMagazineBase_C");
		return ptr;
	}


	void GetAmmoCount(int* AmmoCount);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Released();
	void ReduceAmmoCount();
	void ExecuteUbergraph_ExtendedMagazineBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
