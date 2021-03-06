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

// BlueprintGeneratedClass Aim.Aim_C
// 0x000E (0x01B8 - 0x01AA)
class UAim_C : public UAimBase_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x01AA(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Aim.Aim_C");
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_Aim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
