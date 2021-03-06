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

// Function ArmorSkill_Reciprocity_Action_Defense.ArmorSkill_Reciprocity_Action_Defense_C.FilterIncomingDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FDamageInfo             DamageInfoOut                  (Parm, OutParm, ContainsInstancedReference)
// bool                           ShouldApplyDamage              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UArmorSkill_Reciprocity_Action_Defense_C::FilterIncomingDamage(const struct FDamageInfo& DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Reciprocity_Action_Defense.ArmorSkill_Reciprocity_Action_Defense_C.FilterIncomingDamage");

	UArmorSkill_Reciprocity_Action_Defense_C_FilterIncomingDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DamageInfoOut != nullptr)
		*DamageInfoOut = params.DamageInfoOut;
	if (ShouldApplyDamage != nullptr)
		*ShouldApplyDamage = params.ShouldApplyDamage;

}


// Function ArmorSkill_Reciprocity_Action_Defense.ArmorSkill_Reciprocity_Action_Defense_C.OnReapplyBuff
// (Public, BlueprintCallable, BlueprintEvent)
void UArmorSkill_Reciprocity_Action_Defense_C::OnReapplyBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Reciprocity_Action_Defense.ArmorSkill_Reciprocity_Action_Defense_C.OnReapplyBuff");

	UArmorSkill_Reciprocity_Action_Defense_C_OnReapplyBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ArmorSkill_Reciprocity_Action_Defense.ArmorSkill_Reciprocity_Action_Defense_C.ExecuteUbergraph_ArmorSkill_Reciprocity_Action_Defense
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UArmorSkill_Reciprocity_Action_Defense_C::ExecuteUbergraph_ArmorSkill_Reciprocity_Action_Defense(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Reciprocity_Action_Defense.ArmorSkill_Reciprocity_Action_Defense_C.ExecuteUbergraph_ArmorSkill_Reciprocity_Action_Defense");

	UArmorSkill_Reciprocity_Action_Defense_C_ExecuteUbergraph_ArmorSkill_Reciprocity_Action_Defense_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
