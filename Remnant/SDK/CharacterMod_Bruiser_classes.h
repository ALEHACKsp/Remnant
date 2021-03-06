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

// BlueprintGeneratedClass CharacterMod_Bruiser.CharacterMod_Bruiser_C
// 0x0168 (FullSize[0x0390] - InheritedSize[0x0228])
class UCharacterMod_Bruiser_C : public UCharacterMod_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FDamageInfo                                 NewVar_1;                                                  // 0x0230(0x0160) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CharacterMod_Bruiser.CharacterMod_Bruiser_C");
		return ptr;
	}


	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
	void ExecuteUbergraph_CharacterMod_Bruiser(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
