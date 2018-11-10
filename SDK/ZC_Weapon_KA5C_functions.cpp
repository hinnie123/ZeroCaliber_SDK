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

// Function Weapon_KA5C.Weapon_KA5C_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeapon_KA5C_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_KA5C.Weapon_KA5C_C.UserConstructionScript");

	AWeapon_KA5C_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
