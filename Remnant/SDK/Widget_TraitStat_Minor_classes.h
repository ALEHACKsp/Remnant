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

// WidgetBlueprintGeneratedClass Widget_TraitStat_Minor.Widget_TraitStat_Minor_C
// 0x00F0 (FullSize[0x0330] - InheritedSize[0x0240])
class UWidget_TraitStat_Minor_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Image_79;                                                  // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  PrevValue;                                                 // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  StatName;                                                  // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  StatValue;                                                 // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInspectStat                                Stat;                                                      // 0x0268(0x0060) (Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                               Comparing;                                                 // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_QJJ2[0x7];                                     // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInspectStat                                CompareStat;                                               // 0x02D0(0x0060) (Edit, BlueprintVisible, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_TraitStat_Minor.Widget_TraitStat_Minor_C");
		return ptr;
	}


	void Refresh();
	void Init(const struct FInspectStat& Stat, const struct FInspectStat& CompareState, bool Comparing);
	void GetPostfix(struct FText* Out);
	void GetPrefix(struct FText* Out);
	struct FText GetPrevStatValueLabel();
	struct FText GetStatValueLabel();
	void Construct();
	void ExecuteUbergraph_Widget_TraitStat_Minor(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
