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

// Function BeginPlayDestroySession.BeginPlayDestroySession_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABeginPlayDestroySession_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BeginPlayDestroySession.BeginPlayDestroySession_C.UserConstructionScript");

	ABeginPlayDestroySession_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeginPlayDestroySession.BeginPlayDestroySession_C.OnFailure_143742C14A54D0A71DBAC49776CF083C
// (BlueprintCallable, BlueprintEvent)

void ABeginPlayDestroySession_C::OnFailure_143742C14A54D0A71DBAC49776CF083C()
{
	static auto fn = UObject::FindObject<UFunction>("Function BeginPlayDestroySession.BeginPlayDestroySession_C.OnFailure_143742C14A54D0A71DBAC49776CF083C");

	ABeginPlayDestroySession_C_OnFailure_143742C14A54D0A71DBAC49776CF083C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeginPlayDestroySession.BeginPlayDestroySession_C.OnSuccess_143742C14A54D0A71DBAC49776CF083C
// (BlueprintCallable, BlueprintEvent)

void ABeginPlayDestroySession_C::OnSuccess_143742C14A54D0A71DBAC49776CF083C()
{
	static auto fn = UObject::FindObject<UFunction>("Function BeginPlayDestroySession.BeginPlayDestroySession_C.OnSuccess_143742C14A54D0A71DBAC49776CF083C");

	ABeginPlayDestroySession_C_OnSuccess_143742C14A54D0A71DBAC49776CF083C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeginPlayDestroySession.BeginPlayDestroySession_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABeginPlayDestroySession_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BeginPlayDestroySession.BeginPlayDestroySession_C.ReceiveBeginPlay");

	ABeginPlayDestroySession_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeginPlayDestroySession.BeginPlayDestroySession_C.ExecuteUbergraph_BeginPlayDestroySession
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABeginPlayDestroySession_C::ExecuteUbergraph_BeginPlayDestroySession(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BeginPlayDestroySession.BeginPlayDestroySession_C.ExecuteUbergraph_BeginPlayDestroySession");

	ABeginPlayDestroySession_C_ExecuteUbergraph_BeginPlayDestroySession_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
