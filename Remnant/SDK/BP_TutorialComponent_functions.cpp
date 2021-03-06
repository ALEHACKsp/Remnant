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

// Function BP_TutorialComponent.BP_TutorialComponent_C.IncrementCounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Counter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_TutorialComponent_C::IncrementCounter(const struct FName& Counter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.IncrementCounter");

	UBP_TutorialComponent_C_IncrementCounter_Params params;
	params.Counter = Counter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.GetSave
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USavedCharacter*         Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_TutorialComponent_C::GetSave(class USavedCharacter** Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.GetSave");

	UBP_TutorialComponent_C_GetSave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.CheckCounter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Counter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            MaxCount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_TutorialComponent_C::CheckCounter(const struct FName& Counter, int MaxCount, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.CheckCounter");

	UBP_TutorialComponent_C_CheckCounter_Params params;
	params.Counter = Counter;
	params.MaxCount = MaxCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.HasDragonHeart
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_TutorialComponent_C::HasDragonHeart(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.HasDragonHeart");

	UBP_TutorialComponent_C_HasDragonHeart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.HasTwoRangedWeapons
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_TutorialComponent_C::HasTwoRangedWeapons(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.HasTwoRangedWeapons");

	UBP_TutorialComponent_C_HasTwoRangedWeapons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.CanUseWeaponMod
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_TutorialComponent_C::CanUseWeaponMod(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.CanUseWeaponMod");

	UBP_TutorialComponent_C_CanUseWeaponMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.HasMeleeWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_TutorialComponent_C::HasMeleeWeapon(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.HasMeleeWeapon");

	UBP_TutorialComponent_C_HasMeleeWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.HasRangedWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_TutorialComponent_C::HasRangedWeapon(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.HasRangedWeapon");

	UBP_TutorialComponent_C_HasRangedWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.SetCooldown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Cooldown                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_TutorialComponent_C::SetCooldown(const struct FName& Cooldown, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.SetCooldown");

	UBP_TutorialComponent_C_SetCooldown_Params params;
	params.Cooldown = Cooldown;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.CheckCooldown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Cooldown                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_TutorialComponent_C::CheckCooldown(const struct FName& Cooldown, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.CheckCooldown");

	UBP_TutorialComponent_C_CheckCooldown_Params params;
	params.Cooldown = Cooldown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.NotifyWounded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter_Master_Player_C* Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_TutorialComponent_C::NotifyWounded(class ACharacter_Master_Player_C* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.NotifyWounded");

	UBP_TutorialComponent_C_NotifyWounded_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.OnWoundedState_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWoundedComponent*       WoundedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EWoundedState                  State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_TutorialComponent_C::OnWoundedState_Event_1(class UWoundedComponent* WoundedComponent, EWoundedState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.OnWoundedState_Event_1");

	UBP_TutorialComponent_C_OnWoundedState_Event_1_Params params;
	params.WoundedComponent = WoundedComponent;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.SetupWoundedTutorial
// (BlueprintCallable, BlueprintEvent)
void UBP_TutorialComponent_C::SetupWoundedTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.SetupWoundedTutorial");

	UBP_TutorialComponent_C_SetupWoundedTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.OnWoundedState_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWoundedComponent*       WoundedComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EWoundedState                  State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_TutorialComponent_C::OnWoundedState_Event_2(class UWoundedComponent* WoundedComponent, EWoundedState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.OnWoundedState_Event_2");

	UBP_TutorialComponent_C_OnWoundedState_Event_2_Params params;
	params.WoundedComponent = WoundedComponent;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.SetupReloadTutorial
// (BlueprintCallable, BlueprintEvent)
void UBP_TutorialComponent_C::SetupReloadTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.SetupReloadTutorial");

	UBP_TutorialComponent_C_SetupReloadTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.OnReloadTutorialTimer
// (BlueprintCallable, BlueprintEvent)
void UBP_TutorialComponent_C::OnReloadTutorialTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.OnReloadTutorialTimer");

	UBP_TutorialComponent_C_OnReloadTutorialTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.SetupToggleWeaponTutorial
// (BlueprintCallable, BlueprintEvent)
void UBP_TutorialComponent_C::SetupToggleWeaponTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.SetupToggleWeaponTutorial");

	UBP_TutorialComponent_C_SetupToggleWeaponTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.OnToggleWeaponEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_TutorialComponent_C::OnToggleWeaponEvent(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.OnToggleWeaponEvent");

	UBP_TutorialComponent_C_OnToggleWeaponEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.SetupAttackTutorial
// (BlueprintCallable, BlueprintEvent)
void UBP_TutorialComponent_C::SetupAttackTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.SetupAttackTutorial");

	UBP_TutorialComponent_C_SetupAttackTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.CheckForTarget
// (BlueprintCallable, BlueprintEvent)
void UBP_TutorialComponent_C::CheckForTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.CheckForTarget");

	UBP_TutorialComponent_C_CheckForTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.SetupDodgeTutorial
// (BlueprintCallable, BlueprintEvent)
void UBP_TutorialComponent_C::SetupDodgeTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.SetupDodgeTutorial");

	UBP_TutorialComponent_C_SetupDodgeTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.OnDodgeTutorialNotifyTakeDamage
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UBP_TutorialComponent_C::OnDodgeTutorialNotifyTakeDamage(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.OnDodgeTutorialNotifyTakeDamage");

	UBP_TutorialComponent_C_OnDodgeTutorialNotifyTakeDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.SetupTraitsTutorial
// (BlueprintCallable, BlueprintEvent)
void UBP_TutorialComponent_C::SetupTraitsTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.SetupTraitsTutorial");

	UBP_TutorialComponent_C_SetupTraitsTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.OnLevelUp_Event_1
// (BlueprintCallable, BlueprintEvent)
void UBP_TutorialComponent_C::OnLevelUp_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.OnLevelUp_Event_1");

	UBP_TutorialComponent_C_OnLevelUp_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.SetupHealthTutorial
// (BlueprintCallable, BlueprintEvent)
void UBP_TutorialComponent_C::SetupHealthTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.SetupHealthTutorial");

	UBP_TutorialComponent_C_SetupHealthTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.OnHealthTutorialNotifyTakeDamage
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UBP_TutorialComponent_C::OnHealthTutorialNotifyTakeDamage(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.OnHealthTutorialNotifyTakeDamage");

	UBP_TutorialComponent_C_OnHealthTutorialNotifyTakeDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.OnUsedDragonHeart
// (BlueprintCallable, BlueprintEvent)
void UBP_TutorialComponent_C::OnUsedDragonHeart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.OnUsedDragonHeart");

	UBP_TutorialComponent_C_OnUsedDragonHeart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBP_TutorialComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.ReceiveBeginPlay");

	UBP_TutorialComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.OnEvent_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_TutorialComponent_C::OnEvent_Event_1(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.OnEvent_Event_1");

	UBP_TutorialComponent_C_OnEvent_Event_1_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.ExecuteUbergraph_BP_TutorialComponent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_TutorialComponent_C::ExecuteUbergraph_BP_TutorialComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TutorialComponent.BP_TutorialComponent_C.ExecuteUbergraph_BP_TutorialComponent");

	UBP_TutorialComponent_C_ExecuteUbergraph_BP_TutorialComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
