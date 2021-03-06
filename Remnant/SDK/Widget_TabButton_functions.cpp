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

// Function Widget_TabButton.Widget_TabButton_C.SetTabPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_TabButton_C::SetTabPanel(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TabButton.Widget_TabButton_C.SetTabPanel");

	UWidget_TabButton_C_SetTabPanel_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TabButton.Widget_TabButton_C.ShowTutorial
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_TabButton_C::ShowTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TabButton.Widget_TabButton_C.ShowTutorial");

	UWidget_TabButton_C_ShowTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TabButton.Widget_TabButton_C.IsPressed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_TabButton_C::IsPressed(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TabButton.Widget_TabButton_C.IsPressed");

	UWidget_TabButton_C_IsPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_TabButton.Widget_TabButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_TabButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TabButton.Widget_TabButton_C.Construct");

	UWidget_TabButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TabButton.Widget_TabButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_77_OnTabFocusDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                 Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_TabButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_77_OnTabFocusDelegate__DelegateSignature(class UWidget* Tab, class UWidget* Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TabButton.Widget_TabButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_77_OnTabFocusDelegate__DelegateSignature");

	UWidget_TabButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_77_OnTabFocusDelegate__DelegateSignature_Params params;
	params.Tab = Tab;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TabButton.Widget_TabButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_83_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
void UWidget_TabButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_83_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TabButton.Widget_TabButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_83_OnButtonReleasedEvent__DelegateSignature");

	UWidget_TabButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_83_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TabButton.Widget_TabButton_C.ShowTutorialWithDelay
// (BlueprintCallable, BlueprintEvent)
void UWidget_TabButton_C::ShowTutorialWithDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TabButton.Widget_TabButton_C.ShowTutorialWithDelay");

	UWidget_TabButton_C_ShowTutorialWithDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TabButton.Widget_TabButton_C.OnPressed_Event_1
// (BlueprintCallable, BlueprintEvent)
void UWidget_TabButton_C::OnPressed_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TabButton.Widget_TabButton_C.OnPressed_Event_1");

	UWidget_TabButton_C_OnPressed_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TabButton.Widget_TabButton_C.ExecuteUbergraph_Widget_TabButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_TabButton_C::ExecuteUbergraph_Widget_TabButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TabButton.Widget_TabButton_C.ExecuteUbergraph_Widget_TabButton");

	UWidget_TabButton_C_ExecuteUbergraph_Widget_TabButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TabButton.Widget_TabButton_C.OnTabPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_TabButton_C::OnTabPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TabButton.Widget_TabButton_C.OnTabPressed__DelegateSignature");

	UWidget_TabButton_C_OnTabPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TabButton.Widget_TabButton_C.AnimateLine__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_TabButton_C::AnimateLine__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TabButton.Widget_TabButton_C.AnimateLine__DelegateSignature");

	UWidget_TabButton_C_AnimateLine__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
