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

// Function Widget_OkDialog.Widget_OkDialog_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_OkDialog_C::Init(const struct FText& Title, const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OkDialog.Widget_OkDialog_C.Init");

	UWidget_OkDialog_C_Init_Params params;
	params.Title = Title;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OkDialog.Widget_OkDialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_OkDialog_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OkDialog.Widget_OkDialog_C.Construct");

	UWidget_OkDialog_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OkDialog.Widget_OkDialog_C.BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OkDialog_C::BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OkDialog.Widget_OkDialog_C.BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_OkDialog_C_BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_OkDialog.Widget_OkDialog_C.ExecuteUbergraph_Widget_OkDialog
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_OkDialog_C::ExecuteUbergraph_Widget_OkDialog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OkDialog.Widget_OkDialog_C.ExecuteUbergraph_Widget_OkDialog");

	UWidget_OkDialog_C_ExecuteUbergraph_Widget_OkDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
