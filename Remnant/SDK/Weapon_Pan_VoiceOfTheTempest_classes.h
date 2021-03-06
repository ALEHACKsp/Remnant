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

// BlueprintGeneratedClass Weapon_Pan_VoiceOfTheTempest.Weapon_Pan_VoiceOfTheTempest_C
// 0x0019 (FullSize[0x0651] - InheritedSize[0x0638])
class AWeapon_Pan_VoiceOfTheTempest_C : public AWeapon_Spear_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0638(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    VFX_Elec;                                                  // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ShockProcChanceChargeHit;                                  // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ProcFired;                                                 // 0x0650(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Pan_VoiceOfTheTempest.Weapon_Pan_VoiceOfTheTempest_C");
		return ptr;
	}


	void ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn);
	void OnActivated();
	void OnHitTarget(const struct FDamageInfo& DamageInfo);
	void OnEquipped();
	void OnUnequipped();
	void OnStateChange(const struct FName& StateName, const struct FName& PreviousStateName);
	void ExecuteUbergraph_Weapon_Pan_VoiceOfTheTempest(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
