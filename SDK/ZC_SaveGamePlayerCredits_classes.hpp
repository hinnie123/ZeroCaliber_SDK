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

// BlueprintGeneratedClass SaveGamePlayerCredits.SaveGamePlayerCredits_C
// 0x0004 (0x002C - 0x0028)
class USaveGamePlayerCredits_C : public USaveGame
{
public:
	struct FPlayerCreditsStruct                        PlayerCreditsStruct;                                      // 0x0028(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SaveGamePlayerCredits.SaveGamePlayerCredits_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
