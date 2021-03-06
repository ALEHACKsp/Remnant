// Name: Remnant, Version: 6

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ACharacter_Swamp_ElfQueen_Bug_Explosive_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.ReceiveBeginPlay");

	ACharacter_Swamp_ElfQueen_Bug_Explosive_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACharacter_Swamp_ElfQueen_Bug_Explosive_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.ReceiveTick");

	ACharacter_Swamp_ElfQueen_Bug_Explosive_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.DoExplosion
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldChain                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACharacter_Swamp_ElfQueen_Bug_Explosive_C::DoExplosion(bool ShouldChain, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.DoExplosion");

	ACharacter_Swamp_ElfQueen_Bug_Explosive_C_DoExplosion_Params params;
	params.ShouldChain = ShouldChain;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.BndEvt__ExplosionRadiusInner_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ACharacter_Swamp_ElfQueen_Bug_Explosive_C::BndEvt__ExplosionRadiusInner_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.BndEvt__ExplosionRadiusInner_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ACharacter_Swamp_ElfQueen_Bug_Explosive_C_BndEvt__ExplosionRadiusInner_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.Explode
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Swamp_ElfQueen_Bug_Explosive_C::Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.Explode");

	ACharacter_Swamp_ElfQueen_Bug_Explosive_C_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.ExplodePlayerOnly
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Swamp_ElfQueen_Bug_Explosive_C::ExplodePlayerOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.ExplodePlayerOnly");

	ACharacter_Swamp_ElfQueen_Bug_Explosive_C_ExplodePlayerOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.ShowSpeedMutation
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Swamp_ElfQueen_Bug_Explosive_C::ShowSpeedMutation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.ShowSpeedMutation");

	ACharacter_Swamp_ElfQueen_Bug_Explosive_C_ShowSpeedMutation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.ChargeStart
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Swamp_ElfQueen_Bug_Explosive_C::ChargeStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.ChargeStart");

	ACharacter_Swamp_ElfQueen_Bug_Explosive_C_ChargeStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.ChargeStop
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Swamp_ElfQueen_Bug_Explosive_C::ChargeStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.ChargeStop");

	ACharacter_Swamp_ElfQueen_Bug_Explosive_C_ChargeStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.ChargeFastStart
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Swamp_ElfQueen_Bug_Explosive_C::ChargeFastStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.ChargeFastStart");

	ACharacter_Swamp_ElfQueen_Bug_Explosive_C_ChargeFastStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.ChargeFastStop
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Swamp_ElfQueen_Bug_Explosive_C::ChargeFastStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.ChargeFastStop");

	ACharacter_Swamp_ElfQueen_Bug_Explosive_C_ChargeFastStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.DestroySelf
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Swamp_ElfQueen_Bug_Explosive_C::DestroySelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.DestroySelf");

	ACharacter_Swamp_ElfQueen_Bug_Explosive_C_DestroySelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.Escape
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Swamp_ElfQueen_Bug_Explosive_C::Escape()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.Escape");

	ACharacter_Swamp_ElfQueen_Bug_Explosive_C_Escape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.OnComputeStats
// (Event, Protected, BlueprintEvent)
void ACharacter_Swamp_ElfQueen_Bug_Explosive_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.OnComputeStats");

	ACharacter_Swamp_ElfQueen_Bug_Explosive_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.KilledByPlayer
// (BlueprintCallable, BlueprintEvent)
void ACharacter_Swamp_ElfQueen_Bug_Explosive_C::KilledByPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.KilledByPlayer");

	ACharacter_Swamp_ElfQueen_Bug_Explosive_C_KilledByPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.ExecuteUbergraph_Character_Swamp_ElfQueen_Bug_Explosive
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACharacter_Swamp_ElfQueen_Bug_Explosive_C::ExecuteUbergraph_Character_Swamp_ElfQueen_Bug_Explosive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Swamp_ElfQueen_Bug_Explosive.Character_Swamp_ElfQueen_Bug_Explosive_C.ExecuteUbergraph_Character_Swamp_ElfQueen_Bug_Explosive");

	ACharacter_Swamp_ElfQueen_Bug_Explosive_C_ExecuteUbergraph_Character_Swamp_ElfQueen_Bug_Explosive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
