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

// BlueprintGeneratedClass Action_Trait_Teamwork.Action_Trait_Teamwork_C
// 0x0011 (FullSize[0x02D4] - InheritedSize[0x02C3])
class UAction_Trait_Teamwork_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData_TEFS[0x5];                                     // 0x02C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TeamworkBuffPercentage;                                    // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Trait_Teamwork.Action_Trait_Teamwork_C");
		return ptr;
	}


	void ModifyInspectInfo(class AActor* Actor, int InspectLevel, struct FInspectInfo* Info, bool* Rtn);
	void GetExperienceMod(float* Out);
	void GetModPowerMod(float* Out);
	void OnComputeStats();
	void OnReapplyBuff();
	void OnLevelChanged();
	void ExecuteUbergraph_Action_Trait_Teamwork(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
