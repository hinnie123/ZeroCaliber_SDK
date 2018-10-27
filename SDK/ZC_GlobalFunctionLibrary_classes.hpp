#pragma once

// ZeroCaliber (0.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GlobalFunctionLibrary.GlobalFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UGlobalFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GlobalFunctionLibrary.GlobalFunctionLibrary_C");
		return ptr;
	}


	void STATIC_RemoveInvalidActors(class UObject* __WorldContext, TArray<class AActor*>* EnemiesList);
	void STATIC_GetNearestActor(const struct FVector& Location, class UObject* Instigator, class UObject* __WorldContext, TArray<class AActor*>* inArray, class AActor** NearestActor, float* NearestDistance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
