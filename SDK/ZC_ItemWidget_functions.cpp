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

// Function ItemWidget.ItemWidget_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemWidget_C::Initialize(const struct FText& Text, class UObject* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.Initialize");

	UItemWidget_C_Initialize_Params params;
	params.Text = Text;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemWidget.ItemWidget_C.ExecuteUbergraph_ItemWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemWidget_C::ExecuteUbergraph_ItemWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemWidget.ItemWidget_C.ExecuteUbergraph_ItemWidget");

	UItemWidget_C_ExecuteUbergraph_ItemWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
