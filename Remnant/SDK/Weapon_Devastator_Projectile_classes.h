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

// BlueprintGeneratedClass Weapon_Devastator_Projectile.Weapon_Devastator_Projectile_C
// 0x0028 (FullSize[0x04F0] - InheritedSize[0x04C8])
class AWeapon_Devastator_Projectile_C : public ABP_Projectile_Stick_Sphere_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTweenComponent*                             Tween;                                                     // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Weapon_Devastator_Primary_Fire_Bolt_Projectile_Start_SC;   // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              UniqueHits;                                                // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Devastator_Projectile.Weapon_Devastator_Projectile_C");
		return ptr;
	}


	bool IsSprayHit(const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Weapon_Devastator_Projectile(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
