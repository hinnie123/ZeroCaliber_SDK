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

// BlueprintGeneratedClass TeamInterface.TeamInterface_C
// 0x0000 (0x0028 - 0x0028)
class UTeamInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TeamInterface.TeamInterface_C");
		return ptr;
	}


	void GetAllyTeams(TArray<TEnumAsByte<ETeams>>* AllyTeams);
	void GetTeam(TEnumAsByte<ETeams>* Team);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
