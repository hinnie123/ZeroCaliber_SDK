#pragma once

// ZeroCaliber (0.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SaveGameOptions.SaveGameOptions_C
// 0x001C (0x0044 - 0x0028)
class USaveGameOptions_C : public USaveGame
{
public:
	struct FOptionsStruct2                             OptionsStruct;                                            // 0x0028(0x001C) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SaveGameOptions.SaveGameOptions_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
