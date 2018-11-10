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

// Function OculusHMD.DeprecatedGearVRControllerComponent.GetMotionController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMotionControllerComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMotionControllerComponent* UDeprecatedGearVRControllerComponent::GetMotionController()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.DeprecatedGearVRControllerComponent.GetMotionController");

	UDeprecatedGearVRControllerComponent_GetMotionController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.DeprecatedGearVRControllerComponent.GetControllerMesh
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UStaticMeshComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UStaticMeshComponent* UDeprecatedGearVRControllerComponent::GetControllerMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.DeprecatedGearVRControllerComponent.GetControllerMesh");

	UDeprecatedGearVRControllerComponent_GetControllerMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusBoundaryComponent.SetOuterBoundaryColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                  InBoundaryColor                (ConstParm, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOculusBoundaryComponent::SetOuterBoundaryColor(const struct FColor& InBoundaryColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusBoundaryComponent.SetOuterBoundaryColor");

	UOculusBoundaryComponent_SetOuterBoundaryColor_Params params;
	params.InBoundaryColor = InBoundaryColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusBoundaryComponent.ResetOuterBoundaryColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOculusBoundaryComponent::ResetOuterBoundaryColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusBoundaryComponent.ResetOuterBoundaryColor");

	UOculusBoundaryComponent_ResetOuterBoundaryColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusBoundaryComponent.RequestOuterBoundaryVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           BoundaryVisible                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOculusBoundaryComponent::RequestOuterBoundaryVisible(bool BoundaryVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusBoundaryComponent.RequestOuterBoundaryVisible");

	UOculusBoundaryComponent_RequestOuterBoundaryVisible_Params params;
	params.BoundaryVisible = BoundaryVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction OculusHMD.OculusBoundaryComponent.OculusOuterBoundaryTriggeredEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// TArray<struct FBoundaryTestResult> OuterBoundsInteractionList     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UOculusBoundaryComponent::OculusOuterBoundaryTriggeredEvent__DelegateSignature(TArray<struct FBoundaryTestResult> OuterBoundsInteractionList)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction OculusHMD.OculusBoundaryComponent.OculusOuterBoundaryTriggeredEvent__DelegateSignature");

	UOculusBoundaryComponent_OculusOuterBoundaryTriggeredEvent__DelegateSignature_Params params;
	params.OuterBoundsInteractionList = OuterBoundsInteractionList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction OculusHMD.OculusBoundaryComponent.OculusOuterBoundaryReturnedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UOculusBoundaryComponent::OculusOuterBoundaryReturnedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction OculusHMD.OculusBoundaryComponent.OculusOuterBoundaryReturnedEvent__DelegateSignature");

	UOculusBoundaryComponent_OculusOuterBoundaryReturnedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusBoundaryComponent.IsOuterBoundaryTriggered
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOculusBoundaryComponent::IsOuterBoundaryTriggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusBoundaryComponent.IsOuterBoundaryTriggered");

	UOculusBoundaryComponent_IsOuterBoundaryTriggered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusBoundaryComponent.IsOuterBoundaryDisplayed
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOculusBoundaryComponent::IsOuterBoundaryDisplayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusBoundaryComponent.IsOuterBoundaryDisplayed");

	UOculusBoundaryComponent_IsOuterBoundaryDisplayed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusBoundaryComponent.GetTriggeredPlayAreaInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// ETrackedDeviceType             DeviceType                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FBoundaryTestResult     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBoundaryTestResult UOculusBoundaryComponent::GetTriggeredPlayAreaInfo(ETrackedDeviceType DeviceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusBoundaryComponent.GetTriggeredPlayAreaInfo");

	UOculusBoundaryComponent_GetTriggeredPlayAreaInfo_Params params;
	params.DeviceType = DeviceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusBoundaryComponent.GetTriggeredOuterBoundaryInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FBoundaryTestResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FBoundaryTestResult> UOculusBoundaryComponent::GetTriggeredOuterBoundaryInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusBoundaryComponent.GetTriggeredOuterBoundaryInfo");

	UOculusBoundaryComponent_GetTriggeredOuterBoundaryInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusBoundaryComponent.GetPlayAreaPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UOculusBoundaryComponent::GetPlayAreaPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusBoundaryComponent.GetPlayAreaPoints");

	UOculusBoundaryComponent_GetPlayAreaPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusBoundaryComponent.GetPlayAreaDimensions
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UOculusBoundaryComponent::GetPlayAreaDimensions()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusBoundaryComponent.GetPlayAreaDimensions");

	UOculusBoundaryComponent_GetPlayAreaDimensions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusBoundaryComponent.GetOuterBoundaryPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UOculusBoundaryComponent::GetOuterBoundaryPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusBoundaryComponent.GetOuterBoundaryPoints");

	UOculusBoundaryComponent_GetOuterBoundaryPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusBoundaryComponent.GetOuterBoundaryDimensions
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UOculusBoundaryComponent::GetOuterBoundaryDimensions()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusBoundaryComponent.GetOuterBoundaryDimensions");

	UOculusBoundaryComponent_GetOuterBoundaryDimensions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusBoundaryComponent.CheckIfPointWithinPlayArea
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, IsPlainOldData)
// struct FBoundaryTestResult     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBoundaryTestResult UOculusBoundaryComponent::CheckIfPointWithinPlayArea(const struct FVector& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusBoundaryComponent.CheckIfPointWithinPlayArea");

	UOculusBoundaryComponent_CheckIfPointWithinPlayArea_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusBoundaryComponent.CheckIfPointWithinOuterBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, IsPlainOldData)
// struct FBoundaryTestResult     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBoundaryTestResult UOculusBoundaryComponent::CheckIfPointWithinOuterBounds(const struct FVector& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusBoundaryComponent.CheckIfPointWithinOuterBounds");

	UOculusBoundaryComponent_CheckIfPointWithinOuterBounds_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.ShowLoadingSplashScreen
// (Final, Native, Static, Public, BlueprintCallable)

void UOculusFunctionLibrary::STATIC_ShowLoadingSplashScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.ShowLoadingSplashScreen");

	UOculusFunctionLibrary_ShowLoadingSplashScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.ShowLoadingIcon
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_ShowLoadingIcon(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.ShowLoadingIcon");

	UOculusFunctionLibrary_ShowLoadingIcon_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.SetTiledMultiresLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ETiledMultiResLevel            Level                          (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_SetTiledMultiresLevel(ETiledMultiResLevel Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetTiledMultiresLevel");

	UOculusFunctionLibrary_SetTiledMultiresLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.SetPositionScale3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 PosScale3D                     (Parm, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_SetPositionScale3D(const struct FVector& PosScale3D)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetPositionScale3D");

	UOculusFunctionLibrary_SetPositionScale3D_Params params;
	params.PosScale3D = PosScale3D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.SetLoadingSplashParams
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 TexturePath                    (Parm, ZeroConstructor)
// struct FVector                 DistanceInMeters               (Parm, IsPlainOldData)
// struct FVector2D               SizeInMeters                   (Parm, IsPlainOldData)
// struct FVector                 RotationAxis                   (Parm, IsPlainOldData)
// float                          RotationDeltaInDeg             (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_SetLoadingSplashParams(const struct FString& TexturePath, const struct FVector& DistanceInMeters, const struct FVector2D& SizeInMeters, const struct FVector& RotationAxis, float RotationDeltaInDeg)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetLoadingSplashParams");

	UOculusFunctionLibrary_SetLoadingSplashParams_Params params;
	params.TexturePath = TexturePath;
	params.DistanceInMeters = DistanceInMeters;
	params.SizeInMeters = SizeInMeters;
	params.RotationAxis = RotationAxis;
	params.RotationDeltaInDeg = RotationDeltaInDeg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.SetDisplayFrequency
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          RequestedFrequency             (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_SetDisplayFrequency(float RequestedFrequency)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetDisplayFrequency");

	UOculusFunctionLibrary_SetDisplayFrequency_Params params;
	params.RequestedFrequency = RequestedFrequency;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.SetCPUAndGPULevels
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            CPULevel                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            GPULevel                       (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_SetCPUAndGPULevels(int CPULevel, int GPULevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetCPUAndGPULevels");

	UOculusFunctionLibrary_SetCPUAndGPULevels_Params params;
	params.CPULevel = CPULevel;
	params.GPULevel = GPULevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndPositionOffset
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                BaseRot                        (Parm, IsPlainOldData)
// struct FVector                 PosOffset                      (Parm, IsPlainOldData)
// TEnumAsByte<EOrientPositionSelector> Options                        (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_SetBaseRotationAndPositionOffset(const struct FRotator& BaseRot, const struct FVector& PosOffset, TEnumAsByte<EOrientPositionSelector> Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndPositionOffset");

	UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Params params;
	params.BaseRot = BaseRot;
	params.PosOffset = PosOffset;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// struct FVector                 BaseOffsetInMeters             (Parm, IsPlainOldData)
// TEnumAsByte<EOrientPositionSelector> Options                        (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_SetBaseRotationAndBaseOffsetInMeters(const struct FRotator& Rotation, const struct FVector& BaseOffsetInMeters, TEnumAsByte<EOrientPositionSelector> Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters");

	UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Params params;
	params.Rotation = Rotation;
	params.BaseOffsetInMeters = BaseOffsetInMeters;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.IsPowerLevelStateThrottled
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOculusFunctionLibrary::STATIC_IsPowerLevelStateThrottled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.IsPowerLevelStateThrottled");

	UOculusFunctionLibrary_IsPowerLevelStateThrottled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.IsPowerLevelStateMinimum
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOculusFunctionLibrary::STATIC_IsPowerLevelStateMinimum()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.IsPowerLevelStateMinimum");

	UOculusFunctionLibrary_IsPowerLevelStateMinimum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.IsLoadingIconEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOculusFunctionLibrary::STATIC_IsLoadingIconEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.IsLoadingIconEnabled");

	UOculusFunctionLibrary_IsLoadingIconEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.IsDeviceTracked
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// ETrackedDeviceType             DeviceType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOculusFunctionLibrary::STATIC_IsDeviceTracked(ETrackedDeviceType DeviceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.IsDeviceTracked");

	UOculusFunctionLibrary_IsDeviceTracked_Params params;
	params.DeviceType = DeviceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.IsControllerActive
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOculusFunctionLibrary::STATIC_IsControllerActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.IsControllerActive");

	UOculusFunctionLibrary_IsControllerActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.IsAutoLoadingSplashScreenEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOculusFunctionLibrary::STATIC_IsAutoLoadingSplashScreenEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.IsAutoLoadingSplashScreenEnabled");

	UOculusFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.HideLoadingSplashScreen
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bClear                         (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_HideLoadingSplashScreen(bool bClear)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.HideLoadingSplashScreen");

	UOculusFunctionLibrary_HideLoadingSplashScreen_Params params;
	params.bClear = bClear;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.HideLoadingIcon
// (Final, Native, Static, Public, BlueprintCallable)

void UOculusFunctionLibrary::STATIC_HideLoadingIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.HideLoadingIcon");

	UOculusFunctionLibrary_HideLoadingIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.HasSystemOverlayPresent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOculusFunctionLibrary::STATIC_HasSystemOverlayPresent()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.HasSystemOverlayPresent");

	UOculusFunctionLibrary_HasSystemOverlayPresent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.HasInputFocus
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOculusFunctionLibrary::STATIC_HasInputFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.HasInputFocus");

	UOculusFunctionLibrary_HasInputFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetUserProfile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHmdUserProfile         Profile                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOculusFunctionLibrary::STATIC_GetUserProfile(struct FHmdUserProfile* Profile)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetUserProfile");

	UOculusFunctionLibrary_GetUserProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Profile != nullptr)
		*Profile = params.Profile;

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetTiledMultiresLevel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// ETiledMultiResLevel            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ETiledMultiResLevel UOculusFunctionLibrary::STATIC_GetTiledMultiresLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetTiledMultiresLevel");

	UOculusFunctionLibrary_GetTiledMultiresLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetTemperatureInCelsius
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UOculusFunctionLibrary::STATIC_GetTemperatureInCelsius()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetTemperatureInCelsius");

	UOculusFunctionLibrary_GetTemperatureInCelsius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetRawSensorData
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 AngularAcceleration            (Parm, OutParm, IsPlainOldData)
// struct FVector                 LinearAcceleration             (Parm, OutParm, IsPlainOldData)
// struct FVector                 AngularVelocity                (Parm, OutParm, IsPlainOldData)
// struct FVector                 LinearVelocity                 (Parm, OutParm, IsPlainOldData)
// float                          TimeInSeconds                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// ETrackedDeviceType             DeviceType                     (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_GetRawSensorData(ETrackedDeviceType DeviceType, struct FVector* AngularAcceleration, struct FVector* LinearAcceleration, struct FVector* AngularVelocity, struct FVector* LinearVelocity, float* TimeInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetRawSensorData");

	UOculusFunctionLibrary_GetRawSensorData_Params params;
	params.DeviceType = DeviceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AngularAcceleration != nullptr)
		*AngularAcceleration = params.AngularAcceleration;
	if (LinearAcceleration != nullptr)
		*LinearAcceleration = params.LinearAcceleration;
	if (AngularVelocity != nullptr)
		*AngularVelocity = params.AngularVelocity;
	if (LinearVelocity != nullptr)
		*LinearVelocity = params.LinearVelocity;
	if (TimeInSeconds != nullptr)
		*TimeInSeconds = params.TimeInSeconds;
}


// Function OculusHMD.OculusFunctionLibrary.GetPose
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                DeviceRotation                 (Parm, OutParm, IsPlainOldData)
// struct FVector                 DevicePosition                 (Parm, OutParm, IsPlainOldData)
// struct FVector                 NeckPosition                   (Parm, OutParm, IsPlainOldData)
// bool                           bUseOrienationForPlayerCamera  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUsePositionForPlayerCamera    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PositionScale                  (ConstParm, Parm, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_GetPose(bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const struct FVector& PositionScale, struct FRotator* DeviceRotation, struct FVector* DevicePosition, struct FVector* NeckPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetPose");

	UOculusFunctionLibrary_GetPose_Params params;
	params.bUseOrienationForPlayerCamera = bUseOrienationForPlayerCamera;
	params.bUsePositionForPlayerCamera = bUsePositionForPlayerCamera;
	params.PositionScale = PositionScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeviceRotation != nullptr)
		*DeviceRotation = params.DeviceRotation;
	if (DevicePosition != nullptr)
		*DevicePosition = params.DevicePosition;
	if (NeckPosition != nullptr)
		*NeckPosition = params.NeckPosition;
}


// Function OculusHMD.OculusFunctionLibrary.GetLoadingSplashParams
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 TexturePath                    (Parm, OutParm, ZeroConstructor)
// struct FVector                 DistanceInMeters               (Parm, OutParm, IsPlainOldData)
// struct FVector2D               SizeInMeters                   (Parm, OutParm, IsPlainOldData)
// struct FVector                 RotationAxis                   (Parm, OutParm, IsPlainOldData)
// float                          RotationDeltaInDeg             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_GetLoadingSplashParams(struct FString* TexturePath, struct FVector* DistanceInMeters, struct FVector2D* SizeInMeters, struct FVector* RotationAxis, float* RotationDeltaInDeg)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetLoadingSplashParams");

	UOculusFunctionLibrary_GetLoadingSplashParams_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TexturePath != nullptr)
		*TexturePath = params.TexturePath;
	if (DistanceInMeters != nullptr)
		*DistanceInMeters = params.DistanceInMeters;
	if (SizeInMeters != nullptr)
		*SizeInMeters = params.SizeInMeters;
	if (RotationAxis != nullptr)
		*RotationAxis = params.RotationAxis;
	if (RotationDeltaInDeg != nullptr)
		*RotationDeltaInDeg = params.RotationDeltaInDeg;
}


// Function OculusHMD.OculusFunctionLibrary.GetGPUUtilization
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           IsGPUAvailable                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          GPUUtilization                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_GetGPUUtilization(bool* IsGPUAvailable, float* GPUUtilization)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetGPUUtilization");

	UOculusFunctionLibrary_GetGPUUtilization_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsGPUAvailable != nullptr)
		*IsGPUAvailable = params.IsGPUAvailable;
	if (GPUUtilization != nullptr)
		*GPUUtilization = params.GPUUtilization;
}


