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

// Function Action_ApplyBleed.Action_ApplyBleed_C.NoBleed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAction_ApplyBleed_C::NoBleed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ApplyBleed.Action_ApplyBleed_C.NoBleed");

	UAction_ApplyBleed_C_NoBleed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Action_ApplyBleed.Action_ApplyBleed_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_ApplyBleed_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ApplyBleed.Action_ApplyBleed_C.OnActionStart");

	UAction_ApplyBleed_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_ApplyBleed.Action_ApplyBleed_C.ExecuteUbergraph_Action_ApplyBleed
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_ApplyBleed_C::ExecuteUbergraph_Action_ApplyBleed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ApplyBleed.Action_ApplyBleed_C.ExecuteUbergraph_Action_ApplyBleed");

	UAction_ApplyBleed_C_ExecuteUbergraph_Action_ApplyBleed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
