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

// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.ShouldBeActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInteractive_ZoneDoor_Default_C::ShouldBeActive(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.ShouldBeActive");

	AInteractive_ZoneDoor_Default_C_ShouldBeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.GetAllOtherPCs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ARemnantCharacter*       ActivatingCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ACharacter_Master_Player_C*> RemnantCharacters              (Parm, OutParm, ZeroConstructor)
void AInteractive_ZoneDoor_Default_C::GetAllOtherPCs(class ARemnantCharacter* ActivatingCharacter, TArray<class ACharacter_Master_Player_C*>* RemnantCharacters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.GetAllOtherPCs");

	AInteractive_ZoneDoor_Default_C_GetAllOtherPCs_Params params;
	params.ActivatingCharacter = ActivatingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RemnantCharacters != nullptr)
		*RemnantCharacters = params.RemnantCharacters;

}


// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.OnSetNotActive
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_ZoneDoor_Default_C::OnSetNotActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.OnSetNotActive");

	AInteractive_ZoneDoor_Default_C_OnSetNotActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.OnSetActive
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_ZoneDoor_Default_C::OnSetActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.OnSetActive");

	AInteractive_ZoneDoor_Default_C_OnSetActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.RefreshActive
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_ZoneDoor_Default_C::RefreshActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.RefreshActive");

	AInteractive_ZoneDoor_Default_C_RefreshActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.SetupUsed
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_ZoneDoor_Default_C::SetupUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.SetupUsed");

	AInteractive_ZoneDoor_Default_C_SetupUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.HidePrompt
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_ZoneDoor_Default_C::HidePrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.HidePrompt");

	AInteractive_ZoneDoor_Default_C_HidePrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.ShowPrompt
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_ZoneDoor_Default_C::ShowPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.ShowPrompt");

	AInteractive_ZoneDoor_Default_C_ShowPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.OnRep_Active
// (BlueprintCallable, BlueprintEvent)
void AInteractive_ZoneDoor_Default_C::OnRep_Active()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.OnRep_Active");

	AInteractive_ZoneDoor_Default_C_OnRep_Active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.IsReady
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInteractive_ZoneDoor_Default_C::IsReady(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.IsReady");

	AInteractive_ZoneDoor_Default_C_IsReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AInteractive_ZoneDoor_Default_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.UserConstructionScript");

	AInteractive_ZoneDoor_Default_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_ZoneDoor_Default_C::BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature(const struct FName& StateName, class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature");

	AInteractive_ZoneDoor_Default_C_BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature_Params params;
	params.StateName = StateName;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.BndEvt__ZoneLink_K2Node_ComponentBoundEvent_0_ZoneVoidDelegate__DelegateSignature
// (BlueprintEvent)
void AInteractive_ZoneDoor_Default_C::BndEvt__ZoneLink_K2Node_ComponentBoundEvent_0_ZoneVoidDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.BndEvt__ZoneLink_K2Node_ComponentBoundEvent_0_ZoneVoidDelegate__DelegateSignature");

	AInteractive_ZoneDoor_Default_C_BndEvt__ZoneLink_K2Node_ComponentBoundEvent_0_ZoneVoidDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AInteractive_ZoneDoor_Default_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.ReceiveBeginPlay");

	AInteractive_ZoneDoor_Default_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.SetTriggerState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInteractive_ZoneDoor_Default_C::SetTriggerState(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.SetTriggerState");

	AInteractive_ZoneDoor_Default_C_SetTriggerState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_ZoneDoor_Default_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.ReceiveEndPlay");

	AInteractive_ZoneDoor_Default_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.OnShowPrompt
// (BlueprintCallable, BlueprintEvent)
void AInteractive_ZoneDoor_Default_C::OnShowPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.OnShowPrompt");

	AInteractive_ZoneDoor_Default_C_OnShowPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.DoTravel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARemnant_PlayerController_C* Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_ZoneDoor_Default_C::DoTravel(class ARemnant_PlayerController_C* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.DoTravel");

	AInteractive_ZoneDoor_Default_C_DoTravel_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.ExecuteUbergraph_Interactive_ZoneDoor_Default
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_ZoneDoor_Default_C::ExecuteUbergraph_Interactive_ZoneDoor_Default(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C.ExecuteUbergraph_Interactive_ZoneDoor_Default");

	AInteractive_ZoneDoor_Default_C_ExecuteUbergraph_Interactive_ZoneDoor_Default_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
