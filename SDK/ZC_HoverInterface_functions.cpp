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

// Function HoverInterface.HoverInterface_C.Unhover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHoverInterface_C::Unhover(class UPrimitiveComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverInterface.HoverInterface_C.Unhover");

	UHoverInterface_C_Unhover_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HoverInterface.HoverInterface_C.Hover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHoverEnum>        InteractType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHoverInterface_C::Hover(TEnumAsByte<EHoverEnum> InteractType, class USceneComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoverInterface.HoverInterface_C.Hover");

	UHoverInterface_C_Hover_Params params;
	params.InteractType = InteractType;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
