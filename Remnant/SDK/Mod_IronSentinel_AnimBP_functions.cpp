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

// Function Mod_IronSentinel_AnimBP.Mod_IronSentinel_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Mod_IronSentinel_AnimBP_AnimGraphNode_ModifyBone_D8DCAC9046B0A276F92513976643F22C
// (BlueprintEvent)
void UMod_IronSentinel_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Mod_IronSentinel_AnimBP_AnimGraphNode_ModifyBone_D8DCAC9046B0A276F92513976643F22C()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_IronSentinel_AnimBP.Mod_IronSentinel_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Mod_IronSentinel_AnimBP_AnimGraphNode_ModifyBone_D8DCAC9046B0A276F92513976643F22C");

	UMod_IronSentinel_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Mod_IronSentinel_AnimBP_AnimGraphNode_ModifyBone_D8DCAC9046B0A276F92513976643F22C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_IronSentinel_AnimBP.Mod_IronSentinel_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMod_IronSentinel_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_IronSentinel_AnimBP.Mod_IronSentinel_AnimBP_C.BlueprintUpdateAnimation");

	UMod_IronSentinel_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_IronSentinel_AnimBP.Mod_IronSentinel_AnimBP_C.ExecuteUbergraph_Mod_IronSentinel_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMod_IronSentinel_AnimBP_C::ExecuteUbergraph_Mod_IronSentinel_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_IronSentinel_AnimBP.Mod_IronSentinel_AnimBP_C.ExecuteUbergraph_Mod_IronSentinel_AnimBP");

	UMod_IronSentinel_AnimBP_C_ExecuteUbergraph_Mod_IronSentinel_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
