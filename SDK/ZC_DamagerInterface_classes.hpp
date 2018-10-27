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

// BlueprintGeneratedClass DamagerInterface.DamagerInterface_C
// 0x0000 (0x0028 - 0x0028)
class UDamagerInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DamagerInterface.DamagerInterface_C");
		return ptr;
	}


	void GetKills(int* Kills);
	void Kill();
	void GetProjectilesHitHead(int* ProjectilesHitHead);
	void ProjectileHitHead();
	void GetProjectilesHit(int* ProjectilesHit);
	void GetProjectilesFired(int* ProjectilesFired);
	void ProjectileHit();
	void ProjectileFired();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
