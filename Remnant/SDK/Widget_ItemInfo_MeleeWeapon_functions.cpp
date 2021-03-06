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

// Function Widget_ItemInfo_MeleeWeapon.Widget_ItemInfo_MeleeWeapon_C.OnSetItem
// (BlueprintCallable, BlueprintEvent)
void UWidget_ItemInfo_MeleeWeapon_C::OnSetItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_MeleeWeapon.Widget_ItemInfo_MeleeWeapon_C.OnSetItem");

	UWidget_ItemInfo_MeleeWeapon_C_OnSetItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_MeleeWeapon.Widget_ItemInfo_MeleeWeapon_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_ItemInfo_MeleeWeapon_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_MeleeWeapon.Widget_ItemInfo_MeleeWeapon_C.Init");

	UWidget_ItemInfo_MeleeWeapon_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_MeleeWeapon.Widget_ItemInfo_MeleeWeapon_C.ExecuteUbergraph_Widget_ItemInfo_MeleeWeapon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemInfo_MeleeWeapon_C::ExecuteUbergraph_Widget_ItemInfo_MeleeWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_MeleeWeapon.Widget_ItemInfo_MeleeWeapon_C.ExecuteUbergraph_Widget_ItemInfo_MeleeWeapon");

	UWidget_ItemInfo_MeleeWeapon_C_ExecuteUbergraph_Widget_ItemInfo_MeleeWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
