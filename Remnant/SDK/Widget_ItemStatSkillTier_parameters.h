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

// Function Widget_ItemStatSkillTier.Widget_ItemStatSkillTier_C.Refresh
struct UWidget_ItemStatSkillTier_C_Refresh_Params
{
};

// Function Widget_ItemStatSkillTier.Widget_ItemStatSkillTier_C.Construct
struct UWidget_ItemStatSkillTier_C_Construct_Params
{
};

// Function Widget_ItemStatSkillTier.Widget_ItemStatSkillTier_C.Init
struct UWidget_ItemStatSkillTier_C_Init_Params
{
	struct FInspectStat                                Stat;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Comparing;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInspectStat                                CompareStat;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FInspectInfo                                InspectInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_ItemStatSkillTier.Widget_ItemStatSkillTier_C.ExecuteUbergraph_Widget_ItemStatSkillTier
struct UWidget_ItemStatSkillTier_C_ExecuteUbergraph_Widget_ItemStatSkillTier_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
