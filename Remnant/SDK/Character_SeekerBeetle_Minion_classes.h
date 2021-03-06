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

// BlueprintGeneratedClass Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C
// 0x005F (FullSize[0x0CF8] - InheritedSize[0x0C99])
class ACharacter_SeekerBeetle_Minion_C : public ACharacter_Swamp_ElfQueen_Bug_Explosive_C
{
public:
	unsigned char                                      UnknownData_GGDZ[0x7];                                     // 0x0C99(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Weapon_Mod_Seeker_Aggro_Loop_SC;                           // 0x0CA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    P_Mod_Seeker_Bug_Aggro;                                    // 0x0CB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             VFX_Ambient;                                               // 0x0CB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             SFX_Seed_Caller_Despawn;                                   // 0x0CC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             SFX_Seed_Caller_Spawn;                                     // 0x0CC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              HealthMax;                                                 // 0x0CD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              Damage;                                                    // 0x0CD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              Duration;                                                  // 0x0CD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               IsDissolving;                                              // 0x0CDC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LI2L[0x3];                                     // 0x0CDD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpawnTime;                                                 // 0x0CE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsUnderground;                                             // 0x0CE4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QOGS[0x3];                                     // 0x0CE5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BeetleDelayExplosionTimeIfKilledByOthers;                  // 0x0CE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2LE7[0x4];                                     // 0x0CEC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      WeaponCause;                                               // 0x0CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C");
		return ptr;
	}


	void GetMinionOwner(class AActor** Owner);
	void GetCauseDamageScalar(float* Scalar);
	void MinionHasDamageTag(bool* ExtraDamage, float* DamageScalar);
	void HasSoulEmberTrinket(bool* Out);
	void GetSpawnTime(float* Time);
	void IsValidMinion(bool* Out);
	void GetExplosionDamageMod(float* Mod);
	void GetBrutalMarkDamageMod(const struct FDamageInfo& InputPin, float* DamageMod);
	void GetArmorScalars(const struct FDamageInfo& DamageInfo, float* MinionDamageScalar);
	void GetPunisherDamageMod(class AActor* Target, float* PunisherMod);
	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
	void CheckSoulEmberTag(float* DamageScalar);
	void MC_BuildUp();
	void ReceiveBeginPlay();
	void OnPostComputeStats();
	void DestroyMinion();
	void OnOwnerComputeStats();
	void SeekerBeetleStartGlow();
	void DoExplosion(bool ShouldChain, const struct FVector& Location);
	void OnExit();
	void OnDead_Event_2(unsigned char Reason, class ACharacterGunfire* Character, class AActor* Cause);
	void SeekerBeetleStopGlow();
	void MC_Explosion();
	void NotifyHitTarget(const struct FDamageInfo& DamageInfo);
	void ExecuteUbergraph_Character_SeekerBeetle_Minion(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
