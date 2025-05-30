﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SmartDataAsset

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function SmartDataAsset.SmartDataCollectionSubsystem.K2_GetRegisteredAsset
// 0x0028 (0x0028 - 0x0000)
struct SmartDataCollectionSubsystem_K2_GetRegisteredAsset final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           AssetIdentifier;                                   // 0x0008(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UObject*                          CollectionContextObject;                           // 0x0010(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseBaseCollectionIfContextInvalid;                // 0x0018(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataAsset*                             ReturnValue;                                       // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SmartDataCollectionSubsystem_K2_GetRegisteredAsset) == 0x000008, "Wrong alignment on SmartDataCollectionSubsystem_K2_GetRegisteredAsset");
static_assert(sizeof(SmartDataCollectionSubsystem_K2_GetRegisteredAsset) == 0x000028, "Wrong size on SmartDataCollectionSubsystem_K2_GetRegisteredAsset");
static_assert(offsetof(SmartDataCollectionSubsystem_K2_GetRegisteredAsset, WorldContextObject) == 0x000000, "Member 'SmartDataCollectionSubsystem_K2_GetRegisteredAsset::WorldContextObject' has a wrong offset!");
static_assert(offsetof(SmartDataCollectionSubsystem_K2_GetRegisteredAsset, AssetIdentifier) == 0x000008, "Member 'SmartDataCollectionSubsystem_K2_GetRegisteredAsset::AssetIdentifier' has a wrong offset!");
static_assert(offsetof(SmartDataCollectionSubsystem_K2_GetRegisteredAsset, CollectionContextObject) == 0x000010, "Member 'SmartDataCollectionSubsystem_K2_GetRegisteredAsset::CollectionContextObject' has a wrong offset!");
static_assert(offsetof(SmartDataCollectionSubsystem_K2_GetRegisteredAsset, bUseBaseCollectionIfContextInvalid) == 0x000018, "Member 'SmartDataCollectionSubsystem_K2_GetRegisteredAsset::bUseBaseCollectionIfContextInvalid' has a wrong offset!");
static_assert(offsetof(SmartDataCollectionSubsystem_K2_GetRegisteredAsset, ReturnValue) == 0x000020, "Member 'SmartDataCollectionSubsystem_K2_GetRegisteredAsset::ReturnValue' has a wrong offset!");

// Function SmartDataAsset.SmartDataCollectionSubsystem.K2_GetRegisteredCollection
// 0x0018 (0x0018 - 0x0000)
struct SmartDataCollectionSubsystem_K2_GetRegisteredCollection final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                CollectionContextObject;                           // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USmartDataCollection*                   ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SmartDataCollectionSubsystem_K2_GetRegisteredCollection) == 0x000008, "Wrong alignment on SmartDataCollectionSubsystem_K2_GetRegisteredCollection");
static_assert(sizeof(SmartDataCollectionSubsystem_K2_GetRegisteredCollection) == 0x000018, "Wrong size on SmartDataCollectionSubsystem_K2_GetRegisteredCollection");
static_assert(offsetof(SmartDataCollectionSubsystem_K2_GetRegisteredCollection, WorldContextObject) == 0x000000, "Member 'SmartDataCollectionSubsystem_K2_GetRegisteredCollection::WorldContextObject' has a wrong offset!");
static_assert(offsetof(SmartDataCollectionSubsystem_K2_GetRegisteredCollection, CollectionContextObject) == 0x000008, "Member 'SmartDataCollectionSubsystem_K2_GetRegisteredCollection::CollectionContextObject' has a wrong offset!");
static_assert(offsetof(SmartDataCollectionSubsystem_K2_GetRegisteredCollection, ReturnValue) == 0x000010, "Member 'SmartDataCollectionSubsystem_K2_GetRegisteredCollection::ReturnValue' has a wrong offset!");

// Function SmartDataAsset.SmartDataCollectionSubsystem.K2_RegisterAsset
// 0x0028 (0x0028 - 0x0000)
struct SmartDataCollectionSubsystem_K2_RegisterAsset final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataAsset*                             Asset;                                             // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UObject*                          CollectionContextObject;                           // 0x0010(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           AssetIdentifier;                                   // 0x0018(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowOverwrite;                                   // 0x0020(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0021(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(SmartDataCollectionSubsystem_K2_RegisterAsset) == 0x000008, "Wrong alignment on SmartDataCollectionSubsystem_K2_RegisterAsset");
static_assert(sizeof(SmartDataCollectionSubsystem_K2_RegisterAsset) == 0x000028, "Wrong size on SmartDataCollectionSubsystem_K2_RegisterAsset");
static_assert(offsetof(SmartDataCollectionSubsystem_K2_RegisterAsset, WorldContextObject) == 0x000000, "Member 'SmartDataCollectionSubsystem_K2_RegisterAsset::WorldContextObject' has a wrong offset!");
static_assert(offsetof(SmartDataCollectionSubsystem_K2_RegisterAsset, Asset) == 0x000008, "Member 'SmartDataCollectionSubsystem_K2_RegisterAsset::Asset' has a wrong offset!");
static_assert(offsetof(SmartDataCollectionSubsystem_K2_RegisterAsset, CollectionContextObject) == 0x000010, "Member 'SmartDataCollectionSubsystem_K2_RegisterAsset::CollectionContextObject' has a wrong offset!");
static_assert(offsetof(SmartDataCollectionSubsystem_K2_RegisterAsset, AssetIdentifier) == 0x000018, "Member 'SmartDataCollectionSubsystem_K2_RegisterAsset::AssetIdentifier' has a wrong offset!");
static_assert(offsetof(SmartDataCollectionSubsystem_K2_RegisterAsset, bAllowOverwrite) == 0x000020, "Member 'SmartDataCollectionSubsystem_K2_RegisterAsset::bAllowOverwrite' has a wrong offset!");
static_assert(offsetof(SmartDataCollectionSubsystem_K2_RegisterAsset, ReturnValue) == 0x000021, "Member 'SmartDataCollectionSubsystem_K2_RegisterAsset::ReturnValue' has a wrong offset!");

