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

// Function Steam_VR_Player_Controller.Steam_VR_Player_Controller_C.OffsetSpawnByCapsuleHalfHeight
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerStart*            PlayerStart                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OffsetVector                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 OffsetVectorFinal              (Parm, OutParm, IsPlainOldData)

void ASteam_VR_Player_Controller_C::OffsetSpawnByCapsuleHalfHeight(class APlayerStart* PlayerStart, const struct FVector& OffsetVector, struct FVector* OffsetVectorFinal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steam_VR_Player_Controller.Steam_VR_Player_Controller_C.OffsetSpawnByCapsuleHalfHeight");

	ASteam_VR_Player_Controller_C_OffsetSpawnByCapsuleHalfHeight_Params params;
	params.PlayerStart = PlayerStart;
	params.OffsetVector = OffsetVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OffsetVectorFinal != nullptr)
		*OffsetVectorFinal = params.OffsetVectorFinal;
}


// Function Steam_VR_Player_Controller.Steam_VR_Player_Controller_C.InitiateHMD
// (Public, BlueprintCallable, BlueprintEvent)

void ASteam_VR_Player_Controller_C::InitiateHMD()
{
	static auto fn = UObject::FindObject<UFunction>("Function Steam_VR_Player_Controller.Steam_VR_Player_Controller_C.InitiateHMD");

	ASteam_VR_Player_Controller_C_InitiateHMD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steam_VR_Player_Controller.Steam_VR_Player_Controller_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASteam_VR_Player_Controller_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Steam_VR_Player_Controller.Steam_VR_Player_Controller_C.UserConstructionScript");

	ASteam_VR_Player_Controller_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steam_VR_Player_Controller.Steam_VR_Player_Controller_C.ReturnHMDStatus
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHMDEnabled                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HMDOffset                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                HMDRotation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ASteam_VR_Player_Controller_C::ReturnHMDStatus(bool bHMDEnabled, const struct FVector& HMDOffset, const struct FRotator& HMDRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steam_VR_Player_Controller.Steam_VR_Player_Controller_C.ReturnHMDStatus");

	ASteam_VR_Player_Controller_C_ReturnHMDStatus_Params params;
	params.bHMDEnabled = bHMDEnabled;
	params.HMDOffset = HMDOffset;
	params.HMDRotation = HMDRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steam_VR_Player_Controller.Steam_VR_Player_Controller_C.InitHMD
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHasHMD                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASteam_VR_Player_Controller_C::InitHMD(bool bHasHMD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steam_VR_Player_Controller.Steam_VR_Player_Controller_C.InitHMD");

	ASteam_VR_Player_Controller_C_InitHMD_Params params;
	params.bHasHMD = bHasHMD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steam_VR_Player_Controller.Steam_VR_Player_Controller_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASteam_VR_Player_Controller_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Steam_VR_Player_Controller.Steam_VR_Player_Controller_C.ReceiveBeginPlay");

	ASteam_VR_Player_Controller_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Steam_VR_Player_Controller.Steam_VR_Player_Controller_C.ExecuteUbergraph_Steam_VR_Player_Controller
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASteam_VR_Player_Controller_C::ExecuteUbergraph_Steam_VR_Player_Controller(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Steam_VR_Player_Controller.Steam_VR_Player_Controller_C.ExecuteUbergraph_Steam_VR_Player_Controller");

	ASteam_VR_Player_Controller_C_ExecuteUbergraph_Steam_VR_Player_Controller_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
