﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DataAsset_CharacterBattleAudioProfile

#include "Basic.hpp"

#include "BP_DataAsset_CharacterBattleAudioProfile_classes.hpp"
#include "BP_DataAsset_CharacterBattleAudioProfile_parameters.hpp"


namespace SDK
{

// Function BP_DataAsset_CharacterBattleAudioProfile.BP_DataAsset_CharacterBattleAudioProfile_C.GetCharacterBaseHitSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_DataAsset_BattleHitSound_C**  DefaultHitSound                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_DataAsset_CharacterBattleAudioProfile_C::GetCharacterBaseHitSound(class UBP_DataAsset_BattleHitSound_C** DefaultHitSound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DataAsset_CharacterBattleAudioProfile_C", "GetCharacterBaseHitSound");

	Params::BP_DataAsset_CharacterBattleAudioProfile_C_GetCharacterBaseHitSound Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (DefaultHitSound != nullptr)
		*DefaultHitSound = Parms.DefaultHitSound;
}


// Function BP_DataAsset_CharacterBattleAudioProfile.BP_DataAsset_CharacterBattleAudioProfile_C.GetCharacterBattleLinesClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TSoftClassPtr<class UClass>*            CharacterBattleLineClass_0                             (Parm, OutParm, HasGetValueTypeHash)

void UBP_DataAsset_CharacterBattleAudioProfile_C::GetCharacterBattleLinesClass(TSoftClassPtr<class UClass>* CharacterBattleLineClass_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DataAsset_CharacterBattleAudioProfile_C", "GetCharacterBattleLinesClass");

	Params::BP_DataAsset_CharacterBattleAudioProfile_C_GetCharacterBattleLinesClass Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterBattleLineClass_0 != nullptr)
		*CharacterBattleLineClass_0 = Parms.CharacterBattleLineClass_0;
}


// Function BP_DataAsset_CharacterBattleAudioProfile.BP_DataAsset_CharacterBattleAudioProfile_C.NewFunction
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_DataAsset_CharacterBattleAudioProfile_C::NewFunction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DataAsset_CharacterBattleAudioProfile_C", "NewFunction");

	UObject::ProcessEvent(Func, nullptr);
}

}

