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

// Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.GetCachedInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UInventoryComponent*     Inventory                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_EquipmentSlot_Small_C::GetCachedInventory(class UInventoryComponent** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.GetCachedInventory");

	UWidget_EquipmentSlot_Small_C_GetCachedInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Inventory != nullptr)
		*Inventory = params.Inventory;

}


// Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.CacheInfo
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_EquipmentSlot_Small_C::CacheInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.CacheInfo");

	UWidget_EquipmentSlot_Small_C_CacheInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.SelectedVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_EquipmentSlot_Small_C::SelectedVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.SelectedVisibility");

	UWidget_EquipmentSlot_Small_C_SelectedVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_EquipmentSlot_Small_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_EquipmentSlot_Small_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_EquipmentSlot_Small_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_EquipmentSlot_Small_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_EquipmentSlot_Small_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.Construct");

	UWidget_EquipmentSlot_Small_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_EquipmentSlot_Small_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.Refresh");

	UWidget_EquipmentSlot_Small_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_EquipmentSlot_Small_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_EquipmentSlot_Small_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_EquipmentSlot_Small_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_EquipmentSlot_Small_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_5_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_EquipmentSlot_Small_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_5_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_5_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_EquipmentSlot_Small_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_5_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.SimulateAction
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_EquipmentSlot_Small_C::SimulateAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.SimulateAction");

	UWidget_EquipmentSlot_Small_C_SimulateAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_EquipmentSlot_Small_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_EquipmentSlot_Small_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_6_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_EquipmentSlot_Small_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_6_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_6_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_EquipmentSlot_Small_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_6_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.ExecuteUbergraph_Widget_EquipmentSlot_Small
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_EquipmentSlot_Small_C::ExecuteUbergraph_Widget_EquipmentSlot_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.ExecuteUbergraph_Widget_EquipmentSlot_Small");

	UWidget_EquipmentSlot_Small_C_ExecuteUbergraph_Widget_EquipmentSlot_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.LostFocus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_EquipmentSlot_Small_C::LostFocus__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.LostFocus__DelegateSignature");

	UWidget_EquipmentSlot_Small_C_LostFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.Focused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_EquipmentSlot_Small_C::Focused__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.Focused__DelegateSignature");

	UWidget_EquipmentSlot_Small_C_Focused__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_EquipmentSlot_Small_C::Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C.Clicked__DelegateSignature");

	UWidget_EquipmentSlot_Small_C_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
