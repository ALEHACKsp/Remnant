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

// Function BP_ContextualDialogComponent.BP_ContextualDialogComponent_C.CheckPendingCombat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBP_ContextualDialogComponent_C::CheckPendingCombat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContextualDialogComponent.BP_ContextualDialogComponent_C.CheckPendingCombat");

	UBP_ContextualDialogComponent_C_CheckPendingCombat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ContextualDialogComponent.BP_ContextualDialogComponent_C.UpdateCombatState
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_ContextualDialogComponent_C::UpdateCombatState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContextualDialogComponent.BP_ContextualDialogComponent_C.UpdateCombatState");

	UBP_ContextualDialogComponent_C_UpdateCombatState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ContextualDialogComponent.BP_ContextualDialogComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBP_ContextualDialogComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContextualDialogComponent.BP_ContextualDialogComponent_C.ReceiveBeginPlay");

	UBP_ContextualDialogComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ContextualDialogComponent.BP_ContextualDialogComponent_C.OnNotifyHitTarget_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UBP_ContextualDialogComponent_C::OnNotifyHitTarget_Event_1(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContextualDialogComponent.BP_ContextualDialogComponent_C.OnNotifyHitTarget_Event_1");

	UBP_ContextualDialogComponent_C_OnNotifyHitTarget_Event_1_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ContextualDialogComponent.BP_ContextualDialogComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ContextualDialogComponent_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContextualDialogComponent.BP_ContextualDialogComponent_C.ReceiveTick");

	UBP_ContextualDialogComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ContextualDialogComponent.BP_ContextualDialogComponent_C.DelayedExitCombat
// (BlueprintCallable, BlueprintEvent)
void UBP_ContextualDialogComponent_C::DelayedExitCombat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContextualDialogComponent.BP_ContextualDialogComponent_C.DelayedExitCombat");

	UBP_ContextualDialogComponent_C_DelayedExitCombat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ContextualDialogComponent.BP_ContextualDialogComponent_C.DelayedExitCombat30
// (BlueprintCallable, BlueprintEvent)
void UBP_ContextualDialogComponent_C::DelayedExitCombat30()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContextualDialogComponent.BP_ContextualDialogComponent_C.DelayedExitCombat30");

	UBP_ContextualDialogComponent_C_DelayedExitCombat30_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ContextualDialogComponent.BP_ContextualDialogComponent_C.ExecuteUbergraph_BP_ContextualDialogComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ContextualDialogComponent_C::ExecuteUbergraph_BP_ContextualDialogComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ContextualDialogComponent.BP_ContextualDialogComponent_C.ExecuteUbergraph_BP_ContextualDialogComponent");

	UBP_ContextualDialogComponent_C_ExecuteUbergraph_BP_ContextualDialogComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
