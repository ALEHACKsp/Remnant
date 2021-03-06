// Name: Remnant, Version: 6

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.DestroyVFX
// (Public, BlueprintCallable, BlueprintEvent)
void UAction_Mod_Swarm_FireProjectiles_C::DestroyVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.DestroyVFX");

	UAction_Mod_Swarm_FireProjectiles_C_DestroyVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.ProcessGroupedVFX
// (Public, BlueprintCallable, BlueprintEvent)
void UAction_Mod_Swarm_FireProjectiles_C::ProcessGroupedVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.ProcessGroupedVFX");

	UAction_Mod_Swarm_FireProjectiles_C_ProcessGroupedVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.ConditionallyFinish
// (Public, BlueprintCallable, BlueprintEvent)
void UAction_Mod_Swarm_FireProjectiles_C::ConditionallyFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.ConditionallyFinish");

	UAction_Mod_Swarm_FireProjectiles_C_ConditionallyFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.InitProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Projectile_Homing_MultiTarget_Base_C* Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Mod_Swarm_FireProjectiles_C::InitProjectile(class AActor* Target, class ABP_Projectile_Homing_MultiTarget_Base_C* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.InitProjectile");

	UAction_Mod_Swarm_FireProjectiles_C_InitProjectile_Params params;
	params.Target = Target;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.OnTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Mod_Swarm_FireProjectiles_C::OnTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.OnTick");

	UAction_Mod_Swarm_FireProjectiles_C_OnTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.FinishFiringProjectiles
// (Public, BlueprintCallable, BlueprintEvent)
void UAction_Mod_Swarm_FireProjectiles_C::FinishFiringProjectiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.FinishFiringProjectiles");

	UAction_Mod_Swarm_FireProjectiles_C_FinishFiringProjectiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.OnHomeStatusChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  CurrentProjectile              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsHome                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAction_Mod_Swarm_FireProjectiles_C::OnHomeStatusChanged(class AActor* CurrentProjectile, bool IsHome)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.OnHomeStatusChanged");

	UAction_Mod_Swarm_FireProjectiles_C_OnHomeStatusChanged_Params params;
	params.CurrentProjectile = CurrentProjectile;
	params.IsHome = IsHome;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.OnActionStop
// (Event, Public, BlueprintEvent)
void UAction_Mod_Swarm_FireProjectiles_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.OnActionStop");

	UAction_Mod_Swarm_FireProjectiles_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.MultiPlayGroupedVFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void UAction_Mod_Swarm_FireProjectiles_C::MultiPlayGroupedVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.MultiPlayGroupedVFX");

	UAction_Mod_Swarm_FireProjectiles_C_MultiPlayGroupedVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.MultiDestroyGroupedVFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void UAction_Mod_Swarm_FireProjectiles_C::MultiDestroyGroupedVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.MultiDestroyGroupedVFX");

	UAction_Mod_Swarm_FireProjectiles_C_MultiDestroyGroupedVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.ExecuteUbergraph_Action_Mod_Swarm_FireProjectiles
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Mod_Swarm_FireProjectiles_C::ExecuteUbergraph_Action_Mod_Swarm_FireProjectiles(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Swarm_FireProjectiles.Action_Mod_Swarm_FireProjectiles_C.ExecuteUbergraph_Action_Mod_Swarm_FireProjectiles");

	UAction_Mod_Swarm_FireProjectiles_C_ExecuteUbergraph_Action_Mod_Swarm_FireProjectiles_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
