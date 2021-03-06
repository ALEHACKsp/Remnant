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

// Function Widget_AdvancedStats.Widget_AdvancedStats_C.GetPlayerOffDefLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Offense                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Rating                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_AdvancedStats_C::GetPlayerOffDefLevel(bool Offense, int* Rating)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AdvancedStats.Widget_AdvancedStats_C.GetPlayerOffDefLevel");

	UWidget_AdvancedStats_C_GetPlayerOffDefLevel_Params params;
	params.Offense = Offense;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rating != nullptr)
		*Rating = params.Rating;

}


// Function Widget_AdvancedStats.Widget_AdvancedStats_C.GetZoneRating
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Rating                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_AdvancedStats_C::GetZoneRating(int* Rating)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AdvancedStats.Widget_AdvancedStats_C.GetZoneRating");

	UWidget_AdvancedStats_C_GetZoneRating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rating != nullptr)
		*Rating = params.Rating;

}


// Function Widget_AdvancedStats.Widget_AdvancedStats_C.UpdateOffsetOnController
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_AdvancedStats_C::UpdateOffsetOnController()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AdvancedStats.Widget_AdvancedStats_C.UpdateOffsetOnController");

	UWidget_AdvancedStats_C_UpdateOffsetOnController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_AdvancedStats.Widget_AdvancedStats_C.UpdateRatings
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_AdvancedStats_C::UpdateRatings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AdvancedStats.Widget_AdvancedStats_C.UpdateRatings");

	UWidget_AdvancedStats_C_UpdateRatings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_AdvancedStats.Widget_AdvancedStats_C.GetWeaponName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInspectStat            InspectStat                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Text                           (Parm, OutParm)
void UWidget_AdvancedStats_C::GetWeaponName(const struct FInspectStat& InspectStat, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AdvancedStats.Widget_AdvancedStats_C.GetWeaponName");

	UWidget_AdvancedStats_C_GetWeaponName_Params params;
	params.InspectStat = InspectStat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function Widget_AdvancedStats.Widget_AdvancedStats_C.GetEncumberanceState
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   State                          (Parm, OutParm)
// struct FSlateColor             Color                          (Parm, OutParm)
void UWidget_AdvancedStats_C::GetEncumberanceState(float Value, struct FText* State, struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AdvancedStats.Widget_AdvancedStats_C.GetEncumberanceState");

	UWidget_AdvancedStats_C_GetEncumberanceState_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
	if (Color != nullptr)
		*Color = params.Color;

}


// Function Widget_AdvancedStats.Widget_AdvancedStats_C.UpdateEncumberance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_AdvancedStats_C::UpdateEncumberance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AdvancedStats.Widget_AdvancedStats_C.UpdateEncumberance");

	UWidget_AdvancedStats_C_UpdateEncumberance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_AdvancedStats.Widget_AdvancedStats_C.GetValueColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor             Color                          (Parm, OutParm)
void UWidget_AdvancedStats_C::GetValueColor(float Value, struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AdvancedStats.Widget_AdvancedStats_C.GetValueColor");

	UWidget_AdvancedStats_C_GetValueColor_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;

}


// Function Widget_AdvancedStats.Widget_AdvancedStats_C.UpdateResistances
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_AdvancedStats_C::UpdateResistances()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AdvancedStats.Widget_AdvancedStats_C.UpdateResistances");

	UWidget_AdvancedStats_C_UpdateResistances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_AdvancedStats.Widget_AdvancedStats_C.GetPostfix
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInspectStat            InspectStat                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Value                          (Parm, OutParm)
void UWidget_AdvancedStats_C::GetPostfix(const struct FInspectStat& InspectStat, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AdvancedStats.Widget_AdvancedStats_C.GetPostfix");

	UWidget_AdvancedStats_C_GetPostfix_Params params;
	params.InspectStat = InspectStat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function Widget_AdvancedStats.Widget_AdvancedStats_C.GetPrefix
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInspectStat            InspectStat                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Value                          (Parm, OutParm)
void UWidget_AdvancedStats_C::GetPrefix(const struct FInspectStat& InspectStat, struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AdvancedStats.Widget_AdvancedStats_C.GetPrefix");

	UWidget_AdvancedStats_C_GetPrefix_Params params;
	params.InspectStat = InspectStat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function Widget_AdvancedStats.Widget_AdvancedStats_C.GetStatValue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInspectStat            InspectStat                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Text                           (Parm, OutParm)
// struct FSlateColor             Color                          (Parm, OutParm)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_AdvancedStats_C::GetStatValue(const struct FInspectStat& InspectStat, struct FText* Text, struct FSlateColor* Color, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AdvancedStats.Widget_AdvancedStats_C.GetStatValue");

	UWidget_AdvancedStats_C_GetStatValue_Params params;
	params.InspectStat = InspectStat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
	if (Color != nullptr)
		*Color = params.Color;
	if (Value != nullptr)
		*Value = params.Value;

}


// Function Widget_AdvancedStats.Widget_AdvancedStats_C.UpdateArmor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_AdvancedStats_C::UpdateArmor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AdvancedStats.Widget_AdvancedStats_C.UpdateArmor");

	UWidget_AdvancedStats_C_UpdateArmor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_AdvancedStats.Widget_AdvancedStats_C.RefreshDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_AdvancedStats_C::RefreshDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AdvancedStats.Widget_AdvancedStats_C.RefreshDetails");

	UWidget_AdvancedStats_C_RefreshDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_AdvancedStats.Widget_AdvancedStats_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_AdvancedStats_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AdvancedStats.Widget_AdvancedStats_C.Construct");

	UWidget_AdvancedStats_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_AdvancedStats.Widget_AdvancedStats_C.OnPostComputeStats_Event_1
// (BlueprintCallable, BlueprintEvent)
void UWidget_AdvancedStats_C::OnPostComputeStats_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AdvancedStats.Widget_AdvancedStats_C.OnPostComputeStats_Event_1");

	UWidget_AdvancedStats_C_OnPostComputeStats_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_AdvancedStats.Widget_AdvancedStats_C.PlayerJoined
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_AdvancedStats_C::PlayerJoined(class APlayerState* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AdvancedStats.Widget_AdvancedStats_C.PlayerJoined");

	UWidget_AdvancedStats_C_PlayerJoined_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_AdvancedStats.Widget_AdvancedStats_C.ExecuteUbergraph_Widget_AdvancedStats
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_AdvancedStats_C::ExecuteUbergraph_Widget_AdvancedStats(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_AdvancedStats.Widget_AdvancedStats_C.ExecuteUbergraph_Widget_AdvancedStats");

	UWidget_AdvancedStats_C_ExecuteUbergraph_Widget_AdvancedStats_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
