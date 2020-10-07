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

// Function Widget_ZoneEntering.Widget_ZoneEntering_C.Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ZoneName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   WorldName                      (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ZoneEntering_C::Show(const struct FText& ZoneName, const struct FText& WorldName, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ZoneEntering.Widget_ZoneEntering_C.Show");

	UWidget_ZoneEntering_C_Show_Params params;
	params.ZoneName = ZoneName;
	params.WorldName = WorldName;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ZoneEntering.Widget_ZoneEntering_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_ZoneEntering_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ZoneEntering.Widget_ZoneEntering_C.Construct");

	UWidget_ZoneEntering_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ZoneEntering.Widget_ZoneEntering_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_ZoneEntering_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ZoneEntering.Widget_ZoneEntering_C.Destruct");

	UWidget_ZoneEntering_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ZoneEntering.Widget_ZoneEntering_C.ExecuteUbergraph_Widget_ZoneEntering
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ZoneEntering_C::ExecuteUbergraph_Widget_ZoneEntering(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ZoneEntering.Widget_ZoneEntering_C.ExecuteUbergraph_Widget_ZoneEntering");

	UWidget_ZoneEntering_C_ExecuteUbergraph_Widget_ZoneEntering_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif