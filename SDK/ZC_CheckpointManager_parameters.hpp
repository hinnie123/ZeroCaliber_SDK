#pragma once

// ZeroCaliber (0.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CheckpointManager.CheckpointManager_C.TeleportPlayerToCurrentCheckpoint
struct ACheckpointManager_C_TeleportPlayerToCurrentCheckpoint_Params
{
};

// Function CheckpointManager.CheckpointManager_C.GetPlayerPawnCharacter
struct ACheckpointManager_C_GetPlayerPawnCharacter_Params
{
	class APlayerPawnCharacter_C*                      PlayerPawnCharacter;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CheckpointManager.CheckpointManager_C.OnRep_CheckpointCurrentIndex
struct ACheckpointManager_C_OnRep_CheckpointCurrentIndex_Params
{
};

// Function CheckpointManager.CheckpointManager_C.TeleportPlayerToStart
struct ACheckpointManager_C_TeleportPlayerToStart_Params
{
};

// Function CheckpointManager.CheckpointManager_C.GetVRGameInstance
struct ACheckpointManager_C_GetVRGameInstance_Params
{
	class UVRGameInstanceVendetta_C*                   VRGameInstance;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CheckpointManager.CheckpointManager_C.UserConstructionScript
struct ACheckpointManager_C_UserConstructionScript_Params
{
};

// Function CheckpointManager.CheckpointManager_C.ReceiveBeginPlay
struct ACheckpointManager_C_ReceiveBeginPlay_Params
{
};

// Function CheckpointManager.CheckpointManager_C.PlayerEnteredCheckpoint
struct ACheckpointManager_C_PlayerEnteredCheckpoint_Params
{
	class ACheckpoint_C*                               Checkpoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CheckpointManager.CheckpointManager_C.LevelDataInitialized
struct ACheckpointManager_C_LevelDataInitialized_Params
{
	class ALevelData_C*                                LevelData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CheckpointManager.CheckpointManager_C.InitializeSinglePlayer
struct ACheckpointManager_C_InitializeSinglePlayer_Params
{
};

// Function CheckpointManager.CheckpointManager_C.InitializeCommon
struct ACheckpointManager_C_InitializeCommon_Params
{
};

// Function CheckpointManager.CheckpointManager_C.InitializeCoop
struct ACheckpointManager_C_InitializeCoop_Params
{
};

// Function CheckpointManager.CheckpointManager_C.PlayerEnteredCheckpointCoop
struct ACheckpointManager_C_PlayerEnteredCheckpointCoop_Params
{
	class ACheckpoint_C*                               Checkpoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CheckpointManager.CheckpointManager_C.ExecuteUbergraph_CheckpointManager
struct ACheckpointManager_C_ExecuteUbergraph_CheckpointManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
