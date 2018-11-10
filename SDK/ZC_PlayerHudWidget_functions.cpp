// ZeroCaliber (0.6.0 EA) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerHudWidget.PlayerHudWidget_C.DisplayHitIndicator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerHudWidget_C::DisplayHitIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHudWidget.PlayerHudWidget_C.DisplayHitIndicator");

	UPlayerHudWidget_C_DisplayHitIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHudWidget.PlayerHudWidget_C.SetPoiArrowPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActivatablePOI_C*       ActivatablePOI                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPoiArrowWidget_C*       PoiArrowWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerHudWidget_C::SetPoiArrowPosition(class AActivatablePOI_C* ActivatablePOI, class UPoiArrowWidget_C* PoiArrowWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHudWidget.PlayerHudWidget_C.SetPoiArrowPosition");

	UPlayerHudWidget_C_SetPoiArrowPosition_Params params;
	params.ActivatablePOI = ActivatablePOI;
	params.PoiArrowWidget = PoiArrowWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHudWidget.PlayerHudWidget_C.InitializePoiArrow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActivatablePOI_C*       Poi                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPoiArrowWidget_C*       PoiArrowWidget                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerHudWidget_C::InitializePoiArrow(class AActivatablePOI_C* Poi, class UPoiArrowWidget_C** PoiArrowWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHudWidget.PlayerHudWidget_C.InitializePoiArrow");

	UPlayerHudWidget_C_InitializePoiArrow_Params params;
	params.Poi = Poi;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PoiArrowWidget != nullptr)
		*PoiArrowWidget = params.PoiArrowWidget;
}


// Function PlayerHudWidget.PlayerHudWidget_C.GetDistance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActivatablePOI_C*       ActivatablePOI                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distancee                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerHudWidget_C::GetDistance(class AActivatablePOI_C* ActivatablePOI, float* Distancee)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHudWidget.PlayerHudWidget_C.GetDistance");

	UPlayerHudWidget_C_GetDistance_Params params;
	params.ActivatablePOI = ActivatablePOI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distancee != nullptr)
		*Distancee = params.Distancee;
}


// Function PlayerHudWidget.PlayerHudWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerHudWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHudWidget.PlayerHudWidget_C.Tick");

	UPlayerHudWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHudWidget.PlayerHudWidget_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerPawnCharacter_C*  PlayerPawnCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerHudWidget_C::Initialize(class APlayerPawnCharacter_C* PlayerPawnCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHudWidget.PlayerHudWidget_C.Initialize");

	UPlayerHudWidget_C_Initialize_Params params;
	params.PlayerPawnCharacter = PlayerPawnCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHudWidget.PlayerHudWidget_C.UpdatePoiList
// (BlueprintCallable, BlueprintEvent)

void UPlayerHudWidget_C::UpdatePoiList()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHudWidget.PlayerHudWidget_C.UpdatePoiList");

	UPlayerHudWidget_C_UpdatePoiList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHudWidget.PlayerHudWidget_C.PlayerDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DamageCauserOriginalVelocity   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UPlayerHudWidget_C::PlayerDamaged(float Damage, class AActor* DamageInstigator, const struct FVector& DamageCauserOriginalVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHudWidget.PlayerHudWidget_C.PlayerDamaged");

	UPlayerHudWidget_C_PlayerDamaged_Params params;
	params.Damage = Damage;
	params.DamageInstigator = DamageInstigator;
	params.DamageCauserOriginalVelocity = DamageCauserOriginalVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHudWidget.PlayerHudWidget_C.ExecuteUbergraph_PlayerHudWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerHudWidget_C::ExecuteUbergraph_PlayerHudWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHudWidget.PlayerHudWidget_C.ExecuteUbergraph_PlayerHudWidget");

	UPlayerHudWidget_C_ExecuteUbergraph_PlayerHudWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
