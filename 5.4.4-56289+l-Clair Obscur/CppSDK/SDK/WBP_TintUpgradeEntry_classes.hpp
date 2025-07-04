﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TintUpgradeEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S_jRPG_Item_StaticData_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TintUpgradeEntry.WBP_TintUpgradeEntry_C
// 0x0190 (0x0498 - 0x0308)
class UWBP_TintUpgradeEntry_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_BaseButton_C*                      BaseButton;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   NiagaraSystemWidget_Explosion;                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   NiagaraSystemWidget_Loop;                          // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                       PromptBackground;                                  // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PromptBox;                                         // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDynamicEntryBox*                       ResourcesEntryBox;                                 // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonLazyImage*                       TintIcon;                                          // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_WrappingText_C*                    TintNameText;                                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TextualInputActionBinding_C*       UpgradeBinding;                                    // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    SD_OnFlaskUpgraded;                                // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FS_jRPG_Item_StaticData                Shard_Static_Data;                                 // 0x0368(0x0130)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)

public:
	void BndEvt__WBP_CharacterCardButton_BaseButton_K2Node_ComponentBoundEvent_0_OnButtonBaseActionProgress__DelegateSignature(double Progress);
	void BndEvt__WBP_CharacterCardButton_BaseButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_CharacterCardButton_BaseButton_K2Node_ComponentBoundEvent_2_OnButtonBaseFocused__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_CharacterCardButton_BaseButton_K2Node_ComponentBoundEvent_3_OnButtonBaseUnfocused__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_TintUpgradeEntry(int32 EntryPoint);
	void LoadShardStaticData(const struct FS_jRPG_Item_StaticData& ShardStaticData);
	void PreConstruct(bool IsDesignTime);
	void SetShardDataAsset(class UBP_DataAsset_Item_Shard_C* ShardData);
	void SetTintData(const struct FS_jRPG_Item_StaticData& TintData);
	void Update_Prompt_State();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TintUpgradeEntry_C">();
	}
	static class UWBP_TintUpgradeEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TintUpgradeEntry_C>();
	}
};
static_assert(alignof(UWBP_TintUpgradeEntry_C) == 0x000008, "Wrong alignment on UWBP_TintUpgradeEntry_C");
static_assert(sizeof(UWBP_TintUpgradeEntry_C) == 0x000498, "Wrong size on UWBP_TintUpgradeEntry_C");
static_assert(offsetof(UWBP_TintUpgradeEntry_C, UberGraphFrame) == 0x000308, "Member 'UWBP_TintUpgradeEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TintUpgradeEntry_C, BaseButton) == 0x000310, "Member 'UWBP_TintUpgradeEntry_C::BaseButton' has a wrong offset!");
static_assert(offsetof(UWBP_TintUpgradeEntry_C, NiagaraSystemWidget_Explosion) == 0x000318, "Member 'UWBP_TintUpgradeEntry_C::NiagaraSystemWidget_Explosion' has a wrong offset!");
static_assert(offsetof(UWBP_TintUpgradeEntry_C, NiagaraSystemWidget_Loop) == 0x000320, "Member 'UWBP_TintUpgradeEntry_C::NiagaraSystemWidget_Loop' has a wrong offset!");
static_assert(offsetof(UWBP_TintUpgradeEntry_C, PromptBackground) == 0x000328, "Member 'UWBP_TintUpgradeEntry_C::PromptBackground' has a wrong offset!");
static_assert(offsetof(UWBP_TintUpgradeEntry_C, PromptBox) == 0x000330, "Member 'UWBP_TintUpgradeEntry_C::PromptBox' has a wrong offset!");
static_assert(offsetof(UWBP_TintUpgradeEntry_C, ResourcesEntryBox) == 0x000338, "Member 'UWBP_TintUpgradeEntry_C::ResourcesEntryBox' has a wrong offset!");
static_assert(offsetof(UWBP_TintUpgradeEntry_C, TintIcon) == 0x000340, "Member 'UWBP_TintUpgradeEntry_C::TintIcon' has a wrong offset!");
static_assert(offsetof(UWBP_TintUpgradeEntry_C, TintNameText) == 0x000348, "Member 'UWBP_TintUpgradeEntry_C::TintNameText' has a wrong offset!");
static_assert(offsetof(UWBP_TintUpgradeEntry_C, UpgradeBinding) == 0x000350, "Member 'UWBP_TintUpgradeEntry_C::UpgradeBinding' has a wrong offset!");
static_assert(offsetof(UWBP_TintUpgradeEntry_C, SD_OnFlaskUpgraded) == 0x000358, "Member 'UWBP_TintUpgradeEntry_C::SD_OnFlaskUpgraded' has a wrong offset!");
static_assert(offsetof(UWBP_TintUpgradeEntry_C, Shard_Static_Data) == 0x000368, "Member 'UWBP_TintUpgradeEntry_C::Shard_Static_Data' has a wrong offset!");

}

