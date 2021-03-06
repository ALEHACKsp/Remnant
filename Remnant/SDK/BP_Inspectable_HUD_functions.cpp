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

// Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.TogglePageTurnBindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoBind                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Inspectable_HUD_C::TogglePageTurnBindings(bool DoBind)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.TogglePageTurnBindings");

	ABP_Inspectable_HUD_C_TogglePageTurnBindings_Params params;
	params.DoBind = DoBind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.ClearInspectable
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Inspectable_HUD_C::ClearInspectable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.ClearInspectable");

	ABP_Inspectable_HUD_C_ClearInspectable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.Set Display Message
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
void ABP_Inspectable_HUD_C::Set_Display_Message(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.Set Display Message");

	ABP_Inspectable_HUD_C_Set_Display_Message_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.Set Inspectable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Inspectable_C*       Inspectable                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<E_InspectableHUDMode> Inspectable_Mode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Inspectable_HUD_C::Set_Inspectable(class ABP_Inspectable_C* Inspectable, TEnumAsByte<E_InspectableHUDMode> Inspectable_Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.Set Inspectable");

	ABP_Inspectable_HUD_C_Set_Inspectable_Params params;
	params.Inspectable = Inspectable;
	params.Inspectable_Mode = Inspectable_Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Inspectable_HUD_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.ReceiveBeginPlay");

	ABP_Inspectable_HUD_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.OnBeginDialog
// (Event, Public, BlueprintEvent)
void ABP_Inspectable_HUD_C::OnBeginDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.OnBeginDialog");

	ABP_Inspectable_HUD_C_OnBeginDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.PageNext
// (BlueprintCallable, BlueprintEvent)
void ABP_Inspectable_HUD_C::PageNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.PageNext");

	ABP_Inspectable_HUD_C_PageNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.PagePrev
// (BlueprintCallable, BlueprintEvent)
void ABP_Inspectable_HUD_C::PagePrev()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.PagePrev");

	ABP_Inspectable_HUD_C_PagePrev_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.RequestEndInspectWithContext
// (BlueprintCallable, BlueprintEvent)
void ABP_Inspectable_HUD_C::RequestEndInspectWithContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.RequestEndInspectWithContext");

	ABP_Inspectable_HUD_C_RequestEndInspectWithContext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.ExecuteUbergraph_BP_Inspectable_HUD
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Inspectable_HUD_C::ExecuteUbergraph_BP_Inspectable_HUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.ExecuteUbergraph_BP_Inspectable_HUD");

	ABP_Inspectable_HUD_C_ExecuteUbergraph_BP_Inspectable_HUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.ForceUpdateUI__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_Inspectable_HUD_C::ForceUpdateUI__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.ForceUpdateUI__DelegateSignature");

	ABP_Inspectable_HUD_C_ForceUpdateUI__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.OnDialogPrev__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_Inspectable_HUD_C::OnDialogPrev__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.OnDialogPrev__DelegateSignature");

	ABP_Inspectable_HUD_C_OnDialogPrev__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.OnDialogNext__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_Inspectable_HUD_C::OnDialogNext__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Inspectable_HUD.BP_Inspectable_HUD_C.OnDialogNext__DelegateSignature");

	ABP_Inspectable_HUD_C_OnDialogNext__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
