#pragma once

// ZeroCaliber (0.3.0 DEMO) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum VRExpansionPlugin.EPhysicsGripCOMType
enum class EPhysicsGripCOMType : uint8_t
{
	COM_Default                    = 0,
	COM_AtPivot                    = 1,
	COM_SetAndGripAt               = 2,
	COM_GripAt                     = 3,
	COM_GripAtControllerLoc        = 4,
	COM_MAX                        = 5
};


// Enum VRExpansionPlugin.EPhysicsGripConstraintType
enum class EPhysicsGripConstraintType : uint8_t
{
	AccelerationConstraint         = 0,
	ForceConstraint                = 1,
	EPhysicsGripConstraintType_MAX = 2
};


// Enum VRExpansionPlugin.EGripMovementReplicationSettings
enum class EGripMovementReplicationSettings : uint8_t
{
	KeepOriginalMovement           = 0,
	ForceServerSideMovement        = 1,
	ForceClientSideMovement        = 2,
	ClientSide_Authoritive         = 3,
	ClientSide_Authoritive_NoRep   = 4,
	EGripMovementReplicationSettings_MAX = 5
};


// Enum VRExpansionPlugin.EGripLateUpdateSettings
enum class EGripLateUpdateSettings : uint8_t
{
	LateUpdatesAlwaysOn            = 0,
	LateUpdatesAlwaysOff           = 1,
	NotWhenColliding               = 2,
	NotWhenDoubleGripping          = 3,
	NotWhenCollidingOrDoubleGripping = 4,
	EGripLateUpdateSettings_MAX    = 5
};


// Enum VRExpansionPlugin.EGripCollisionType
enum class EGripCollisionType : uint8_t
{
	InteractiveCollisionWithPhysics = 0,
	InteractiveCollisionWithSweep  = 1,
	InteractiveHybridCollisionWithPhysics = 2,
	InteractiveHybridCollisionWithSweep = 3,
	SweepWithPhysics               = 4,
	PhysicsOnly                    = 5,
	ManipulationGrip               = 6,
	ManipulationGripWithWristTwist = 7,
	AttachmentGrip                 = 8,
	CustomGrip                     = 9,
	EGripCollisionType_MAX         = 10
};


// Enum VRExpansionPlugin.EGripTargetType
enum class EGripTargetType : uint8_t
{
	ActorGrip                      = 0,
	ComponentGrip                  = 1,
	EGripTargetType_MAX            = 2
};


// Enum VRExpansionPlugin.EVRInteractibleLeverEventType
enum class EVRInteractibleLeverEventType : uint8_t
{
	LeverPositive                  = 0,
	LeverNegative                  = 1,
	EVRInteractibleLeverEventType_MAX = 2
};


// Enum VRExpansionPlugin.EVRMoveActionDataReq
enum class EVRMoveActionDataReq : uint8_t
{
	VRMOVEACTIONDATA_None          = 0,
	VRMOVEACTIONDATA_LOC           = 1,
	VRMOVEACTIONDATA_ROT           = 2,
	VRMOVEACTIONDATA_LOC_AND_ROT   = 3,
	VRMOVEACTIONDATA_MAX           = 4
};


// Enum VRExpansionPlugin.EVRMoveAction
enum class EVRMoveAction : uint8_t
{
	VRMOVEACTION_None              = 0,
	VRMOVEACTION_SnapTurn          = 1,
	VRMOVEACTION_Teleport          = 2,
	VRMOVEACTION_StopAllMovement   = 3,
	VRMOVEACTION_SetRotation       = 4,
	VRMOVEACTION_CUSTOM1           = 5,
	VRMOVEACTION_CUSTOM2           = 6,
	VRMOVEACTION_CUSTOM3           = 7,
	VRMOVEACTION_CUSTOM4           = 8,
	VRMOVEACTION_CUSTOM5           = 9,
	VRMOVEACTION_CUSTOM6           = 10,
	VRMOVEACTION_CUSTOM7           = 11,
	VRMOVEACTION_CUSTOM8           = 12,
	VRMOVEACTION_CUSTOM9           = 13,
	VRMOVEACTION_CUSTOM10          = 14,
	VRMOVEACTION_MAX               = 15
};


// Enum VRExpansionPlugin.EGripInterfaceTeleportBehavior
enum class EGripInterfaceTeleportBehavior : uint8_t
{
	TeleportAllComponents          = 0,
	OnlyTeleportRootComponent      = 1,
	DropOnTeleport                 = 2,
	DontTeleport                   = 3,
	EGripInterfaceTeleportBehavior_MAX = 4
};


