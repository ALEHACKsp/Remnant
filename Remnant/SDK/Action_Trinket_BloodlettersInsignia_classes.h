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

// BlueprintGeneratedClass Action_Trinket_BloodlettersInsignia.Action_Trinket_BloodlettersInsignia_C
// 0x0000 (FullSize[0x02C3] - InheritedSize[0x02C3])
class UAction_Trinket_BloodlettersInsignia_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Trinket_BloodlettersInsignia.Action_Trinket_BloodlettersInsignia_C");
		return ptr;
	}


	void GetLifeSteal(float Lifesteal, float* Scalar);
	void DoDevoted(float Heal);
	void GetCharactersForDevotion(class ACharacterGunfire* Ref, TArray<class ACharacterGunfire*>* Characters);
	void GetSiphonerTraitLifeStealMod(float* ModDamage);
	void IsDamageTypeBleed(class UClass* Type, bool* isbleed);
	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
