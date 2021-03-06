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

// BlueprintGeneratedClass Trait_Teamwork.Trait_Teamwork_C
// 0x0027 (FullSize[0x0118] - InheritedSize[0x00F1])
class UTrait_Teamwork_C : public UBP_RemnantTrait_C
{
public:
	unsigned char                                      UnknownData_OAI5[0x7];                                     // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Distance;                                                  // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistanceInc;                                               // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumNearbyPlayers;                                          // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageModPerPlayer;                                        // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ModPowerModPerPlayer;                                      // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ExperienceModPerPlayer;                                    // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trait_Teamwork.Trait_Teamwork_C");
		return ptr;
	}


	void QueryNearbyPlayers();
	void FilterIncomingDamage(const struct FDamageInfo& DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage);
	void GetDamageMod(float* Out);
	void ModifyInspectInfo(class AActor* Actor, int InspectLevel, struct FInspectInfo* Info, bool* Rtn);
	void SetNumNearbyPlayers(int NumPlayers);
	void GetTeamworkRange(float* Out);
	void OnEquipped();
	void OnUnequipped();
	void ExecuteUbergraph_Trait_Teamwork(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
