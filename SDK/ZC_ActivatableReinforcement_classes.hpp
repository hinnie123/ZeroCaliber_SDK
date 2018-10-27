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

// BlueprintGeneratedClass ActivatableReinforcement.ActivatableReinforcement_C
// 0x0043 (0x041C - 0x03D9)
class AActivatableReinforcement_C : public AActivatableBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	TArray<class AActivatableSpawnerEnemy_C*>          SpawnLocations;                                           // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	float                                              EnemyCountStart;                                          // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnemyCountCurrent;                                        // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnemyCountDecrease;                                       // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnemiesAlive;                                             // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETeams>                                Team;                                                     // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0409(0x0003) MISSED OFFSET
	float                                              ReinforcementCheckInterval;                               // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                CheckSpawnHandler;                                        // 0x0410(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                SpawnTriesCurrent;                                        // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActivatableReinforcement.ActivatableReinforcement_C");
		return ptr;
	}


	void GetEnemyCountStart(float* EnemyCountStart);
	void GetEnemyCountDecrease(float* EnemyCountDecrease);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Activated();
	void Deactivated();
	void CheckSpawn();
	void OnEnemySpawned(class AEnemyCharacterBase_C* Enemy);
	void OnEnemyDied(class AEnemyCharacterBase_C* Enemy, class AController* Instigator);
	void CheckAndSpawn(bool DecreaseEnemyCount);
	void ExecuteUbergraph_ActivatableReinforcement(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
