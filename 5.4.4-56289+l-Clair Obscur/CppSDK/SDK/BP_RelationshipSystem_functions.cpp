﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RelationshipSystem

#include "Basic.hpp"

#include "BP_RelationshipSystem_classes.hpp"
#include "BP_RelationshipSystem_parameters.hpp"


namespace SDK
{

// Function BP_RelationshipSystem.BP_RelationshipSystem_C.ClampRelationshipLevel
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32*                                  ClampedLevel                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RelationshipSystem_C::ClampRelationshipLevel(int32 Level, int32* ClampedLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RelationshipSystem_C", "ClampRelationshipLevel");

	Params::BP_RelationshipSystem_C_ClampRelationshipLevel Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

	if (ClampedLevel != nullptr)
		*ClampedLevel = Parms.ClampedLevel;
}


// Function BP_RelationshipSystem.BP_RelationshipSystem_C.DecreaseRelationshipLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_CharacterList                         Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RelationshipSystem_C::DecreaseRelationshipLevel(E_CharacterList Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RelationshipSystem_C", "DecreaseRelationshipLevel");

	Params::BP_RelationshipSystem_C_DecreaseRelationshipLevel Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RelationshipSystem.BP_RelationshipSystem_C.GetCurrentRelationshipLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_CharacterList                         Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32*                                  Level                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RelationshipSystem_C::GetCurrentRelationshipLevel(E_CharacterList Character, int32* Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RelationshipSystem_C", "GetCurrentRelationshipLevel");

	Params::BP_RelationshipSystem_C_GetCurrentRelationshipLevel Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;
}


// Function BP_RelationshipSystem.BP_RelationshipSystem_C.GetCurrentRelationshipQuestObjective
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_CharacterList                         Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestObjectiveIdentifier*       QuestObjective                                         (Parm, OutParm, NoDestructor)

void UBP_RelationshipSystem_C::GetCurrentRelationshipQuestObjective(E_CharacterList Character, struct FQuestObjectiveIdentifier* QuestObjective)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RelationshipSystem_C", "GetCurrentRelationshipQuestObjective");

	Params::BP_RelationshipSystem_C_GetCurrentRelationshipQuestObjective Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

	if (QuestObjective != nullptr)
		*QuestObjective = std::move(Parms.QuestObjective);
}


// Function BP_RelationshipSystem.BP_RelationshipSystem_C.GetMaxRelationshipLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32*                                  MaxRelationshipLevel_0                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RelationshipSystem_C::GetMaxRelationshipLevel(int32* MaxRelationshipLevel_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RelationshipSystem_C", "GetMaxRelationshipLevel");

	Params::BP_RelationshipSystem_C_GetMaxRelationshipLevel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MaxRelationshipLevel_0 != nullptr)
		*MaxRelationshipLevel_0 = Parms.MaxRelationshipLevel_0;
}


// Function BP_RelationshipSystem.BP_RelationshipSystem_C.GetRelationshipQuestName
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_CharacterList                         Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName*                            Quest                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RelationshipSystem_C::GetRelationshipQuestName(E_CharacterList Character, class FName* Quest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RelationshipSystem_C", "GetRelationshipQuestName");

	Params::BP_RelationshipSystem_C_GetRelationshipQuestName Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

	if (Quest != nullptr)
		*Quest = Parms.Quest;
}


// Function BP_RelationshipSystem.BP_RelationshipSystem_C.GetRelationshipQuestObjective
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_CharacterList                         Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestObjectiveIdentifier*       QuestObjective                                         (Parm, OutParm, NoDestructor)

void UBP_RelationshipSystem_C::GetRelationshipQuestObjective(E_CharacterList Character, int32 Level, struct FQuestObjectiveIdentifier* QuestObjective)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RelationshipSystem_C", "GetRelationshipQuestObjective");

	Params::BP_RelationshipSystem_C_GetRelationshipQuestObjective Parms{};

	Parms.Character = Character;
	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

	if (QuestObjective != nullptr)
		*QuestObjective = std::move(Parms.QuestObjective);
}


