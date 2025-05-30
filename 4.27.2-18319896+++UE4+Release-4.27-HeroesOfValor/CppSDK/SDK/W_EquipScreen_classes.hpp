﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_EquipScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_UnlockableCategories_structs.hpp"
#include "E_Teams_structs.hpp"
#include "E_CurrencyTypes_structs.hpp"
#include "E_Units_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_EquipScreen.W_EquipScreen_C
// 0x0198 (0x03F8 - 0x0260)
class UW_EquipScreen_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       EventIconPulsate;                                  // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Menu;                                              // 0x0270(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_3;                                          // 0x0278(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_37;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_112;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_126;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_226;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar_209;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_0;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_121;                                     // 0x02E8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Level;                                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_TeamAndUnitType;                         // 0x02F8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_XP;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_2;                                     // 0x0308(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            W_Button_C_0;                                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            W_Button_C_3;                                      // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            W_Button_Commando;                                 // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            W_Button_Commando_1;                               // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            W_Button_Gunner;                                   // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Button_C*                            W_Button_Soldier;                                  // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Combobox_C*                          W_Combobox;                                        // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Combobox_C*                          W_Combobox_1;                                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Combobox_C*                          W_Combobox_2;                                      // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_IconTab_C*                           W_IconTab_Back;                                    // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_IconTab_C*                           W_IconTab_Event;                                   // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_IconTab_C*                           W_IconTab_Feet;                                    // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_IconTab_C*                           W_IconTab_Hands;                                   // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_IconTab_C*                           W_IconTab_Hats;                                    // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_IconTab_C*                           W_IconTab_Legs;                                    // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_IconTab_C*                           W_IconTab_LowerFace;                               // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_IconTab_C*                           W_IconTab_Shirts;                                  // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_IconTab_C*                           W_IconTab_Steam;                                   // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_IconTab_C*                           W_IconTab_Tattoos;                                 // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_IconTab_C*                           W_IconTab_Torso;                                   // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_IconTab_C*                           W_IconTab_UpperFace;                               // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_IconTab_C*                           W_IconTab_WeaponSkins;                             // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_IconTab_C*                           W_IconTab_XP;                                      // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_SliderNoStep_C*                      W_SliderNoStep;                                    // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               WrapBox_143;                                       // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_EquipPreview_C*                     EquipPreviewActorRef;                              // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_MainMenu_C*                          MainMenuRef;                                       // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SwappingCameras;                                   // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_Teams                                       SelectedTeam;                                      // 0x03F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_Units                                       SelectedClass;                                     // 0x03F2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_UnlockableCategories                        SelectedCategory;                                  // 0x03F3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EventItemsSelected;                                // 0x03F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_CurrencyTypes                               CurrencyType;                                      // 0x03F5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_W_EquipScreen(int32 EntryPoint);
	void BndEvt__W_EquipScreen_W_IconTab_7_K2Node_ComponentBoundEvent_25_ButtonClicked__DelegateSignature();
	void BndEvt__W_EquipScreen_W_IconTab_6_K2Node_ComponentBoundEvent_24_ButtonClicked__DelegateSignature();
	void BndEvt__W_EquipScreen_W_IconTab_1_K2Node_ComponentBoundEvent_22_ButtonClicked__DelegateSignature();
	void BndEvt__W_EquipScreen_W_IconTab_4_K2Node_ComponentBoundEvent_21_ButtonClicked__DelegateSignature();
	void BndEvt__W_EquipScreen_W_IconTab_9_K2Node_ComponentBoundEvent_20_ButtonClicked__DelegateSignature();
	void BndEvt__W_EquipScreen_W_IconTab_2_K2Node_ComponentBoundEvent_11_ButtonClicked__DelegateSignature();
	void BndEvt__W_EquipScreen_W_IconTab_177_K2Node_ComponentBoundEvent_10_ButtonClicked__DelegateSignature();
	void BndEvt__W_EquipScreen_W_IconTab_5_K2Node_ComponentBoundEvent_19_ButtonClicked__DelegateSignature();
	void BndEvt__W_EquipScreen_W_IconTab_K2Node_ComponentBoundEvent_18_ButtonClicked__DelegateSignature();
	void BndEvt__W_EquipScreen_W_IconTab_12_K2Node_ComponentBoundEvent_17_ButtonClicked__DelegateSignature();
	void BndEvt__W_EquipScreen_W_IconTab_11_K2Node_ComponentBoundEvent_16_ButtonClicked__DelegateSignature();
	void BndEvt__W_EquipScreen_W_IconTab_13_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature();
	void BndEvt__W_EquipScreen_W_IconTab_10_K2Node_ComponentBoundEvent_13_ButtonClicked__DelegateSignature();
	void BndEvt__W_EquipScreen_W_IconTab_3_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature();
	void BndEvt__W_EquipScreen_W_Button_C_0_K2Node_ComponentBoundEvent_15_ButtonPressed__DelegateSignature();
	void BndEvt__W_EquipScreen_W_Combobox_K2Node_ComponentBoundEvent_14_OnSelectionChanged__DelegateSignature(const class FString& Selection);
	void BndEvt__W_EquipScreen_W_SliderNoStep_K2Node_ComponentBoundEvent_12_OnValueChanged__DelegateSignature(float Value);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__W_EquipScreen_W_Combobox_2_K2Node_ComponentBoundEvent_8_OnSelectionChanged__DelegateSignature(const class FString& Selection);
	void BndEvt__W_EquipScreen_W_Combobox_1_K2Node_ComponentBoundEvent_9_OnSelectionChanged__DelegateSignature(const class FString& Selection);
	void RefreshButtonLevels();
	void RefreshLevel();
	void BndEvt__W_EquipScreen_W_Button_C_1_K2Node_ComponentBoundEvent_5_ButtonPressed__DelegateSignature();
	void BndEvt__W_EquipScreen_W_Button_C_2_K2Node_ComponentBoundEvent_4_ButtonPressed__DelegateSignature();
	void ApplyFilter();
	void BndEvt__W_EquipScreen_W_Button_C_8_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature();
	void BndEvt__W_EquipScreen_Button_37_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__W_EquipScreen_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void LoadMenu();
	void BndEvt__W_EquipScreen_W_Button_C_3_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
	void Construct();
	void LoadItemList(E_UnlockableCategories Category);
	ESlateVisibility ShowLevel();
	ESlateVisibility ShowNoSteamOnnection();
	struct FLinearColor SetLevelColor();
	class FText SetSelectedUnitName();
	void SetFacialHairStyle(const int32& Index_0);
	void SetHairColor(const int32& Index_0);
	ESlateVisibility ShowBottomButtons();
	void SetSkinTone(const float& Index_0);
	void SetHairStyle(const int32& Index_0);
	ESlateVisibility ShowNoItemsText();
	struct FLinearColor SetUnitBgColor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_EquipScreen_C">();
	}
	static class UW_EquipScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_EquipScreen_C>();
	}
};
static_assert(alignof(UW_EquipScreen_C) == 0x000008, "Wrong alignment on UW_EquipScreen_C");
static_assert(sizeof(UW_EquipScreen_C) == 0x0003F8, "Wrong size on UW_EquipScreen_C");
static_assert(offsetof(UW_EquipScreen_C, UberGraphFrame) == 0x000260, "Member 'UW_EquipScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, EventIconPulsate) == 0x000268, "Member 'UW_EquipScreen_C::EventIconPulsate' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, Menu) == 0x000270, "Member 'UW_EquipScreen_C::Menu' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, Border_3) == 0x000278, "Member 'UW_EquipScreen_C::Border_3' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, Button) == 0x000280, "Member 'UW_EquipScreen_C::Button' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, Button_37) == 0x000288, "Member 'UW_EquipScreen_C::Button_37' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, Image) == 0x000290, "Member 'UW_EquipScreen_C::Image' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, Image_0) == 0x000298, "Member 'UW_EquipScreen_C::Image_0' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, Image_1) == 0x0002A0, "Member 'UW_EquipScreen_C::Image_1' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, Image_2) == 0x0002A8, "Member 'UW_EquipScreen_C::Image_2' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, Image_3) == 0x0002B0, "Member 'UW_EquipScreen_C::Image_3' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, Image_4) == 0x0002B8, "Member 'UW_EquipScreen_C::Image_4' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, Image_112) == 0x0002C0, "Member 'UW_EquipScreen_C::Image_112' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, Image_126) == 0x0002C8, "Member 'UW_EquipScreen_C::Image_126' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, Image_226) == 0x0002D0, "Member 'UW_EquipScreen_C::Image_226' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, ProgressBar_209) == 0x0002D8, "Member 'UW_EquipScreen_C::ProgressBar_209' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, ScrollBox_0) == 0x0002E0, "Member 'UW_EquipScreen_C::ScrollBox_0' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, TextBlock_121) == 0x0002E8, "Member 'UW_EquipScreen_C::TextBlock_121' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, TextBlock_Level) == 0x0002F0, "Member 'UW_EquipScreen_C::TextBlock_Level' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, TextBlock_TeamAndUnitType) == 0x0002F8, "Member 'UW_EquipScreen_C::TextBlock_TeamAndUnitType' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, TextBlock_XP) == 0x000300, "Member 'UW_EquipScreen_C::TextBlock_XP' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, VerticalBox_2) == 0x000308, "Member 'UW_EquipScreen_C::VerticalBox_2' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, W_Button_C_0) == 0x000310, "Member 'UW_EquipScreen_C::W_Button_C_0' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, W_Button_C_3) == 0x000318, "Member 'UW_EquipScreen_C::W_Button_C_3' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, W_Button_Commando) == 0x000320, "Member 'UW_EquipScreen_C::W_Button_Commando' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, W_Button_Commando_1) == 0x000328, "Member 'UW_EquipScreen_C::W_Button_Commando_1' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, W_Button_Gunner) == 0x000330, "Member 'UW_EquipScreen_C::W_Button_Gunner' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, W_Button_Soldier) == 0x000338, "Member 'UW_EquipScreen_C::W_Button_Soldier' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, W_Combobox) == 0x000340, "Member 'UW_EquipScreen_C::W_Combobox' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, W_Combobox_1) == 0x000348, "Member 'UW_EquipScreen_C::W_Combobox_1' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, W_Combobox_2) == 0x000350, "Member 'UW_EquipScreen_C::W_Combobox_2' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, W_IconTab_Back) == 0x000358, "Member 'UW_EquipScreen_C::W_IconTab_Back' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, W_IconTab_Event) == 0x000360, "Member 'UW_EquipScreen_C::W_IconTab_Event' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, W_IconTab_Feet) == 0x000368, "Member 'UW_EquipScreen_C::W_IconTab_Feet' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, W_IconTab_Hands) == 0x000370, "Member 'UW_EquipScreen_C::W_IconTab_Hands' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, W_IconTab_Hats) == 0x000378, "Member 'UW_EquipScreen_C::W_IconTab_Hats' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, W_IconTab_Legs) == 0x000380, "Member 'UW_EquipScreen_C::W_IconTab_Legs' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, W_IconTab_LowerFace) == 0x000388, "Member 'UW_EquipScreen_C::W_IconTab_LowerFace' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, W_IconTab_Shirts) == 0x000390, "Member 'UW_EquipScreen_C::W_IconTab_Shirts' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, W_IconTab_Steam) == 0x000398, "Member 'UW_EquipScreen_C::W_IconTab_Steam' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, W_IconTab_Tattoos) == 0x0003A0, "Member 'UW_EquipScreen_C::W_IconTab_Tattoos' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, W_IconTab_Torso) == 0x0003A8, "Member 'UW_EquipScreen_C::W_IconTab_Torso' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, W_IconTab_UpperFace) == 0x0003B0, "Member 'UW_EquipScreen_C::W_IconTab_UpperFace' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, W_IconTab_WeaponSkins) == 0x0003B8, "Member 'UW_EquipScreen_C::W_IconTab_WeaponSkins' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, W_IconTab_XP) == 0x0003C0, "Member 'UW_EquipScreen_C::W_IconTab_XP' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, W_SliderNoStep) == 0x0003C8, "Member 'UW_EquipScreen_C::W_SliderNoStep' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, WidgetSwitcher_0) == 0x0003D0, "Member 'UW_EquipScreen_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, WrapBox_143) == 0x0003D8, "Member 'UW_EquipScreen_C::WrapBox_143' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, EquipPreviewActorRef) == 0x0003E0, "Member 'UW_EquipScreen_C::EquipPreviewActorRef' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, MainMenuRef) == 0x0003E8, "Member 'UW_EquipScreen_C::MainMenuRef' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, SwappingCameras) == 0x0003F0, "Member 'UW_EquipScreen_C::SwappingCameras' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, SelectedTeam) == 0x0003F1, "Member 'UW_EquipScreen_C::SelectedTeam' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, SelectedClass) == 0x0003F2, "Member 'UW_EquipScreen_C::SelectedClass' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, SelectedCategory) == 0x0003F3, "Member 'UW_EquipScreen_C::SelectedCategory' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, EventItemsSelected) == 0x0003F4, "Member 'UW_EquipScreen_C::EventItemsSelected' has a wrong offset!");
static_assert(offsetof(UW_EquipScreen_C, CurrencyType) == 0x0003F5, "Member 'UW_EquipScreen_C::CurrencyType' has a wrong offset!");

}

