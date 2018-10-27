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

// Function LevelWidget.LevelWidget_C.GetLocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Locked                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULevelWidget_C::GetLocked(bool* Locked)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelWidget.LevelWidget_C.GetLocked");

	ULevelWidget_C_GetLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Locked != nullptr)
		*Locked = params.Locked;
}


// Function LevelWidget.LevelWidget_C.SetLocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Locked                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULevelWidget_C::SetLocked(bool Locked)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelWidget.LevelWidget_C.SetLocked");

	ULevelWidget_C_SetLocked_Params params;
	params.Locked = Locked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelWidget.LevelWidget_C.SetLevelName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   LevelName                      (BlueprintVisible, BlueprintReadOnly, Parm)

void ULevelWidget_C::SetLevelName(const struct FText& LevelName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelWidget.LevelWidget_C.SetLevelName");

	ULevelWidget_C_SetLevelName_Params params;
	params.LevelName = LevelName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelWidget.LevelWidget_C.GetWidgetSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Size                           (Parm, OutParm, IsPlainOldData)

void ULevelWidget_C::GetWidgetSize(struct FVector2D* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelWidget.LevelWidget_C.GetWidgetSize");

	ULevelWidget_C_GetWidgetSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Size != nullptr)
		*Size = params.Size;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
