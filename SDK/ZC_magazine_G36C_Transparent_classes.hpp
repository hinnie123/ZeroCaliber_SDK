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

// BlueprintGeneratedClass magazine_G36C_Transparent.magazine_G36C_Transparent_C
// 0x001C (0x0A2C - 0x0A10)
class Amagazine_G36C_Transparent_C : public Amagazine_G36C_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A10(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        GE36_Spring;                                              // 0x0A18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MagBullets_MID;                                           // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxAmmoCapacity;                                          // 0x0A28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass magazine_G36C_Transparent.magazine_G36C_Transparent_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReduceAmmoCount();
	void ExecuteUbergraph_magazine_G36C_Transparent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
