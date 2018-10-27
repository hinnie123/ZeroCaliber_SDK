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

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.CalculateRotation
struct AActivatableLevelCompleted_C_CalculateRotation_Params
{
	struct FVector                                     VectorA;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     VectorB;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              ReturnRot;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.ReleaseWeapons
struct AActivatableLevelCompleted_C_ReleaseWeapons_Params
{
	class APlayerPawnCharacter_C*                      PlayerPawnCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.TeleportPlayerToFront
struct AActivatableLevelCompleted_C_TeleportPlayerToFront_Params
{
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.SavePlayerRank
struct AActivatableLevelCompleted_C_SavePlayerRank_Params
{
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.PlayerXpUpdate
struct AActivatableLevelCompleted_C_PlayerXpUpdate_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.InitializePlayerRank
struct AActivatableLevelCompleted_C_InitializePlayerRank_Params
{
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.OverlallScoreUpdate
struct AActivatableLevelCompleted_C_OverlallScoreUpdate_Params
{
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.KillsUpdate
struct AActivatableLevelCompleted_C_KillsUpdate_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.HitHeadUpdate
struct AActivatableLevelCompleted_C_HitHeadUpdate_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.AccuracyUpdate
struct AActivatableLevelCompleted_C_AccuracyUpdate_Params
{
	float                                              Alpha;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.LoadLevelStatistics
struct AActivatableLevelCompleted_C_LoadLevelStatistics_Params
{
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.GetVRGameInstance
struct AActivatableLevelCompleted_C_GetVRGameInstance_Params
{
	class UVRGameInstanceVendetta_C*                   VRGameInstance;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.SaveLevelStatistics
struct AActivatableLevelCompleted_C_SaveLevelStatistics_Params
{
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.UserConstructionScript
struct AActivatableLevelCompleted_C_UserConstructionScript_Params
{
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.Timeline_0__FinishedFunc
struct AActivatableLevelCompleted_C_Timeline_0__FinishedFunc_Params
{
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.Timeline_0__UpdateFunc
struct AActivatableLevelCompleted_C_Timeline_0__UpdateFunc_Params
{
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.Timeline_1__FinishedFunc
struct AActivatableLevelCompleted_C_Timeline_1__FinishedFunc_Params
{
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.Timeline_1__UpdateFunc
struct AActivatableLevelCompleted_C_Timeline_1__UpdateFunc_Params
{
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.Timeline_2__FinishedFunc
struct AActivatableLevelCompleted_C_Timeline_2__FinishedFunc_Params
{
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.Timeline_2__UpdateFunc
struct AActivatableLevelCompleted_C_Timeline_2__UpdateFunc_Params
{
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.OnLoaded_431C2FD944BE774A3C39FCB7797A62E2
struct AActivatableLevelCompleted_C_OnLoaded_431C2FD944BE774A3C39FCB7797A62E2_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.Activated
struct AActivatableLevelCompleted_C_Activated_Params
{
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.ReceiveBeginPlay
struct AActivatableLevelCompleted_C_ReceiveBeginPlay_Params
{
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.ShowUnlockedItems
struct AActivatableLevelCompleted_C_ShowUnlockedItems_Params
{
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.OnWidgetUnlockedItemsButtonOk
struct AActivatableLevelCompleted_C_OnWidgetUnlockedItemsButtonOk_Params
{
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.ShowUnlockedLevels
struct AActivatableLevelCompleted_C_ShowUnlockedLevels_Params
{
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.OnWidgetUnlockedILevelsButtonOk
struct AActivatableLevelCompleted_C_OnWidgetUnlockedILevelsButtonOk_Params
{
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.OnButtonMenuReleased
struct AActivatableLevelCompleted_C_OnButtonMenuReleased_Params
{
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.OnButtonNextLevelReleased
struct AActivatableLevelCompleted_C_OnButtonNextLevelReleased_Params
{
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.TeleportTo
struct AActivatableLevelCompleted_C_TeleportTo_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UVRBaseCharacterMovementComponent*           Character_Movement;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.LevelDataInitialized
struct AActivatableLevelCompleted_C_LevelDataInitialized_Params
{
	class ALevelData_C*                                LevelData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatableLevelCompleted.ActivatableLevelCompleted_C.ExecuteUbergraph_ActivatableLevelCompleted
struct AActivatableLevelCompleted_C_ExecuteUbergraph_ActivatableLevelCompleted_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