// Function BP_RelationshipSystem.BP_RelationshipSystem_C.GetRelationshipQuestObjectives
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_CharacterList                         Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQuestObjectiveIdentifier>*ObjectiveIndentifiers                                  (Parm, OutParm)

void UBP_RelationshipSystem_C::GetRelationshipQuestObjectives(E_CharacterList Character, TArray<struct FQuestObjectiveIdentifier>* ObjectiveIndentifiers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RelationshipSystem_C", "GetRelationshipQuestObjectives");

	Params::BP_RelationshipSystem_C_GetRelationshipQuestObjectives Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

	if (ObjectiveIndentifiers != nullptr)
		*ObjectiveIndentifiers = std::move(Parms.ObjectiveIndentifiers);
}


// Function BP_RelationshipSystem.BP_RelationshipSystem_C.IncreaseRelationshipLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_CharacterList                         Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RelationshipSystem_C::IncreaseRelationshipLevel(E_CharacterList Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RelationshipSystem_C", "IncreaseRelationshipLevel");

	Params::BP_RelationshipSystem_C_IncreaseRelationshipLevel Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RelationshipSystem.BP_RelationshipSystem_C.IsRelationshipLevelMaximized
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_CharacterList                         Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   IsMaximized                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RelationshipSystem_C::IsRelationshipLevelMaximized(E_CharacterList Character, bool* IsMaximized)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RelationshipSystem_C", "IsRelationshipLevelMaximized");

	Params::BP_RelationshipSystem_C_IsRelationshipLevelMaximized Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

	if (IsMaximized != nullptr)
		*IsMaximized = Parms.IsMaximized;
}


// Function BP_RelationshipSystem.BP_RelationshipSystem_C.LoadState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TMap<E_CharacterList, int32>&     RelationshipsLevel_0                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_RelationshipSystem_C::LoadState(const TMap<E_CharacterList, int32>& RelationshipsLevel_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RelationshipSystem_C", "LoadState");

	Params::BP_RelationshipSystem_C_LoadState Parms{};

	Parms.RelationshipsLevel_0 = std::move(RelationshipsLevel_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RelationshipSystem.BP_RelationshipSystem_C.ProgressRelationshipQuest
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_CharacterList                         Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestObjectiveIdentifier        ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor)

struct FQuestObjectiveIdentifier UBP_RelationshipSystem_C::ProgressRelationshipQuest(E_CharacterList Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RelationshipSystem_C", "ProgressRelationshipQuest");

	Params::BP_RelationshipSystem_C_ProgressRelationshipQuest Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_RelationshipSystem.BP_RelationshipSystem_C.ResetState
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_RelationshipSystem_C::ResetState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RelationshipSystem_C", "ResetState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RelationshipSystem.BP_RelationshipSystem_C.SaveState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<E_CharacterList, int32>&           RelationshipsLevel_0                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_RelationshipSystem_C::SaveState(TMap<E_CharacterList, int32>& RelationshipsLevel_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RelationshipSystem_C", "SaveState");

	Params::BP_RelationshipSystem_C_SaveState Parms{};

	Parms.RelationshipsLevel_0 = std::move(RelationshipsLevel_0);

	UObject::ProcessEvent(Func, &Parms);

	RelationshipsLevel_0 = std::move(Parms.RelationshipsLevel_0);
}


// Function BP_RelationshipSystem.BP_RelationshipSystem_C.SetCurrentRelationshipLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_CharacterList                         Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RelationshipSystem_C::SetCurrentRelationshipLevel(E_CharacterList Character, int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RelationshipSystem_C", "SetCurrentRelationshipLevel");

	Params::BP_RelationshipSystem_C_SetCurrentRelationshipLevel Parms{};

	Parms.Character = Character;
	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}

}

