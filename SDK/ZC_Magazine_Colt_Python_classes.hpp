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

// BlueprintGeneratedClass Magazine_Colt_Python.Magazine_Colt_Python_C
// 0x0008 (0x0A18 - 0x0A10)
class AMagazine_Colt_Python_C : public AMagazineBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A10(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Magazine_Colt_Python.Magazine_Colt_Python_C");
		return ptr;
	}


	void UserConstructionScript();
	void Attached(bool* WeaponInHand);
	void ExecuteUbergraph_Magazine_Colt_Python(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
