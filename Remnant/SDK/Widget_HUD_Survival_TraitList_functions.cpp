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

// Function Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_HUD_Survival_TraitList_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C.Initialize");

	UWidget_HUD_Survival_TraitList_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C.AnimationPlay
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_HUD_Survival_TraitList_C::AnimationPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C.AnimationPlay");

	UWidget_HUD_Survival_TraitList_C_AnimationPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C.BuildTraitList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_HUD_Survival_TraitList_C::BuildTraitList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C.BuildTraitList");

	UWidget_HUD_Survival_TraitList_C_BuildTraitList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C.ShowTraitNotification
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_HUD_Survival_TraitList_C::ShowTraitNotification(class UClass* Class, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C.ShowTraitNotification");

	UWidget_HUD_Survival_TraitList_C_ShowTraitNotification_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C.GetRelevantCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacterGunfire*       Character                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_HUD_Survival_TraitList_C::GetRelevantCharacter(class ACharacterGunfire** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C.GetRelevantCharacter");

	UWidget_HUD_Survival_TraitList_C_GetRelevantCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Character != nullptr)
		*Character = params.Character;

}


// Function Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_HUD_Survival_TraitList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C.Construct");

	UWidget_HUD_Survival_TraitList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C.OnTraitAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Trait                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_HUD_Survival_TraitList_C::OnTraitAdded(class UClass* Trait)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C.OnTraitAdded");

	UWidget_HUD_Survival_TraitList_C_OnTraitAdded_Params params;
	params.Trait = Trait;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C.OnTraitLevelChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Trait                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PreviousLevel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_HUD_Survival_TraitList_C::OnTraitLevelChanged(class UClass* Trait, int PreviousLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C.OnTraitLevelChanged");

	UWidget_HUD_Survival_TraitList_C_OnTraitLevelChanged_Params params;
	params.Trait = Trait;
	params.PreviousLevel = PreviousLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C.ExecuteUbergraph_Widget_HUD_Survival_TraitList
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_HUD_Survival_TraitList_C::ExecuteUbergraph_Widget_HUD_Survival_TraitList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_Survival_TraitList.Widget_HUD_Survival_TraitList_C.ExecuteUbergraph_Widget_HUD_Survival_TraitList");

	UWidget_HUD_Survival_TraitList_C_ExecuteUbergraph_Widget_HUD_Survival_TraitList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
