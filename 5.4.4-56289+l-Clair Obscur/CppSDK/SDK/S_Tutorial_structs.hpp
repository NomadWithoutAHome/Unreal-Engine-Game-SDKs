﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_Tutorial

#include "Basic.hpp"

#include "EFaceActions_structs.hpp"
#include "EInputAction_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_Tutorial.S_Tutorial
// 0x0038 (0x0038 - 0x0000)
struct FS_Tutorial final
{
public:
	EFaceActions                                  TEMPInput_2_AACF09B543B6E901C688F595AD203BC2;      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInputAction                                  Input_16_4A30C1CD44A206A44AD92C9E0BAE4DE1;         // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Title_7_5A87C03F41065B43EA3A519AAEBEFF6F;          // 0x0008(0x0010)(Edit, BlueprintVisible)
	class FText                                   DescriptionText_10_C39BA7DD482148F246CF5285BE6A8B7A; // 0x0018(0x0010)(Edit, BlueprintVisible)
	class FText                                   CallToActionText_13_8C2EC40C472B29C386B2E5AA3F4FEB16; // 0x0028(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FS_Tutorial) == 0x000008, "Wrong alignment on FS_Tutorial");
static_assert(sizeof(FS_Tutorial) == 0x000038, "Wrong size on FS_Tutorial");
static_assert(offsetof(FS_Tutorial, TEMPInput_2_AACF09B543B6E901C688F595AD203BC2) == 0x000000, "Member 'FS_Tutorial::TEMPInput_2_AACF09B543B6E901C688F595AD203BC2' has a wrong offset!");
static_assert(offsetof(FS_Tutorial, Input_16_4A30C1CD44A206A44AD92C9E0BAE4DE1) == 0x000001, "Member 'FS_Tutorial::Input_16_4A30C1CD44A206A44AD92C9E0BAE4DE1' has a wrong offset!");
static_assert(offsetof(FS_Tutorial, Title_7_5A87C03F41065B43EA3A519AAEBEFF6F) == 0x000008, "Member 'FS_Tutorial::Title_7_5A87C03F41065B43EA3A519AAEBEFF6F' has a wrong offset!");
static_assert(offsetof(FS_Tutorial, DescriptionText_10_C39BA7DD482148F246CF5285BE6A8B7A) == 0x000018, "Member 'FS_Tutorial::DescriptionText_10_C39BA7DD482148F246CF5285BE6A8B7A' has a wrong offset!");
static_assert(offsetof(FS_Tutorial, CallToActionText_13_8C2EC40C472B29C386B2E5AA3F4FEB16) == 0x000028, "Member 'FS_Tutorial::CallToActionText_13_8C2EC40C472B29C386B2E5AA3F4FEB16' has a wrong offset!");

}

