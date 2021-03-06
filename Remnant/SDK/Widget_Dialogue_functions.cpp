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

// Function Widget_Dialogue.Widget_Dialogue_C.SetInititator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Initiator                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Dialogue_C::SetInititator(class AActor* Initiator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Dialogue.Widget_Dialogue_C.SetInititator");

	UWidget_Dialogue_C_SetInititator_Params params;
	params.Initiator = Initiator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Dialogue.Widget_Dialogue_C.FocusFirstUnvisitedOption
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_Dialogue_C::FocusFirstUnvisitedOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Dialogue.Widget_Dialogue_C.FocusFirstUnvisitedOption");

	UWidget_Dialogue_C_FocusFirstUnvisitedOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Dialogue.Widget_Dialogue_C.UnbindEvents
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_Dialogue_C::UnbindEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Dialogue.Widget_Dialogue_C.UnbindEvents");

	UWidget_Dialogue_C_UnbindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Dialogue.Widget_Dialogue_C.Get_Options_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_Dialogue_C::Get_Options_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Dialogue.Widget_Dialogue_C.Get_Options_Visibility_1");

	UWidget_Dialogue_C_Get_Options_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Dialogue.Widget_Dialogue_C.End
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_Dialogue_C::End()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Dialogue.Widget_Dialogue_C.End");

	UWidget_Dialogue_C_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Dialogue.Widget_Dialogue_C.HideOptions
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_Dialogue_C::HideOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Dialogue.Widget_Dialogue_C.HideOptions");

	UWidget_Dialogue_C_HideOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Dialogue.Widget_Dialogue_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_Dialogue_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Dialogue.Widget_Dialogue_C.GetVisibility_1");

	UWidget_Dialogue_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_Dialogue.Widget_Dialogue_C.UpdateOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_Dialogue_C::UpdateOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Dialogue.Widget_Dialogue_C.UpdateOptions");

	UWidget_Dialogue_C_UpdateOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Dialogue.Widget_Dialogue_C.UpdateDialogueText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_Dialogue_C::UpdateDialogueText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Dialogue.Widget_Dialogue_C.UpdateDialogueText");

	UWidget_Dialogue_C_UpdateDialogueText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Dialogue.Widget_Dialogue_C.SetContext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Dialogue_C::SetContext(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Dialogue.Widget_Dialogue_C.SetContext");

	UWidget_Dialogue_C_SetContext_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Dialogue.Widget_Dialogue_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_Dialogue_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Dialogue.Widget_Dialogue_C.Construct");

	UWidget_Dialogue_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Dialogue.Widget_Dialogue_C.BndEvt__Widget_ButtonEx_132_K2Node_ComponentBoundEvent_134_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Dialogue_C::BndEvt__Widget_ButtonEx_132_K2Node_ComponentBoundEvent_134_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Dialogue.Widget_Dialogue_C.BndEvt__Widget_ButtonEx_132_K2Node_ComponentBoundEvent_134_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Dialogue_C_BndEvt__Widget_ButtonEx_132_K2Node_ComponentBoundEvent_134_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Dialogue.Widget_Dialogue_C.DelayShowPrompt
// (BlueprintCallable, BlueprintEvent)
void UWidget_Dialogue_C::DelayShowPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Dialogue.Widget_Dialogue_C.DelayShowPrompt");

	UWidget_Dialogue_C_DelayShowPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Dialogue.Widget_Dialogue_C.DelayHideOptions
// (BlueprintCallable, BlueprintEvent)
void UWidget_Dialogue_C::DelayHideOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Dialogue.Widget_Dialogue_C.DelayHideOptions");

	UWidget_Dialogue_C_DelayHideOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Dialogue.Widget_Dialogue_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_187_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Dialogue_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_187_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Dialogue.Widget_Dialogue_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_187_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Dialogue_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_187_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Dialogue.Widget_Dialogue_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_Dialogue_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Dialogue.Widget_Dialogue_C.Destruct");

	UWidget_Dialogue_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Dialogue.Widget_Dialogue_C.ExecuteUbergraph_Widget_Dialogue
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Dialogue_C::ExecuteUbergraph_Widget_Dialogue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Dialogue.Widget_Dialogue_C.ExecuteUbergraph_Widget_Dialogue");

	UWidget_Dialogue_C_ExecuteUbergraph_Widget_Dialogue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
