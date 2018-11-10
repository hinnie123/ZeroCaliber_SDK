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

// Function GlobalFunctionLibrary.GlobalFunctionLibrary_C.RemoveInvalidActors
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          EnemiesList                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalFunctionLibrary_C::STATIC_RemoveInvalidActors(class UObject* __WorldContext, TArray<class AActor*>* EnemiesList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalFunctionLibrary.GlobalFunctionLibrary_C.RemoveInvalidActors");

	UGlobalFunctionLibrary_C_RemoveInvalidActors_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnemiesList != nullptr)
		*EnemiesList = params.EnemiesList;
}


// Function GlobalFunctionLibrary.GlobalFunctionLibrary_C.GetNearestActor
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          inArray                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  NearestActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          NearestDistance                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalFunctionLibrary_C::STATIC_GetNearestActor(const struct FVector& Location, class UObject* Instigator, class UObject* __WorldContext, TArray<class AActor*>* inArray, class AActor** NearestActor, float* NearestDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalFunctionLibrary.GlobalFunctionLibrary_C.GetNearestActor");

	UGlobalFunctionLibrary_C_GetNearestActor_Params params;
	params.Location = Location;
	params.Instigator = Instigator;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (inArray != nullptr)
		*inArray = params.inArray;
	if (NearestActor != nullptr)
		*NearestActor = params.NearestActor;
	if (NearestDistance != nullptr)
		*NearestDistance = params.NearestDistance;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
