﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SlipgateCheats

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct SlipgateCheats.SgCheat
// 0x00A0 (0x00A0 - 0x0000)
struct FSgCheat final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Description;                                       // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         Categories;                                        // 0x0020(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint32                                        Order;                                             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, class FString>            Parameters;                                        // 0x0038(0x0050)(NativeAccessSpecifierPublic)
	class FString                                 CorrespondingCVar;                                 // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsEnabled;                                        // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSgCheat) == 0x000008, "Wrong alignment on FSgCheat");
static_assert(sizeof(FSgCheat) == 0x0000A0, "Wrong size on FSgCheat");
static_assert(offsetof(FSgCheat, Name) == 0x000000, "Member 'FSgCheat::Name' has a wrong offset!");
static_assert(offsetof(FSgCheat, Description) == 0x000010, "Member 'FSgCheat::Description' has a wrong offset!");
static_assert(offsetof(FSgCheat, Categories) == 0x000020, "Member 'FSgCheat::Categories' has a wrong offset!");
static_assert(offsetof(FSgCheat, Order) == 0x000030, "Member 'FSgCheat::Order' has a wrong offset!");
static_assert(offsetof(FSgCheat, Parameters) == 0x000038, "Member 'FSgCheat::Parameters' has a wrong offset!");
static_assert(offsetof(FSgCheat, CorrespondingCVar) == 0x000088, "Member 'FSgCheat::CorrespondingCVar' has a wrong offset!");
static_assert(offsetof(FSgCheat, bIsEnabled) == 0x000098, "Member 'FSgCheat::bIsEnabled' has a wrong offset!");

// ScriptStruct SlipgateCheats.SgCustomEventCheat
// 0x0030 (0x0030 - 0x0000)
struct FSgCustomEventCheat final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFunction*                              Func;                                              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   Desc;                                              // 0x0018(0x0010)(NativeAccessSpecifierPublic)
	uint32                                        Order;                                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSgCustomEventCheat) == 0x000008, "Wrong alignment on FSgCustomEventCheat");
static_assert(sizeof(FSgCustomEventCheat) == 0x000030, "Wrong size on FSgCustomEventCheat");
static_assert(offsetof(FSgCustomEventCheat, Name) == 0x000000, "Member 'FSgCustomEventCheat::Name' has a wrong offset!");
static_assert(offsetof(FSgCustomEventCheat, Func) == 0x000010, "Member 'FSgCustomEventCheat::Func' has a wrong offset!");
static_assert(offsetof(FSgCustomEventCheat, Desc) == 0x000018, "Member 'FSgCustomEventCheat::Desc' has a wrong offset!");
static_assert(offsetof(FSgCustomEventCheat, Order) == 0x000028, "Member 'FSgCustomEventCheat::Order' has a wrong offset!");

}

