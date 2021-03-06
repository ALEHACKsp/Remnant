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

// Function Widget_KeyInput.Widget_KeyInput_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_KeyInput_C::Init(const struct FText& Title, const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeyInput.Widget_KeyInput_C.Init");

	UWidget_KeyInput_C_Init_Params params;
	params.Title = Title;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_KeyInput.Widget_KeyInput_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_KeyInput_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeyInput.Widget_KeyInput_C.Construct");

	UWidget_KeyInput_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_KeyInput.Widget_KeyInput_C.ExecuteUbergraph_Widget_KeyInput
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_KeyInput_C::ExecuteUbergraph_Widget_KeyInput(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeyInput.Widget_KeyInput_C.ExecuteUbergraph_Widget_KeyInput");

	UWidget_KeyInput_C_ExecuteUbergraph_Widget_KeyInput_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
