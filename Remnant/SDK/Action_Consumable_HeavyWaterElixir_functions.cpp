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

// Function Action_Consumable_HeavyWaterElixir.Action_Consumable_HeavyWaterElixir_C.PlayFX
// (BlueprintCallable, BlueprintEvent)
void UAction_Consumable_HeavyWaterElixir_C::PlayFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_HeavyWaterElixir.Action_Consumable_HeavyWaterElixir_C.PlayFX");

	UAction_Consumable_HeavyWaterElixir_C_PlayFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Consumable_HeavyWaterElixir.Action_Consumable_HeavyWaterElixir_C.OnComputeStats
// (Event, Public, BlueprintEvent)
void UAction_Consumable_HeavyWaterElixir_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_HeavyWaterElixir.Action_Consumable_HeavyWaterElixir_C.OnComputeStats");

	UAction_Consumable_HeavyWaterElixir_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Consumable_HeavyWaterElixir.Action_Consumable_HeavyWaterElixir_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_Consumable_HeavyWaterElixir_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_HeavyWaterElixir.Action_Consumable_HeavyWaterElixir_C.OnActionStart");

	UAction_Consumable_HeavyWaterElixir_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Consumable_HeavyWaterElixir.Action_Consumable_HeavyWaterElixir_C.OnReapplyBuff
// (Public, BlueprintCallable, BlueprintEvent)
void UAction_Consumable_HeavyWaterElixir_C::OnReapplyBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_HeavyWaterElixir.Action_Consumable_HeavyWaterElixir_C.OnReapplyBuff");

	UAction_Consumable_HeavyWaterElixir_C_OnReapplyBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Consumable_HeavyWaterElixir.Action_Consumable_HeavyWaterElixir_C.ExecuteUbergraph_Action_Consumable_HeavyWaterElixir
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Consumable_HeavyWaterElixir_C::ExecuteUbergraph_Action_Consumable_HeavyWaterElixir(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_HeavyWaterElixir.Action_Consumable_HeavyWaterElixir_C.ExecuteUbergraph_Action_Consumable_HeavyWaterElixir");

	UAction_Consumable_HeavyWaterElixir_C_ExecuteUbergraph_Action_Consumable_HeavyWaterElixir_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
