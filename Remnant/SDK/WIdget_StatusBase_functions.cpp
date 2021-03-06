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

// Function WIdget_StatusBase.WIdget_StatusBase_C.Add Existing Actions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionComponent*        Action_Component               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWIdget_StatusBase_C::Add_Existing_Actions(class UActionComponent** Action_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function WIdget_StatusBase.WIdget_StatusBase_C.Add Existing Actions");

	UWIdget_StatusBase_C_Add_Existing_Actions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Action_Component != nullptr)
		*Action_Component = params.Action_Component;

}


// Function WIdget_StatusBase.WIdget_StatusBase_C.Get Action Component
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UActionComponent*        Action_Component               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWIdget_StatusBase_C::Get_Action_Component(class UActionComponent** Action_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function WIdget_StatusBase.WIdget_StatusBase_C.Get Action Component");

	UWIdget_StatusBase_C_Get_Action_Component_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Action_Component != nullptr)
		*Action_Component = params.Action_Component;

}


// Function WIdget_StatusBase.WIdget_StatusBase_C.On Action Added
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionBase*             Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWIdget_StatusBase_C::On_Action_Added(class UActionBase* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function WIdget_StatusBase.WIdget_StatusBase_C.On Action Added");

	UWIdget_StatusBase_C_On_Action_Added_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WIdget_StatusBase.WIdget_StatusBase_C.ExecuteUbergraph_WIdget_StatusBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWIdget_StatusBase_C::ExecuteUbergraph_WIdget_StatusBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WIdget_StatusBase.WIdget_StatusBase_C.ExecuteUbergraph_WIdget_StatusBase");

	UWIdget_StatusBase_C_ExecuteUbergraph_WIdget_StatusBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
