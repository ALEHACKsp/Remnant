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

// Function Action_AOE_ForceImpulse.Action_AOE_ForceImpulse_C.PostDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Falloff                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DamageReceived                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_AOE_ForceImpulse_C::PostDamage(class AActor* Target, float Falloff, float DamageReceived)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_ForceImpulse.Action_AOE_ForceImpulse_C.PostDamage");

	UAction_AOE_ForceImpulse_C_PostDamage_Params params;
	params.Target = Target;
	params.Falloff = Falloff;
	params.DamageReceived = DamageReceived;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_AOE_ForceImpulse.Action_AOE_ForceImpulse_C.ExecuteUbergraph_Action_AOE_ForceImpulse
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_AOE_ForceImpulse_C::ExecuteUbergraph_Action_AOE_ForceImpulse(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_ForceImpulse.Action_AOE_ForceImpulse_C.ExecuteUbergraph_Action_AOE_ForceImpulse");

	UAction_AOE_ForceImpulse_C_ExecuteUbergraph_Action_AOE_ForceImpulse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
