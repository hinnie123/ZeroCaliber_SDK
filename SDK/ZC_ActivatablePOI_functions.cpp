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

// Function ActivatablePOI.ActivatablePOI_C.DeactivateOtherPOIsByTag
// (Public, BlueprintCallable, BlueprintEvent)

void AActivatablePOI_C::DeactivateOtherPOIsByTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatablePOI.ActivatablePOI_C.DeactivateOtherPOIsByTag");

	AActivatablePOI_C_DeactivateOtherPOIsByTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatablePOI.ActivatablePOI_C.InitializeWidget
// (Public, BlueprintCallable, BlueprintEvent)

void AActivatablePOI_C::InitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatablePOI.ActivatablePOI_C.InitializeWidget");

	AActivatablePOI_C_InitializeWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatablePOI.ActivatablePOI_C.UpdatePoiText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void AActivatablePOI_C::UpdatePoiText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatablePOI.ActivatablePOI_C.UpdatePoiText");

	AActivatablePOI_C_UpdatePoiText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatablePOI.ActivatablePOI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AActivatablePOI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatablePOI.ActivatablePOI_C.UserConstructionScript");

	AActivatablePOI_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatablePOI.ActivatablePOI_C.PoiAnimTimeLine__FinishedFunc
// (BlueprintEvent)

void AActivatablePOI_C::PoiAnimTimeLine__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatablePOI.ActivatablePOI_C.PoiAnimTimeLine__FinishedFunc");

	AActivatablePOI_C_PoiAnimTimeLine__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatablePOI.ActivatablePOI_C.PoiAnimTimeLine__UpdateFunc
// (BlueprintEvent)

void AActivatablePOI_C::PoiAnimTimeLine__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatablePOI.ActivatablePOI_C.PoiAnimTimeLine__UpdateFunc");

	AActivatablePOI_C_PoiAnimTimeLine__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatablePOI.ActivatablePOI_C.PoiAnimInitialTimeline__FinishedFunc
// (BlueprintEvent)

void AActivatablePOI_C::PoiAnimInitialTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatablePOI.ActivatablePOI_C.PoiAnimInitialTimeline__FinishedFunc");

	AActivatablePOI_C_PoiAnimInitialTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatablePOI.ActivatablePOI_C.PoiAnimInitialTimeline__UpdateFunc
// (BlueprintEvent)

void AActivatablePOI_C::PoiAnimInitialTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatablePOI.ActivatablePOI_C.PoiAnimInitialTimeline__UpdateFunc");

	AActivatablePOI_C_PoiAnimInitialTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatablePOI.ActivatablePOI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AActivatablePOI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatablePOI.ActivatablePOI_C.ReceiveBeginPlay");

	AActivatablePOI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatablePOI.ActivatablePOI_C.Activated
// (BlueprintCallable, BlueprintEvent)

void AActivatablePOI_C::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatablePOI.ActivatablePOI_C.Activated");

	AActivatablePOI_C_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatablePOI.ActivatablePOI_C.Deactivated
// (BlueprintCallable, BlueprintEvent)

void AActivatablePOI_C::Deactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatablePOI.ActivatablePOI_C.Deactivated");

	AActivatablePOI_C_Deactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatablePOI.ActivatablePOI_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatablePOI_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatablePOI.ActivatablePOI_C.ReceiveTick");

	AActivatablePOI_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatablePOI.ActivatablePOI_C.SetDistanceText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatablePOI_C::SetDistanceText(float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatablePOI.ActivatablePOI_C.SetDistanceText");

	AActivatablePOI_C_SetDistanceText_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatablePOI.ActivatablePOI_C.LoadState
// (Public, BlueprintCallable, BlueprintEvent)

void AActivatablePOI_C::LoadState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatablePOI.ActivatablePOI_C.LoadState");

	AActivatablePOI_C_LoadState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatablePOI.ActivatablePOI_C.ExecuteUbergraph_ActivatablePOI
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActivatablePOI_C::ExecuteUbergraph_ActivatablePOI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatablePOI.ActivatablePOI_C.ExecuteUbergraph_ActivatablePOI");

	AActivatablePOI_C_ExecuteUbergraph_ActivatablePOI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