// Enum VRExpansionPlugin.ESecondaryGripType
enum class ESecondaryGripType : uint8_t
{
	SG_None                        = 0,
	SG_Free                        = 1,
	SG_SlotOnly                    = 2,
	SG_Free_Retain                 = 3,
	SG_SlotOnly_Retain             = 4,
	SG_FreeWithScaling_Retain      = 5,
	SG_SlotOnlyWithScaling_Retain  = 6,
	SG_Custom                      = 7,
	SG_ScalingOnly                 = 8,
	SG_MAX                         = 9
};


// Enum VRExpansionPlugin.EGripLerpState
enum class EGripLerpState : uint8_t
{
	StartLerp                      = 0,
	EndLerp                        = 1,
	ConstantLerp                   = 2,
	NotLerping                     = 3,
	EGripLerpState_MAX             = 4
};


// Enum VRExpansionPlugin.EBPHMDDeviceType
enum class EBPHMDDeviceType : uint8_t
{
	DT_OculusHMD                   = 0,
	DT_PSVR                        = 1,
	DT_ES2GenericStereoMesh        = 2,
	DT_SteamVR                     = 3,
	DT_GearVR                      = 4,
	DT_GoogleVR                    = 5,
	DT_OSVR                        = 6,
	DT_AppleARKit                  = 7,
	DT_GoogleARCore                = 8,
	DT_Unknown                     = 9,
	DT_MAX                         = 10
};


// Enum VRExpansionPlugin.EVRVectorQuantization
enum class EVRVectorQuantization : uint8_t
{
	RoundOneDecimal                = 0,
	RoundTwoDecimals               = 1,
	EVRVectorQuantization_MAX      = 2
};


// Enum VRExpansionPlugin.EBPVRWaistTrackingMode
enum class EBPVRWaistTrackingMode : uint8_t
{
	VRWaist_Tracked_Front          = 0,
	VRWaist_Tracked_Rear           = 1,
	VRWaist_Tracked_Left           = 2,
	VRWaist_Tracked_Right          = 3,
	VRWaist_Tracked_MAX            = 4
};


// Enum VRExpansionPlugin.EBPVRResultSwitch
enum class EBPVRResultSwitch : uint8_t
{
	OnSucceeded                    = 0,
	OnFailed                       = 1,
	EBPVRResultSwitch_MAX          = 2
};


// Enum VRExpansionPlugin.EVRConjoinedMovementModes
enum class EVRConjoinedMovementModes : uint8_t
{
	C_MOVE_None                    = 0,
	C_MOVE_Walking                 = 1,
	C_MOVE_NavWalking              = 2,
	C_MOVE_Falling                 = 3,
	C_MOVE_Swimming                = 4,
	C_MOVE_Flying                  = 5,
	C_MOVE_MAX                     = 6,
	C_VRMOVE_Climbing              = 7,
	C_VRMOVE_LowGrav               = 8,
	C_VRMOVE_Seated                = 9,
	C_VRMOVE_Custom1               = 10,
	C_VRMOVE_Custom2               = 11,
	C_VRMOVE_Custom3               = 12,
	C_VRMOVE_Custom4               = 13,
	C_VRMOVE_Custom5               = 14,
	C_MAX                          = 15
};


// Enum VRExpansionPlugin.EVRCustomMovementMode
enum class EVRCustomMovementMode : uint8_t
{
	VRMOVE_Climbing                = 0,
	VRMOVE_LowGrav                 = 1,
	VRMOVE_Seated                  = 2,
	VRMOVE_MAX                     = 3
};


// Enum VRExpansionPlugin.EVRInteractibleAxis
enum class EVRInteractibleAxis : uint8_t
{
	Axis_X                         = 0,
	Axis_Y                         = 1,
	Axis_Z                         = 2,
	Axis_MAX                       = 3
};


// Enum VRExpansionPlugin.EVRButtonType
enum class EVRButtonType : uint8_t
{
	Btn_Press                      = 0,
	Btn_Toggle_Return              = 1,
	Btn_Toggle_Stay                = 2,
	Btn_MAX                        = 3
};


// Enum VRExpansionPlugin.EBPHMDWornState
enum class EBPHMDWornState : uint8_t
{
	Unknown                        = 0,
	Worn                           = 1,
	NotWorn                        = 2,
	EBPHMDWornState_MAX            = 3
};


// Enum VRExpansionPlugin.EVRGameInputMethod
enum class EVRGameInputMethod : uint8_t
{
	GameInput_Default              = 0,
	GameInput_SharedKeyboardAndMouse = 1,
	GameInput_KeyboardAndMouseToPlayer2 = 2,
	GameInput_MAX                  = 3
};


