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

// BlueprintGeneratedClass WeaponBoltActionBase.WeaponBoltActionBase_C
// 0x0078 (0x0EF8 - 0x0E80)
class AWeaponBoltActionBase_C : public AWeaponBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E80(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        BoltBack;                                                 // 0x0E88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Bolt;                                                     // 0x0E90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     CockingPosDown;                                           // 0x0E98(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               CartridgeCaseChambered;                                   // 0x0EA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0EA5(0x0003) MISSED OFFSET
	struct FVector                                     BoltRelativeLocationOriginal;                             // 0x0EA8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BoltBackRelativeLocationOriginal;                         // 0x0EB4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              BoltLookAtRotationOriginalY;                              // 0x0EC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MinSlideDistanaceOriginal;                                // 0x0EC4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0ED0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty WeaponBoltActionBase.WeaponBoltActionBase_C.SoundBoltActionChamber

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeaponBoltActionBase.WeaponBoltActionBase_C");
		return ptr;
	}


	void TransformBoltMeshes();
	void UserConstructionScript();
	void SetCockingPositions();
	void Hover(TEnumAsByte<EHoverEnum>* InteractType, class USceneComponent** Component);
	void Unhover(class UPrimitiveComponent** Component);
	void FireGunLocal();
	void HandleCocking(float* DeltaTime);
	void SpawnCartridgeCase();
	void AmmoFired();
	void FireCocking();
	void ExecuteUbergraph_WeaponBoltActionBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
