// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UnlocksWidget.UnlocksWidget_C.IndexCanBeDecremented
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Decrementable                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUnlocksWidget_C::IndexCanBeDecremented(bool* Decrementable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnlocksWidget.UnlocksWidget_C.IndexCanBeDecremented");

	UUnlocksWidget_C_IndexCanBeDecremented_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Decrementable != nullptr)
		*Decrementable = params.Decrementable;
}


// Function UnlocksWidget.UnlocksWidget_C.IndexCanBeIncremented
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Incrementable                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUnlocksWidget_C::IndexCanBeIncremented(bool* Incrementable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnlocksWidget.UnlocksWidget_C.IndexCanBeIncremented");

	UUnlocksWidget_C_IndexCanBeIncremented_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Incrementable != nullptr)
		*Incrementable = params.Incrementable;
}


// Function UnlocksWidget.UnlocksWidget_C.ClearScrollbox
// (Public, BlueprintCallable, BlueprintEvent)

void UUnlocksWidget_C::ClearScrollbox()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnlocksWidget.UnlocksWidget_C.ClearScrollbox");

	UUnlocksWidget_C_ClearScrollbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnlocksWidget.UnlocksWidget_C.HandleArrows
// (Public, BlueprintCallable, BlueprintEvent)

void UUnlocksWidget_C::HandleArrows()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnlocksWidget.UnlocksWidget_C.HandleArrows");

	UUnlocksWidget_C_HandleArrows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnlocksWidget.UnlocksWidget_C.IsLevelLocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLevelStruct            Level                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Locked                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUnlocksWidget_C::IsLevelLocked(const struct FLevelStruct& Level, bool* Locked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnlocksWidget.UnlocksWidget_C.IsLevelLocked");

	UUnlocksWidget_C_IsLevelLocked_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locked != nullptr)
		*Locked = params.Locked;
}


// Function UnlocksWidget.UnlocksWidget_C.ContinuousItemScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUnlocksWidget_C::ContinuousItemScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnlocksWidget.UnlocksWidget_C.ContinuousItemScale");

	UUnlocksWidget_C_ContinuousItemScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnlocksWidget.UnlocksWidget_C.GetTargetScrollOffset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          TargetOffset                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUnlocksWidget_C::GetTargetScrollOffset(float* TargetOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnlocksWidget.UnlocksWidget_C.GetTargetScrollOffset");

	UUnlocksWidget_C_GetTargetScrollOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetOffset != nullptr)
		*TargetOffset = params.TargetOffset;
}


// Function UnlocksWidget.UnlocksWidget_C.ScaleInterpolate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUnlocksWidget_C::ScaleInterpolate(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnlocksWidget.UnlocksWidget_C.ScaleInterpolate");

	UUnlocksWidget_C_ScaleInterpolate_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnlocksWidget.UnlocksWidget_C.ScrollInterpolate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUnlocksWidget_C::ScrollInterpolate(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnlocksWidget.UnlocksWidget_C.ScrollInterpolate");

	UUnlocksWidget_C_ScrollInterpolate_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnlocksWidget.UnlocksWidget_C.CalculateTargetScrollOffset
// (Public, BlueprintCallable, BlueprintEvent)

void UUnlocksWidget_C::CalculateTargetScrollOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnlocksWidget.UnlocksWidget_C.CalculateTargetScrollOffset");

	UUnlocksWidget_C_CalculateTargetScrollOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnlocksWidget.UnlocksWidget_C.GetChild
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 Child                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUnlocksWidget_C::GetChild(int Index, class UWidget** Child)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnlocksWidget.UnlocksWidget_C.GetChild");

	UUnlocksWidget_C_GetChild_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Child != nullptr)
		*Child = params.Child;
}


// Function UnlocksWidget.UnlocksWidget_C.HasAnyChildren
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasAnyChildren                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUnlocksWidget_C::HasAnyChildren(bool* HasAnyChildren)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnlocksWidget.UnlocksWidget_C.HasAnyChildren");

	UUnlocksWidget_C_HasAnyChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasAnyChildren != nullptr)
		*HasAnyChildren = params.HasAnyChildren;
}


// Function UnlocksWidget.UnlocksWidget_C.SetupItemsScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUnlocksWidget_C::SetupItemsScale(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnlocksWidget.UnlocksWidget_C.SetupItemsScale");

	UUnlocksWidget_C_SetupItemsScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnlocksWidget.UnlocksWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUnlocksWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnlocksWidget.UnlocksWidget_C.Tick");

	UUnlocksWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnlocksWidget.UnlocksWidget_C.ScrollElementAt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUnlocksWidget_C::ScrollElementAt(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnlocksWidget.UnlocksWidget_C.ScrollElementAt");

	UUnlocksWidget_C_ScrollElementAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnlocksWidget.UnlocksWidget_C.Initialize
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FTextImage>      Items                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUnlocksWidget_C::Initialize(const struct FText& InText, TArray<struct FTextImage> Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnlocksWidget.UnlocksWidget_C.Initialize");

	UUnlocksWidget_C_Initialize_Params params;
	params.InText = InText;
	params.Items = Items;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnlocksWidget.UnlocksWidget_C.BndEvt__ScrollButtonRight_K2Node_ComponentBoundEvent_16_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUnlocksWidget_C::BndEvt__ScrollButtonRight_K2Node_ComponentBoundEvent_16_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnlocksWidget.UnlocksWidget_C.BndEvt__ScrollButtonRight_K2Node_ComponentBoundEvent_16_OnButtonReleasedEvent__DelegateSignature");

	UUnlocksWidget_C_BndEvt__ScrollButtonRight_K2Node_ComponentBoundEvent_16_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnlocksWidget.UnlocksWidget_C.BndEvt__ScrollButtonLeft_K2Node_ComponentBoundEvent_33_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUnlocksWidget_C::BndEvt__ScrollButtonLeft_K2Node_ComponentBoundEvent_33_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnlocksWidget.UnlocksWidget_C.BndEvt__ScrollButtonLeft_K2Node_ComponentBoundEvent_33_OnButtonReleasedEvent__DelegateSignature");

	UUnlocksWidget_C_BndEvt__ScrollButtonLeft_K2Node_ComponentBoundEvent_33_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnlocksWidget.UnlocksWidget_C.BndEvt__ButtonOk_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUnlocksWidget_C::BndEvt__ButtonOk_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnlocksWidget.UnlocksWidget_C.BndEvt__ButtonOk_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");

	UUnlocksWidget_C_BndEvt__ButtonOk_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnlocksWidget.UnlocksWidget_C.ExecuteUbergraph_UnlocksWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUnlocksWidget_C::ExecuteUbergraph_UnlocksWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UnlocksWidget.UnlocksWidget_C.ExecuteUbergraph_UnlocksWidget");

	UUnlocksWidget_C_ExecuteUbergraph_UnlocksWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnlocksWidget.UnlocksWidget_C.ButtonOkReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUnlocksWidget_C::ButtonOkReleased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UnlocksWidget.UnlocksWidget_C.ButtonOkReleased__DelegateSignature");

	UUnlocksWidget_C_ButtonOkReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
