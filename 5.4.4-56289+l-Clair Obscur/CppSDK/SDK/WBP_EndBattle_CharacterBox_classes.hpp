﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_EndBattle_CharacterBox

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_EndBattle_CharacterBox.WBP_EndBattle_CharacterBox_C
// 0x0008 (0x0310 - 0x0308)
class UWBP_EndBattle_CharacterBox_C final : public UCommonUserWidget
{
public:
	class UDynamicEntryBox*                       DynamicEntryBox_Character;                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void LoadCharacterBattleStats(TArray<class UAC_jRPG_CharacterBattleStats_C*>& CharacterBattleStats);
	void LoadInitialCharacterStates(TArray<class UBP_CharacterData_C*>& CharacterDatas);
	void TriggerEntryAnimations(TArray<class UAC_jRPG_CharacterBattleStats_C*>& CharacterBattleStats);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_EndBattle_CharacterBox_C">();
	}
	static class UWBP_EndBattle_CharacterBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_EndBattle_CharacterBox_C>();
	}
};
static_assert(alignof(UWBP_EndBattle_CharacterBox_C) == 0x000008, "Wrong alignment on UWBP_EndBattle_CharacterBox_C");
static_assert(sizeof(UWBP_EndBattle_CharacterBox_C) == 0x000310, "Wrong size on UWBP_EndBattle_CharacterBox_C");
static_assert(offsetof(UWBP_EndBattle_CharacterBox_C, DynamicEntryBox_Character) == 0x000308, "Member 'UWBP_EndBattle_CharacterBox_C::DynamicEntryBox_Character' has a wrong offset!");

}

