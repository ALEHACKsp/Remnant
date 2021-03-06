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

// Function Trait_MothersBlessing.Trait_MothersBlessing_C.GetRangedDamageReduction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTrait_MothersBlessing_C::GetRangedDamageReduction(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_MothersBlessing.Trait_MothersBlessing_C.GetRangedDamageReduction");

	UTrait_MothersBlessing_C_GetRangedDamageReduction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Trait_MothersBlessing.Trait_MothersBlessing_C.OnComputeStats
// (Event, Public, BlueprintEvent)
void UTrait_MothersBlessing_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_MothersBlessing.Trait_MothersBlessing_C.OnComputeStats");

	UTrait_MothersBlessing_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_MothersBlessing.Trait_MothersBlessing_C.ExecuteUbergraph_Trait_MothersBlessing
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTrait_MothersBlessing_C::ExecuteUbergraph_Trait_MothersBlessing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_MothersBlessing.Trait_MothersBlessing_C.ExecuteUbergraph_Trait_MothersBlessing");

	UTrait_MothersBlessing_C_ExecuteUbergraph_Trait_MothersBlessing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
