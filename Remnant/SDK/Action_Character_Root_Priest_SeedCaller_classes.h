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

// BlueprintGeneratedClass Action_Character_Root_Priest_SeedCaller.Action_Character_Root_Priest_SeedCaller_C
// 0x0014 (FullSize[0x023C] - InheritedSize[0x0228])
class UAction_Character_Root_Priest_SeedCaller_C : public UBP_ActionBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     HitLocation;                                               // 0x0230(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Character_Root_Priest_SeedCaller.Action_Character_Root_Priest_SeedCaller_C");
		return ptr;
	}


	void OnActionStart();
	void ExecuteUbergraph_Action_Character_Root_Priest_SeedCaller(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
