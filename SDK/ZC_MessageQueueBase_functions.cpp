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

// Function MessageQueueBase.MessageQueueBase_C.AddSubtitleInstantly
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMessageStruct          Subtitle                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ClearQueue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMessageQueueBase_C::AddSubtitleInstantly(const struct FMessageStruct& Subtitle, bool ClearQueue)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageQueueBase.MessageQueueBase_C.AddSubtitleInstantly");

	AMessageQueueBase_C_AddSubtitleInstantly_Params params;
	params.Subtitle = Subtitle;
	params.ClearQueue = ClearQueue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageQueueBase.MessageQueueBase_C.AddSubtitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMessageStruct          Subtitle                       (BlueprintVisible, BlueprintReadOnly, Parm)

void AMessageQueueBase_C::AddSubtitle(const struct FMessageStruct& Subtitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageQueueBase.MessageQueueBase_C.AddSubtitle");

	AMessageQueueBase_C_AddSubtitle_Params params;
	params.Subtitle = Subtitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageQueueBase.MessageQueueBase_C.HasMoreSubtitles
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMessageQueueBase_C::HasMoreSubtitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageQueueBase.MessageQueueBase_C.HasMoreSubtitles");

	AMessageQueueBase_C_HasMoreSubtitles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MessageQueueBase.MessageQueueBase_C.SetSubtitle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            Specified_Color                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AMessageQueueBase_C::SetSubtitle(const struct FText& InText, const struct FLinearColor& Specified_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageQueueBase.MessageQueueBase_C.SetSubtitle");

	AMessageQueueBase_C_SetSubtitle_Params params;
	params.InText = InText;
	params.Specified_Color = Specified_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageQueueBase.MessageQueueBase_C.SetMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            Specified_Color                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AMessageQueueBase_C::SetMessage(const struct FText& InText, const struct FLinearColor& Specified_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageQueueBase.MessageQueueBase_C.SetMessage");

	AMessageQueueBase_C_SetMessage_Params params;
	params.InText = InText;
	params.Specified_Color = Specified_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageQueueBase.MessageQueueBase_C.AddMessageInstantly
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMessageStruct          Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ClearQueue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMessageQueueBase_C::AddMessageInstantly(const struct FMessageStruct& Message, bool ClearQueue)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageQueueBase.MessageQueueBase_C.AddMessageInstantly");

	AMessageQueueBase_C_AddMessageInstantly_Params params;
	params.Message = Message;
	params.ClearQueue = ClearQueue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageQueueBase.MessageQueueBase_C.HasMoreMessages
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMessageQueueBase_C::HasMoreMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageQueueBase.MessageQueueBase_C.HasMoreMessages");

	AMessageQueueBase_C_HasMoreMessages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MessageQueueBase.MessageQueueBase_C.AddMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMessageStruct          Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void AMessageQueueBase_C::AddMessage(const struct FMessageStruct& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageQueueBase.MessageQueueBase_C.AddMessage");

	AMessageQueueBase_C_AddMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageQueueBase.MessageQueueBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMessageQueueBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageQueueBase.MessageQueueBase_C.UserConstructionScript");

	AMessageQueueBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageQueueBase.MessageQueueBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMessageQueueBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageQueueBase.MessageQueueBase_C.ReceiveBeginPlay");

	AMessageQueueBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageQueueBase.MessageQueueBase_C.ShowNextMessage
// (BlueprintCallable, BlueprintEvent)

void AMessageQueueBase_C::ShowNextMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageQueueBase.MessageQueueBase_C.ShowNextMessage");

	AMessageQueueBase_C_ShowNextMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageQueueBase.MessageQueueBase_C.EndMessage
// (BlueprintCallable, BlueprintEvent)

void AMessageQueueBase_C::EndMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageQueueBase.MessageQueueBase_C.EndMessage");

	AMessageQueueBase_C_EndMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageQueueBase.MessageQueueBase_C.ShowNextSubtitle
// (BlueprintCallable, BlueprintEvent)

void AMessageQueueBase_C::ShowNextSubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageQueueBase.MessageQueueBase_C.ShowNextSubtitle");

	AMessageQueueBase_C_ShowNextSubtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageQueueBase.MessageQueueBase_C.EndSubtitle
// (BlueprintCallable, BlueprintEvent)

void AMessageQueueBase_C::EndSubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageQueueBase.MessageQueueBase_C.EndSubtitle");

	AMessageQueueBase_C_EndSubtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageQueueBase.MessageQueueBase_C.OnSubtitleOptionChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOptionsStruct2         Options                        (BlueprintVisible, BlueprintReadOnly, Parm)

void AMessageQueueBase_C::OnSubtitleOptionChange(const struct FOptionsStruct2& Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageQueueBase.MessageQueueBase_C.OnSubtitleOptionChange");

	AMessageQueueBase_C_OnSubtitleOptionChange_Params params;
	params.Options = Options;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MessageQueueBase.MessageQueueBase_C.ExecuteUbergraph_MessageQueueBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMessageQueueBase_C::ExecuteUbergraph_MessageQueueBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MessageQueueBase.MessageQueueBase_C.ExecuteUbergraph_MessageQueueBase");

	AMessageQueueBase_C_ExecuteUbergraph_MessageQueueBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
