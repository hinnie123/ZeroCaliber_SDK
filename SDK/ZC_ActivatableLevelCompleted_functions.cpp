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

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.CalculateRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 VectorA                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 VectorB                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          ReturnRot                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AActivatableLevelCompleted_C::CalculateRotation(const struct FVector& VectorA, const struct FVector& VectorB, float* ReturnRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.CalculateRotation");

	AActivatableLevelCompleted_C_CalculateRotation_Params params;
	params.VectorA = VectorA;
	params.VectorB = VectorB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnRot != nullptr)
		*ReturnRot = params.ReturnRot;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.ReleaseWeapons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerPawnCharacter_C*  PlayerPawnCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatableLevelCompleted_C::ReleaseWeapons(class APlayerPawnCharacter_C* PlayerPawnCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.ReleaseWeapons");

	AActivatableLevelCompleted_C_ReleaseWeapons_Params params;
	params.PlayerPawnCharacter = PlayerPawnCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.TeleportPlayerToFront
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AActivatableLevelCompleted_C::TeleportPlayerToFront()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.TeleportPlayerToFront");

	AActivatableLevelCompleted_C_TeleportPlayerToFront_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.SavePlayerRank
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AActivatableLevelCompleted_C::SavePlayerRank()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.SavePlayerRank");

	AActivatableLevelCompleted_C_SavePlayerRank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.PlayerXpUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatableLevelCompleted_C::PlayerXpUpdate(float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.PlayerXpUpdate");

	AActivatableLevelCompleted_C_PlayerXpUpdate_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.InitializePlayerRank
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AActivatableLevelCompleted_C::InitializePlayerRank()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.InitializePlayerRank");

	AActivatableLevelCompleted_C_InitializePlayerRank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.OverlallScoreUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void AActivatableLevelCompleted_C::OverlallScoreUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.OverlallScoreUpdate");

	AActivatableLevelCompleted_C_OverlallScoreUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.KillsUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatableLevelCompleted_C::KillsUpdate(float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.KillsUpdate");

	AActivatableLevelCompleted_C_KillsUpdate_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.HitHeadUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatableLevelCompleted_C::HitHeadUpdate(float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.HitHeadUpdate");

	AActivatableLevelCompleted_C_HitHeadUpdate_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.AccuracyUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatableLevelCompleted_C::AccuracyUpdate(float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.AccuracyUpdate");

	AActivatableLevelCompleted_C_AccuracyUpdate_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.LoadLevelStatistics
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AActivatableLevelCompleted_C::LoadLevelStatistics()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.LoadLevelStatistics");

	AActivatableLevelCompleted_C_LoadLevelStatistics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.GetVRGameInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UVRGameInstanceVendetta_C* VRGameInstance                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AActivatableLevelCompleted_C::GetVRGameInstance(class UVRGameInstanceVendetta_C** VRGameInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.GetVRGameInstance");

	AActivatableLevelCompleted_C_GetVRGameInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VRGameInstance != nullptr)
		*VRGameInstance = params.VRGameInstance;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.SaveLevelStatistics
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AActivatableLevelCompleted_C::SaveLevelStatistics()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.SaveLevelStatistics");

	AActivatableLevelCompleted_C_SaveLevelStatistics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AActivatableLevelCompleted_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.UserConstructionScript");

	AActivatableLevelCompleted_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AActivatableLevelCompleted_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.Timeline_0__FinishedFunc");

	AActivatableLevelCompleted_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AActivatableLevelCompleted_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.Timeline_0__UpdateFunc");

	AActivatableLevelCompleted_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void AActivatableLevelCompleted_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.Timeline_1__FinishedFunc");

	AActivatableLevelCompleted_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void AActivatableLevelCompleted_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.Timeline_1__UpdateFunc");

	AActivatableLevelCompleted_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void AActivatableLevelCompleted_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.Timeline_2__FinishedFunc");

	AActivatableLevelCompleted_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void AActivatableLevelCompleted_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.Timeline_2__UpdateFunc");

	AActivatableLevelCompleted_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.OnLoaded_431C2FD944BE774A3C39FCB7797A62E2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatableLevelCompleted_C::OnLoaded_431C2FD944BE774A3C39FCB7797A62E2(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.OnLoaded_431C2FD944BE774A3C39FCB7797A62E2");

	AActivatableLevelCompleted_C_OnLoaded_431C2FD944BE774A3C39FCB7797A62E2_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.Activated
// (BlueprintCallable, BlueprintEvent)

void AActivatableLevelCompleted_C::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.Activated");

	AActivatableLevelCompleted_C_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AActivatableLevelCompleted_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.ReceiveBeginPlay");

	AActivatableLevelCompleted_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.ShowUnlockedItems
// (BlueprintCallable, BlueprintEvent)

void AActivatableLevelCompleted_C::ShowUnlockedItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.ShowUnlockedItems");

	AActivatableLevelCompleted_C_ShowUnlockedItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.OnWidgetUnlockedItemsButtonOk
// (BlueprintCallable, BlueprintEvent)

void AActivatableLevelCompleted_C::OnWidgetUnlockedItemsButtonOk()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.OnWidgetUnlockedItemsButtonOk");

	AActivatableLevelCompleted_C_OnWidgetUnlockedItemsButtonOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.ShowUnlockedLevels
// (BlueprintCallable, BlueprintEvent)

void AActivatableLevelCompleted_C::ShowUnlockedLevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.ShowUnlockedLevels");

	AActivatableLevelCompleted_C_ShowUnlockedLevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.OnWidgetUnlockedILevelsButtonOk
// (BlueprintCallable, BlueprintEvent)

void AActivatableLevelCompleted_C::OnWidgetUnlockedILevelsButtonOk()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.OnWidgetUnlockedILevelsButtonOk");

	AActivatableLevelCompleted_C_OnWidgetUnlockedILevelsButtonOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.OnButtonMenuReleased
// (BlueprintCallable, BlueprintEvent)

void AActivatableLevelCompleted_C::OnButtonMenuReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.OnButtonMenuReleased");

	AActivatableLevelCompleted_C_OnButtonMenuReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.OnButtonNextLevelReleased
// (BlueprintCallable, BlueprintEvent)

void AActivatableLevelCompleted_C::OnButtonNextLevelReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.OnButtonNextLevelReleased");

	AActivatableLevelCompleted_C_OnButtonNextLevelReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.TeleportTo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UVRBaseCharacterMovementComponent* Character_Movement             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AActivatableLevelCompleted_C::TeleportTo(const struct FVector& Location, const struct FRotator& Rotation, class UVRBaseCharacterMovementComponent* Character_Movement)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.TeleportTo");

	AActivatableLevelCompleted_C_TeleportTo_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Character_Movement = Character_Movement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.LevelDataInitialized
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALevelData_C*            LevelData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatableLevelCompleted_C::LevelDataInitialized(class ALevelData_C* LevelData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.LevelDataInitialized");

	AActivatableLevelCompleted_C_LevelDataInitialized_Params params;
	params.LevelData = LevelData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.ExecuteUbergraph_ActivatableLevelCompleted
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatableLevelCompleted_C::ExecuteUbergraph_ActivatableLevelCompleted(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.ExecuteUbergraph_ActivatableLevelCompleted");

	AActivatableLevelCompleted_C_ExecuteUbergraph_ActivatableLevelCompleted_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
