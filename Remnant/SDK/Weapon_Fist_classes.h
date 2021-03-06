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

// BlueprintGeneratedClass Weapon_Fist.Weapon_Fist_C
// 0x0011 (FullSize[0x0621] - InheritedSize[0x0610])
class AWeapon_Fist_C : public AWeapon_Melee_SkinnedBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0610(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StowMesh;                                                  // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               IsUnarmedDamage;                                           // 0x0620(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Fist.Weapon_Fist_C");
		return ptr;
	}


	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
	void IsDefaultEquipment(bool* DefaultEquipment);
	unsigned char GetLevel();
	void PostComputeCharacterStats();
	void ExecuteUbergraph_Weapon_Fist(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
