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

// Function Action_StopAction_Bleed.Action_StopAction_Bleed_C.Stop Action
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ActionBP                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_StopAction_Bleed_C::Stop_Action(class UClass* ActionBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StopAction_Bleed.Action_StopAction_Bleed_C.Stop Action");

	UAction_StopAction_Bleed_C_Stop_Action_Params params;
	params.ActionBP = ActionBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_StopAction_Bleed.Action_StopAction_Bleed_C.ExecuteUbergraph_Action_StopAction_Bleed
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_StopAction_Bleed_C::ExecuteUbergraph_Action_StopAction_Bleed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StopAction_Bleed.Action_StopAction_Bleed_C.ExecuteUbergraph_Action_StopAction_Bleed");

	UAction_StopAction_Bleed_C_ExecuteUbergraph_Action_StopAction_Bleed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
