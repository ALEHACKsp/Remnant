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

// Function AOE_Action_PrideOfTheIskal_Projectile_Explosion.AOE_Action_PrideOfTheIskal_Projectile_Explosion_C.ModifyDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAOE_Action_PrideOfTheIskal_Projectile_Explosion_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AOE_Action_PrideOfTheIskal_Projectile_Explosion.AOE_Action_PrideOfTheIskal_Projectile_Explosion_C.ModifyDamage");

	UAOE_Action_PrideOfTheIskal_Projectile_Explosion_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;

}


// Function AOE_Action_PrideOfTheIskal_Projectile_Explosion.AOE_Action_PrideOfTheIskal_Projectile_Explosion_C.OnActionStop
// (Event, Public, BlueprintEvent)
void UAOE_Action_PrideOfTheIskal_Projectile_Explosion_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function AOE_Action_PrideOfTheIskal_Projectile_Explosion.AOE_Action_PrideOfTheIskal_Projectile_Explosion_C.OnActionStop");

	UAOE_Action_PrideOfTheIskal_Projectile_Explosion_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AOE_Action_PrideOfTheIskal_Projectile_Explosion.AOE_Action_PrideOfTheIskal_Projectile_Explosion_C.ExecuteUbergraph_AOE_Action_PrideOfTheIskal_Projectile_Explosion
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAOE_Action_PrideOfTheIskal_Projectile_Explosion_C::ExecuteUbergraph_AOE_Action_PrideOfTheIskal_Projectile_Explosion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AOE_Action_PrideOfTheIskal_Projectile_Explosion.AOE_Action_PrideOfTheIskal_Projectile_Explosion_C.ExecuteUbergraph_AOE_Action_PrideOfTheIskal_Projectile_Explosion");

	UAOE_Action_PrideOfTheIskal_Projectile_Explosion_C_ExecuteUbergraph_AOE_Action_PrideOfTheIskal_Projectile_Explosion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
