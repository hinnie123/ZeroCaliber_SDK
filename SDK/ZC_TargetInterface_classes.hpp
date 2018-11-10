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

// BlueprintGeneratedClass TargetInterface.TargetInterface_C
// 0x0000 (0x0028 - 0x0028)
class UTargetInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TargetInterface.TargetInterface_C");
		return ptr;
	}


	void GetTargetData(TArray<struct FTargetData>* NewParam);
	void GetTargetLocation(struct FVector* TargetLocation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
