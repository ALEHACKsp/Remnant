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

// WidgetBlueprintGeneratedClass Widget_ControllerDiagram.Widget_ControllerDiagram_C
// 0x0018 (FullSize[0x0258] - InheritedSize[0x0240])
class UWidget_ControllerDiagram_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                                Default;                                                   // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                PS4;                                                       // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ControllerDiagram.Widget_ControllerDiagram_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_Widget_ControllerDiagram(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
