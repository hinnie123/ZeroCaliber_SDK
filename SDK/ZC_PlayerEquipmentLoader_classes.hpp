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

// BlueprintGeneratedClass PlayerEquipmentLoader.PlayerEquipmentLoader_C
// 0x01B8 (0x04E0 - 0x0328)
class APlayerEquipmentLoader_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APlayerPawnCharacter_C*                      PlayerPawn;                                               // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnDelay;                                               // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0344(0x000C) MISSED OFFSET
	struct FPlayerEquipmentStruct                      PlayerEquipmentStruct;                                    // 0x0350(0x0190) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerEquipmentLoader.PlayerEquipmentLoader_C");
		return ptr;
	}


	void SpawnAttachment(class UClass* Attachment, const struct FName& SocketName, class AWeaponBase_C* Weapon, class AActor* Owner, class AAttachableStaticMeshActorBase_C** NewAttachment);
	void SpawnWeaponWithAttachments(const struct FWeaponStateDataStruct2& WeaponStateData, class USceneComponent* Target, class AActor* Owner, bool ActivateAttachments, EControllerHand Hand, class AWeaponBase_C** WeaponActor);
	void UserConstructionScript();
	void LoadPlayerEquipment(class APlayerPawnCharacter_C* PlayerPawn, const struct FPlayerEquipmentStruct& PlayerEquipmentStruct);
	void ExecuteUbergraph_PlayerEquipmentLoader(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
