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

// Function Trait_Scavenger.Trait_Scavenger_C.GetCurrencyMod
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTrait_Scavenger_C::GetCurrencyMod(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Scavenger.Trait_Scavenger_C.GetCurrencyMod");

	UTrait_Scavenger_C_GetCurrencyMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Trait_Scavenger.Trait_Scavenger_C.OnComputeStats
// (Event, Public, BlueprintEvent)
void UTrait_Scavenger_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Scavenger.Trait_Scavenger_C.OnComputeStats");

	UTrait_Scavenger_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Scavenger.Trait_Scavenger_C.ExecuteUbergraph_Trait_Scavenger
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTrait_Scavenger_C::ExecuteUbergraph_Trait_Scavenger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Scavenger.Trait_Scavenger_C.ExecuteUbergraph_Trait_Scavenger");

	UTrait_Scavenger_C_ExecuteUbergraph_Trait_Scavenger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
