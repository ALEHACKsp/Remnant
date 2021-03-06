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

// Function BP_ActionBase.BP_ActionBase_C.SetAggroGroup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ActionBase_C::SetAggroGroup(class ACharacterGunfire* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionBase.BP_ActionBase_C.SetAggroGroup");

	UBP_ActionBase_C_SetAggroGroup_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ActionBase.BP_ActionBase_C.SpawnActor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              InTransform                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ActionBase_C::SpawnActor(struct FTransform* InTransform, class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionBase.BP_ActionBase_C.SpawnActor");

	UBP_ActionBase_C_SpawnActor_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InTransform != nullptr)
		*InTransform = params.InTransform;

}


// Function BP_ActionBase.BP_ActionBase_C.SpawnCharacter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform              Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FName                   SpawnState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Threat                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           RandomizeHeading               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacterGunfire*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class ACharacterGunfire* UBP_ActionBase_C::SpawnCharacter(class UClass* Character, const struct FTransform& Transform, const struct FName& SpawnState, class AActor* Owner, class AActor* Target, float Threat, bool RandomizeHeading)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionBase.BP_ActionBase_C.SpawnCharacter");

	UBP_ActionBase_C_SpawnCharacter_Params params;
	params.Character = Character;
	params.Transform = Transform;
	params.SpawnState = SpawnState;
	params.Owner = Owner;
	params.Target = Target;
	params.Threat = Threat;
	params.RandomizeHeading = RandomizeHeading;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_ActionBase.BP_ActionBase_C.ScatterHorizontal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          RadiusMin                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          RadiusMax                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          HeadingMax                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ActionBase_C::ScatterHorizontal(const struct FVector& Location, float RadiusMin, float RadiusMax, float HeadingMax, struct FVector* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionBase.BP_ActionBase_C.ScatterHorizontal");

	UBP_ActionBase_C_ScatterHorizontal_Params params;
	params.Location = Location;
	params.RadiusMin = RadiusMin;
	params.RadiusMax = RadiusMax;
	params.HeadingMax = HeadingMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
