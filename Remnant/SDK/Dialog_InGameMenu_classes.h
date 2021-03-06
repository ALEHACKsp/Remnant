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

// BlueprintGeneratedClass Dialog_InGameMenu.Dialog_InGameMenu_C
// 0x000B (FullSize[0x03E8] - InheritedSize[0x03DD])
class ADialog_InGameMenu_C : public ADialog_InGameBase_C
{
public:
	unsigned char                                      UnknownData_CXPF[0x3];                                     // 0x03DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_InGameMenu.Dialog_InGameMenu_C");
		return ptr;
	}


	void FocusUpgradeTab();
	void FocusBuyTab();
	void FocusCraftingTab();
	void FocusQuestTab();
	void FocusOptionsTab();
	void FocusTraitsTab();
	void FocusInventoryTab();
	void FocusCharacterTab();
	void InpActEvt_Menu_Inventory_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_Menu_Traits_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Menu_Options_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_MiniMap_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Menu_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Menu_Character_K2Node_InputActionEvent_1(const struct FKey& Key);
	void OnEndDialog();
	void OnPopDialog(class AUIActor* Prev);
	void End();
	void ExecuteUbergraph_Dialog_InGameMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
