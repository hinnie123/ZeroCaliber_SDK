#pragma once

// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShootingTargetBase.ShootingTargetBase_C
// 0x0048 (0x0421 - 0x03D9)
class AShootingTargetBase_C : public AActivatableBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        ShootingTargetMesh;                                       // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ShootingTargetRoot;                                       // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TimelineReset_HitTrack_2C45E21446C51FBCEC1877B2E3DEC804;  // 0x03F8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TimelineReset__Direction_2C45E21446C51FBCEC1877B2E3DEC804;// 0x03FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03FD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TimelineReset;                                            // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TimelineHit_HitTrack_10A8D73347A544E9CB47D8ABC51A77A8;    // 0x0408(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TimelineHit__Direction_10A8D73347A544E9CB47D8ABC51A77A8;  // 0x040C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x040D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TimelineHit;                                              // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Hit;                                                      // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0419(0x0003) MISSED OFFSET
	float                                              ResetTime;                                                // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoReset;                                                // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShootingTargetBase.ShootingTargetBase_C");
		return ptr;
	}


	void IsAlive(bool* Alive);
	void UserConstructionScript();
	void TimelineHit__FinishedFunc();
	void TimelineHit__UpdateFunc();
	void TimelineReset__FinishedFunc();
	void TimelineReset__UpdateFunc();
	void ApplyDamageCustom(float Damage, class UClass* DamageType, class AController* IntigatedBy, class AActor* DamageCauser, const struct FName& HitBoneName, class UPrimitiveComponent* HitComponent, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& DamageCauserOriginalVelocity);
	void ResetTarget();
	void Activated();
	void ReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser);
	void FlipDownLocal();
	void FlipDownMulti();
	void FlipUpLocal();
	void FlipUpMulti();
	void ExecuteUbergraph_ShootingTargetBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
