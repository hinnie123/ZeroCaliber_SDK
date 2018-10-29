#pragma once

// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AttachmentBase.AttachmentBase_C.UserConstructionScript
struct AAttachmentBase_C_UserConstructionScript_Params
{
};

// Function AttachmentBase.AttachmentBase_C.OnGrip
struct AAttachmentBase_C_OnGrip_Params
{
	class UGripMotionControllerComponent**             GrippingController;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation*                    GripInformation;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AttachmentBase.AttachmentBase_C.Disappear
struct AAttachmentBase_C_Disappear_Params
{
};

// Function AttachmentBase.AttachmentBase_C.OnGripRelease
struct AAttachmentBase_C_OnGripRelease_Params
{
	class UGripMotionControllerComponent**             ReleasingController;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBPActorGripInformation*                    GripInformation;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool*                                              bWasSocketed;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AttachmentBase.AttachmentBase_C.ExecuteUbergraph_AttachmentBase
struct AAttachmentBase_C_ExecuteUbergraph_AttachmentBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
