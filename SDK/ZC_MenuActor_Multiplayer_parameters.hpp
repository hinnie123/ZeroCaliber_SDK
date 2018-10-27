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

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.UserConstructionScript
struct AMenuActor_Multiplayer_C_UserConstructionScript_Params
{
};

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.Timeline_0__FinishedFunc
struct AMenuActor_Multiplayer_C_Timeline_0__FinishedFunc_Params
{
};

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.Timeline_0__UpdateFunc
struct AMenuActor_Multiplayer_C_Timeline_0__UpdateFunc_Params
{
};

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.Timeline_2__FinishedFunc
struct AMenuActor_Multiplayer_C_Timeline_2__FinishedFunc_Params
{
};

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.Timeline_2__UpdateFunc
struct AMenuActor_Multiplayer_C_Timeline_2__UpdateFunc_Params
{
};

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AMenuActor_Multiplayer_C_BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct AMenuActor_Multiplayer_C_BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.ReceiveBeginPlay
struct AMenuActor_Multiplayer_C_ReceiveBeginPlay_Params
{
};

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnBackButtonPressed
struct AMenuActor_Multiplayer_C_OnBackButtonPressed_Params
{
};

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnCreateButtonPressed
struct AMenuActor_Multiplayer_C_OnCreateButtonPressed_Params
{
};

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnCloseButtonPressed
struct AMenuActor_Multiplayer_C_OnCloseButtonPressed_Params
{
};

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.AnimateWidget
struct AMenuActor_Multiplayer_C_AnimateWidget_Params
{
	class UWidgetComponent*                            Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               PlayForward;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnDirectConnectPressed
struct AMenuActor_Multiplayer_C_OnDirectConnectPressed_Params
{
};

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.IpJoinOnBackButtonPressed
struct AMenuActor_Multiplayer_C_IpJoinOnBackButtonPressed_Params
{
};

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnPasswordPressed
struct AMenuActor_Multiplayer_C_OnPasswordPressed_Params
{
};

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnPasswordPanelClose
struct AMenuActor_Multiplayer_C_OnPasswordPanelClose_Params
{
};

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.SetPassword
struct AMenuActor_Multiplayer_C_SetPassword_Params
{
	struct FString                                     Password;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnJoinWithPassword
struct AMenuActor_Multiplayer_C_OnJoinWithPassword_Params
{
};

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.JoinWithPassword
struct AMenuActor_Multiplayer_C_JoinWithPassword_Params
{
	struct FString                                     PasswordJoin;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnInvalidPassword
struct AMenuActor_Multiplayer_C_OnInvalidPassword_Params
{
};

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnCorrectPassword
struct AMenuActor_Multiplayer_C_OnCorrectPassword_Params
{
};

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnJoinInProgress
struct AMenuActor_Multiplayer_C_OnJoinInProgress_Params
{
};

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.FailedToJoin
struct AMenuActor_Multiplayer_C_FailedToJoin_Params
{
};

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.OnJoiningWidgetClose
struct AMenuActor_Multiplayer_C_OnJoiningWidgetClose_Params
{
};

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.LevelDataInitialized
struct AMenuActor_Multiplayer_C_LevelDataInitialized_Params
{
	class ALevelData_C**                               LevelData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.CheckPlayerLaserBeam
struct AMenuActor_Multiplayer_C_CheckPlayerLaserBeam_Params
{
};

// Function MenuActor_Multiplayer.MenuActor_Multiplayer_C.ExecuteUbergraph_MenuActor_Multiplayer
struct AMenuActor_Multiplayer_C_ExecuteUbergraph_MenuActor_Multiplayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
