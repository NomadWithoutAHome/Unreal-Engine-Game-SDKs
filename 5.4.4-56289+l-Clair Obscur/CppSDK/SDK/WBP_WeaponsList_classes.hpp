﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_WeaponsList

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "E_jRPG_ItemSubtype_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"
#include "BlueprintSorting_structs.hpp"
#include "ECharacterAttribute_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_WeaponsList.WBP_WeaponsList_C
// 0x0070 (0x04A0 - 0x0430)
class UWBP_WeaponsList_C final : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonLazyImage*                       Background;                                        // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeaponTooltip_C*                   NavigatedWeaponTooltip;                            // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SortDropdown_C*                    SortDropdown;                                      // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             TooltipGrid;                                       // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonListView*                        WeaponsListView;                                   // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(class UBP_WeaponViewItem_C* InWeaponViewItem)> OnWeaponItemClicked; // 0x0460(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class UBP_WeaponViewItem_C* InWeaponViewItem, const struct FVector2D& AbsolutePos)> OnWeaponItemNavigated; // 0x0470(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class UBP_WeaponViewItem_C* WeaponViewItemLhs, class UBP_WeaponViewItem_C* WeaponViewItemRhs, class UOrderingResult* OrderingResult)> Dummy_SortWeaponViewItems; // 0x0480(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsBlacksmithMode;                                  // 0x0490(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_491[0x3];                                      // 0x0491(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Weapon_to_Navigate;                                // 0x0494(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_PictosList_PictosTileView_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget);
	void BndEvt__WBP_WeaponsList_SortDropdown_K2Node_ComponentBoundEvent_0_OnActiveDropdownEntryChanged__DelegateSignature();
	void BndEvt__WBP_WeaponsList_SortDropdown_K2Node_ComponentBoundEvent_2_OnSortDirectionChanged__DelegateSignature();
	void BP_OnDeactivated();
	class UWidget* DoCustomNavigationVerticalWrap(EUINavigation Navigation_0);
	void ExecuteUbergraph_WBP_WeaponsList(int32 EntryPoint);
	void LoadItemsForCharacter(class UBP_CharacterData_C* CharacterData);
	void OnElementClicked(class UBP_WeaponViewItem_C* WeaponViewItem);
	void OnElementNavigated(class UBP_WeaponViewItem_C* WeaponViewItem, const struct FVector2D& AbsolutePos);
	void SetBlacksmithMode(bool IsBlacksmithMode_0);
	void SetWeaponToNavigate(class FName WeaponToNavigateID);
	void ShowWeaponTooltip(class UBP_WeaponViewItem_C* WeaponViewItem, const struct FVector2D& AbsolutePos);
	void SortItems();
	void UpdateWeaponEquippedState();
	void WeaponSortLambda(class UBP_WeaponViewItem_C* WeaponViewItemLhs, class UBP_WeaponViewItem_C* WeaponViewItemRhs, class UOrderingResult* OrderingResult);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_WeaponsList_C">();
	}
	static class UWBP_WeaponsList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_WeaponsList_C>();
	}
};
static_assert(alignof(UWBP_WeaponsList_C) == 0x000008, "Wrong alignment on UWBP_WeaponsList_C");
static_assert(sizeof(UWBP_WeaponsList_C) == 0x0004A0, "Wrong size on UWBP_WeaponsList_C");
static_assert(offsetof(UWBP_WeaponsList_C, UberGraphFrame) == 0x000430, "Member 'UWBP_WeaponsList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponsList_C, Background) == 0x000438, "Member 'UWBP_WeaponsList_C::Background' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponsList_C, NavigatedWeaponTooltip) == 0x000440, "Member 'UWBP_WeaponsList_C::NavigatedWeaponTooltip' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponsList_C, SortDropdown) == 0x000448, "Member 'UWBP_WeaponsList_C::SortDropdown' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponsList_C, TooltipGrid) == 0x000450, "Member 'UWBP_WeaponsList_C::TooltipGrid' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponsList_C, WeaponsListView) == 0x000458, "Member 'UWBP_WeaponsList_C::WeaponsListView' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponsList_C, OnWeaponItemClicked) == 0x000460, "Member 'UWBP_WeaponsList_C::OnWeaponItemClicked' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponsList_C, OnWeaponItemNavigated) == 0x000470, "Member 'UWBP_WeaponsList_C::OnWeaponItemNavigated' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponsList_C, Dummy_SortWeaponViewItems) == 0x000480, "Member 'UWBP_WeaponsList_C::Dummy_SortWeaponViewItems' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponsList_C, IsBlacksmithMode) == 0x000490, "Member 'UWBP_WeaponsList_C::IsBlacksmithMode' has a wrong offset!");
static_assert(offsetof(UWBP_WeaponsList_C, Weapon_to_Navigate) == 0x000494, "Member 'UWBP_WeaponsList_C::Weapon_to_Navigate' has a wrong offset!");

}

