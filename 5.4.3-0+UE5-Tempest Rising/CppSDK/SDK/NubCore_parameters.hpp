﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NubCore

#include "Basic.hpp"

#include "NubCore_structs.hpp"


namespace SDK::Params
{

// Function NubCore.NubUtils.CompareValues_Byte
// 0x0004 (0x0004 - 0x0000)
struct NubUtils_CompareValues_Byte final
{
public:
	uint8                                         A;                                                 // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         B;                                                 // 0x0001(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EComparison                                   Comparison;                                        // 0x0002(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0003(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NubUtils_CompareValues_Byte) == 0x000001, "Wrong alignment on NubUtils_CompareValues_Byte");
static_assert(sizeof(NubUtils_CompareValues_Byte) == 0x000004, "Wrong size on NubUtils_CompareValues_Byte");
static_assert(offsetof(NubUtils_CompareValues_Byte, A) == 0x000000, "Member 'NubUtils_CompareValues_Byte::A' has a wrong offset!");
static_assert(offsetof(NubUtils_CompareValues_Byte, B) == 0x000001, "Member 'NubUtils_CompareValues_Byte::B' has a wrong offset!");
static_assert(offsetof(NubUtils_CompareValues_Byte, Comparison) == 0x000002, "Member 'NubUtils_CompareValues_Byte::Comparison' has a wrong offset!");
static_assert(offsetof(NubUtils_CompareValues_Byte, ReturnValue) == 0x000003, "Member 'NubUtils_CompareValues_Byte::ReturnValue' has a wrong offset!");

// Function NubCore.NubUtils.CompareValues_Float
// 0x000C (0x000C - 0x0000)
struct NubUtils_CompareValues_Float final
{
public:
	float                                         A;                                                 // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         B;                                                 // 0x0004(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EComparison                                   Comparison;                                        // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(NubUtils_CompareValues_Float) == 0x000004, "Wrong alignment on NubUtils_CompareValues_Float");
static_assert(sizeof(NubUtils_CompareValues_Float) == 0x00000C, "Wrong size on NubUtils_CompareValues_Float");
static_assert(offsetof(NubUtils_CompareValues_Float, A) == 0x000000, "Member 'NubUtils_CompareValues_Float::A' has a wrong offset!");
static_assert(offsetof(NubUtils_CompareValues_Float, B) == 0x000004, "Member 'NubUtils_CompareValues_Float::B' has a wrong offset!");
static_assert(offsetof(NubUtils_CompareValues_Float, Comparison) == 0x000008, "Member 'NubUtils_CompareValues_Float::Comparison' has a wrong offset!");
static_assert(offsetof(NubUtils_CompareValues_Float, ReturnValue) == 0x000009, "Member 'NubUtils_CompareValues_Float::ReturnValue' has a wrong offset!");

// Function NubCore.NubUtils.CompareValues_Int
// 0x000C (0x000C - 0x0000)
struct NubUtils_CompareValues_Int final
{
public:
	int32                                         A;                                                 // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         B;                                                 // 0x0004(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EComparison                                   Comparison;                                        // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(NubUtils_CompareValues_Int) == 0x000004, "Wrong alignment on NubUtils_CompareValues_Int");
static_assert(sizeof(NubUtils_CompareValues_Int) == 0x00000C, "Wrong size on NubUtils_CompareValues_Int");
static_assert(offsetof(NubUtils_CompareValues_Int, A) == 0x000000, "Member 'NubUtils_CompareValues_Int::A' has a wrong offset!");
static_assert(offsetof(NubUtils_CompareValues_Int, B) == 0x000004, "Member 'NubUtils_CompareValues_Int::B' has a wrong offset!");
static_assert(offsetof(NubUtils_CompareValues_Int, Comparison) == 0x000008, "Member 'NubUtils_CompareValues_Int::Comparison' has a wrong offset!");
static_assert(offsetof(NubUtils_CompareValues_Int, ReturnValue) == 0x000009, "Member 'NubUtils_CompareValues_Int::ReturnValue' has a wrong offset!");

// Function NubCore.NubUtils.IsA
// 0x0018 (0x0018 - 0x0000)
struct NubUtils_IsA final
{
public:
	const class UObject*                          InObject;                                          // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                 InClass;                                           // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(NubUtils_IsA) == 0x000008, "Wrong alignment on NubUtils_IsA");
static_assert(sizeof(NubUtils_IsA) == 0x000018, "Wrong size on NubUtils_IsA");
static_assert(offsetof(NubUtils_IsA, InObject) == 0x000000, "Member 'NubUtils_IsA::InObject' has a wrong offset!");
static_assert(offsetof(NubUtils_IsA, InClass) == 0x000008, "Member 'NubUtils_IsA::InClass' has a wrong offset!");
static_assert(offsetof(NubUtils_IsA, ReturnValue) == 0x000010, "Member 'NubUtils_IsA::ReturnValue' has a wrong offset!");

// Function NubCore.NubUtils.IsPlayInEditor
// 0x0010 (0x0010 - 0x0000)
struct NubUtils_IsPlayInEditor final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(NubUtils_IsPlayInEditor) == 0x000008, "Wrong alignment on NubUtils_IsPlayInEditor");
static_assert(sizeof(NubUtils_IsPlayInEditor) == 0x000010, "Wrong size on NubUtils_IsPlayInEditor");
static_assert(offsetof(NubUtils_IsPlayInEditor, WorldContextObject) == 0x000000, "Member 'NubUtils_IsPlayInEditor::WorldContextObject' has a wrong offset!");
static_assert(offsetof(NubUtils_IsPlayInEditor, ReturnValue) == 0x000008, "Member 'NubUtils_IsPlayInEditor::ReturnValue' has a wrong offset!");

// Function NubCore.NubUtils.IsPS4Build
// 0x0001 (0x0001 - 0x0000)
struct NubUtils_IsPS4Build final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NubUtils_IsPS4Build) == 0x000001, "Wrong alignment on NubUtils_IsPS4Build");
static_assert(sizeof(NubUtils_IsPS4Build) == 0x000001, "Wrong size on NubUtils_IsPS4Build");
static_assert(offsetof(NubUtils_IsPS4Build, ReturnValue) == 0x000000, "Member 'NubUtils_IsPS4Build::ReturnValue' has a wrong offset!");

// Function NubCore.NubUtils.IsShippingBuild
// 0x0001 (0x0001 - 0x0000)
struct NubUtils_IsShippingBuild final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NubUtils_IsShippingBuild) == 0x000001, "Wrong alignment on NubUtils_IsShippingBuild");
static_assert(sizeof(NubUtils_IsShippingBuild) == 0x000001, "Wrong size on NubUtils_IsShippingBuild");
static_assert(offsetof(NubUtils_IsShippingBuild, ReturnValue) == 0x000000, "Member 'NubUtils_IsShippingBuild::ReturnValue' has a wrong offset!");

