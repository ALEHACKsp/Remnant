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

// BlueprintGeneratedClass Action_AOE_Mod_RiftWalker.Action_AOE_Mod_RiftWalker_C
// 0x0014 (FullSize[0x02B4] - InheritedSize[0x02A0])
class UAction_AOE_Mod_RiftWalker_C : public UAction_AOE_ForceImpulse_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     ExplosionLocation;                                         // 0x02A8(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_AOE_Mod_RiftWalker.Action_AOE_Mod_RiftWalker_C");
		return ptr;
	}


	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
	void OnActionStart();
	void ExecuteUbergraph_Action_AOE_Mod_RiftWalker(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
