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

// Function Widget_ItemStatCustomLeft.Widget_ItemStatCustomLeft_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_ItemStatCustomLeft_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatCustomLeft.Widget_ItemStatCustomLeft_C.Construct");

	UWidget_ItemStatCustomLeft_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemStatCustomLeft.Widget_ItemStatCustomLeft_C.ExecuteUbergraph_Widget_ItemStatCustomLeft
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemStatCustomLeft_C::ExecuteUbergraph_Widget_ItemStatCustomLeft(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatCustomLeft.Widget_ItemStatCustomLeft_C.ExecuteUbergraph_Widget_ItemStatCustomLeft");

	UWidget_ItemStatCustomLeft_C_ExecuteUbergraph_Widget_ItemStatCustomLeft_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
