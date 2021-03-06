#pragma once

// Name: Remnant, Version: 6


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_StopAction_Base.Action_StopAction_Base_C
// 0x0020 (FullSize[0x0248] - InheritedSize[0x0228])
class UAction_StopAction_Base_C : public UBP_ActionBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      Action_to_Stop;                                            // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UActionBase*>                         CachedArray;                                               // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_StopAction_Base.Action_StopAction_Base_C");
		return ptr;
	}


	void Stop_Action(class UClass* ActionBP);
	void OnActionStart();
	void ExecuteUbergraph_Action_StopAction_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
