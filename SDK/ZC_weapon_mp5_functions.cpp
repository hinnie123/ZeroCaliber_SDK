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

// Function weapon_mp5.weapon_MP5_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aweapon_MP5_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_mp5.weapon_MP5_C.UserConstructionScript");

	Aweapon_MP5_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
