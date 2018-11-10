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

// BlueprintGeneratedClass ActivatableSpawnerEnemy.ActivatableSpawnerEnemy_C
// 0x009B (0x0474 - 0x03D9)
class AActivatableSpawnerEnemy_C : public AActivatableBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      EnemyToSpawn;                                             // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<TEnumAsByte<EnemyEncounterStrategyEnum>, int> EncounterStrategies;                                      // 0x03F0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EnemySenseState>                       StartingSenseState;                                       // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EnemyIdleStrategyEnum>                 IdleStrategy;                                             // 0x0441(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EnemyPathFindingBehavior>              PathFindingBehavior;                                      // 0x0442(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0443(0x0005) MISSED OFFSET
	TArray<class ATriggerBase*>                        PathFindingAreas;                                         // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	float                                              PathFindingRange;                                         // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    EnemySpawned;                                             // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              SpawnRadius;                                              // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActivatableSpawnerEnemy.ActivatableSpawnerEnemy_C");
		return ptr;
	}


	void SpawnEnemy(class AEnemyCharacterBase_C** Enemy);
	void UserConstructionScript();
	void Activated();
	void ExecuteUbergraph_ActivatableSpawnerEnemy(int EntryPoint);
	void EnemySpawned__DelegateSignature(class AEnemyCharacterBase_C* Enemy);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
