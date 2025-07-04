﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_QuestHelperFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "E_QuestStatus_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_QuestHelperFunctionLibrary.BP_QuestHelperFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_QuestHelperFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static bool GetIsObjectiveCompleted(struct FQuestObjectiveIdentifier& QuestObjective, class UObject* __WorldContext);
	static void DEBUG_ConvertStringToQuestStatus(const class FString& String, class UObject* __WorldContext, E_QuestStatus* Status, bool* ConversionSuccessful);
	static void GetQuestList(class UObject* __WorldContext, TArray<class FName>* Quests);
	static void GetObjectiveList(class FName& QuestName, class UObject* __WorldContext, TArray<struct FQuestObjectiveIdentifier>* ObjectiveIdentifiers);
	static void GetObjectiveStatus(struct FQuestObjectiveIdentifier& QuestObjective, class UObject* __WorldContext, E_QuestStatus* Status);
	static void GetQuestStatus(class FName& QuestName, class UObject* __WorldContext, E_QuestStatus* Status);
	static void GetQuestSystem(class UObject* __WorldContext, class UBP_QuestSystem_C** QuestSystem);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_QuestHelperFunctionLibrary_C">();
	}
	static class UBP_QuestHelperFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_QuestHelperFunctionLibrary_C>();
	}
};
static_assert(alignof(UBP_QuestHelperFunctionLibrary_C) == 0x000008, "Wrong alignment on UBP_QuestHelperFunctionLibrary_C");
static_assert(sizeof(UBP_QuestHelperFunctionLibrary_C) == 0x000028, "Wrong size on UBP_QuestHelperFunctionLibrary_C");

}

