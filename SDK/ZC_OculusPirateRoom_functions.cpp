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

// Function OculusPirateRoom.OculusPirateRoom_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOculusPirateRoom_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusPirateRoom.OculusPirateRoom_C.UserConstructionScript");

	AOculusPirateRoom_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusPirateRoom.OculusPirateRoom_C.OnFailure_2DC541EF4027990F810BE0BE71A8AC5A
// (BlueprintCallable, BlueprintEvent)

void AOculusPirateRoom_C::OnFailure_2DC541EF4027990F810BE0BE71A8AC5A()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusPirateRoom.OculusPirateRoom_C.OnFailure_2DC541EF4027990F810BE0BE71A8AC5A");

	AOculusPirateRoom_C_OnFailure_2DC541EF4027990F810BE0BE71A8AC5A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusPirateRoom.OculusPirateRoom_C.OnSuccess_2DC541EF4027990F810BE0BE71A8AC5A
// (BlueprintCallable, BlueprintEvent)

void AOculusPirateRoom_C::OnSuccess_2DC541EF4027990F810BE0BE71A8AC5A()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusPirateRoom.OculusPirateRoom_C.OnSuccess_2DC541EF4027990F810BE0BE71A8AC5A");

	AOculusPirateRoom_C_OnSuccess_2DC541EF4027990F810BE0BE71A8AC5A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusPirateRoom.OculusPirateRoom_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOculusPirateRoom_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusPirateRoom.OculusPirateRoom_C.ReceiveBeginPlay");

	AOculusPirateRoom_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusPirateRoom.OculusPirateRoom_C.ExecuteUbergraph_OculusPirateRoom
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOculusPirateRoom_C::ExecuteUbergraph_OculusPirateRoom(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusPirateRoom.OculusPirateRoom_C.ExecuteUbergraph_OculusPirateRoom");

	AOculusPirateRoom_C_ExecuteUbergraph_OculusPirateRoom_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
