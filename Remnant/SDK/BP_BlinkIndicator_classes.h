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

// BlueprintGeneratedClass BP_BlinkIndicator.BP_BlinkIndicator_C
// 0x0028 (FullSize[0x0358] - InheritedSize[0x0330])
class ABP_BlinkIndicator_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    VFX_Indicator;                                             // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Indicator;                                                 // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             SFXIndicatorLoop;                                          // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BlinkIndicator.BP_BlinkIndicator_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_BlinkIndicator(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
