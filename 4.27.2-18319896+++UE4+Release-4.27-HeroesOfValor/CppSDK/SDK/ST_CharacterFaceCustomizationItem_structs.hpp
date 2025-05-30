﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ST_CharacterFaceCustomizationItem

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct ST_CharacterFaceCustomizationItem.ST_CharacterFaceCustomizationItem
// 0x0020 (0x0020 - 0x0000)
struct FST_CharacterFaceCustomizationItem final
{
public:
	class UStaticMesh*                            StaticMesh_7_8BB811C249618A84292352AD8A53294E;     // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                          SkeletalMesh_6_D6F4CB88422EEAA811F5ABB6725AC58E;   // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Texture1_14_311052DC4E1CC3D8AC01D78D57DFA391;      // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Texture2_13_A19A5FD041BE4A5BA0E38193F7D50043;      // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FST_CharacterFaceCustomizationItem) == 0x000008, "Wrong alignment on FST_CharacterFaceCustomizationItem");
static_assert(sizeof(FST_CharacterFaceCustomizationItem) == 0x000020, "Wrong size on FST_CharacterFaceCustomizationItem");
static_assert(offsetof(FST_CharacterFaceCustomizationItem, StaticMesh_7_8BB811C249618A84292352AD8A53294E) == 0x000000, "Member 'FST_CharacterFaceCustomizationItem::StaticMesh_7_8BB811C249618A84292352AD8A53294E' has a wrong offset!");
static_assert(offsetof(FST_CharacterFaceCustomizationItem, SkeletalMesh_6_D6F4CB88422EEAA811F5ABB6725AC58E) == 0x000008, "Member 'FST_CharacterFaceCustomizationItem::SkeletalMesh_6_D6F4CB88422EEAA811F5ABB6725AC58E' has a wrong offset!");
static_assert(offsetof(FST_CharacterFaceCustomizationItem, Texture1_14_311052DC4E1CC3D8AC01D78D57DFA391) == 0x000010, "Member 'FST_CharacterFaceCustomizationItem::Texture1_14_311052DC4E1CC3D8AC01D78D57DFA391' has a wrong offset!");
static_assert(offsetof(FST_CharacterFaceCustomizationItem, Texture2_13_A19A5FD041BE4A5BA0E38193F7D50043) == 0x000018, "Member 'FST_CharacterFaceCustomizationItem::Texture2_13_A19A5FD041BE4A5BA0E38193F7D50043' has a wrong offset!");

}

