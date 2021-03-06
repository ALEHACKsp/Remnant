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

// Function Consumable_DragonHeart.Consumable_DragonHeart_C.IsDeathwish
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AConsumable_DragonHeart_C::IsDeathwish()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_DragonHeart.Consumable_DragonHeart_C.IsDeathwish");

	AConsumable_DragonHeart_C_IsDeathwish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Consumable_DragonHeart.Consumable_DragonHeart_C.IsReckless
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AConsumable_DragonHeart_C::IsReckless()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_DragonHeart.Consumable_DragonHeart_C.IsReckless");

	AConsumable_DragonHeart_C_IsReckless_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Consumable_DragonHeart.Consumable_DragonHeart_C.DoVolatile
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AConsumable_DragonHeart_C::DoVolatile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_DragonHeart.Consumable_DragonHeart_C.DoVolatile");

	AConsumable_DragonHeart_C_DoVolatile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Consumable_DragonHeart.Consumable_DragonHeart_C.DoDiscord
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AConsumable_DragonHeart_C::DoDiscord()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_DragonHeart.Consumable_DragonHeart_C.DoDiscord");

	AConsumable_DragonHeart_C_DoDiscord_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Consumable_DragonHeart.Consumable_DragonHeart_C.ShouldDoBenevolence
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ACharacterGunfire*       Ref                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Benevolence                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Range                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AConsumable_DragonHeart_C::ShouldDoBenevolence(class ACharacterGunfire* Ref, bool* Out, float* Benevolence, float* Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_DragonHeart.Consumable_DragonHeart_C.ShouldDoBenevolence");

	AConsumable_DragonHeart_C_ShouldDoBenevolence_Params params;
	params.Ref = Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
	if (Benevolence != nullptr)
		*Benevolence = params.Benevolence;
	if (Range != nullptr)
		*Range = params.Range;

}


// Function Consumable_DragonHeart.Consumable_DragonHeart_C.GetCharactersForBenevolence
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       Ref                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ACharacterGunfire*> Characters                     (Parm, OutParm, ZeroConstructor)
void AConsumable_DragonHeart_C::GetCharactersForBenevolence(class ACharacterGunfire* Ref, TArray<class ACharacterGunfire*>* Characters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_DragonHeart.Consumable_DragonHeart_C.GetCharactersForBenevolence");

	AConsumable_DragonHeart_C_GetCharactersForBenevolence_Params params;
	params.Ref = Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Characters != nullptr)
		*Characters = params.Characters;

}


// Function Consumable_DragonHeart.Consumable_DragonHeart_C.ValidateUse
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AConsumable_DragonHeart_C::ValidateUse(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_DragonHeart.Consumable_DragonHeart_C.ValidateUse");

	AConsumable_DragonHeart_C_ValidateUse_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Consumable_DragonHeart.Consumable_DragonHeart_C.DoBenevolence
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AConsumable_DragonHeart_C::DoBenevolence()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_DragonHeart.Consumable_DragonHeart_C.DoBenevolence");

	AConsumable_DragonHeart_C_DoBenevolence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_DragonHeart.Consumable_DragonHeart_C.UseCharge
// (Public, BlueprintCallable, BlueprintEvent)
void AConsumable_DragonHeart_C::UseCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_DragonHeart.Consumable_DragonHeart_C.UseCharge");

	AConsumable_DragonHeart_C_UseCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_DragonHeart.Consumable_DragonHeart_C.Use
// (Event, Public, BlueprintEvent)
void AConsumable_DragonHeart_C::Use()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_DragonHeart.Consumable_DragonHeart_C.Use");

	AConsumable_DragonHeart_C_Use_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_DragonHeart.Consumable_DragonHeart_C.ClientOnUseDragonHeart
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
void AConsumable_DragonHeart_C::ClientOnUseDragonHeart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_DragonHeart.Consumable_DragonHeart_C.ClientOnUseDragonHeart");

	AConsumable_DragonHeart_C_ClientOnUseDragonHeart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_DragonHeart.Consumable_DragonHeart_C.OnUseDragonHeart
// (BlueprintCallable, BlueprintEvent)
void AConsumable_DragonHeart_C::OnUseDragonHeart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_DragonHeart.Consumable_DragonHeart_C.OnUseDragonHeart");

	AConsumable_DragonHeart_C_OnUseDragonHeart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_DragonHeart.Consumable_DragonHeart_C.OnActivate
// (BlueprintCallable, BlueprintEvent)
void AConsumable_DragonHeart_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_DragonHeart.Consumable_DragonHeart_C.OnActivate");

	AConsumable_DragonHeart_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_DragonHeart.Consumable_DragonHeart_C.ExecuteUbergraph_Consumable_DragonHeart
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AConsumable_DragonHeart_C::ExecuteUbergraph_Consumable_DragonHeart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_DragonHeart.Consumable_DragonHeart_C.ExecuteUbergraph_Consumable_DragonHeart");

	AConsumable_DragonHeart_C_ExecuteUbergraph_Consumable_DragonHeart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