// Enum VRExpansionPlugin.EVRGestureMirrorMode
enum class EVRGestureMirrorMode : uint8_t
{
	GES_NoMirror                   = 0,
	GES_MirrorLeft                 = 1,
	GES_MirrorRight                = 2,
	GES_MirrorBoth                 = 3,
	GES_MAX                        = 4
};


// Enum VRExpansionPlugin.EVRGestureState
enum class EVRGestureState : uint8_t
{
	GES_None                       = 0,
	GES_Recording                  = 1,
	GES_Detecting                  = 2,
	GES_MAX                        = 3
};


// Enum VRExpansionPlugin.EVRInteractibleLeverReturnType
enum class EVRInteractibleLeverReturnType : uint8_t
{
	Stay                           = 0,
	ReturnToZero                   = 1,
	LerpToMax                      = 2,
	LerpToMaxIfOverThreshold       = 3,
	RetainMomentum                 = 4,
	EVRInteractibleLeverReturnType_MAX = 5
};


// Enum VRExpansionPlugin.EVRInteractibleLeverAxis
enum class EVRInteractibleLeverAxis : uint8_t
{
	Axis_X                         = 0,
	Axis_Y                         = 1,
	Axis_Z                         = 2,
	Axis_XY                        = 3,
	Axis_XZ                        = 4,
	Axis_MAX                       = 5
};


// Enum VRExpansionPlugin.EBPVRConsoleDrawType
enum class EBPVRConsoleDrawType : uint8_t
{
	VRConsole_Draw_ConsoleOnly     = 0,
	VRConsole_Draw_OutputLogOnly   = 1,
	VRConsole_Draw_MAX             = 2
};


// Enum VRExpansionPlugin.EVRInteractibleMountAxis
enum class EVRInteractibleMountAxis : uint8_t
{
	Axis_XZ                        = 0,
	Axis_MAX                       = 1
};


// Enum VRExpansionPlugin.EVRInteractibleSliderDropBehavior
enum class EVRInteractibleSliderDropBehavior : uint8_t
{
	Stay                           = 0,
	RetainMomentum                 = 1,
	EVRInteractibleSliderDropBehavior_MAX = 2
};


