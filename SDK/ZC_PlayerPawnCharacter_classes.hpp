#pragma once

// ZeroCaliber (0.6.0 EA) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerPawnCharacter.PlayerPawnCharacter_C
// 0x05F7 (0x1067 - 0x0A70)
class APlayerPawnCharacter_C : public AVive_PawnCharacter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A70(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            EarLeftCollision;                                         // 0x0A78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            EarRightCollision;                                        // 0x0A80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        AmmoBag_Combined;                                         // 0x0A88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      HeadSkeletalMesh;                                         // 0x0A90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            GrenadeSlot2Sphere;                                       // 0x0A98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            GrenadeSlotSphere;                                        // 0x0AA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            WeaponSlotSecondarySphere;                                // 0x0AA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            WeaponSlotPrimarySphere;                                  // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVRNotificationsComponent*                   VRNotifications;                                          // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             MenuArrowRight;                                           // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            NameWidget;                                               // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        DeathPPEffect;                                            // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             LaserBeamParent;                                          // 0x0AD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            OutlineSphere;                                            // 0x0AE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           ForcePullCapsuleLeft;                                     // 0x0AE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           ForcePullCapsuleRight;                                    // 0x0AF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             DeathWidgetArrow;                                         // 0x0AF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             VoiceAudio;                                               // 0x0B00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        GrenadeSlot2StaticMesh;                                   // 0x0B08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        GrenadeSlotStaticMesh;                                    // 0x0B10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        WeaponSlotSecondaryStaticMesh;                            // 0x0B18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             MenuArrow;                                                // 0x0B20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        WeaponSlotPrimaryStaticMesh;                              // 0x0B28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HandGlowLeft_HandGlow_7BC6CC68458F18457225639BE5002C10;   // 0x0B30(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    HandGlowLeft__Direction_7BC6CC68458F18457225639BE5002C10; // 0x0B34(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B35(0x0003) MISSED OFFSET
	class UTimelineComponent*                          HandGlowLeft;                                             // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HandGlowRight_HandGlow_0C51199B4118033B6248A09AC2C24E6B;  // 0x0B40(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    HandGlowRight__Direction_0C51199B4118033B6248A09AC2C24E6B;// 0x0B44(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0B45(0x0003) MISSED OFFSET
	class UTimelineComponent*                          HandGlowRight;                                            // 0x0B48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  LeftHandMeshRelativeTransform;                            // 0x0B50(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  RightHandMeshRelativeTransform;                           // 0x0B80(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketWeaponHandGripP1Right;                              // 0x0BB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketWeaponHandGripP1Left;                               // 0x0BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketWeaponHandGripS1Right;                              // 0x0BC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketWeaponHandGripS1Left;                               // 0x0BC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Running;                                                  // 0x0BD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0BD1(0x0003) MISSED OFFSET
	float                                              VelocityScalerWalk;                                       // 0x0BD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VelocityScalerWalkCurrent;                                // 0x0BD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VelocityScalerRun;                                        // 0x0BDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AWeaponBase_C*                               PrimarySlotAttached;                                      // 0x0BE0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AMenuActor_C*                                Menu;                                                     // 0x0BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               MenuActivated;                                            // 0x0BF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0BF1(0x0003) MISSED OFFSET
	float                                              BodyScale;                                                // 0x0BF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKTraceDistance;                                          // 0x0BF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKTraceDistanceCurrent;                                   // 0x0BFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightFootSocket;                                          // 0x0C00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LeftFootSocket;                                           // 0x0C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKInterpSpeed;                                            // 0x0C10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKoffsetRightFoot;                                        // 0x0C14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKoffsetLeftFoot;                                         // 0x0C18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HPStart;                                                  // 0x0C1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HPCurrent;                                                // 0x0C20(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0C24(0x0004) MISSED OFFSET
	class USoundBase*                                  SoundShortScream;                                         // 0x0C28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETeams>                                Team;                                                     // 0x0C30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0C31(0x0007) MISSED OFFSET
	class UClass*                                      MessageQueueType;                                         // 0x0C38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AMessageQueueBase_C*                         MessageQueue;                                             // 0x0C40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    Died;                                                     // 0x0C48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<TEnumAsByte<ETeams>>                        AllyTeams;                                                // 0x0C58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UVRGameInstanceVendetta_C*                   VRGameInstanceVendetta;                                   // 0x0C68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundGearMovementCrouch;                                  // 0x0C70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundGearMovementWalk;                                    // 0x0C78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundGearMovementRun;                                     // 0x0C80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SoundStepLast;                                            // 0x0C88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SoundStepMinInterval;                                     // 0x0C8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundStepMetalCrouch;                                     // 0x0C90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundStepMetalWalk;                                       // 0x0C98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundStepMetalRun;                                        // 0x0CA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundStepConcreteCrouch;                                  // 0x0CA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundStepConcreteWalk;                                    // 0x0CB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundStepConcreteRun;                                     // 0x0CB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundStepDirtCrouch;                                      // 0x0CC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundStepDirtWalk;                                        // 0x0CC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundStepDirtRun;                                         // 0x0CD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundStepDefault;                                         // 0x0CD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoHealMinTime;                                          // 0x0CE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoHealSpeed;                                            // 0x0CE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoHealAmount;                                           // 0x0CE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0CEC(0x0004) MISSED OFFSET
	struct FTimerHandle                                AutoHealWaitHandler;                                      // 0x0CF0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                AutoHealHandler;                                          // 0x0CF8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AWeaponBase_C*                               SecondarySlotAttached;                                    // 0x0D00(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AGrenadeBase_C*                              GrenadeSlotAttached;                                      // 0x0D08(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AGrenadeBase_C*                              GrenadeSlot2Attached;                                     // 0x0D10(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    PlayerDamaged;                                            // 0x0D18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              VoiceFadeOutTime;                                         // 0x0D28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0D2C(0x0004) MISSED OFFSET
	class USoundBase*                                  SoundImpact;                                              // 0x0D30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ImpactPSHead;                                             // 0x0D38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ImpactPS;                                                 // 0x0D40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketWeaponVRGripP1;                                     // 0x0D48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketNameHead;                                           // 0x0D50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketNameHeight;                                         // 0x0D58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerHeight;                                             // 0x0D60(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0D64(0x0004) MISSED OFFSET
	struct FName                                       BoneNamePelvis;                                           // 0x0D68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  BodySkeletalMeshRelativeTransform;                        // 0x0D70(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class ALevelData_C*                                LevelData;                                                // 0x0DA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActivatablePOI_Red_Revive_C*                RevivePOI;                                                // 0x0DA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              VelocityScalerRunCurrent;                                 // 0x0DB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0DB4(0x0004) MISSED OFFSET
	class USoundBase*                                  SoundStepGrassCrouch;                                     // 0x0DB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundStepGrassWalk;                                       // 0x0DC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundStepGrassRun;                                        // 0x0DC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AttachmentReleaseButtonPressed;                           // 0x0DD0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0DD1(0x0007) MISSED OFFSET
	class AEnemyCharacterBase_C*                       TargetedAllyRight;                                        // 0x0DD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AEnemyCharacterBase_C*                       TargetedAllyLeft;                                         // 0x0DE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               TargetedAllyLeftFadingOut;                                // 0x0DE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TargetedAllyRightFadingOut;                               // 0x0DE9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x6];                                       // 0x0DEA(0x0006) MISSED OFFSET
	TArray<class AGrippableStaticMeshActorBase_C*>     ForcePullableActorsRight;                                 // 0x0DF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AGrippableStaticMeshActorBase_C*>     ForcePullableActorsLeft;                                  // 0x0E00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AGrippableStaticMeshActorBase_C*             ForcePullableActorRight;                                  // 0x0E10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AGrippableStaticMeshActorBase_C*             ForcePullableActorLeft;                                   // 0x0E18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AGrippableStaticMeshActorBase_C*             ForcePullActorRight;                                      // 0x0E20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AGrippableStaticMeshActorBase_C*             ForcePullActorLeft;                                       // 0x0E28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     NearestObjectToHandLeft;                                  // 0x0E30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     NearestObjectToHandRight;                                 // 0x0E38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DMI_HandMeshRight;                                        // 0x0E40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DMI_HandMeshLeft;                                         // 0x0E48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketNameSpine03;                                        // 0x0E50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketNameLowerarmL;                                      // 0x0E58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketNameLowerarmR;                                      // 0x0E60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ProjectilesFired;                                         // 0x0E68(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ProjectilesHit;                                           // 0x0E6C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ProjectilesHitHead;                                       // 0x0E70(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Kills;                                                    // 0x0E74(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     InteractibleObjectLeft;                                   // 0x0E78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     InteractibleObjectRight;                                  // 0x0E80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TagAmmoBag;                                               // 0x0E88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TagNoClimb;                                               // 0x0E90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                CheckPoiArrowHandler;                                     // 0x0E98(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      DeathWidget;                                              // 0x0EA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                RevivePoiUpdateHandler;                                   // 0x0EA8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HandsEnabled;                                             // 0x0EB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0EB1(0x0007) MISSED OFFSET
	class UClass*                                      ShouldGrabRight;                                          // 0x0EB8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ShouldGrabLeft;                                           // 0x0EC0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x28];                                      // 0x0EC8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty PlayerPawnCharacter.PlayerPawnCharacter_C.PlayerImpactSoundFmod
	unsigned char                                      UnknownData14[0x28];                                      // 0x0EF0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty PlayerPawnCharacter.PlayerPawnCharacter_C.PlayerLowHealth
	class UPostProcessComponent*                       PPVDeath;                                                 // 0x0F18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FFMODEventInstance                          PlayerLowHealthSoundInstnce;                              // 0x0F20(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              HeartbeatStartPercentage;                                 // 0x0F28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EHandPose>                             HandPoseLeft;                                             // 0x0F2C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EHandPose>                             HandPoseLeftSocial;                                       // 0x0F2D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EHandPose>                             HandPoseRight;                                            // 0x0F2E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EHandPose>                             HandPoseRightSocial;                                      // 0x0F2F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFMODEvent*                                  SoundFootstep;                                            // 0x0F30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFMODEvent*                                  SoundGearMovement;                                        // 0x0F38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GripBlendValueLeft;                                       // 0x0F40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GripBlendValueRight;                                      // 0x0F44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MagazineSpawnAllowedLeft;                                 // 0x0F48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MagazineSpawnAllowedRight;                                // 0x0F49(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x6];                                       // 0x0F4A(0x0006) MISSED OFFSET
	struct FWeightedBlendable                          OutlineOn;                                                // 0x0F50(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWeightedBlendable                          OutlineOff;                                               // 0x0F60(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               MenuActivatedRight;                                       // 0x0F70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x0F71(0x0007) MISSED OFFSET
	class AMenuActor_GameInfo_C*                       MenuGameInfo;                                             // 0x0F78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PrimaryWeaponScale;                                       // 0x0F80(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SecondaryWeaponScale;                                     // 0x0F8C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GrenadeScale;                                             // 0x0F98(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Grenade2Scale;                                            // 0x0FA4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                Deaths;                                                   // 0x0FB0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0xC];                                       // 0x0FB4(0x000C) MISSED OFFSET
	struct FTransform                                  PrimarySlotRelativeTransform;                             // 0x0FC0(0x0030) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  SecondarySlotRelativeTransform;                           // 0x0FF0(0x0030) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	float                                              MC_L_TriggerValue;                                        // 0x1020(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MC_R_TriggerValue;                                        // 0x1024(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayerRank;                                               // 0x1028(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x102C(0x0004) MISSED OFFSET
	struct FTimerHandle                                InitializeNameHandler;                                    // 0x1030(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       HandNameLeft;                                             // 0x1038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HandNameRight;                                            // 0x1040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SoundFootStepReverb;                                      // 0x1048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsJoystickTurning;                                        // 0x104C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSnapTurningLeft;                                        // 0x104D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSnapTurningRight;                                       // 0x104E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x1];                                       // 0x104F(0x0001) MISSED OFFSET
	class AWeaponBase_C*                               GrippedWeaponWithOtherHand;                               // 0x1050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               SecondaryGripAsPrimary;                                   // 0x1058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x1059(0x0003) MISSED OFFSET
	float                                              GripSecondaryLerpTime;                                    // 0x105C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GripSecondaryLerpTimeCurrent;                             // 0x1060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsVoiceChatActivated;                                     // 0x1064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsRightEarOverlap;                                        // 0x1065(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsLeftEarOverlap;                                         // 0x1066(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawnCharacter.PlayerPawnCharacter_C");
		return ptr;
	}


	void GetKills(int* Kills);
	void GetProjectilesHitHead(int* ProjectilesHitHead);
	void GetProjectilesHit(int* ProjectilesHit);
	void GetProjectilesFired(int* ProjectilesFired);
	void GetAllyTeams(TArray<TEnumAsByte<ETeams>>* AllyTeams);
	void GetTeam(TEnumAsByte<ETeams>* Team);
	void IsAlive(bool* Alive);
	void GetTargetData(TArray<struct FTargetData>* NewParam);
	void GetTargetLocation(struct FVector* TargetLocation);
	void ResetVelocityScaler();
	void ForcePullEndCheck(class AActor* Actor, class USphereComponent* GrabSphere, class UGripMotionControllerComponent* CallingMotionController, class UGripMotionControllerComponent* OtherController, class AGrippableStaticMeshActorBase_C** ForcePullActor, class UObject** NearestObjectToHand);
	void SetHandsEnabled();
	void OnRep_PlayerHeight();
	float GetInputTurn_X();
	void OnRep_HPCurrent();
	void OptionsIsRightHandedChanged(bool IsRightHanded);
	void UpdateMCTriggerValues();
	void ReleaseMagazine();
	void OptionIsHeadOrientedLocomotionChanged(bool IsHeadOrientedLocomotion);
	void TryToSecondaryGripObject(class UGripMotionControllerComponent** Hand, class UGripMotionControllerComponent** OtherHand, class UObject** ObjectToTryToGrab, struct FGameplayTag* GripSecondaryTag, bool* ObjectImplementsInterface, struct FTransform* RelativeSecondaryTransform, bool* bHadSlot, bool* SecondaryGripped);
	void UpdateSmoothTurning();
	void UpdateSnapTurning();
	void SliderOutOfBoundsClick(class UGripMotionControllerComponent* CallingHand, bool IsGrip);
	void OnRep_PlayerRank();
	void InitializeRank();
	void CheckWeaponSlotCorrectAttach();
	void OnRep_GrenadeSlot2Attached();
	void OnRep_GrenadeSlotAttached();
	void OnRep_PrimarySlotAttached();
	void OnRep_SecondarySlotAttached();
	void ReloadWeaponScale();
	void SaveWeaponScale();
	void SwitchOutline(bool TurnOn);
	void TryToGrabObjectAfter(class UObject* ObjectToTryToGrab, class UGripMotionControllerComponent* Hand, class UGripMotionControllerComponent* OtherHand, bool IsSlotGrip);
	void CycleHandPoses(EControllerHand Hand);
	void AttachmentReleasedButtonStatusChangeDuringHover(bool* Changed);
	void InitializeName();
	void Initialize();
	void CheckSlotAttach(class AActor* ItemToSlot);
	void ShowSlots(class UObject* GripedItem);
	void EnableForcePull(EControllerHand Hand, bool Enable);
	void ShouldOutline(class AActor* Actor, bool* ShouldOutline);
	void ActivatePPDeath(float BlendWeight);
	void HideSlots(class UGripMotionControllerComponent* OtherHand);
	void ShowWeaponSlots(TEnumAsByte<EWeaponCategories> WeaponCategory);
	void ShowGrenadeSlots();
	void BeginPlayParent();
	void CheckNewMagazineShouldSpawn(class UGripMotionControllerComponent* Hand, class UGripMotionControllerComponent* OtherHand, bool* ShouldSpawn);
	void UpdateInteractibleObject();
	void GetNearestActorToLine(const struct FVector& LineOrigin, const struct FVector& LineDirection, TArray<class AActor*>* Actors, class AActor** NearestActor);
	void CheckGrippedItemDistanceWithController(class UGripMotionControllerComponent* Hand);
	void GetGrippedItemWithController(class UGripMotionControllerComponent* Hand, class AActor** GrippedItem);
	void CheckGrippedItemDistance();
	void UpdateHitIndicator();
	void CheckClimb(bool RightHand, bool* CanClimb);
	void HoverObject(class UGripMotionControllerComponent* Hand, class UObject* NewObject);
	void GetNearestObject(class UGripMotionControllerComponent* Hand, class USphereComponent* Overlap_Component, class UObject** NearestObject);
	void GetValidForcePullableActors(TArray<class AGrippableStaticMeshActorBase_C*>* Actors, TArray<class AGrippableStaticMeshActorBase_C*>* ValidActors);
	void GripDropOrUseObjectClean(class UGripMotionControllerComponent** CallingMotionController, class UGripMotionControllerComponent** OtherController, bool* CanCheckClimb, class UPrimitiveComponent** GrabSphere, struct FGameplayTagContainer* RelevantGameplayTags, bool* PerformedAction);
	void IsAttachmentReleaseButtonPressed(bool* Pressed);
	void DropOrUseSecondaryAttachment(class UGripMotionControllerComponent** Calling_Motion_Controller, class UGripMotionControllerComponent** Other_Controller, struct FGameplayTagContainer* GameplayTags, bool* DroppedOrUsedSecondary, bool* HadSecondary);
	void UpdateIKParams();
	void OptionsChanged(const struct FOptionsStruct2& Options);
	void HitParticles(float Damage, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FName& HitBoneName);
	void AttachGrenadeToSlotLocal(class AGrenadeBase_C* Grenade, class UPrimitiveComponent* Slot);
	void CanObjectBeClimbed(class UPrimitiveComponent** ObjectToCheck, bool* CanClimb);
	void GetOtherGrip(class UGripMotionControllerComponent* Grip, class UGripMotionControllerComponent** OtherGrip);
	void GetStepSound(TEnumAsByte<EStepType> StepType, TEnumAsByte<EPhysicalSurface> SurfaceType, class USoundBase** StepSound, float* Intensity);
	void PlayGearMovementSound(TEnumAsByte<EStepType> StepType);
	void PlayStepSound(TEnumAsByte<EStepType> StepType);
	void AnimStep(TEnumAsByte<EStepType> Step);
	void AddMessage(const struct FMessageStruct& Message);
	void GetGrippedWeaponWithController(class UGripMotionControllerComponent* Hand, class AWeaponBase_C** GrippedWeapon);
	void DieLocal();
	void HandleDamage(float Damage, class AController* InstigatedBy, const struct FVector& DamageCauserOriginalVelocity);
	void IKFootTrace(float TraceDistance, const struct FName& Socket, float* IKoffset);
	void AttachWeaponToSlotLocal(class AWeaponBase_C* Weapon, class UPrimitiveComponent* Slot);
	void ReattachMotionController(class UGripMotionControllerComponent* GripMotionController);
	void TryRemoveSecondaryAttachment(class UGripMotionControllerComponent** Calling_Motion_Controller, class UGripMotionControllerComponent** Other_Controller, struct FGameplayTagContainer* GameplayTags, bool* DroppedSecondary, bool* HadSecondary);
	void TryToGrabObject(class UObject** ObjectToTryToGrab, struct FTransform* WorldTransform, class UGripMotionControllerComponent** Hand, class UGripMotionControllerComponent** OtherHand, bool* IsSlotGrip, struct FGameplayTag* GripSecondaryTag, struct FName* GripBoneName, bool* IsSecondaryGrip, bool* Gripped);
	void GetGrippedWeapon(class AWeaponBase_C** GrippedWeapon);
	void TeleportRightPressed();
	void SpawnMagazineToHandLocal(class UGripMotionControllerComponent* Hand, class UGripMotionControllerComponent* OtherHand, class AMagazineBase_C** Magazine);
	void GetNearestOverlappingObject(class UPrimitiveComponent** OverlapComponent, class UGripMotionControllerComponent** Hand, class UObject** NearestObject, bool* ImplementsInterface, struct FTransform* ObjectTransform, bool* CanBeClimbed, struct FName* BoneName, struct FVector* ImpactLoc);
	void UserConstructionScript();
	void HandGlowRight__FinishedFunc();
	void HandGlowRight__UpdateFunc();
	void HandGlowLeft__FinishedFunc();
	void HandGlowLeft__UpdateFunc();
	void InpActEvt_MenuLeft_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_MenuRight_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_GripLeft_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_GripLeft_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_GripRight_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_GripRight_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_TriggerLeft_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_TriggerLeft_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_TriggerRight_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_TriggerRight_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_Skill_AttachmentRelease_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Skill_AttachmentRelease_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Skill_FireModeChange_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Skill_ReleaseMagazine_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Skill_ReleaseSlider_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void RumbleController(EControllerHand Hand, float Intensity, float Duration);
	void RumbleControllerBoth(float Intensity, float Duration);
	void BndEvt__GrabSphereLeft_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__GrabSphereRight_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void TryDropSingle(class UGripMotionControllerComponent** Controller, struct FVector_NetQuantize100* AngleVel, struct FVector_NetQuantize100* LinearVel, unsigned char* GripHash);
	void On_Possessed();
	void CheckAndHandleGripAnimations();
	void ReceiveTick(float* DeltaSeconds);
	void ApplyDamageCustom(float Damage, class UClass* DamageType, class AController* IntigatedBy, class AActor* DamageCauser, const struct FName& HitBoneName, class UPrimitiveComponent* HitComponent, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& DamageCauserOriginalVelocity);
	void PrimaryWeaponSlotPicked();
	void SecondaryWeaponSlotPicked();
	void CheckWeaponSlotPrimaryAttach(class AActor* OtherActor);
	void CheckWeaponSlotSecondaryAttach(class AActor* OtherActor);
	void TryDropSingle_Client(class UGripMotionControllerComponent** Controller, struct FBPActorGripInformation* GripToDrop, struct FVector* Angle_Vel, struct FVector* Linear_Vel);
	void TryDropSingleAfter(class UGripMotionControllerComponent* Controller, class UObject* ObjectToDrop);
	void ReceiveRadialDamage(float* DamageReceived, class UDamageType** DamageType, struct FVector* Origin, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser);
	void AutiHealWait();
	void AutoHeal();
	void CheckGrenadeSlotAttach(class AActor* OtherActor);
	void GrenadeSlotPicked();
	void CheckGrenadeSlot2Attach(class AActor* OtherActor);
	void GrenadeSlot2Picked();
	void Voice(class USoundBase* Sound);
	void HitSounds(const struct FVector& HitLocation);
	void TryDropSingleAfterServer(class UGripMotionControllerComponent* Controller, class UObject* ObjectToDrop);
	void TryDropSingleAfterMulti(class UGripMotionControllerComponent* Controller, class UObject* ObjectToDrop);
	void Revive();
	void ReviveServer();
	void ReviveMulti();
	void ShowRevivePOI();
	void ReviveCheck(class AActor* OtherActor);
	void SpawnMagazineToHand(class UGripMotionControllerComponent* Hand, class UGripMotionControllerComponent* OtherHand, class UPrimitiveComponent* GrabSphere);
	void SpawnMagazineToHandServer(class UGripMotionControllerComponent* Hand, class UGripMotionControllerComponent* OtherHand, class UPrimitiveComponent* GrabSphere);
	void SpawnMagazineToHandMulti(class UGripMotionControllerComponent* Hand, class UGripMotionControllerComponent* OtherHand);
	void GrabSpawnedMagazineMulti(class AMagazineBase_C* Magazine, class UGripMotionControllerComponent* Calling_Hand, class UGripMotionControllerComponent* OtherHand, class UPrimitiveComponent* GrabSphere);
	void GrabSpawnedMagazineLocal(class AMagazineBase_C* Magaizne, class UGripMotionControllerComponent* Calling_Hand, class UGripMotionControllerComponent* OtherHand, class UPrimitiveComponent* GrabSphere);
	void CheckAllyNames();
	void UpdateAllyName();
	void CheckAndShowHideAllyName(class UGripMotionControllerComponent* Hand);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__ForcePullCapsuleRight_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ForcePullStart(class AGrippableStaticMeshActorBase_C* ForcePullActor, bool RightHand);
	void UpdateForcePull(float DeltaSeconds);
	void BndEvt__ForcePullCapsuleLeft_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__ForcePullCapsuleLeft_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__OutlineSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__OutlineSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void SetHandState(TEnumAsByte<EGripEnum> HandState, bool RightHand);
	void ProjectileFired();
	void ProjectileHit();
	void ProjectileHitHead();
	void Kill();
	void Hover(TEnumAsByte<EHoverEnum> InteractType, class USceneComponent* Component);
	void Unhover(class UPrimitiveComponent* Component);
	void HandleDamageMulti(float Damage, class AActor* DamageInstigator, const struct FVector& DamageCauserOriginalVelocity);
	void HandleDamageLocal(float Damage, class AActor* DamageInstigator, const struct FVector& DamageCauserOriginalVelocity);
	void UpdateRevivePoi();
	void GrabWeaponRight(class AActor* WeaponActor);
	void StopHeartbeatSFX();
	void UpdateHeartbeatSFX();
	void CheckOutline();
	void CheckAndOutlineOverlappingActor(class AActor* Actor);
	void OnGrabItem(class UGripMotionControllerComponent* Hand, class UGripMotionControllerComponent* OtherHand, class UObject* GripedItem);
	void GetEquipmentServer(const struct FPlayerEquipmentStruct& PlayerEquipmentStruct);
	void SetHandPoseServer(EControllerHand Hand, TEnumAsByte<EHandPose> Pose);
	void SetHandPoseMulti(EControllerHand Hand, TEnumAsByte<EHandPose> Pose);
	void SetHandPose(EControllerHand Hand, TEnumAsByte<EHandPose> Pose);
	void TryGrabMulti(class UObject* ObjectToGrab, bool IsSlotGrip, const struct FTransform_NetQuantize& GripTransform, EControllerHand Hand, const struct FGameplayTag& GripSecondaryTag, const struct FName& GripBoneName);
	void TryToGrabObjectAfterMulti(class UObject* ObjectToTryToGrab, class UGripMotionControllerComponent* Hand, class UGripMotionControllerComponent* OtherHand, bool IsSlotGrip);
	void DropOrUseSecondaryAttachmentAfterMulti(class UGripMotionControllerComponent* GripMotionController);
	void DropOrUseSecondaryAttachmentAfterServer(class UGripMotionControllerComponent* GripMotionController);
	void AttachWeaponToSlot(class AWeaponBase_C* Weapon, class UPrimitiveComponent* Slot);
	void SetSecodarySlotAttachedServer(class AWeaponBase_C* SecondarySlotAttached);
	void SetPrimarySlotAttachedServer(class AWeaponBase_C* PrimarySlotAttached);
	void SetGrenadeSlotAttachedServer(class AGrenadeBase_C* GrenadeSlotAttached);
	void SetGreandeSlot2AttachedServer(class AGrenadeBase_C* GrenadeSlotAttached);
	void OnMenuClose();
	void DropLeft();
	void DropRight();
	void DropWeapon(EControllerHand Hand);
	void SetupOnPossession();
	void Trigger_Grip_Or_Drop(class UGripMotionControllerComponent** Calling_Hand, class UGripMotionControllerComponent** OtherHand, bool* IsGrip, class UPrimitiveComponent** GrabSphere);
	void HandleGripPress_Oculus(class UGripMotionControllerComponent* CallingMotionController, class UGripMotionControllerComponent* OtherController, class UPrimitiveComponent* GrabSphere);
	void HandleGripRelease_Oculus(class UGripMotionControllerComponent* CallingMotionController, class UGripMotionControllerComponent* OtherController, class UPrimitiveComponent* GrabSphere);
	void HandleTriggerPress_Oculus(class UGripMotionControllerComponent* CallingMotionController, class UGripMotionControllerComponent* OtherController, class UPrimitiveComponent* GrabSphere);
	void HandleTriggerRelease_Oculus(class UGripMotionControllerComponent* CallingMotionController, class UGripMotionControllerComponent* OtherController, class UPrimitiveComponent* GrabSphere);
	void CallCorrectDropSingleEvent(class UGripMotionControllerComponent** Hand, struct FBPActorGripInformation* Grip);
	void CallCorrectGrabEvent(class UObject** ObjectToGrip, EControllerHand* Hand, bool* IsSlotGrip, struct FTransform* GripTransform, struct FGameplayTag* GripSecondaryTag, struct FName* OptionalBoneName, bool* IsSecondaryGrip);
	void SetAttachmentReleaseButtonPressedServer(bool AttachmentReleaseButtonPressed);
	void UpdateMCTriggerValuesServer(float MC_L_TriggerValue, float MC_R_TriggerValue);
	void SetPlayerRankServer(int PlayerRank);
	void StopLowHealthSoundEffect();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void OpenClosePauseMenu();
	void OpenCloseMultiplayerMenu();
	void HMDRecenter();
	void SetPlayerHeightServer(float PlayerHeight);
	void GripOrDropAllTags(class UGripMotionControllerComponent* Calling_Hand, class UGripMotionControllerComponent* OtherHand, bool IsGrip, class UPrimitiveComponent* GrabSphere);
	void SetSecondaryGripAsPrimaryServer(class AWeaponBase_C* Target);
	void LevelDataInitialized(class ALevelData_C* LevelData);
	void BndEvt__EarLeftCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__EarRightCollision_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void StartVoiceChat();
	void StopVoiceChat();
	void BndEvt__EarLeftCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__EarRightCollision_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void TriggerRightVoiceChatEvent();
	void TriggerLeftVoiceChatEvent();
	void ExecuteUbergraph_PlayerPawnCharacter(int EntryPoint);
	void PlayerDamaged__DelegateSignature(float Damage, class AActor* DamageInstigator, const struct FVector& DamageCauserOriginalVelocity);
	void Died__DelegateSignature(class APlayerPawnCharacter_C* PlayerPawnCharacter);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
