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

// Function Action_Mod_SingleTarget_FireProjectile.Action_Mod_SingleTarget_FireProjectile_C.GetFiringDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UAction_Mod_SingleTarget_FireProjectile_C::GetFiringDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_SingleTarget_FireProjectile.Action_Mod_SingleTarget_FireProjectile_C.GetFiringDirection");

	UAction_Mod_SingleTarget_FireProjectile_C_GetFiringDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Action_Mod_SingleTarget_FireProjectile.Action_Mod_SingleTarget_FireProjectile_C.Get Socket Location from owner
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 SocketLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Mod_SingleTarget_FireProjectile_C::Get_Socket_Location_from_owner(struct FVector* SocketLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_SingleTarget_FireProjectile.Action_Mod_SingleTarget_FireProjectile_C.Get Socket Location from owner");

	UAction_Mod_SingleTarget_FireProjectile_C_Get_Socket_Location_from_owner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SocketLocation != nullptr)
		*SocketLocation = params.SocketLocation;

}


// Function Action_Mod_SingleTarget_FireProjectile.Action_Mod_SingleTarget_FireProjectile_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_Mod_SingleTarget_FireProjectile_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_SingleTarget_FireProjectile.Action_Mod_SingleTarget_FireProjectile_C.OnActionStart");

	UAction_Mod_SingleTarget_FireProjectile_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_SingleTarget_FireProjectile.Action_Mod_SingleTarget_FireProjectile_C.ExecuteUbergraph_Action_Mod_SingleTarget_FireProjectile
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Mod_SingleTarget_FireProjectile_C::ExecuteUbergraph_Action_Mod_SingleTarget_FireProjectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_SingleTarget_FireProjectile.Action_Mod_SingleTarget_FireProjectile_C.ExecuteUbergraph_Action_Mod_SingleTarget_FireProjectile");

	UAction_Mod_SingleTarget_FireProjectile_C_ExecuteUbergraph_Action_Mod_SingleTarget_FireProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
