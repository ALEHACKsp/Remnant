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

// Function BP_Mod_Undying_Indicator.BP_Mod_Undying_Indicator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Mod_Undying_Indicator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mod_Undying_Indicator.BP_Mod_Undying_Indicator_C.UserConstructionScript");

	ABP_Mod_Undying_Indicator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Mod_Undying_Indicator.BP_Mod_Undying_Indicator_C.DoSoftDestroy
// (BlueprintCallable, BlueprintEvent)
void ABP_Mod_Undying_Indicator_C::DoSoftDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mod_Undying_Indicator.BP_Mod_Undying_Indicator_C.DoSoftDestroy");

	ABP_Mod_Undying_Indicator_C_DoSoftDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Mod_Undying_Indicator.BP_Mod_Undying_Indicator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Mod_Undying_Indicator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mod_Undying_Indicator.BP_Mod_Undying_Indicator_C.ReceiveBeginPlay");

	ABP_Mod_Undying_Indicator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Mod_Undying_Indicator.BP_Mod_Undying_Indicator_C.CheckOwner
// (BlueprintCallable, BlueprintEvent)
void ABP_Mod_Undying_Indicator_C::CheckOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mod_Undying_Indicator.BP_Mod_Undying_Indicator_C.CheckOwner");

	ABP_Mod_Undying_Indicator_C_CheckOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Mod_Undying_Indicator.BP_Mod_Undying_Indicator_C.ExecuteUbergraph_BP_Mod_Undying_Indicator
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Mod_Undying_Indicator_C::ExecuteUbergraph_BP_Mod_Undying_Indicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mod_Undying_Indicator.BP_Mod_Undying_Indicator_C.ExecuteUbergraph_BP_Mod_Undying_Indicator");

	ABP_Mod_Undying_Indicator_C_ExecuteUbergraph_BP_Mod_Undying_Indicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
