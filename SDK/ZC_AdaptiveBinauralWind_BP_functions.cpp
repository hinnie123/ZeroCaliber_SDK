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

// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Set Volumes
// (Public, BlueprintCallable, BlueprintEvent)

void AAdaptiveBinauralWind_BP_C::Set_Volumes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Set Volumes");

	AAdaptiveBinauralWind_BP_C_Set_Volumes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Calculate Wind Volumes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAdaptiveBinauralWind_BP_C::Calculate_Wind_Volumes(float Delta_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Calculate Wind Volumes");

	AAdaptiveBinauralWind_BP_C_Calculate_Wind_Volumes_Params params;
	params.Delta_Time = Delta_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Calculate Low Frequency Right Wind
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Wind_Low_R_Volume              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAdaptiveBinauralWind_BP_C::Calculate_Low_Frequency_Right_Wind(float* Wind_Low_R_Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Calculate Low Frequency Right Wind");

	AAdaptiveBinauralWind_BP_C_Calculate_Low_Frequency_Right_Wind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Wind_Low_R_Volume != nullptr)
		*Wind_Low_R_Volume = params.Wind_Low_R_Volume;
}


// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Calculate Low Frequency Left Wind
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Wind_Low_L_Volume              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAdaptiveBinauralWind_BP_C::Calculate_Low_Frequency_Left_Wind(float* Wind_Low_L_Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Calculate Low Frequency Left Wind");

	AAdaptiveBinauralWind_BP_C_Calculate_Low_Frequency_Left_Wind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Wind_Low_L_Volume != nullptr)
		*Wind_Low_L_Volume = params.Wind_Low_L_Volume;
}


// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAdaptiveBinauralWind_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.UserConstructionScript");

	AAdaptiveBinauralWind_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AAdaptiveBinauralWind_BP_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Timeline_0__FinishedFunc");

	AAdaptiveBinauralWind_BP_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AAdaptiveBinauralWind_BP_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Timeline_0__UpdateFunc");

	AAdaptiveBinauralWind_BP_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Linear alpha 3__FinishedFunc
// (BlueprintEvent)

void AAdaptiveBinauralWind_BP_C::Linear_alpha_3__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Linear alpha 3__FinishedFunc");

	AAdaptiveBinauralWind_BP_C_Linear_alpha_3__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Linear alpha 3__UpdateFunc
// (BlueprintEvent)

void AAdaptiveBinauralWind_BP_C::Linear_alpha_3__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Linear alpha 3__UpdateFunc");

	AAdaptiveBinauralWind_BP_C_Linear_alpha_3__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Wind_Gust__FinishedFunc
// (BlueprintEvent)

void AAdaptiveBinauralWind_BP_C::Wind_Gust__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Wind_Gust__FinishedFunc");

	AAdaptiveBinauralWind_BP_C_Wind_Gust__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Wind_Gust__UpdateFunc
// (BlueprintEvent)

void AAdaptiveBinauralWind_BP_C::Wind_Gust__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Wind_Gust__UpdateFunc");

	AAdaptiveBinauralWind_BP_C_Wind_Gust__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Linear alpha 4__FinishedFunc
// (BlueprintEvent)

void AAdaptiveBinauralWind_BP_C::Linear_alpha_4__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Linear alpha 4__FinishedFunc");

	AAdaptiveBinauralWind_BP_C_Linear_alpha_4__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Linear alpha 4__UpdateFunc
// (BlueprintEvent)

void AAdaptiveBinauralWind_BP_C::Linear_alpha_4__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Linear alpha 4__UpdateFunc");

	AAdaptiveBinauralWind_BP_C_Linear_alpha_4__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Linear alpha__FinishedFunc
// (BlueprintEvent)

void AAdaptiveBinauralWind_BP_C::Linear_alpha__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Linear alpha__FinishedFunc");

	AAdaptiveBinauralWind_BP_C_Linear_alpha__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Linear alpha__UpdateFunc
// (BlueprintEvent)

void AAdaptiveBinauralWind_BP_C::Linear_alpha__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Linear alpha__UpdateFunc");

	AAdaptiveBinauralWind_BP_C_Linear_alpha__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAdaptiveBinauralWind_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.ReceiveBeginPlay");

	AAdaptiveBinauralWind_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAdaptiveBinauralWind_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	AAdaptiveBinauralWind_BP_C_BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AAdaptiveBinauralWind_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AAdaptiveBinauralWind_BP_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Reset Arrow Size
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AAdaptiveBinauralWind_BP_C::Reset_Arrow_Size()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Reset Arrow Size");

	AAdaptiveBinauralWind_BP_C_Reset_Arrow_Size_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.ResetIntensity
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AAdaptiveBinauralWind_BP_C::ResetIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.ResetIntensity");

	AAdaptiveBinauralWind_BP_C_ResetIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.GustCast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AAdaptiveBinauralWind_BP_C::GustCast()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.GustCast");

	AAdaptiveBinauralWind_BP_C_GustCast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAdaptiveBinauralWind_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.ReceiveTick");

	AAdaptiveBinauralWind_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Direction 2
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AAdaptiveBinauralWind_BP_C::Direction_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Direction 2");

	AAdaptiveBinauralWind_BP_C_Direction_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Wind Direction
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AAdaptiveBinauralWind_BP_C::Wind_Direction()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.Wind Direction");

	AAdaptiveBinauralWind_BP_C_Wind_Direction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.ExecuteUbergraph_AdaptiveBinauralWind_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAdaptiveBinauralWind_BP_C::ExecuteUbergraph_AdaptiveBinauralWind_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdaptiveBinauralWind_BP.AdaptiveBinauralWind_BP_C.ExecuteUbergraph_AdaptiveBinauralWind_BP");

	AAdaptiveBinauralWind_BP_C_ExecuteUbergraph_AdaptiveBinauralWind_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
