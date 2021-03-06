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

// Function BP_RemnantPingManager.BP_RemnantPingManager_C.ReceiveBeginPlay
struct UBP_RemnantPingManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_RemnantPingManager.BP_RemnantPingManager_C.OnCharacterPing_Event_1
struct UBP_RemnantPingManager_C_OnCharacterPing_Event_1_Params
{
	class AActor*                                      Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActionPing                                 Ping;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function BP_RemnantPingManager.BP_RemnantPingManager_C.ExecuteUbergraph_BP_RemnantPingManager
struct UBP_RemnantPingManager_C_ExecuteUbergraph_BP_RemnantPingManager_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
