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

// WidgetBlueprintGeneratedClass Widget_Quest_Debug_Error.Widget_Quest_Debug_Error_C
// 0x0028 (FullSize[0x0268] - InheritedSize[0x0240])
class UWidget_Quest_Debug_Error_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  Label;                                                     // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0250(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Quest_Debug_Error.Widget_Quest_Debug_Error_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_Widget_Quest_Debug_Error(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
