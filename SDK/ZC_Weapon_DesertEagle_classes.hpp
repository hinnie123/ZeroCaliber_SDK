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

// BlueprintGeneratedClass Weapon_DesertEagle.Weapon_DesertEagle_C
// 0x0008 (0x0EF0 - 0x0EE8)
class AWeapon_DesertEagle_C : public AWeaponPistolBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0EE8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_DesertEagle.Weapon_DesertEagle_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_Weapon_DesertEagle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
