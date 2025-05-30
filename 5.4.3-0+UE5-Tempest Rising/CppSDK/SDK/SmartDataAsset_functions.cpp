﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SmartDataAsset

#include "Basic.hpp"

#include "SmartDataAsset_classes.hpp"
#include "SmartDataAsset_parameters.hpp"


namespace SDK
{

// Function SmartDataAsset.SmartDataCollection.HandlePendingAssetsLoaded
// (Final, Native, Private)

void USmartDataCollection::HandlePendingAssetsLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SmartDataCollection", "HandlePendingAssetsLoaded");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function SmartDataAsset.SmartDataCollectionSubsystem.K2_GetRegisteredAsset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const class UObject*                    WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameplayTag&              AssetIdentifier                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class UObject*                    CollectionContextObject                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const bool                              bUseBaseCollectionIfContextInvalid                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDataAsset*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDataAsset* USmartDataCollectionSubsystem::K2_GetRegisteredAsset(const class UObject* WorldContextObject, const struct FGameplayTag& AssetIdentifier, const class UObject* CollectionContextObject, const bool bUseBaseCollectionIfContextInvalid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SmartDataCollectionSubsystem", "K2_GetRegisteredAsset");

	Params::SmartDataCollectionSubsystem_K2_GetRegisteredAsset Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AssetIdentifier = std::move(AssetIdentifier);
	Parms.CollectionContextObject = CollectionContextObject;
	Parms.bUseBaseCollectionIfContextInvalid = bUseBaseCollectionIfContextInvalid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SmartDataAsset.SmartDataCollectionSubsystem.K2_GetRegisteredCollection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// const class UObject*                    WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                          CollectionContextObject                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USmartDataCollection*             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USmartDataCollection* USmartDataCollectionSubsystem::K2_GetRegisteredCollection(const class UObject* WorldContextObject, class UObject* CollectionContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SmartDataCollectionSubsystem", "K2_GetRegisteredCollection");

	Params::SmartDataCollectionSubsystem_K2_GetRegisteredCollection Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CollectionContextObject = CollectionContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SmartDataAsset.SmartDataCollectionSubsystem.K2_RegisterAsset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const class UObject*                    WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDataAsset*                       Asset                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class UObject*                    CollectionContextObject                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameplayTag&              AssetIdentifier                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const bool                              bAllowOverwrite                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartDataCollectionSubsystem::K2_RegisterAsset(const class UObject* WorldContextObject, class UDataAsset* Asset, const class UObject* CollectionContextObject, const struct FGameplayTag& AssetIdentifier, const bool bAllowOverwrite)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SmartDataCollectionSubsystem", "K2_RegisterAsset");

	Params::SmartDataCollectionSubsystem_K2_RegisterAsset Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Asset = Asset;
	Parms.CollectionContextObject = CollectionContextObject;
	Parms.AssetIdentifier = std::move(AssetIdentifier);
	Parms.bAllowOverwrite = bAllowOverwrite;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SmartDataAsset.SmartDataCollectionSubsystem.K2_RegisterCollection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// const class UObject*                    WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USmartDataCollection*             Collection                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class UObject*                    CollectionContextObject                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const bool                              bAllowOverwrite                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartDataCollectionSubsystem::K2_RegisterCollection(const class UObject* WorldContextObject, class USmartDataCollection* Collection, const class UObject* CollectionContextObject, const bool bAllowOverwrite)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SmartDataCollectionSubsystem", "K2_RegisterCollection");

	Params::SmartDataCollectionSubsystem_K2_RegisterCollection Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Collection = Collection;
	Parms.CollectionContextObject = CollectionContextObject;
	Parms.bAllowOverwrite = bAllowOverwrite;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SmartDataAsset.SmartDataCollectionSubsystem.K2_UnregisterAsset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// const class UObject*                    WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class UObject*                    CollectionContextObject                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const struct FGameplayTag&              AssetIdentifier                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartDataCollectionSubsystem::K2_UnregisterAsset(const class UObject* WorldContextObject, const class UObject* CollectionContextObject, const struct FGameplayTag& AssetIdentifier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SmartDataCollectionSubsystem", "K2_UnregisterAsset");

	Params::SmartDataCollectionSubsystem_K2_UnregisterAsset Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CollectionContextObject = CollectionContextObject;
	Parms.AssetIdentifier = std::move(AssetIdentifier);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SmartDataAsset.SmartDataCollectionSubsystem.K2_UnregisterCollection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// const class UObject*                    WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class UObject*                    CollectionContextObject                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartDataCollectionSubsystem::K2_UnregisterCollection(const class UObject* WorldContextObject, const class UObject* CollectionContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SmartDataCollectionSubsystem", "K2_UnregisterCollection");

	Params::SmartDataCollectionSubsystem_K2_UnregisterCollection Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CollectionContextObject = CollectionContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

