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

// BlueprintGeneratedClass CheckpointManager.CheckpointManager_C
// 0x005F (0x0438 - 0x03D9)
class ACheckpointManager_C : public AActivatableBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	TArray<class ACheckpoint_C*>                       Checkpoints;                                              // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class UVRGameInstanceVendetta_C*                   VRGameInstance;                                           // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     LevelName;                                                // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class APlayerEquipmentSaver_C*                     PlayerEquipmentSaver;                                     // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ActivationDelayAtBeginPlay;                               // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ELevelDataPlayers>                     LevelDataPlayers;                                         // 0x041C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x041D(0x0003) MISSED OFFSET
	int                                                CheckpointCurrentIndex;                                   // 0x0420(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	struct FTimerHandle                                TeleportPlayerToStartHandler;                             // 0x0428(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerPawnCharacter_C*                      PlayerPawnCharacter;                                      // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CheckpointManager.CheckpointManager_C");
		return ptr;
	}


	void TeleportPlayerToCurrentCheckpoint();
	void GetPlayerPawnCharacter(class APlayerPawnCharacter_C** PlayerPawnCharacter);
	void OnRep_CheckpointCurrentIndex();
	void TeleportPlayerToStart();
	void GetVRGameInstance(class UVRGameInstanceVendetta_C** VRGameInstance);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PlayerEnteredCheckpoint(class ACheckpoint_C* Checkpoint);
	void LevelDataInitialized(class ALevelData_C* LevelData);
	void InitializeSinglePlayer();
	void InitializeCommon();
	void InitializeCoop();
	void PlayerEnteredCheckpointCoop(class ACheckpoint_C* Checkpoint);
	void ExecuteUbergraph_CheckpointManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
