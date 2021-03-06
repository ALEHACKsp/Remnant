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

// Function Action_Mod_HiveShot_InsectCloud_DOT.Action_Mod_HiveShot_InsectCloud_DOT_C.AllowAction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ActionBP                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FDamageInfo             InDamageInfo                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAction_Mod_HiveShot_InsectCloud_DOT_C::AllowAction(class UClass* ActionBP, const struct FDamageInfo& InDamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_HiveShot_InsectCloud_DOT.Action_Mod_HiveShot_InsectCloud_DOT_C.AllowAction");

	UAction_Mod_HiveShot_InsectCloud_DOT_C_AllowAction_Params params;
	params.ActionBP = ActionBP;
	params.InDamageInfo = InDamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Action_Mod_HiveShot_InsectCloud_DOT.Action_Mod_HiveShot_InsectCloud_DOT_C.RefreshDuration
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Mod_HiveShot_InsectCloud_DOT_C::RefreshDuration(class ACharacterGunfire* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_HiveShot_InsectCloud_DOT.Action_Mod_HiveShot_InsectCloud_DOT_C.RefreshDuration");

	UAction_Mod_HiveShot_InsectCloud_DOT_C_RefreshDuration_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_HiveShot_InsectCloud_DOT.Action_Mod_HiveShot_InsectCloud_DOT_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_Mod_HiveShot_InsectCloud_DOT_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_HiveShot_InsectCloud_DOT.Action_Mod_HiveShot_InsectCloud_DOT_C.OnActionStart");

	UAction_Mod_HiveShot_InsectCloud_DOT_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_HiveShot_InsectCloud_DOT.Action_Mod_HiveShot_InsectCloud_DOT_C.TickSpread
// (BlueprintCallable, BlueprintEvent)
void UAction_Mod_HiveShot_InsectCloud_DOT_C::TickSpread()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_HiveShot_InsectCloud_DOT.Action_Mod_HiveShot_InsectCloud_DOT_C.TickSpread");

	UAction_Mod_HiveShot_InsectCloud_DOT_C_TickSpread_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_HiveShot_InsectCloud_DOT.Action_Mod_HiveShot_InsectCloud_DOT_C.OnActionStop
// (Event, Public, BlueprintEvent)
void UAction_Mod_HiveShot_InsectCloud_DOT_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_HiveShot_InsectCloud_DOT.Action_Mod_HiveShot_InsectCloud_DOT_C.OnActionStop");

	UAction_Mod_HiveShot_InsectCloud_DOT_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_HiveShot_InsectCloud_DOT.Action_Mod_HiveShot_InsectCloud_DOT_C.ExecuteUbergraph_Action_Mod_HiveShot_InsectCloud_DOT
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Mod_HiveShot_InsectCloud_DOT_C::ExecuteUbergraph_Action_Mod_HiveShot_InsectCloud_DOT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_HiveShot_InsectCloud_DOT.Action_Mod_HiveShot_InsectCloud_DOT_C.ExecuteUbergraph_Action_Mod_HiveShot_InsectCloud_DOT");

	UAction_Mod_HiveShot_InsectCloud_DOT_C_ExecuteUbergraph_Action_Mod_HiveShot_InsectCloud_DOT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
