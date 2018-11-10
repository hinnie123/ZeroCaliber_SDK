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

// BlueprintGeneratedClass Weapon_Ithaki37.Weapon_Ithaki37_C
// 0x000C (0x0EC0 - 0x0EB4)
class AWeapon_Ithaki37_C : public AWeaponShotgunBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0EB4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0EB8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Ithaki37.Weapon_Ithaki37_C");
		return ptr;
	}


	void UserConstructionScript();
	void AttachmentAttach(class AAttachableStaticMeshActorBase_C** Attachment);
	void ExecuteUbergraph_Weapon_Ithaki37(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
