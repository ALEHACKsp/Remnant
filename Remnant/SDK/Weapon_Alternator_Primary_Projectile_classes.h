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

// BlueprintGeneratedClass Weapon_Alternator_Primary_Projectile.Weapon_Alternator_Primary_Projectile_C
// 0x0010 (FullSize[0x0498] - InheritedSize[0x0488])
class AWeapon_Alternator_Primary_Projectile_C : public ABP_Projectile_Sphere_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0488(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    VFX_Proj_Trail;                                            // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Alternator_Primary_Projectile.Weapon_Alternator_Primary_Projectile_C");
		return ptr;
	}


	void OnProjectileHit(const struct FHitResult& Hit);
	void ExecuteUbergraph_Weapon_Alternator_Primary_Projectile(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