// Function OculusHMD.OculusFunctionLibrary.GetGearVRControllerHandedness
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// EGearVRControllerHandedness_DEPRECATED ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGearVRControllerHandedness_DEPRECATED UOculusFunctionLibrary::STATIC_GetGearVRControllerHandedness()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetGearVRControllerHandedness");

	UOculusFunctionLibrary_GetGearVRControllerHandedness_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetDeviceName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UOculusFunctionLibrary::STATIC_GetDeviceName()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetDeviceName");

	UOculusFunctionLibrary_GetDeviceName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetCurrentDisplayFrequency
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UOculusFunctionLibrary::STATIC_GetCurrentDisplayFrequency()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetCurrentDisplayFrequency");

	UOculusFunctionLibrary_GetCurrentDisplayFrequency_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetBatteryLevel
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UOculusFunctionLibrary::STATIC_GetBatteryLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetBatteryLevel");

	UOculusFunctionLibrary_GetBatteryLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndPositionOffset
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                OutRot                         (Parm, OutParm, IsPlainOldData)
// struct FVector                 OutPosOffset                   (Parm, OutParm, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_GetBaseRotationAndPositionOffset(struct FRotator* OutRot, struct FVector* OutPosOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndPositionOffset");

	UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRot != nullptr)
		*OutRot = params.OutRot;
	if (OutPosOffset != nullptr)
		*OutPosOffset = params.OutPosOffset;
}


// Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                OutRotation                    (Parm, OutParm, IsPlainOldData)
// struct FVector                 OutBaseOffsetInMeters          (Parm, OutParm, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_GetBaseRotationAndBaseOffsetInMeters(struct FRotator* OutRotation, struct FVector* OutBaseOffsetInMeters)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters");

	UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
	if (OutBaseOffsetInMeters != nullptr)
		*OutBaseOffsetInMeters = params.OutBaseOffsetInMeters;
}


// Function OculusHMD.OculusFunctionLibrary.GetAvailableDisplayFrequencies
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<float> UOculusFunctionLibrary::STATIC_GetAvailableDisplayFrequencies()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetAvailableDisplayFrequencies");

	UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.EnableAutoLoadingSplashScreen
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bAutoShowEnabled               (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_EnableAutoLoadingSplashScreen(bool bAutoShowEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.EnableAutoLoadingSplashScreen");

	UOculusFunctionLibrary_EnableAutoLoadingSplashScreen_Params params;
	params.bAutoShowEnabled = bAutoShowEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.EnableArmModel
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// bool                           bArmModelEnable                (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_EnableArmModel(bool bArmModelEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.EnableArmModel");

	UOculusFunctionLibrary_EnableArmModel_Params params;
	params.bArmModelEnable = bArmModelEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.ClearLoadingSplashScreens
// (Final, Native, Static, Public, BlueprintCallable)

void UOculusFunctionLibrary::STATIC_ClearLoadingSplashScreens()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.ClearLoadingSplashScreens");

	UOculusFunctionLibrary_ClearLoadingSplashScreens_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.AreHeadPhonesPluggedIn
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOculusFunctionLibrary::STATIC_AreHeadPhonesPluggedIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.AreHeadPhonesPluggedIn");

	UOculusFunctionLibrary_AreHeadPhonesPluggedIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusHMD.OculusFunctionLibrary.AddLoadingSplashScreen
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TranslationInMeters            (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// struct FVector2D               SizeInMeters                   (Parm, IsPlainOldData)
// struct FRotator                DeltaRotation                  (Parm, IsPlainOldData)
// bool                           bClearBeforeAdd                (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_AddLoadingSplashScreen(class UTexture2D* Texture, const struct FVector& TranslationInMeters, const struct FRotator& Rotation, const struct FVector2D& SizeInMeters, const struct FRotator& DeltaRotation, bool bClearBeforeAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.AddLoadingSplashScreen");

	UOculusFunctionLibrary_AddLoadingSplashScreen_Params params;
	params.Texture = Texture;
	params.TranslationInMeters = TranslationInMeters;
	params.Rotation = Rotation;
	params.SizeInMeters = SizeInMeters;
	params.DeltaRotation = DeltaRotation;
	params.bClearBeforeAdd = bClearBeforeAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
