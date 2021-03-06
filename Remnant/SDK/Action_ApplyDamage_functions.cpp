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

// Function Action_ApplyDamage.Action_ApplyDamage_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_ApplyDamage_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ApplyDamage.Action_ApplyDamage_C.OnActionStart");

	UAction_ApplyDamage_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_ApplyDamage.Action_ApplyDamage_C.ExecuteUbergraph_Action_ApplyDamage
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_ApplyDamage_C::ExecuteUbergraph_Action_ApplyDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ApplyDamage.Action_ApplyDamage_C.ExecuteUbergraph_Action_ApplyDamage");

	UAction_ApplyDamage_C_ExecuteUbergraph_Action_ApplyDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
