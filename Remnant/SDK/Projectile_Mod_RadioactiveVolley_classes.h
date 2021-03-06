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

// BlueprintGeneratedClass Projectile_Mod_RadioactiveVolley.Projectile_Mod_RadioactiveVolley_C
// 0x001C (FullSize[0x04A4] - InheritedSize[0x0488])
class AProjectile_Mod_RadioactiveVolley_C : public AProjectileSphere
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0488(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    VFX_Proj;                                                  // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Defiler_Projectile_Start_SC;                               // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              RandomBounceAngle;                                         // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Mod_RadioactiveVolley.Projectile_Mod_RadioactiveVolley_C");
		return ptr;
	}


	void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void OnProjectileHit(const struct FHitResult& Hit);
	void ExecuteUbergraph_Projectile_Mod_RadioactiveVolley(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
