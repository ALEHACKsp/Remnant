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

// BlueprintGeneratedClass AOE_Action_HiveCannon_Projectile_Explosion.AOE_Action_HiveCannon_Projectile_Explosion_C
// 0x0000 (FullSize[0x027E] - InheritedSize[0x027E])
class UAOE_Action_HiveCannon_Projectile_Explosion_C : public UAction_AOE_Attack_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AOE_Action_HiveCannon_Projectile_Explosion.AOE_Action_HiveCannon_Projectile_Explosion_C");
		return ptr;
	}


	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
