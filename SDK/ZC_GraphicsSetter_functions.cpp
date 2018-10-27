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

// Function GraphicsSetter.GraphicsSetter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGraphicsSetter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GraphicsSetter.GraphicsSetter_C.UserConstructionScript");

	AGraphicsSetter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GraphicsSetter.GraphicsSetter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGraphicsSetter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GraphicsSetter.GraphicsSetter_C.ReceiveBeginPlay");

	AGraphicsSetter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GraphicsSetter.GraphicsSetter_C.ExecuteUbergraph_GraphicsSetter
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGraphicsSetter_C::ExecuteUbergraph_GraphicsSetter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GraphicsSetter.GraphicsSetter_C.ExecuteUbergraph_GraphicsSetter");

	AGraphicsSetter_C_ExecuteUbergraph_GraphicsSetter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
