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

// Function Widget_StatusInfo.Widget_StatusInfo_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_StatusInfo_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusInfo.Widget_StatusInfo_C.Init");

	UWidget_StatusInfo_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StatusInfo.Widget_StatusInfo_C.Get_Name_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_StatusInfo_C::Get_Name_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusInfo.Widget_StatusInfo_C.Get_Name_Text_1");

	UWidget_StatusInfo_C_Get_Name_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_StatusInfo.Widget_StatusInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_StatusInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusInfo.Widget_StatusInfo_C.Construct");

	UWidget_StatusInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StatusInfo.Widget_StatusInfo_C.ExecuteUbergraph_Widget_StatusInfo
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_StatusInfo_C::ExecuteUbergraph_Widget_StatusInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatusInfo.Widget_StatusInfo_C.ExecuteUbergraph_Widget_StatusInfo");

	UWidget_StatusInfo_C_ExecuteUbergraph_Widget_StatusInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
