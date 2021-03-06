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

// BlueprintGeneratedClass Action_Mod_SingleTarget_FireProjectile_ColdSpear.Action_Mod_SingleTarget_FireProjectile_ColdSpear_C
// 0x0018 (FullSize[0x0310] - InheritedSize[0x02F8])
class UAction_Mod_SingleTarget_FireProjectile_ColdSpear_C : public UAction_Mod_SingleTarget_FireProjectile_C
{
public:
	struct FRotator                                    ClientRotationCalc;                                        // 0x02F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	struct FVector                                     ClientOriginCalc;                                          // 0x0304(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_SingleTarget_FireProjectile_ColdSpear.Action_Mod_SingleTarget_FireProjectile_ColdSpear_C");
		return ptr;
	}


	struct FVector GetFiringDirection();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
