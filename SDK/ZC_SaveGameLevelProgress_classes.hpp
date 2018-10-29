#pragma once

// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SaveGameLevelProgress.SaveGameLevelProgress_C
// 0x0050 (0x0078 - 0x0028)
class USaveGameLevelProgress_C : public USaveGame
{
public:
	struct FLevelProgressStruct                        LevelProgressStruct;                                      // 0x0028(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SaveGameLevelProgress.SaveGameLevelProgress_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
