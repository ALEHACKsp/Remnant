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

// Function EventTreeNode_HideMenu.EventTreeNode_HideMenu_C.GetEditorLabel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UEventTreeNode_HideMenu_C::GetEditorLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTreeNode_HideMenu.EventTreeNode_HideMenu_C.GetEditorLabel");

	UEventTreeNode_HideMenu_C_GetEditorLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function EventTreeNode_HideMenu.EventTreeNode_HideMenu_C.Begin
// (Event, Public, BlueprintEvent)
// Parameters:
// class UEventTreeComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEventTreeNode_HideMenu_C::Begin(class UEventTreeComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTreeNode_HideMenu.EventTreeNode_HideMenu_C.Begin");

	UEventTreeNode_HideMenu_C_Begin_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EventTreeNode_HideMenu.EventTreeNode_HideMenu_C.ExecuteUbergraph_EventTreeNode_HideMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEventTreeNode_HideMenu_C::ExecuteUbergraph_EventTreeNode_HideMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTreeNode_HideMenu.EventTreeNode_HideMenu_C.ExecuteUbergraph_EventTreeNode_HideMenu");

	UEventTreeNode_HideMenu_C_ExecuteUbergraph_EventTreeNode_HideMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
