// ZeroCaliber (0.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CheckpointManager.CheckpointManager_C.TeleportPlayerToCurrentCheckpoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACheckpointManager_C::TeleportPlayerToCurrentCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckpointManager.CheckpointManager_C.TeleportPlayerToCurrentCheckpoint");

	ACheckpointManager_C_TeleportPlayerToCurrentCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckpointManager.CheckpointManager_C.GetPlayerPawnCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerPawnCharacter_C*  PlayerPawnCharacter            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACheckpointManager_C::GetPlayerPawnCharacter(class APlayerPawnCharacter_C** PlayerPawnCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckpointManager.CheckpointManager_C.GetPlayerPawnCharacter");

	ACheckpointManager_C_GetPlayerPawnCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerPawnCharacter != nullptr)
		*PlayerPawnCharacter = params.PlayerPawnCharacter;
}


// Function CheckpointManager.CheckpointManager_C.OnRep_CheckpointCurrentIndex
// (BlueprintCallable, BlueprintEvent)

void ACheckpointManager_C::OnRep_CheckpointCurrentIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckpointManager.CheckpointManager_C.OnRep_CheckpointCurrentIndex");

	ACheckpointManager_C_OnRep_CheckpointCurrentIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckpointManager.CheckpointManager_C.TeleportPlayerToStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACheckpointManager_C::TeleportPlayerToStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckpointManager.CheckpointManager_C.TeleportPlayerToStart");

	ACheckpointManager_C_TeleportPlayerToStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckpointManager.CheckpointManager_C.GetVRGameInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UVRGameInstanceVendetta_C* VRGameInstance                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ACheckpointManager_C::GetVRGameInstance(class UVRGameInstanceVendetta_C** VRGameInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckpointManager.CheckpointManager_C.GetVRGameInstance");

	ACheckpointManager_C_GetVRGameInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VRGameInstance != nullptr)
		*VRGameInstance = params.VRGameInstance;
}


// Function CheckpointManager.CheckpointManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACheckpointManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckpointManager.CheckpointManager_C.UserConstructionScript");

	ACheckpointManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckpointManager.CheckpointManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACheckpointManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckpointManager.CheckpointManager_C.ReceiveBeginPlay");

	ACheckpointManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckpointManager.CheckpointManager_C.PlayerEnteredCheckpoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACheckpoint_C*           Checkpoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACheckpointManager_C::PlayerEnteredCheckpoint(class ACheckpoint_C* Checkpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckpointManager.CheckpointManager_C.PlayerEnteredCheckpoint");

	ACheckpointManager_C_PlayerEnteredCheckpoint_Params params;
	params.Checkpoint = Checkpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckpointManager.CheckpointManager_C.LevelDataInitialized
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALevelData_C*            LevelData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACheckpointManager_C::LevelDataInitialized(class ALevelData_C* LevelData)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckpointManager.CheckpointManager_C.LevelDataInitialized");

	ACheckpointManager_C_LevelDataInitialized_Params params;
	params.LevelData = LevelData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckpointManager.CheckpointManager_C.InitializeSinglePlayer
// (BlueprintCallable, BlueprintEvent)

void ACheckpointManager_C::InitializeSinglePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckpointManager.CheckpointManager_C.InitializeSinglePlayer");

	ACheckpointManager_C_InitializeSinglePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckpointManager.CheckpointManager_C.InitializeCommon
// (BlueprintCallable, BlueprintEvent)

void ACheckpointManager_C::InitializeCommon()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckpointManager.CheckpointManager_C.InitializeCommon");

	ACheckpointManager_C_InitializeCommon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckpointManager.CheckpointManager_C.InitializeCoop
// (BlueprintCallable, BlueprintEvent)

void ACheckpointManager_C::InitializeCoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckpointManager.CheckpointManager_C.InitializeCoop");

	ACheckpointManager_C_InitializeCoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckpointManager.CheckpointManager_C.PlayerEnteredCheckpointCoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACheckpoint_C*           Checkpoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACheckpointManager_C::PlayerEnteredCheckpointCoop(class ACheckpoint_C* Checkpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckpointManager.CheckpointManager_C.PlayerEnteredCheckpointCoop");

	ACheckpointManager_C_PlayerEnteredCheckpointCoop_Params params;
	params.Checkpoint = Checkpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CheckpointManager.CheckpointManager_C.ExecuteUbergraph_CheckpointManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACheckpointManager_C::ExecuteUbergraph_CheckpointManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CheckpointManager.CheckpointManager_C.ExecuteUbergraph_CheckpointManager");

	ACheckpointManager_C_ExecuteUbergraph_CheckpointManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
