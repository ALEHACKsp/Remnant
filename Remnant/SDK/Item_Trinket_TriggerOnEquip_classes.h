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

// BlueprintGeneratedClass Item_Trinket_TriggerOnEquip.Item_Trinket_TriggerOnEquip_C
// 0x0014 (FullSize[0x05E4] - InheritedSize[0x05D0])
class AItem_Trinket_TriggerOnEquip_C : public AItem_Trinket_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      ActionBP;                                                  // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ActionID;                                                  // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_Trinket_TriggerOnEquip.Item_Trinket_TriggerOnEquip_C");
		return ptr;
	}


	void OnEquipped();
	void OnUnequipped();
	void ExecuteUbergraph_Item_Trinket_TriggerOnEquip(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
