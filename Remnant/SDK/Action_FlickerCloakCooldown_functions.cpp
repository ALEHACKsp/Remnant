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

// Function Action_FlickerCloakCooldown.Action_FlickerCloakCooldown_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_FlickerCloakCooldown_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_FlickerCloakCooldown.Action_FlickerCloakCooldown_C.OnActionStart");

	UAction_FlickerCloakCooldown_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_FlickerCloakCooldown.Action_FlickerCloakCooldown_C.OnActionStop
// (Event, Public, BlueprintEvent)
void UAction_FlickerCloakCooldown_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_FlickerCloakCooldown.Action_FlickerCloakCooldown_C.OnActionStop");

	UAction_FlickerCloakCooldown_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_FlickerCloakCooldown.Action_FlickerCloakCooldown_C.ExecuteUbergraph_Action_FlickerCloakCooldown
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_FlickerCloakCooldown_C::ExecuteUbergraph_Action_FlickerCloakCooldown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_FlickerCloakCooldown.Action_FlickerCloakCooldown_C.ExecuteUbergraph_Action_FlickerCloakCooldown");

	UAction_FlickerCloakCooldown_C_ExecuteUbergraph_Action_FlickerCloakCooldown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
