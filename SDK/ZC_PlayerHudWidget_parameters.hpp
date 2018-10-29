#pragma once

// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerHudWidget.PlayerHudWidget_C.DisplayHitIndicator
struct UPlayerHudWidget_C_DisplayHitIndicator_Params
{
};

// Function PlayerHudWidget.PlayerHudWidget_C.SetPoiArrowPosition
struct UPlayerHudWidget_C_SetPoiArrowPosition_Params
{
	class AActivatablePOI_C*                           ActivatablePOI;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPoiArrowWidget_C*                           PoiArrowWidget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerHudWidget.PlayerHudWidget_C.InitializePoiArrow
struct UPlayerHudWidget_C_InitializePoiArrow_Params
{
	class AActivatablePOI_C*                           Poi;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPoiArrowWidget_C*                           PoiArrowWidget;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerHudWidget.PlayerHudWidget_C.GetDistance
struct UPlayerHudWidget_C_GetDistance_Params
{
	class AActivatablePOI_C*                           ActivatablePOI;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distancee;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHudWidget.PlayerHudWidget_C.Tick
struct UPlayerHudWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHudWidget.PlayerHudWidget_C.Initialize
struct UPlayerHudWidget_C_Initialize_Params
{
	class APlayerPawnCharacter_C*                      PlayerPawnCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHudWidget.PlayerHudWidget_C.UpdatePoiList
struct UPlayerHudWidget_C_UpdatePoiList_Params
{
};

// Function PlayerHudWidget.PlayerHudWidget_C.PlayerDamaged
struct UPlayerHudWidget_C_PlayerDamaged_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DamageCauserOriginalVelocity;                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PlayerHudWidget.PlayerHudWidget_C.ExecuteUbergraph_PlayerHudWidget
struct UPlayerHudWidget_C_ExecuteUbergraph_PlayerHudWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
