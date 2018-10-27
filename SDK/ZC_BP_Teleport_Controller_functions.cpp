// ZeroCaliber (0.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Teleport_Controller.BP_Teleport_Controller_C.CreateLaserSpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Teleport_Controller_C::CreateLaserSpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.CreateLaserSpline");

	ABP_Teleport_Controller_C_CreateLaserSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Teleport_Controller.BP_Teleport_Controller_C.ClearLaserBeam
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Teleport_Controller_C::ClearLaserBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.ClearLaserBeam");

	ABP_Teleport_Controller_C_ClearLaserBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Teleport_Controller.BP_Teleport_Controller_C.ToggleTick
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Teleport_Controller_C::ToggleTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.ToggleTick");

	ABP_Teleport_Controller_C_ToggleTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Teleport_Controller.BP_Teleport_Controller_C.InitController
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Teleport_Controller_C::InitController()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.InitController");

	ABP_Teleport_Controller_C_InitController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Teleport_Controller.BP_Teleport_Controller_C.IfOverWidget_Use
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPressed                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasOverWidget                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Teleport_Controller_C::IfOverWidget_Use(bool bPressed, bool* WasOverWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.IfOverWidget_Use");

	ABP_Teleport_Controller_C_IfOverWidget_Use_Params params;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WasOverWidget != nullptr)
		*WasOverWidget = params.WasOverWidget;
}


// Function BP_Teleport_Controller.BP_Teleport_Controller_C.GetTeleWorldLocAndForwardVector
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 WorldLoc                       (Parm, OutParm, IsPlainOldData)
// struct FVector                 ForwardVector                  (Parm, OutParm, IsPlainOldData)

void ABP_Teleport_Controller_C::GetTeleWorldLocAndForwardVector(struct FVector* WorldLoc, struct FVector* ForwardVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.GetTeleWorldLocAndForwardVector");

	ABP_Teleport_Controller_C_GetTeleWorldLocAndForwardVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldLoc != nullptr)
		*WorldLoc = params.WorldLoc;
	if (ForwardVector != nullptr)
		*ForwardVector = params.ForwardVector;
}


// Function BP_Teleport_Controller.BP_Teleport_Controller_C.UpdateLaserBeam
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Teleport_Controller_C::UpdateLaserBeam(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.UpdateLaserBeam");

	ABP_Teleport_Controller_C_UpdateLaserBeam_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Teleport_Controller.BP_Teleport_Controller_C.SetLaserBeamActive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LaserBeamActive                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Teleport_Controller_C::SetLaserBeamActive(bool LaserBeamActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.SetLaserBeamActive");

	ABP_Teleport_Controller_C_SetLaserBeamActive_Params params;
	params.LaserBeamActive = LaserBeamActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Teleport_Controller.BP_Teleport_Controller_C.GetTeleportDestination
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           RelativeToHMD                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)

void ABP_Teleport_Controller_C::GetTeleportDestination(bool RelativeToHMD, struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.GetTeleportDestination");

	ABP_Teleport_Controller_C_GetTeleportDestination_Params params;
	params.RelativeToHMD = RelativeToHMD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function BP_Teleport_Controller.BP_Teleport_Controller_C.UpdateArcEndpoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ValidLocationFound             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Teleport_Controller_C::UpdateArcEndpoint(const struct FVector& NewLocation, bool ValidLocationFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.UpdateArcEndpoint");

	ABP_Teleport_Controller_C_UpdateArcEndpoint_Params params;
	params.NewLocation = NewLocation;
	params.ValidLocationFound = ValidLocationFound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Teleport_Controller.BP_Teleport_Controller_C.UpdateArcSpline
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FoundValidLocation             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         SplinePoints                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_Teleport_Controller_C::UpdateArcSpline(bool FoundValidLocation, TArray<struct FVector>* SplinePoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.UpdateArcSpline");

	ABP_Teleport_Controller_C_UpdateArcSpline_Params params;
	params.FoundValidLocation = FoundValidLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SplinePoints != nullptr)
		*SplinePoints = params.SplinePoints;
}


// Function BP_Teleport_Controller.BP_Teleport_Controller_C.ClearArc
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Teleport_Controller_C::ClearArc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.ClearArc");

	ABP_Teleport_Controller_C_ClearArc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Teleport_Controller.BP_Teleport_Controller_C.TraceTeleportDestination
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         TracePoints                    (Parm, OutParm, ZeroConstructor)
// struct FVector                 NavMeshLocation                (Parm, OutParm, IsPlainOldData)
// struct FVector                 TraceLocation                  (Parm, OutParm, IsPlainOldData)

void ABP_Teleport_Controller_C::TraceTeleportDestination(bool* Success, TArray<struct FVector>* TracePoints, struct FVector* NavMeshLocation, struct FVector* TraceLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.TraceTeleportDestination");

	ABP_Teleport_Controller_C_TraceTeleportDestination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (TracePoints != nullptr)
		*TracePoints = params.TracePoints;
	if (NavMeshLocation != nullptr)
		*NavMeshLocation = params.NavMeshLocation;
	if (TraceLocation != nullptr)
		*TraceLocation = params.TraceLocation;
}


// Function BP_Teleport_Controller.BP_Teleport_Controller_C.DisableTeleporter
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Teleport_Controller_C::DisableTeleporter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.DisableTeleporter");

	ABP_Teleport_Controller_C_DisableTeleporter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Teleport_Controller.BP_Teleport_Controller_C.ActivateTeleporter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Teleport_Controller_C::ActivateTeleporter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.ActivateTeleporter");

	ABP_Teleport_Controller_C_ActivateTeleporter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Teleport_Controller.BP_Teleport_Controller_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Teleport_Controller_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.UserConstructionScript");

	ABP_Teleport_Controller_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Teleport_Controller.BP_Teleport_Controller_C.RumbleController
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Teleport_Controller_C::RumbleController(float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.RumbleController");

	ABP_Teleport_Controller_C_RumbleController_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Teleport_Controller.BP_Teleport_Controller_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Teleport_Controller_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.ReceiveTick");

	ABP_Teleport_Controller_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Teleport_Controller.BP_Teleport_Controller_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Teleport_Controller_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.ReceiveBeginPlay");

	ABP_Teleport_Controller_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Teleport_Controller.BP_Teleport_Controller_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_Teleport_Controller_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.ReceiveDestroyed");

	ABP_Teleport_Controller_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Teleport_Controller.BP_Teleport_Controller_C.ExecuteUbergraph_BP_Teleport_Controller
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Teleport_Controller_C::ExecuteUbergraph_BP_Teleport_Controller(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleport_Controller.BP_Teleport_Controller_C.ExecuteUbergraph_BP_Teleport_Controller");

	ABP_Teleport_Controller_C_ExecuteUbergraph_BP_Teleport_Controller_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
