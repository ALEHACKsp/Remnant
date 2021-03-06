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

// BlueprintGeneratedClass Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C
// 0x001D (FullSize[0x02E0] - InheritedSize[0x02C3])
class UAction_Deathwish_BaseBuff_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData_FVTJ[0x5];                                     // 0x02C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              RangedDamageScalar;                                        // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              MeleeDamageScalar;                                         // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              LifeStealPercent;                                          // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              TotalPercentHealthDrain;                                   // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C");
		return ptr;
	}


	void GetLifeStealPercent(float* Scalar);
	void GetSiphonerTraitLifeStealMod(float* ModDamage);
	void GetCharactersForDevotion(class AActor* Ref, TArray<class ACharacterGunfire*>* Characters);
	void DoDevoted(float Heal);
	void HealDamage(float Damage);
	void DecreaseScaling(float Damage, class AActor* Cause, float* AdjustedDamage);
	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
	void OnActionStop();
	void OnTick(float DeltaSeconds);
	void OnHitTarget(const struct FDamageInfo& DamageInfo);
	void StopForCinematic(class APlayerControllerGunfire* Player, bool bIsInCinematic);
	void OnActionStart();
	void ExecuteUbergraph_Action_Deathwish_BaseBuff(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
