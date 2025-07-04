﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ItemDetailsPanel

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ItemDetailsPanel.WBP_ItemDetailsPanel_C
// 0x0038 (0x0318 - 0x02E0)
class UWBP_ItemDetailsPanel_C final : public UUserWidget
{
public:
	class UScaleBox*                              PictoBox;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemDetailsCard_C*                 WBP_ItemDetailsCard;                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemUnlockConditionCard_C*         WBP_ItemUnlockConditionCard;                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PictoIcon_C*                       WBP_PictoIcon;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PictoTooltip_C*                    WBP_PictoTooltip;                                  // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WeaponTooltip_C*                   WBP_WeaponTooltip;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_ItemDetails;                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void LoadUnlockCondition(const class FText& ConditionText);
	void LoadDefaultItem(class UBP_ItemInstance_Base_C* ItemInstance);
	void LoadWeaponItem(class UBP_ItemInstance_Base_C* ItemInstance);
	void LoadPictoItem(class UBP_ItemInstance_Base_C* ItemInstance);
	void SetWidgetVisible(bool Visible);
	void TryGetCharacterDataForItem(const struct FS_jRPG_Item_StaticData& Item, class UBP_CharacterData_C** CharacterData);
	void LoadItemInstance(class UBP_ItemInstance_Base_C* ItemInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ItemDetailsPanel_C">();
	}
	static class UWBP_ItemDetailsPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ItemDetailsPanel_C>();
	}
};
static_assert(alignof(UWBP_ItemDetailsPanel_C) == 0x000008, "Wrong alignment on UWBP_ItemDetailsPanel_C");
static_assert(sizeof(UWBP_ItemDetailsPanel_C) == 0x000318, "Wrong size on UWBP_ItemDetailsPanel_C");
static_assert(offsetof(UWBP_ItemDetailsPanel_C, PictoBox) == 0x0002E0, "Member 'UWBP_ItemDetailsPanel_C::PictoBox' has a wrong offset!");
static_assert(offsetof(UWBP_ItemDetailsPanel_C, WBP_ItemDetailsCard) == 0x0002E8, "Member 'UWBP_ItemDetailsPanel_C::WBP_ItemDetailsCard' has a wrong offset!");
static_assert(offsetof(UWBP_ItemDetailsPanel_C, WBP_ItemUnlockConditionCard) == 0x0002F0, "Member 'UWBP_ItemDetailsPanel_C::WBP_ItemUnlockConditionCard' has a wrong offset!");
static_assert(offsetof(UWBP_ItemDetailsPanel_C, WBP_PictoIcon) == 0x0002F8, "Member 'UWBP_ItemDetailsPanel_C::WBP_PictoIcon' has a wrong offset!");
static_assert(offsetof(UWBP_ItemDetailsPanel_C, WBP_PictoTooltip) == 0x000300, "Member 'UWBP_ItemDetailsPanel_C::WBP_PictoTooltip' has a wrong offset!");
static_assert(offsetof(UWBP_ItemDetailsPanel_C, WBP_WeaponTooltip) == 0x000308, "Member 'UWBP_ItemDetailsPanel_C::WBP_WeaponTooltip' has a wrong offset!");
static_assert(offsetof(UWBP_ItemDetailsPanel_C, WidgetSwitcher_ItemDetails) == 0x000310, "Member 'UWBP_ItemDetailsPanel_C::WidgetSwitcher_ItemDetails' has a wrong offset!");

}

