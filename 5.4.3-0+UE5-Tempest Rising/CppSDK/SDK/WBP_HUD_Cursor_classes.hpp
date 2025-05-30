﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HUD_Cursor

#include "Basic.hpp"

#include "Tempest_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_HUD_Cursor.WBP_HUD_Cursor_C
// 0x0010 (0x0438 - 0x0428)
class UWBP_HUD_Cursor_C final : public UTedCursorWidget
{
public:
	class UCanvasPanel*                           CanvasPanel_Root;                                  // 0x0428(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_HotSpot;                                   // 0x0430(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_HUD_Cursor_C">();
	}
	static class UWBP_HUD_Cursor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_HUD_Cursor_C>();
	}
};
static_assert(alignof(UWBP_HUD_Cursor_C) == 0x000008, "Wrong alignment on UWBP_HUD_Cursor_C");
static_assert(sizeof(UWBP_HUD_Cursor_C) == 0x000438, "Wrong size on UWBP_HUD_Cursor_C");
static_assert(offsetof(UWBP_HUD_Cursor_C, CanvasPanel_Root) == 0x000428, "Member 'UWBP_HUD_Cursor_C::CanvasPanel_Root' has a wrong offset!");
static_assert(offsetof(UWBP_HUD_Cursor_C, SizeBox_HotSpot) == 0x000430, "Member 'UWBP_HUD_Cursor_C::SizeBox_HotSpot' has a wrong offset!");

}

