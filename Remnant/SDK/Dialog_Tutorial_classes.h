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

// BlueprintGeneratedClass Dialog_Tutorial.Dialog_Tutorial_C
// 0x0013 (FullSize[0x03F0] - InheritedSize[0x03DD])
class ADialog_Tutorial_C : public ADialog_InGameBase_C
{
public:
	unsigned char                                      UnknownData_OYJ2[0x3];                                     // 0x03DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                      ContextActor;                                              // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_Tutorial.Dialog_Tutorial_C");
		return ptr;
	}


	void Init(class UClass* Tutorial, class AActor* ContextActor, bool Left);
	void OnEndDialog();
	void ExecuteUbergraph_Dialog_Tutorial(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
