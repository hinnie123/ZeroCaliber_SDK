#pragma once

// ZeroCaliber (0.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MessageQueueBase.MessageQueueBase_C.AddSubtitleInstantly
struct AMessageQueueBase_C_AddSubtitleInstantly_Params
{
	struct FMessageStruct                              Subtitle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ClearQueue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageQueueBase.MessageQueueBase_C.AddSubtitle
struct AMessageQueueBase_C_AddSubtitle_Params
{
	struct FMessageStruct                              Subtitle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MessageQueueBase.MessageQueueBase_C.HasMoreSubtitles
struct AMessageQueueBase_C_HasMoreSubtitles_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MessageQueueBase.MessageQueueBase_C.SetSubtitle
struct AMessageQueueBase_C_SetSubtitle_Params
{
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                Specified_Color;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function MessageQueueBase.MessageQueueBase_C.SetMessage
struct AMessageQueueBase_C_SetMessage_Params
{
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                Specified_Color;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function MessageQueueBase.MessageQueueBase_C.AddMessageInstantly
struct AMessageQueueBase_C_AddMessageInstantly_Params
{
	struct FMessageStruct                              Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ClearQueue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageQueueBase.MessageQueueBase_C.HasMoreMessages
struct AMessageQueueBase_C_HasMoreMessages_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MessageQueueBase.MessageQueueBase_C.AddMessage
struct AMessageQueueBase_C_AddMessage_Params
{
	struct FMessageStruct                              Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MessageQueueBase.MessageQueueBase_C.UserConstructionScript
struct AMessageQueueBase_C_UserConstructionScript_Params
{
};

// Function MessageQueueBase.MessageQueueBase_C.ReceiveBeginPlay
struct AMessageQueueBase_C_ReceiveBeginPlay_Params
{
};

// Function MessageQueueBase.MessageQueueBase_C.ShowNextMessage
struct AMessageQueueBase_C_ShowNextMessage_Params
{
};

// Function MessageQueueBase.MessageQueueBase_C.EndMessage
struct AMessageQueueBase_C_EndMessage_Params
{
};

// Function MessageQueueBase.MessageQueueBase_C.ShowNextSubtitle
struct AMessageQueueBase_C_ShowNextSubtitle_Params
{
};

// Function MessageQueueBase.MessageQueueBase_C.EndSubtitle
struct AMessageQueueBase_C_EndSubtitle_Params
{
};

// Function MessageQueueBase.MessageQueueBase_C.OnSubtitleOptionChange
struct AMessageQueueBase_C_OnSubtitleOptionChange_Params
{
	struct FOptionsStruct2                             Options;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MessageQueueBase.MessageQueueBase_C.ExecuteUbergraph_MessageQueueBase
struct AMessageQueueBase_C_ExecuteUbergraph_MessageQueueBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
