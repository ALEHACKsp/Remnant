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

// BlueprintGeneratedClass EventTreeNode_ShowMenu.EventTreeNode_ShowMenu_C
// 0x0009 (FullSize[0x0071] - InheritedSize[0x0068])
class UEventTreeNode_ShowMenu_C : public UEventTreeNode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0068(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<EventTreeNode_ShowMenu_Enum>           ShowMenu;                                                  // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EventTreeNode_ShowMenu.EventTreeNode_ShowMenu_C");
		return ptr;
	}


	struct FString GetEditorLabel();
	void Begin(class UEventTreeComponent* Component);
	void ExecuteUbergraph_EventTreeNode_ShowMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
