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

// Function Action_Mod_SongOfSwords.Action_Mod_SongOfSwords_C.Check Is Friendly?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                  Cause                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
bool UAction_Mod_SongOfSwords_C::Check_Is_Friendly_(class AActor** Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_SongOfSwords.Action_Mod_SongOfSwords_C.Check Is Friendly?");

	UAction_Mod_SongOfSwords_C_Check_Is_Friendly__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Cause != nullptr)
		*Cause = params.Cause;


	return params.ReturnValue;
}


// Function Action_Mod_SongOfSwords.Action_Mod_SongOfSwords_C.OnPostComputeStats
// (Event, Public, BlueprintEvent)
void UAction_Mod_SongOfSwords_C::OnPostComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_SongOfSwords.Action_Mod_SongOfSwords_C.OnPostComputeStats");

	UAction_Mod_SongOfSwords_C_OnPostComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_SongOfSwords.Action_Mod_SongOfSwords_C.ExecuteUbergraph_Action_Mod_SongOfSwords
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Mod_SongOfSwords_C::ExecuteUbergraph_Action_Mod_SongOfSwords(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_SongOfSwords.Action_Mod_SongOfSwords_C.ExecuteUbergraph_Action_Mod_SongOfSwords");

	UAction_Mod_SongOfSwords_C_ExecuteUbergraph_Action_Mod_SongOfSwords_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