// Function NubCore.NubUtils.IsShippingOrTestBuild
// 0x0001 (0x0001 - 0x0000)
struct NubUtils_IsShippingOrTestBuild final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NubUtils_IsShippingOrTestBuild) == 0x000001, "Wrong alignment on NubUtils_IsShippingOrTestBuild");
static_assert(sizeof(NubUtils_IsShippingOrTestBuild) == 0x000001, "Wrong size on NubUtils_IsShippingOrTestBuild");
static_assert(offsetof(NubUtils_IsShippingOrTestBuild, ReturnValue) == 0x000000, "Member 'NubUtils_IsShippingOrTestBuild::ReturnValue' has a wrong offset!");

// Function NubCore.NubUtils.IsWindowsBuild
// 0x0001 (0x0001 - 0x0000)
struct NubUtils_IsWindowsBuild final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NubUtils_IsWindowsBuild) == 0x000001, "Wrong alignment on NubUtils_IsWindowsBuild");
static_assert(sizeof(NubUtils_IsWindowsBuild) == 0x000001, "Wrong size on NubUtils_IsWindowsBuild");
static_assert(offsetof(NubUtils_IsWindowsBuild, ReturnValue) == 0x000000, "Member 'NubUtils_IsWindowsBuild::ReturnValue' has a wrong offset!");

// Function NubCore.NubUtils.IsXboxOneBuild
// 0x0001 (0x0001 - 0x0000)
struct NubUtils_IsXboxOneBuild final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NubUtils_IsXboxOneBuild) == 0x000001, "Wrong alignment on NubUtils_IsXboxOneBuild");
static_assert(sizeof(NubUtils_IsXboxOneBuild) == 0x000001, "Wrong size on NubUtils_IsXboxOneBuild");
static_assert(offsetof(NubUtils_IsXboxOneBuild, ReturnValue) == 0x000000, "Member 'NubUtils_IsXboxOneBuild::ReturnValue' has a wrong offset!");

}

