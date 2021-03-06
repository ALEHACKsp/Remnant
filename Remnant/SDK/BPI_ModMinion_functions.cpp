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

// Function BPI_ModMinion.BPI_ModMinion_C.GetMinionOwner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ModMinion_C::GetMinionOwner(class AActor** Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ModMinion.BPI_ModMinion_C.GetMinionOwner");

	UBPI_ModMinion_C_GetMinionOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Owner != nullptr)
		*Owner = params.Owner;

}


// Function BPI_ModMinion.BPI_ModMinion_C.GetCauseDamageScalar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scalar                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ModMinion_C::GetCauseDamageScalar(float* Scalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ModMinion.BPI_ModMinion_C.GetCauseDamageScalar");

	UBPI_ModMinion_C_GetCauseDamageScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Scalar != nullptr)
		*Scalar = params.Scalar;

}


// Function BPI_ModMinion.BPI_ModMinion_C.MinionHasDamageTag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ExtraDamage                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          DamageScalar                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ModMinion_C::MinionHasDamageTag(bool* ExtraDamage, float* DamageScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ModMinion.BPI_ModMinion_C.MinionHasDamageTag");

	UBPI_ModMinion_C_MinionHasDamageTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ExtraDamage != nullptr)
		*ExtraDamage = params.ExtraDamage;
	if (DamageScalar != nullptr)
		*DamageScalar = params.DamageScalar;

}


// Function BPI_ModMinion.BPI_ModMinion_C.HasSoulEmberTrinket
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_ModMinion_C::HasSoulEmberTrinket(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ModMinion.BPI_ModMinion_C.HasSoulEmberTrinket");

	UBPI_ModMinion_C_HasSoulEmberTrinket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function BPI_ModMinion.BPI_ModMinion_C.DestroyMinion
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_ModMinion_C::DestroyMinion()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ModMinion.BPI_ModMinion_C.DestroyMinion");

	UBPI_ModMinion_C_DestroyMinion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_ModMinion.BPI_ModMinion_C.IsValidMinion
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_ModMinion_C::IsValidMinion(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ModMinion.BPI_ModMinion_C.IsValidMinion");

	UBPI_ModMinion_C_IsValidMinion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function BPI_ModMinion.BPI_ModMinion_C.GetSpawnTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_ModMinion_C::GetSpawnTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_ModMinion.BPI_ModMinion_C.GetSpawnTime");

	UBPI_ModMinion_C_GetSpawnTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
