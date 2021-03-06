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

// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.ResetRootAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewAlpha                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_QuestNotification_Objective_C::ResetRootAlpha(float NewAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.ResetRootAlpha");

	UWidget_QuestNotification_Objective_C_ResetRootAlpha_Params params;
	params.NewAlpha = NewAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.OverrideUnHideObjective
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeToUnHide                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_QuestNotification_Objective_C::OverrideUnHideObjective(float TimeToUnHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.OverrideUnHideObjective");

	UWidget_QuestNotification_Objective_C_OverrideUnHideObjective_Params params;
	params.TimeToUnHide = TimeToUnHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.ToggleObjectiveHidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoHide                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_QuestNotification_Objective_C::ToggleObjectiveHidden(bool DoHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.ToggleObjectiveHidden");

	UWidget_QuestNotification_Objective_C_ToggleObjectiveHidden_Params params;
	params.DoHide = DoHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.RefreshDefend
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_QuestNotification_Objective_C::RefreshDefend()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.RefreshDefend");

	UWidget_QuestNotification_Objective_C_RefreshDefend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.RefreshProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_QuestNotification_Objective_C::RefreshProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.RefreshProgress");

	UWidget_QuestNotification_Objective_C_RefreshProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.RefreshComplete
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_QuestNotification_Objective_C::RefreshComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.RefreshComplete");

	UWidget_QuestNotification_Objective_C_RefreshComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.FadeIn
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_QuestNotification_Objective_C::FadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.FadeIn");

	UWidget_QuestNotification_Objective_C_FadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_QuestNotification_Objective_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.Refresh");

	UWidget_QuestNotification_Objective_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.GetObjectiveText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_QuestNotification_Objective_C::GetObjectiveText()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.GetObjectiveText");

	UWidget_QuestNotification_Objective_C_GetObjectiveText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.ShouldShowCounter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_QuestNotification_Objective_C::ShouldShowCounter(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.ShouldShowCounter");

	UWidget_QuestNotification_Objective_C_ShouldShowCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.Get_ObjectiveProgress_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_QuestNotification_Objective_C::Get_ObjectiveProgress_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.Get_ObjectiveProgress_Text_1");

	UWidget_QuestNotification_Objective_C_Get_ObjectiveProgress_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.Get_ObjectiveProgress_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_QuestNotification_Objective_C::Get_ObjectiveProgress_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.Get_ObjectiveProgress_Visibility_1");

	UWidget_QuestNotification_Objective_C_Get_ObjectiveProgress_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.Get_ObjectiveLabel_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_QuestNotification_Objective_C::Get_ObjectiveLabel_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.Get_ObjectiveLabel_Text_1");

	UWidget_QuestNotification_Objective_C_Get_ObjectiveLabel_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_QuestNotification_Objective_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.Construct");

	UWidget_QuestNotification_Objective_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.OnObjectiveUpdated_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestObjective*         Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_QuestNotification_Objective_C::OnObjectiveUpdated_Event_1(class UQuestObjective* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.OnObjectiveUpdated_Event_1");

	UWidget_QuestNotification_Objective_C_OnObjectiveUpdated_Event_1_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.OnFadeOut
// (BlueprintCallable, BlueprintEvent)
void UWidget_QuestNotification_Objective_C::OnFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.OnFadeOut");

	UWidget_QuestNotification_Objective_C_OnFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.OnRemoveFromParent
// (BlueprintCallable, BlueprintEvent)
void UWidget_QuestNotification_Objective_C::OnRemoveFromParent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.OnRemoveFromParent");

	UWidget_QuestNotification_Objective_C_OnRemoveFromParent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_QuestNotification_Objective_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.Tick");

	UWidget_QuestNotification_Objective_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.ResetAlpha
// (BlueprintCallable, BlueprintEvent)
void UWidget_QuestNotification_Objective_C::ResetAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.ResetAlpha");

	UWidget_QuestNotification_Objective_C_ResetAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.ExecuteUbergraph_Widget_QuestNotification_Objective
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_QuestNotification_Objective_C::ExecuteUbergraph_Widget_QuestNotification_Objective(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Objective.Widget_QuestNotification_Objective_C.ExecuteUbergraph_Widget_QuestNotification_Objective");

	UWidget_QuestNotification_Objective_C_ExecuteUbergraph_Widget_QuestNotification_Objective_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
