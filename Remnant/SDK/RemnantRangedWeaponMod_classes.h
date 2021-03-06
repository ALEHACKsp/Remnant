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

// BlueprintGeneratedClass RemnantRangedWeaponMod.RemnantRangedWeaponMod_C
// 0x0019 (FullSize[0x06D9] - InheritedSize[0x06C0])
class ARemnantRangedWeaponMod_C : public ARemnantWeaponMod
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                        OnFireForceFeedback;                                       // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BlockUseDuringUseAnimation;                                // 0x06D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RemnantRangedWeaponMod.RemnantRangedWeaponMod_C");
		return ptr;
	}


	void GetLabyrinthArmorModDamageScalar(float* ModDamageScalar);
	void GetLevelScalar(float* Out);
	void GetInvokerTraitSummonDamageMod(float* SummonedCreatureModDamage);
	void GetConcentrationTraitDurationMod(float* ModDuration);
	void GetEvocationTraitDamageMod(float* ModDamage);
	bool CanUse();
	void GetWeaponDamageScalar(bool ApplyLevelDamageScalar, float* Out);
	void GetSpiritScalar(float* Out);
	void OnFire(const struct FVector& from, const struct FVector& to, float WeaponSpread);
	void ExecuteUbergraph_RemnantRangedWeaponMod(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
