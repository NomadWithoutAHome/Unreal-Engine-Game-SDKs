﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_SelectionDropDown

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "E_Selectables_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "ST_DropDownItem_structs.hpp"
#include "ST_Selectable_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "E_Teams_structs.hpp"
#include "E_Units_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_SelectionDropDown.W_SelectionDropDown_C
// 0x0240 (0x04A0 - 0x0260)
class UW_SelectionDropDown_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_0;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_1;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_154;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_0;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_174;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_290;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                              ButtonSize;                                        // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            Icon;                                              // 0x02A8(0x0088)(Edit, BlueprintVisible)
	class FText                                   TipText;                                           // 0x0330(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          MenuOpen;                                          // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_349[0x7];                                      // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FST_DropDownItem>               ItemsToList;                                       // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         SelectedItemIndex;                                 // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_364[0x4];                                      // 0x0364(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ItemName;                                          // 0x0368(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UW_SpawnSelect_C*                       SpawnSelectMenu;                                   // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             DT;                                                // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ButtonEnabled;                                     // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	E_Selectables                                 Selectable;                                        // 0x0391(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          ShowExtraBorder;                                   // 0x0392(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_393[0x1];                                      // 0x0393(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BorderPadding;                                     // 0x0394(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ImagePadding;                                      // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowName;                                          // 0x039C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39D[0x3];                                      // 0x039D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Description;                                       // 0x03A0(0x0018)(Edit, BlueprintVisible)
	struct FST_Selectable                         SelectedItem;                                      // 0x03B8(0x00E0)(Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          EnableIconTilt;                                    // 0x0498(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NonDoubleWieldingWeaponType;                       // 0x0499(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CanListSkullWeapons;                               // 0x049A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_W_SelectionDropDown(int32 EntryPoint);
	void CheckItemValidity();
	void Reload();
	void BndEvt__W_SelectionDropDown_Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetSelectedItem(int32 ItemIndex);
	void CloseItemList();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetSelectedItemIndex(int32 SelectedItem_0);
	void GetItemList(E_Teams Team, E_Units Class_0, class UDataTable* Table, TArray<struct FST_DropDownItem>* Items);
	ESlateVisibility ShowSkullIcon();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_SelectionDropDown_C">();
	}
	static class UW_SelectionDropDown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_SelectionDropDown_C>();
	}
};
static_assert(alignof(UW_SelectionDropDown_C) == 0x000008, "Wrong alignment on UW_SelectionDropDown_C");
static_assert(sizeof(UW_SelectionDropDown_C) == 0x0004A0, "Wrong size on UW_SelectionDropDown_C");
static_assert(offsetof(UW_SelectionDropDown_C, UberGraphFrame) == 0x000260, "Member 'UW_SelectionDropDown_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_SelectionDropDown_C, Border_0) == 0x000268, "Member 'UW_SelectionDropDown_C::Border_0' has a wrong offset!");
static_assert(offsetof(UW_SelectionDropDown_C, Button_1) == 0x000270, "Member 'UW_SelectionDropDown_C::Button_1' has a wrong offset!");
static_assert(offsetof(UW_SelectionDropDown_C, Image) == 0x000278, "Member 'UW_SelectionDropDown_C::Image' has a wrong offset!");
static_assert(offsetof(UW_SelectionDropDown_C, Image_154) == 0x000280, "Member 'UW_SelectionDropDown_C::Image_154' has a wrong offset!");
static_assert(offsetof(UW_SelectionDropDown_C, ScaleBox_0) == 0x000288, "Member 'UW_SelectionDropDown_C::ScaleBox_0' has a wrong offset!");
static_assert(offsetof(UW_SelectionDropDown_C, ScrollBox_174) == 0x000290, "Member 'UW_SelectionDropDown_C::ScrollBox_174' has a wrong offset!");
static_assert(offsetof(UW_SelectionDropDown_C, TextBlock_290) == 0x000298, "Member 'UW_SelectionDropDown_C::TextBlock_290' has a wrong offset!");
static_assert(offsetof(UW_SelectionDropDown_C, ButtonSize) == 0x0002A0, "Member 'UW_SelectionDropDown_C::ButtonSize' has a wrong offset!");
static_assert(offsetof(UW_SelectionDropDown_C, Icon) == 0x0002A8, "Member 'UW_SelectionDropDown_C::Icon' has a wrong offset!");
static_assert(offsetof(UW_SelectionDropDown_C, TipText) == 0x000330, "Member 'UW_SelectionDropDown_C::TipText' has a wrong offset!");
static_assert(offsetof(UW_SelectionDropDown_C, MenuOpen) == 0x000348, "Member 'UW_SelectionDropDown_C::MenuOpen' has a wrong offset!");
static_assert(offsetof(UW_SelectionDropDown_C, ItemsToList) == 0x000350, "Member 'UW_SelectionDropDown_C::ItemsToList' has a wrong offset!");
static_assert(offsetof(UW_SelectionDropDown_C, SelectedItemIndex) == 0x000360, "Member 'UW_SelectionDropDown_C::SelectedItemIndex' has a wrong offset!");
static_assert(offsetof(UW_SelectionDropDown_C, ItemName) == 0x000368, "Member 'UW_SelectionDropDown_C::ItemName' has a wrong offset!");
static_assert(offsetof(UW_SelectionDropDown_C, SpawnSelectMenu) == 0x000380, "Member 'UW_SelectionDropDown_C::SpawnSelectMenu' has a wrong offset!");
static_assert(offsetof(UW_SelectionDropDown_C, DT) == 0x000388, "Member 'UW_SelectionDropDown_C::DT' has a wrong offset!");
static_assert(offsetof(UW_SelectionDropDown_C, ButtonEnabled) == 0x000390, "Member 'UW_SelectionDropDown_C::ButtonEnabled' has a wrong offset!");
static_assert(offsetof(UW_SelectionDropDown_C, Selectable) == 0x000391, "Member 'UW_SelectionDropDown_C::Selectable' has a wrong offset!");
static_assert(offsetof(UW_SelectionDropDown_C, ShowExtraBorder) == 0x000392, "Member 'UW_SelectionDropDown_C::ShowExtraBorder' has a wrong offset!");
static_assert(offsetof(UW_SelectionDropDown_C, BorderPadding) == 0x000394, "Member 'UW_SelectionDropDown_C::BorderPadding' has a wrong offset!");
static_assert(offsetof(UW_SelectionDropDown_C, ImagePadding) == 0x000398, "Member 'UW_SelectionDropDown_C::ImagePadding' has a wrong offset!");
static_assert(offsetof(UW_SelectionDropDown_C, ShowName) == 0x00039C, "Member 'UW_SelectionDropDown_C::ShowName' has a wrong offset!");
static_assert(offsetof(UW_SelectionDropDown_C, Description) == 0x0003A0, "Member 'UW_SelectionDropDown_C::Description' has a wrong offset!");
static_assert(offsetof(UW_SelectionDropDown_C, SelectedItem) == 0x0003B8, "Member 'UW_SelectionDropDown_C::SelectedItem' has a wrong offset!");
static_assert(offsetof(UW_SelectionDropDown_C, EnableIconTilt) == 0x000498, "Member 'UW_SelectionDropDown_C::EnableIconTilt' has a wrong offset!");
static_assert(offsetof(UW_SelectionDropDown_C, NonDoubleWieldingWeaponType) == 0x000499, "Member 'UW_SelectionDropDown_C::NonDoubleWieldingWeaponType' has a wrong offset!");
static_assert(offsetof(UW_SelectionDropDown_C, CanListSkullWeapons) == 0x00049A, "Member 'UW_SelectionDropDown_C::CanListSkullWeapons' has a wrong offset!");

}

