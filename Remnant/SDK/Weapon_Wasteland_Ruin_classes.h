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

// BlueprintGeneratedClass Weapon_Wasteland_Ruin.Weapon_Wasteland_Ruin_C
// 0x0020 (FullSize[0x0CF0] - InheritedSize[0x0CD0])
class AWeapon_Wasteland_Ruin_C : public AWeapon_LongGun_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ActiveVFX_Stow;                                            // 0x0CD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    ActiveVFX;                                                 // 0x0CE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             MuzzlePoint;                                               // 0x0CE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Wasteland_Ruin.Weapon_Wasteland_Ruin_C");
		return ptr;
	}


	void OnActivated();
	void ExecuteUbergraph_Weapon_Wasteland_Ruin(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
