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

// Function Trait_Vigor.Trait_Vigor_C.GetHealthMax
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTrait_Vigor_C::GetHealthMax(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Vigor.Trait_Vigor_C.GetHealthMax");

	UTrait_Vigor_C_GetHealthMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Trait_Vigor.Trait_Vigor_C.OnComputeStats
// (Event, Public, BlueprintEvent)
void UTrait_Vigor_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Vigor.Trait_Vigor_C.OnComputeStats");

	UTrait_Vigor_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Vigor.Trait_Vigor_C.ExecuteUbergraph_Trait_Vigor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTrait_Vigor_C::ExecuteUbergraph_Trait_Vigor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Vigor.Trait_Vigor_C.ExecuteUbergraph_Trait_Vigor");

	UTrait_Vigor_C_ExecuteUbergraph_Trait_Vigor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
