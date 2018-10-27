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

// BlueprintGeneratedClass SaveGameItemProgress.SaveGameItemProgress_C
// 0x0050 (0x0078 - 0x0028)
class USaveGameItemProgress_C : public USaveGame
{
public:
	struct FItemProgressStruct                         ItemProgressStruct;                                       // 0x0028(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SaveGameItemProgress.SaveGameItemProgress_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
