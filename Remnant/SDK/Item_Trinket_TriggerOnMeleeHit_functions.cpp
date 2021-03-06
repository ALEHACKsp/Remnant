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

// Function Item_Trinket_TriggerOnMeleeHit.Item_Trinket_TriggerOnMeleeHit_C.Trigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
void AItem_Trinket_TriggerOnMeleeHit_C::Trigger(const struct FDamageInfo& Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Trinket_TriggerOnMeleeHit.Item_Trinket_TriggerOnMeleeHit_C.Trigger");

	AItem_Trinket_TriggerOnMeleeHit_C_Trigger_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item_Trinket_TriggerOnMeleeHit.Item_Trinket_TriggerOnMeleeHit_C.OnHitTarget
// (BlueprintAuthorityOnly, Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AItem_Trinket_TriggerOnMeleeHit_C::OnHitTarget(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Trinket_TriggerOnMeleeHit.Item_Trinket_TriggerOnMeleeHit_C.OnHitTarget");

	AItem_Trinket_TriggerOnMeleeHit_C_OnHitTarget_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item_Trinket_TriggerOnMeleeHit.Item_Trinket_TriggerOnMeleeHit_C.ExecuteUbergraph_Item_Trinket_TriggerOnMeleeHit
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItem_Trinket_TriggerOnMeleeHit_C::ExecuteUbergraph_Item_Trinket_TriggerOnMeleeHit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Trinket_TriggerOnMeleeHit.Item_Trinket_TriggerOnMeleeHit_C.ExecuteUbergraph_Item_Trinket_TriggerOnMeleeHit");

	AItem_Trinket_TriggerOnMeleeHit_C_ExecuteUbergraph_Item_Trinket_TriggerOnMeleeHit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
