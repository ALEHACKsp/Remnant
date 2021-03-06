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

// Function Widget_Fade.Widget_Fade_C.FadeIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Fade_C::FadeIn(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Fade.Widget_Fade_C.FadeIn");

	UWidget_Fade_C_FadeIn_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Fade.Widget_Fade_C.FadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Flash                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_Fade_C::FadeOut(float Time, bool Flash)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Fade.Widget_Fade_C.FadeOut");

	UWidget_Fade_C_FadeOut_Params params;
	params.Time = Time;
	params.Flash = Flash;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Fade.Widget_Fade_C.ExecuteUbergraph_Widget_Fade
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Fade_C::ExecuteUbergraph_Widget_Fade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Fade.Widget_Fade_C.ExecuteUbergraph_Widget_Fade");

	UWidget_Fade_C_ExecuteUbergraph_Widget_Fade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
