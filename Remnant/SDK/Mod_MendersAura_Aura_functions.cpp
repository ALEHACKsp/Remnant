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

// Function Mod_MendersAura_Aura.Mod_MendersAura_Aura_C.CanDoAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMod_MendersAura_Aura_C::CanDoAction(class ACharacterGunfire* Character, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_MendersAura_Aura.Mod_MendersAura_Aura_C.CanDoAction");

	AMod_MendersAura_Aura_C_CanDoAction_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Mod_MendersAura_Aura.Mod_MendersAura_Aura_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMod_MendersAura_Aura_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_MendersAura_Aura.Mod_MendersAura_Aura_C.ReceiveBeginPlay");

	AMod_MendersAura_Aura_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_MendersAura_Aura.Mod_MendersAura_Aura_C.DoAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       TargetCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActionComponent*        ActionComp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_MendersAura_Aura_C::DoAction(class ACharacterGunfire* TargetCharacter, class UActionComponent* ActionComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_MendersAura_Aura.Mod_MendersAura_Aura_C.DoAction");

	AMod_MendersAura_Aura_C_DoAction_Params params;
	params.TargetCharacter = TargetCharacter;
	params.ActionComp = ActionComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_MendersAura_Aura.Mod_MendersAura_Aura_C.StopAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_MendersAura_Aura_C::StopAction(class ACharacterGunfire* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_MendersAura_Aura.Mod_MendersAura_Aura_C.StopAction");

	AMod_MendersAura_Aura_C_StopAction_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_MendersAura_Aura.Mod_MendersAura_Aura_C.FadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_MendersAura_Aura_C::FadeOut(float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_MendersAura_Aura.Mod_MendersAura_Aura_C.FadeOut");

	AMod_MendersAura_Aura_C_FadeOut_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_MendersAura_Aura.Mod_MendersAura_Aura_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_MendersAura_Aura_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_MendersAura_Aura.Mod_MendersAura_Aura_C.ReceiveTick");

	AMod_MendersAura_Aura_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_MendersAura_Aura.Mod_MendersAura_Aura_C.ExecuteUbergraph_Mod_MendersAura_Aura
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_MendersAura_Aura_C::ExecuteUbergraph_Mod_MendersAura_Aura(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_MendersAura_Aura.Mod_MendersAura_Aura_C.ExecuteUbergraph_Mod_MendersAura_Aura");

	AMod_MendersAura_Aura_C_ExecuteUbergraph_Mod_MendersAura_Aura_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
