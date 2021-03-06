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

// Function Mod_FanOfKnives.Mod_FanOfKnives_C.GetCurrentTargets
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AllowCached                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>          Targets                        (Parm, OutParm, ZeroConstructor)
void AMod_FanOfKnives_C::GetCurrentTargets(bool AllowCached, TArray<class AActor*>* Targets)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.GetCurrentTargets");

	AMod_FanOfKnives_C_GetCurrentTargets_Params params;
	params.AllowCached = AllowCached;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Targets != nullptr)
		*Targets = params.Targets;

}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.ShowReticule
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AMod_FanOfKnives_C::ShowReticule()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.ShowReticule");

	AMod_FanOfKnives_C_ShowReticule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.GetFireDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector AMod_FanOfKnives_C::GetFireDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.GetFireDirection");

	AMod_FanOfKnives_C_GetFireDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnRep_KnifeOn
// (Public, BlueprintCallable, BlueprintEvent)
void AMod_FanOfKnives_C::OnRep_KnifeOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnRep_KnifeOn");

	AMod_FanOfKnives_C_OnRep_KnifeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.GetDotDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_FanOfKnives_C::GetDotDamage(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.GetDotDamage");

	AMod_FanOfKnives_C_GetDotDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.ModifyDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMod_FanOfKnives_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.ModifyDamage");

	AMod_FanOfKnives_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;

}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.DoAction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionComponent*        ActionComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ActionID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_FanOfKnives_C::DoAction(class UActionComponent* ActionComponent, int* ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.DoAction");

	AMod_FanOfKnives_C_DoAction_Params params;
	params.ActionComponent = ActionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActionID != nullptr)
		*ActionID = params.ActionID;

}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.ModifyInspectInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData*       InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMod_FanOfKnives_C::ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.ModifyInspectInfo");

	AMod_FanOfKnives_C_ModifyInspectInfo_Params params;
	params.Actor = Actor;
	params.InInstanceData = InInstanceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;

}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_FanOfKnives_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.ReceiveTick");

	AMod_FanOfKnives_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnServer_TurnOff
// (BlueprintCallable, BlueprintEvent)
void AMod_FanOfKnives_C::OnServer_TurnOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnServer_TurnOff");

	AMod_FanOfKnives_C_OnServer_TurnOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnServer_End
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void AMod_FanOfKnives_C::OnServer_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnServer_End");

	AMod_FanOfKnives_C_OnServer_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnEndUse
// (Event, Public, BlueprintEvent)
void AMod_FanOfKnives_C::OnEndUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnEndUse");

	AMod_FanOfKnives_C_OnEndUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnPreviewStart
// (Event, Public, BlueprintEvent)
void AMod_FanOfKnives_C::OnPreviewStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnPreviewStart");

	AMod_FanOfKnives_C_OnPreviewStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnBeginUse
// (Event, Public, BlueprintEvent)
void AMod_FanOfKnives_C::OnBeginUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnBeginUse");

	AMod_FanOfKnives_C_OnBeginUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnPreviewEnd
// (Event, Public, BlueprintEvent)
void AMod_FanOfKnives_C::OnPreviewEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnPreviewEnd");

	AMod_FanOfKnives_C_OnPreviewEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMod_FanOfKnives_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.ReceiveBeginPlay");

	AMod_FanOfKnives_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnActivate
// (Event, Public, BlueprintEvent)
void AMod_FanOfKnives_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.OnActivate");

	AMod_FanOfKnives_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_FanOfKnives.Mod_FanOfKnives_C.ExecuteUbergraph_Mod_FanOfKnives
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_FanOfKnives_C::ExecuteUbergraph_Mod_FanOfKnives(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FanOfKnives.Mod_FanOfKnives_C.ExecuteUbergraph_Mod_FanOfKnives");

	AMod_FanOfKnives_C_ExecuteUbergraph_Mod_FanOfKnives_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
