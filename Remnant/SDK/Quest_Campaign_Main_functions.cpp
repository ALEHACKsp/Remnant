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

// Function Quest_Campaign_Main.Quest_Campaign_Main_C.OnBeginQuest
// (Event, Public, BlueprintEvent)
void AQuest_Campaign_Main_C::OnBeginQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Campaign_Main.Quest_Campaign_Main_C.OnBeginQuest");

	AQuest_Campaign_Main_C_OnBeginQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Campaign_Main.Quest_Campaign_Main_C.ReturnToUndying
// (BlueprintCallable, BlueprintEvent)
void AQuest_Campaign_Main_C::ReturnToUndying()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Campaign_Main.Quest_Campaign_Main_C.ReturnToUndying");

	AQuest_Campaign_Main_C_ReturnToUndying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Campaign_Main.Quest_Campaign_Main_C.Explore17
// (BlueprintCallable, BlueprintEvent)
void AQuest_Campaign_Main_C::Explore17()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Campaign_Main.Quest_Campaign_Main_C.Explore17");

	AQuest_Campaign_Main_C_Explore17_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Campaign_Main.Quest_Campaign_Main_C.OnDestroyQuest
// (Event, Public, BlueprintEvent)
void AQuest_Campaign_Main_C::OnDestroyQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Campaign_Main.Quest_Campaign_Main_C.OnDestroyQuest");

	AQuest_Campaign_Main_C_OnDestroyQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Campaign_Main.Quest_Campaign_Main_C.CompleteExploreWard17
// (BlueprintCallable, BlueprintEvent)
void AQuest_Campaign_Main_C::CompleteExploreWard17()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Campaign_Main.Quest_Campaign_Main_C.CompleteExploreWard17");

	AQuest_Campaign_Main_C_CompleteExploreWard17_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Campaign_Main.Quest_Campaign_Main_C.ExecuteUbergraph_Quest_Campaign_Main
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuest_Campaign_Main_C::ExecuteUbergraph_Quest_Campaign_Main(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Campaign_Main.Quest_Campaign_Main_C.ExecuteUbergraph_Quest_Campaign_Main");

	AQuest_Campaign_Main_C_ExecuteUbergraph_Quest_Campaign_Main_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
