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

// BlueprintGeneratedClass Action_Mod_Banish.Action_Mod_Banish_C
// 0x003D (FullSize[0x0300] - InheritedSize[0x02C3])
class UAction_Mod_Banish_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData_ED1V[0x5];                                     // 0x02C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               IsDisabled;                                                // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ISIX[0x7];                                     // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_Mod_Banish_Footprint_C*                  FXActor;                                                   // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCachedMaterialState>                CachedMaterials;                                           // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	class UMaterialInterface*                          Material;                                                  // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire*                           CharacterCause;                                            // 0x02F8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_Banish.Action_Mod_Banish_C");
		return ptr;
	}


	void ManualResetMaterials();
	void HasImmuneTag(bool* Out);
	void IsAlive(bool* Out);
	void FilterIncomingDamage(const struct FDamageInfo& DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage);
	void OnUnequipItem(class AEquipment* Equipment, int ItemID, int SlotIndex);
	void UpdateActorMaterials();
	void OnEquipItem(class AEquipment* Equipment, int ItemID, int SlotIndex);
	bool AllowAction(class UClass* ActionBP, const struct FDamageInfo& InDamageInfo);
	void IsPlayer(bool* Out);
	void IsBoss(bool* Out);
	void OnActionStart();
	void OnActionStop();
	void SetOwnerDisabled(bool Disabled);
	void OnTick(float DeltaSeconds);
	void StopForCinematic(class APlayerControllerGunfire* Player, bool bIsInCinematic);
	void ExecuteUbergraph_Action_Mod_Banish(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
