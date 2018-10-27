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

// Function TargetInterface.TargetInterface_C.GetTargetData
struct UTargetInterface_C_GetTargetData_Params
{
	TArray<struct FTargetData>                         NewParam;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function TargetInterface.TargetInterface_C.GetTargetLocation
struct UTargetInterface_C_GetTargetLocation_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, OutParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