// Function SmartDataAsset.SmartDataCollectionSubsystem.K2_RegisterCollection
// 0x0020 (0x0020 - 0x0000)
struct SmartDataCollectionSubsystem_K2_RegisterCollection final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USmartDataCollection*                   Collection;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UObject*                          CollectionContextObject;                           // 0x0010(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowOverwrite;                                   // 0x0018(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0019(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(SmartDataCollectionSubsystem_K2_RegisterCollection) == 0x000008, "Wrong alignment on SmartDataCollectionSubsystem_K2_RegisterCollection");
static_assert(sizeof(SmartDataCollectionSubsystem_K2_RegisterCollection) == 0x000020, "Wrong size on SmartDataCollectionSubsystem_K2_RegisterCollection");
static_assert(offsetof(SmartDataCollectionSubsystem_K2_RegisterCollection, WorldContextObject) == 0x000000, "Member 'SmartDataCollectionSubsystem_K2_RegisterCollection::WorldContextObject' has a wrong offset!");
static_assert(offsetof(SmartDataCollectionSubsystem_K2_RegisterCollection, Collection) == 0x000008, "Member 'SmartDataCollectionSubsystem_K2_RegisterCollection::Collection' has a wrong offset!");
static_assert(offsetof(SmartDataCollectionSubsystem_K2_RegisterCollection, CollectionContextObject) == 0x000010, "Member 'SmartDataCollectionSubsystem_K2_RegisterCollection::CollectionContextObject' has a wrong offset!");
static_assert(offsetof(SmartDataCollectionSubsystem_K2_RegisterCollection, bAllowOverwrite) == 0x000018, "Member 'SmartDataCollectionSubsystem_K2_RegisterCollection::bAllowOverwrite' has a wrong offset!");
static_assert(offsetof(SmartDataCollectionSubsystem_K2_RegisterCollection, ReturnValue) == 0x000019, "Member 'SmartDataCollectionSubsystem_K2_RegisterCollection::ReturnValue' has a wrong offset!");

// Function SmartDataAsset.SmartDataCollectionSubsystem.K2_UnregisterAsset
// 0x0020 (0x0020 - 0x0000)
struct SmartDataCollectionSubsystem_K2_UnregisterAsset final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UObject*                          CollectionContextObject;                           // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           AssetIdentifier;                                   // 0x0010(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(SmartDataCollectionSubsystem_K2_UnregisterAsset) == 0x000008, "Wrong alignment on SmartDataCollectionSubsystem_K2_UnregisterAsset");
static_assert(sizeof(SmartDataCollectionSubsystem_K2_UnregisterAsset) == 0x000020, "Wrong size on SmartDataCollectionSubsystem_K2_UnregisterAsset");
static_assert(offsetof(SmartDataCollectionSubsystem_K2_UnregisterAsset, WorldContextObject) == 0x000000, "Member 'SmartDataCollectionSubsystem_K2_UnregisterAsset::WorldContextObject' has a wrong offset!");
static_assert(offsetof(SmartDataCollectionSubsystem_K2_UnregisterAsset, CollectionContextObject) == 0x000008, "Member 'SmartDataCollectionSubsystem_K2_UnregisterAsset::CollectionContextObject' has a wrong offset!");
static_assert(offsetof(SmartDataCollectionSubsystem_K2_UnregisterAsset, AssetIdentifier) == 0x000010, "Member 'SmartDataCollectionSubsystem_K2_UnregisterAsset::AssetIdentifier' has a wrong offset!");
static_assert(offsetof(SmartDataCollectionSubsystem_K2_UnregisterAsset, ReturnValue) == 0x000018, "Member 'SmartDataCollectionSubsystem_K2_UnregisterAsset::ReturnValue' has a wrong offset!");

// Function SmartDataAsset.SmartDataCollectionSubsystem.K2_UnregisterCollection
// 0x0018 (0x0018 - 0x0000)
struct SmartDataCollectionSubsystem_K2_UnregisterCollection final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	const class UObject*                          CollectionContextObject;                           // 0x0008(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(SmartDataCollectionSubsystem_K2_UnregisterCollection) == 0x000008, "Wrong alignment on SmartDataCollectionSubsystem_K2_UnregisterCollection");
static_assert(sizeof(SmartDataCollectionSubsystem_K2_UnregisterCollection) == 0x000018, "Wrong size on SmartDataCollectionSubsystem_K2_UnregisterCollection");
static_assert(offsetof(SmartDataCollectionSubsystem_K2_UnregisterCollection, WorldContextObject) == 0x000000, "Member 'SmartDataCollectionSubsystem_K2_UnregisterCollection::WorldContextObject' has a wrong offset!");
static_assert(offsetof(SmartDataCollectionSubsystem_K2_UnregisterCollection, CollectionContextObject) == 0x000008, "Member 'SmartDataCollectionSubsystem_K2_UnregisterCollection::CollectionContextObject' has a wrong offset!");
static_assert(offsetof(SmartDataCollectionSubsystem_K2_UnregisterCollection, ReturnValue) == 0x000010, "Member 'SmartDataCollectionSubsystem_K2_UnregisterCollection::ReturnValue' has a wrong offset!");

}

