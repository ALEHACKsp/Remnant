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

// Function Widget_BossHealth.Widget_BossHealth_C.UpdateHealthPercentage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Ease_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_BossHealth_C::UpdateHealthPercentage(bool Ease_)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BossHealth.Widget_BossHealth_C.UpdateHealthPercentage");

	UWidget_BossHealth_C_UpdateHealthPercentage_Params params;
	params.Ease_ = Ease_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_BossHealth.Widget_BossHealth_C.SetLabel
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_BossHealth_C::SetLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BossHealth.Widget_BossHealth_C.SetLabel");

	UWidget_BossHealth_C_SetLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_BossHealth.Widget_BossHealth_C.SetAttributes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_BossHealth_C::SetAttributes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BossHealth.Widget_BossHealth_C.SetAttributes");

	UWidget_BossHealth_C_SetAttributes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_BossHealth.Widget_BossHealth_C.SetHealthBarColor
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_BossHealth_C::SetHealthBarColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BossHealth.Widget_BossHealth_C.SetHealthBarColor");

	UWidget_BossHealth_C_SetHealthBarColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_BossHealth.Widget_BossHealth_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_BossHealth_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BossHealth.Widget_BossHealth_C.Construct");

	UWidget_BossHealth_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_BossHealth.Widget_BossHealth_C.OnNotifyHealthChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_BossHealth_C::OnNotifyHealthChanged_Event_1(class ACharacterGunfire* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BossHealth.Widget_BossHealth_C.OnNotifyHealthChanged_Event_1");

	UWidget_BossHealth_C_OnNotifyHealthChanged_Event_1_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_BossHealth.Widget_BossHealth_C.ExecuteUbergraph_Widget_BossHealth
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_BossHealth_C::ExecuteUbergraph_Widget_BossHealth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BossHealth.Widget_BossHealth_C.ExecuteUbergraph_Widget_BossHealth");

	UWidget_BossHealth_C_ExecuteUbergraph_Widget_BossHealth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
