﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KiBLIICommonUI

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "KiBLIICommonUI_structs.hpp"
#include "CommonInput_classes.hpp"
#include "InputCore_structs.hpp"


namespace SDK
{

// Class KiBLIICommonUI.KiBLIICommonInputBaseControllerData
// 0x0020 (0x0108 - 0x00E8)
class UKiBLIICommonInputBaseControllerData final : public UCommonInputBaseControllerData
{
public:
	class UKiBLIIKeysWidget*                      KeysWidget;                                        // 0x00E8(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FKiBLIIKeysWidgetData>          KeysWidgetData;                                    // 0x00F0(0x0010)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                         Pad_100[0x8];                                      // 0x0100(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KiBLIICommonInputBaseControllerData">();
	}
	static class UKiBLIICommonInputBaseControllerData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKiBLIICommonInputBaseControllerData>();
	}
};
static_assert(alignof(UKiBLIICommonInputBaseControllerData) == 0x000008, "Wrong alignment on UKiBLIICommonInputBaseControllerData");
static_assert(sizeof(UKiBLIICommonInputBaseControllerData) == 0x000108, "Wrong size on UKiBLIICommonInputBaseControllerData");
static_assert(offsetof(UKiBLIICommonInputBaseControllerData, KeysWidget) == 0x0000E8, "Member 'UKiBLIICommonInputBaseControllerData::KeysWidget' has a wrong offset!");
static_assert(offsetof(UKiBLIICommonInputBaseControllerData, KeysWidgetData) == 0x0000F0, "Member 'UKiBLIICommonInputBaseControllerData::KeysWidgetData' has a wrong offset!");

// Class KiBLIICommonUI.KiBLIIKeysWidget
// 0x0010 (0x02F0 - 0x02E0)
class UKiBLIIKeysWidget final : public UUserWidget
{
public:
	TArray<struct FKey>                           Keys;                                              // 0x02E0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KiBLIIKeysWidget">();
	}
	static class UKiBLIIKeysWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKiBLIIKeysWidget>();
	}
};
static_assert(alignof(UKiBLIIKeysWidget) == 0x000008, "Wrong alignment on UKiBLIIKeysWidget");
static_assert(sizeof(UKiBLIIKeysWidget) == 0x0002F0, "Wrong size on UKiBLIIKeysWidget");
static_assert(offsetof(UKiBLIIKeysWidget, Keys) == 0x0002E0, "Member 'UKiBLIIKeysWidget::Keys' has a wrong offset!");

}

