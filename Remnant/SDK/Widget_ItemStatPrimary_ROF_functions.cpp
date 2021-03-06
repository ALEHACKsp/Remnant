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

// Function Widget_ItemStatPrimary_ROF.Widget_ItemStatPrimary_ROF_C.Get_StatValue_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_ItemStatPrimary_ROF_C::Get_StatValue_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatPrimary_ROF.Widget_ItemStatPrimary_ROF_C.Get_StatValue_Text_1");

	UWidget_ItemStatPrimary_ROF_C_Get_StatValue_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ItemStatPrimary_ROF.Widget_ItemStatPrimary_ROF_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_ItemStatPrimary_ROF_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatPrimary_ROF.Widget_ItemStatPrimary_ROF_C.Refresh");

	UWidget_ItemStatPrimary_ROF_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemStatPrimary_ROF.Widget_ItemStatPrimary_ROF_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInspectStat            Stat                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Comparing                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInspectStat            CompareStat                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInspectInfo            InspectInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_ItemStatPrimary_ROF_C::Init(const struct FInspectStat& Stat, bool Comparing, const struct FInspectStat& CompareStat, const struct FInspectInfo& InspectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatPrimary_ROF.Widget_ItemStatPrimary_ROF_C.Init");

	UWidget_ItemStatPrimary_ROF_C_Init_Params params;
	params.Stat = Stat;
	params.Comparing = Comparing;
	params.CompareStat = CompareStat;
	params.InspectInfo = InspectInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemStatPrimary_ROF.Widget_ItemStatPrimary_ROF_C.ExecuteUbergraph_Widget_ItemStatPrimary_ROF
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemStatPrimary_ROF_C::ExecuteUbergraph_Widget_ItemStatPrimary_ROF(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatPrimary_ROF.Widget_ItemStatPrimary_ROF_C.ExecuteUbergraph_Widget_ItemStatPrimary_ROF");

	UWidget_ItemStatPrimary_ROF_C_ExecuteUbergraph_Widget_ItemStatPrimary_ROF_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
