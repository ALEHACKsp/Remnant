#pragma once

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
// Parameters
//---------------------------------------------------------------------------

// Function WidgetPingWheel_Emote.WidgetPingWheel_Emote_C.UpdateFromContext
struct UWidgetPingWheel_Emote_C_UpdateFromContext_Params
{
	class UPingSubContext*                             Context;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WidgetPingWheel_Emote.WidgetPingWheel_Emote_C.OnIconLoaded
struct UWidgetPingWheel_Emote_C_OnIconLoaded_Params
{
	class UClass*                                      Emote;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Icon;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WidgetPingWheel_Emote.WidgetPingWheel_Emote_C.Tick
struct UWidgetPingWheel_Emote_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WidgetPingWheel_Emote.WidgetPingWheel_Emote_C.ExecuteUbergraph_WidgetPingWheel_Emote
struct UWidgetPingWheel_Emote_C_ExecuteUbergraph_WidgetPingWheel_Emote_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
