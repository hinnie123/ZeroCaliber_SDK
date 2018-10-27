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

// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.SetLevelImage
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScrollableLevelSelectorWidget_C::SetLevelImage(class UTexture* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.SetLevelImage");

	UScrollableLevelSelectorWidget_C_SetLevelImage_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.IndexCanBeDecremented
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Decrementable                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScrollableLevelSelectorWidget_C::IndexCanBeDecremented(bool* Decrementable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.IndexCanBeDecremented");

	UScrollableLevelSelectorWidget_C_IndexCanBeDecremented_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Decrementable != nullptr)
		*Decrementable = params.Decrementable;
}


// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.IndexCanBeIncremented
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Incrementable                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScrollableLevelSelectorWidget_C::IndexCanBeIncremented(bool* Incrementable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.IndexCanBeIncremented");

	UScrollableLevelSelectorWidget_C_IndexCanBeIncremented_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Incrementable != nullptr)
		*Incrementable = params.Incrementable;
}


// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.ClearScrollbox
// (Public, BlueprintCallable, BlueprintEvent)

void UScrollableLevelSelectorWidget_C::ClearScrollbox()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.ClearScrollbox");

	UScrollableLevelSelectorWidget_C_ClearScrollbox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.HandleArrows
// (Public, BlueprintCallable, BlueprintEvent)

void UScrollableLevelSelectorWidget_C::HandleArrows()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.HandleArrows");

	UScrollableLevelSelectorWidget_C_HandleArrows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.IsLevelLocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLevelStruct            Level                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Locked                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScrollableLevelSelectorWidget_C::IsLevelLocked(const struct FLevelStruct& Level, bool* Locked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.IsLevelLocked");

	UScrollableLevelSelectorWidget_C_IsLevelLocked_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locked != nullptr)
		*Locked = params.Locked;
}


// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.ContinuousItemScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UScrollableLevelSelectorWidget_C::ContinuousItemScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.ContinuousItemScale");

	UScrollableLevelSelectorWidget_C_ContinuousItemScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.GetTargetScrollOffset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          TargetOffset                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScrollableLevelSelectorWidget_C::GetTargetScrollOffset(float* TargetOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.GetTargetScrollOffset");

	UScrollableLevelSelectorWidget_C_GetTargetScrollOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetOffset != nullptr)
		*TargetOffset = params.TargetOffset;
}


// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.ScaleInterpolate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScrollableLevelSelectorWidget_C::ScaleInterpolate(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.ScaleInterpolate");

	UScrollableLevelSelectorWidget_C_ScaleInterpolate_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.ScrollInterpolate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScrollableLevelSelectorWidget_C::ScrollInterpolate(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.ScrollInterpolate");

	UScrollableLevelSelectorWidget_C_ScrollInterpolate_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.CalculateTargetScrollOffset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UScrollableLevelSelectorWidget_C::CalculateTargetScrollOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.CalculateTargetScrollOffset");

	UScrollableLevelSelectorWidget_C_CalculateTargetScrollOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.GetChild
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 Child                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UScrollableLevelSelectorWidget_C::GetChild(int Index, class UWidget** Child)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.GetChild");

	UScrollableLevelSelectorWidget_C_GetChild_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Child != nullptr)
		*Child = params.Child;
}


// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.HasAnyChildren
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasAnyChildren                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScrollableLevelSelectorWidget_C::HasAnyChildren(bool* HasAnyChildren)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.HasAnyChildren");

	UScrollableLevelSelectorWidget_C_HasAnyChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasAnyChildren != nullptr)
		*HasAnyChildren = params.HasAnyChildren;
}


// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.SetupItemsScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScrollableLevelSelectorWidget_C::SetupItemsScale(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.SetupItemsScale");

	UScrollableLevelSelectorWidget_C_SetupItemsScale_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScrollableLevelSelectorWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.Construct");

	UScrollableLevelSelectorWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.ScrollElementAt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScrollableLevelSelectorWidget_C::ScrollElementAt(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.ScrollElementAt");

	UScrollableLevelSelectorWidget_C_ScrollElementAt_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.InitLevels
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FLevelStruct>    Levels                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UScrollableLevelSelectorWidget_C::InitLevels(TArray<struct FLevelStruct> Levels)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.InitLevels");

	UScrollableLevelSelectorWidget_C_InitLevels_Params params;
	params.Levels = Levels;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScrollableLevelSelectorWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.Tick");

	UScrollableLevelSelectorWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.BndEvt__ScrollButtonRight_K2Node_ComponentBoundEvent_16_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UScrollableLevelSelectorWidget_C::BndEvt__ScrollButtonRight_K2Node_ComponentBoundEvent_16_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.BndEvt__ScrollButtonRight_K2Node_ComponentBoundEvent_16_OnButtonReleasedEvent__DelegateSignature");

	UScrollableLevelSelectorWidget_C_BndEvt__ScrollButtonRight_K2Node_ComponentBoundEvent_16_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.BndEvt__ScrollButtonLeft_K2Node_ComponentBoundEvent_33_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UScrollableLevelSelectorWidget_C::BndEvt__ScrollButtonLeft_K2Node_ComponentBoundEvent_33_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.BndEvt__ScrollButtonLeft_K2Node_ComponentBoundEvent_33_OnButtonReleasedEvent__DelegateSignature");

	UScrollableLevelSelectorWidget_C_BndEvt__ScrollButtonLeft_K2Node_ComponentBoundEvent_33_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.ExecuteUbergraph_ScrollableLevelSelectorWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScrollableLevelSelectorWidget_C::ExecuteUbergraph_ScrollableLevelSelectorWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.ExecuteUbergraph_ScrollableLevelSelectorWidget");

	UScrollableLevelSelectorWidget_C_ExecuteUbergraph_ScrollableLevelSelectorWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.CurrentLevel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLevelStruct            Level                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UScrollableLevelSelectorWidget_C::CurrentLevel__DelegateSignature(const struct FLevelStruct& Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScrollableLevelSelectorWidget.ScrollableLevelSelectorWidget_C.CurrentLevel__DelegateSignature");

	UScrollableLevelSelectorWidget_C_CurrentLevel__DelegateSignature_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
