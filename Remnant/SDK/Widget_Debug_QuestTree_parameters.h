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

// Function Widget_Debug_QuestTree.Widget_Debug_QuestTree_C.AddChildren
struct UWidget_Debug_QuestTree_C_AddChildren_Params
{
	class USceneComponent*                             Component;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Indent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Debug_QuestTree.Widget_Debug_QuestTree_C.BuildTree
struct UWidget_Debug_QuestTree_C_BuildTree_Params
{
	class UQuestComponent*                             QuestComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Indent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Debug_QuestTree.Widget_Debug_QuestTree_C.Init
struct UWidget_Debug_QuestTree_C_Init_Params
{
	class ARemnantQuest*                               Quest;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Debug_QuestTree.Widget_Debug_QuestTree_C.OnComponentClick__DelegateSignature
struct UWidget_Debug_QuestTree_C_OnComponentClick__DelegateSignature_Params
{
	class UQuestComponent*                             QuestComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Debug_QuestTree.Widget_Debug_QuestTree_C.OnComponentSelected__DelegateSignature
struct UWidget_Debug_QuestTree_C_OnComponentSelected__DelegateSignature_Params
{
	class UQuestComponent*                             QuestComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
