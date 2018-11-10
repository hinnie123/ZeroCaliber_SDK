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

// Function LevelSelectorActor.LevelSelectorActor_C.InitCampaignsStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ALevelSelectorActor_C::InitCampaignsStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSelectorActor.LevelSelectorActor_C.InitCampaignsStatus");

	ALevelSelectorActor_C_InitCampaignsStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSelectorActor.LevelSelectorActor_C.GetCampaignStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECampaignStatusEnum> Status                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALevelSelectorActor_C::GetCampaignStatus(TEnumAsByte<ECampaignStatusEnum>* Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSelectorActor.LevelSelectorActor_C.GetCampaignStatus");

	ALevelSelectorActor_C_GetCampaignStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Status != nullptr)
		*Status = params.Status;
}


// Function LevelSelectorActor.LevelSelectorActor_C.LevelDetailsScalingAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PosStart                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PosEnd                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ScaleStart                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ScaleEnd                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALevelSelectorActor_C::LevelDetailsScalingAnim(float Alpha, float PosStart, float PosEnd, float ScaleStart, float ScaleEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSelectorActor.LevelSelectorActor_C.LevelDetailsScalingAnim");

	ALevelSelectorActor_C_LevelDetailsScalingAnim_Params params;
	params.Alpha = Alpha;
	params.PosStart = PosStart;
	params.PosEnd = PosEnd;
	params.ScaleStart = ScaleStart;
	params.ScaleEnd = ScaleEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSelectorActor.LevelSelectorActor_C.SetLevelDetailsPos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ALevelSelectorActor_C::SetLevelDetailsPos(const struct FVector2D& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSelectorActor.LevelSelectorActor_C.SetLevelDetailsPos");

	ALevelSelectorActor_C_SetLevelDetailsPos_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSelectorActor.LevelSelectorActor_C.LoadDataTables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*              DataTable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALevelSelectorActor_C::LoadDataTables(class UDataTable* DataTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSelectorActor.LevelSelectorActor_C.LoadDataTables");

	ALevelSelectorActor_C_LoadDataTables_Params params;
	params.DataTable = DataTable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSelectorActor.LevelSelectorActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALevelSelectorActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSelectorActor.LevelSelectorActor_C.UserConstructionScript");

	ALevelSelectorActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSelectorActor.LevelSelectorActor_C.ScaleDetailsPanelUp__FinishedFunc
// (BlueprintEvent)

void ALevelSelectorActor_C::ScaleDetailsPanelUp__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSelectorActor.LevelSelectorActor_C.ScaleDetailsPanelUp__FinishedFunc");

	ALevelSelectorActor_C_ScaleDetailsPanelUp__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSelectorActor.LevelSelectorActor_C.ScaleDetailsPanelUp__UpdateFunc
// (BlueprintEvent)

void ALevelSelectorActor_C::ScaleDetailsPanelUp__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSelectorActor.LevelSelectorActor_C.ScaleDetailsPanelUp__UpdateFunc");

	ALevelSelectorActor_C_ScaleDetailsPanelUp__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSelectorActor.LevelSelectorActor_C.ScaleDetailsPanelDown__FinishedFunc
// (BlueprintEvent)

void ALevelSelectorActor_C::ScaleDetailsPanelDown__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSelectorActor.LevelSelectorActor_C.ScaleDetailsPanelDown__FinishedFunc");

	ALevelSelectorActor_C_ScaleDetailsPanelDown__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSelectorActor.LevelSelectorActor_C.ScaleDetailsPanelDown__UpdateFunc
// (BlueprintEvent)

void ALevelSelectorActor_C::ScaleDetailsPanelDown__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSelectorActor.LevelSelectorActor_C.ScaleDetailsPanelDown__UpdateFunc");

	ALevelSelectorActor_C_ScaleDetailsPanelDown__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSelectorActor.LevelSelectorActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALevelSelectorActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSelectorActor.LevelSelectorActor_C.ReceiveBeginPlay");

	ALevelSelectorActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSelectorActor.LevelSelectorActor_C.SpawningCampaign
// (BlueprintCallable, BlueprintEvent)

void ALevelSelectorActor_C::SpawningCampaign()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSelectorActor.LevelSelectorActor_C.SpawningCampaign");

	ALevelSelectorActor_C_SpawningCampaign_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSelectorActor.LevelSelectorActor_C.LevelOnReleasedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCampaignWidget_C*       LevelWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ALevelSelectorActor_C::LevelOnReleasedEvent(class UCampaignWidget_C* LevelWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSelectorActor.LevelSelectorActor_C.LevelOnReleasedEvent");

	ALevelSelectorActor_C_LevelOnReleasedEvent_Params params;
	params.LevelWidget = LevelWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSelectorActor.LevelSelectorActor_C.LevelDetailBackBtnOnReleased
// (BlueprintCallable, BlueprintEvent)

void ALevelSelectorActor_C::LevelDetailBackBtnOnReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSelectorActor.LevelSelectorActor_C.LevelDetailBackBtnOnReleased");

	ALevelSelectorActor_C_LevelDetailBackBtnOnReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSelectorActor.LevelSelectorActor_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ALevelSelectorActor_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSelectorActor.LevelSelectorActor_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ALevelSelectorActor_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function LevelSelectorActor.LevelSelectorActor_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALevelSelectorActor_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSelectorActor.LevelSelectorActor_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	ALevelSelectorActor_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSelectorActor.LevelSelectorActor_C.ExecuteUbergraph_LevelSelectorActor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALevelSelectorActor_C::ExecuteUbergraph_LevelSelectorActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSelectorActor.LevelSelectorActor_C.ExecuteUbergraph_LevelSelectorActor");

	ALevelSelectorActor_C_ExecuteUbergraph_LevelSelectorActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