// Enum VRExpansionPlugin.EVRInteractibleSliderLerpType
enum class EVRInteractibleSliderLerpType : uint8_t
{
	Lerp_None                      = 0,
	Lerp_Interp                    = 1,
	Lerp_InterpConstantTo          = 2,
	Lerp_MAX                       = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct VRExpansionPlugin.Transform_NetQuantize
// 0x0000 (0x0030 - 0x0030)
struct FTransform_NetQuantize : public FTransform
{

};

// ScriptStruct VRExpansionPlugin.BPAdvGripPhysicsSettings
// 0x0010
struct FBPAdvGripPhysicsSettings
{
	bool                                               bUsePhysicsSettings;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPhysicsGripConstraintType                         PhysicsConstraintType;                                    // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPhysicsGripCOMType                                PhysicsGripLocationSettings;                              // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTurnOffGravityDuringGrip;                                // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCustomAngularValues;                                  // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              AngularStiffness;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularDamping;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VRExpansionPlugin.BPAdvSecondaryGripSettings
// 0x005C
struct FBPAdvSecondaryGripSettings
{
	bool                                               bUseSecondaryGripSettings;                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              SecondaryGripScaler;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSecondaryGripDistanceInfluence;                       // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              GripInfluenceDeadZone;                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GripInfluenceDistanceToZero;                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLimitGripScaling;                                        // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FVector_NetQuantize100                      MinimumGripScaling;                                       // 0x0018(0x000C) (Edit, BlueprintVisible)
	struct FVector_NetQuantize100                      MaximumGripScaling;                                       // 0x0024(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x2C];                                      // 0x0030(0x002C) MISSED OFFSET
};

// ScriptStruct VRExpansionPlugin.BPAdvGripSettings
// 0x0070
struct FBPAdvGripSettings
{
	unsigned char                                      GripPriority;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSetOwnerOnGrip;                                          // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FBPAdvGripPhysicsSettings                   PhysicsSettings;                                          // 0x0004(0x0010) (Edit, BlueprintVisible)
	struct FBPAdvSecondaryGripSettings                 SecondaryGripSettings;                                    // 0x0014(0x005C) (Edit, BlueprintVisible)
};

// ScriptStruct VRExpansionPlugin.BPSecondaryGripInfo
// 0x0060
struct FBPSecondaryGripInfo
{
	bool                                               bHasSecondaryAttachment;                                  // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class USceneComponent*                             SecondaryAttachment;                                      // 0x0008(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform_NetQuantize                      SecondaryRelativeTransform;                               // 0x0010(0x0030)
	bool                                               bIsSlotGrip;                                              // 0x0040(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              LerpToRate;                                               // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SecondaryGripDistance;                                    // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x14];                                      // 0x004C(0x0014) MISSED OFFSET
};

// ScriptStruct VRExpansionPlugin.BPActorGripInformation
// 0x0210
struct FBPActorGripInformation
{
	unsigned char                                      GripID;                                                   // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EGripTargetType                                    GripTargetType;                                           // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class UObject*                                     GrippedObject;                                            // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EGripCollisionType                                 GripCollisionType;                                        // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EGripLateUpdateSettings                            GripLateUpdateSetting;                                    // 0x0011(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bColliding;                                               // 0x0012(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0xD];                                       // 0x0013(0x000D) MISSED OFFSET
	struct FTransform_NetQuantize                      RelativeTransform;                                        // 0x0020(0x0030) (BlueprintVisible)
	bool                                               bIsSlotGrip;                                              // 0x0050(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FName                                       GrippedBoneName;                                          // 0x0058(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGripMovementReplicationSettings                   GripMovementReplicationSetting;                           // 0x0060(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPaused;                                                // 0x0061(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bOriginalReplicatesMovement;                              // 0x0062(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bOriginalGravity;                                         // 0x0063(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Stiffness;                                                // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FBPAdvGripSettings                          AdvancedGripSettings;                                     // 0x006C(0x0070) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FBPSecondaryGripInfo                        SecondaryGripInfo;                                        // 0x00E0(0x0060) (BlueprintVisible, BlueprintReadOnly)
	struct FTransform                                  AdditionTransform;                                        // 0x0140(0x0030) (BlueprintVisible, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              GripDistance;                                             // 0x0170(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData04[0x9C];                                      // 0x0174(0x009C) MISSED OFFSET
};

// ScriptStruct VRExpansionPlugin.BPVRComponentPosRep
// 0x001C
struct FBPVRComponentPosRep
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Transient, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Transient, IsPlainOldData)
	EVRVectorQuantization                              QuantizationLevel;                                        // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct VRExpansionPlugin.BPInterfaceProperties
// 0x0098
struct FBPInterfaceProperties
{
	bool                                               bDenyGripping;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGripInterfaceTeleportBehavior                     OnTeleportBehavior;                                       // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSimulateOnDrop;                                          // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGripCollisionType                                 SlotDefaultGripType;                                      // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGripCollisionType                                 FreeDefaultGripType;                                      // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESecondaryGripType                                 SecondaryGripType;                                        // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGripMovementReplicationSettings                   MovementReplicationType;                                  // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGripLateUpdateSettings                            LateUpdateSetting;                                        // 0x0007(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConstraintStiffness;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConstraintDamping;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConstraintBreakDistance;                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SecondarySlotRange;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PrimarySlotRange;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBPAdvGripSettings                          AdvancedGripSettings;                                     // 0x001C(0x0070) (Edit, BlueprintVisible)
	bool                                               bIsHeld;                                                  // 0x008C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	class UGripMotionControllerComponent*              HoldingController;                                        // 0x0090(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct VRExpansionPlugin.BPVRWaistTracking_Info
// 0x0020
struct FBPVRWaistTracking_Info
{
	struct FRotator                                    RestingRotation;                                          // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              WaistRadius;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EBPVRWaistTrackingMode                             TrackingMode;                                             // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class UPrimitiveComponent*                         TrackedDevice;                                            // 0x0018(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct VRExpansionPlugin.VRReplicatedCapsuleHeight
// 0x0004
struct FVRReplicatedCapsuleHeight
{
	float                                              CapsuleHeight;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VRExpansionPlugin.VRSeatedCharacterInfo
// 0x0024
struct FVRSeatedCharacterInfo
{
	bool                                               bSitting;                                                 // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bZeroToHead;                                              // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FVector_NetQuantize100                      StoredLocation;                                           // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly)
	float                                              StoredYaw;                                                // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AllowedRadius;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              AllowedRadiusThreshold;                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              CurrentThresholdScaler;                                   // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bIsOverThreshold;                                         // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct VRExpansionPlugin.VRMoveActionContainer
// 0x001C
struct FVRMoveActionContainer
{
	EVRMoveAction                                      MoveAction;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	EVRMoveActionDataReq                               MoveActionDataReq;                                        // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FVector                                     MoveActionLoc;                                            // 0x0004(0x000C) (IsPlainOldData)
	struct FRotator                                    MoveActionRot;                                            // 0x0010(0x000C) (IsPlainOldData)
};

// ScriptStruct VRExpansionPlugin.VRMoveActionArray
// 0x0010
struct FVRMoveActionArray
{
	TArray<struct FVRMoveActionContainer>              MoveActions;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct VRExpansionPlugin.VRConditionalMoveRep
// 0x0028
struct FVRConditionalMoveRep
{
	struct FVector                                     CustomVRInputVector;                                      // 0x0000(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     RequestedVelocity;                                        // 0x000C(0x000C) (Transient, IsPlainOldData)
	struct FVRMoveActionArray                          MoveActionArray;                                          // 0x0018(0x0010) (Transient)
};

// ScriptStruct VRExpansionPlugin.VRConditionalMoveRep2
// 0x0018
struct FVRConditionalMoveRep2
{
	class UPrimitiveComponent*                         ClientMovementBase;                                       // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FName                                       ClientBaseBoneName;                                       // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	uint16_t                                           ClientYaw;                                                // 0x0010(0x0002) (ZeroConstructor, Transient, IsPlainOldData)
	uint16_t                                           ClientPitch;                                              // 0x0012(0x0002) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      ClientRoll;                                               // 0x0014(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct VRExpansionPlugin.BPEuroLowPassFilter
// 0x002C
struct FBPEuroLowPassFilter
{
	float                                              MinCutoff;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CutoffSlope;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeltaCutoff;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x000C(0x0020) MISSED OFFSET
};

// ScriptStruct VRExpansionPlugin.VRGestureSettings
// 0x0010
struct FVRGestureSettings
{
	int                                                Minimum_Gesture_Length;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              firstThreshold;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FullThreshold;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EVRGestureMirrorMode                               MirrorMode;                                               // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct VRExpansionPlugin.VRGesture
// 0x0058
struct FVRGesture
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      GestureType;                                              // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<struct FVector>                             Samples;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
	struct FBox                                        GestureSize;                                              // 0x0028(0x001C) (Edit, BlueprintVisible, EditConst, IsPlainOldData)
	struct FVRGestureSettings                          GestureSettings;                                          // 0x0044(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct VRExpansionPlugin.AxisMappingDetails
// 0x0010
struct FAxisMappingDetails
{
	TArray<struct FInputAxisKeyMapping>                AxisMappings;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct VRExpansionPlugin.ActionMappingDetails
// 0x0010
struct FActionMappingDetails
{
	TArray<struct FInputActionKeyMapping>              ActionMappings;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct VRExpansionPlugin.BPVRControllerProfile
// 0x0120
struct FBPVRControllerProfile
{
	struct FName                                       ControllerName;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform_NetQuantize                      SocketOffsetTransform;                                    // 0x0010(0x0030) (Edit, BlueprintVisible)
	bool                                               bUseSeperateHandOffsetTransforms;                         // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0041(0x000F) MISSED OFFSET
	struct FTransform_NetQuantize                      SocketOffsetTransformRightHand;                           // 0x0050(0x0030) (Edit, BlueprintVisible)
	TMap<struct FName, struct FAxisMappingDetails>     AxisOverrides;                                            // 0x0080(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TMap<struct FName, struct FActionMappingDetails>   ActionOverrides;                                          // 0x00D0(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct VRExpansionPlugin.BPVRInteractibleBaseData
// 0x0090
struct FBPVRInteractibleBaseData
{
	struct FTransform                                  InitialRelativeTransform;                                 // 0x0000(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FVector                                     InitialInteractorLocation;                                // 0x0030(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FVector                                     InitialGripLoc;                                           // 0x003C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FVector                                     InitialDropLocation;                                      // 0x0048(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
	struct FTransform                                  ReversedRelativeTransform;                                // 0x0060(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
};

// ScriptStruct VRExpansionPlugin.BPActorPhysicsHandleInformation
// 0x0080
struct FBPActorPhysicsHandleInformation
{
	class UObject*                                     HandledObject;                                            // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0008(0x0078) MISSED OFFSET
};

// ScriptStruct VRExpansionPlugin.VRGestureSplineDraw
// 0x0020
struct FVRGestureSplineDraw
{
	class USplineComponent*                            SplineComponent;                                          // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class USplineMeshComponent*>                SplineMeshes;                                             // 0x0008(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
