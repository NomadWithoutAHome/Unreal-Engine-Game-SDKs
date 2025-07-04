﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PictoIcon

#include "Basic.hpp"

#include "WBP_PictoIcon_classes.hpp"
#include "WBP_PictoIcon_parameters.hpp"


namespace SDK
{

// Function WBP_PictoIcon.WBP_PictoIcon_C.GetCurrentStep
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32*                                  CurrentStep_0                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PictoIcon_C::GetCurrentStep(int32* CurrentStep_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PictoIcon_C", "GetCurrentStep");

	Params::WBP_PictoIcon_C_GetCurrentStep Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentStep_0 != nullptr)
		*CurrentStep_0 = Parms.CurrentStep_0;
}


// Function WBP_PictoIcon.WBP_PictoIcon_C.GetLearntNewLuminaThisBattle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   LearntNewLuminaThisBattle_0                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PictoIcon_C::GetLearntNewLuminaThisBattle(bool* LearntNewLuminaThisBattle_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PictoIcon_C", "GetLearntNewLuminaThisBattle");

	Params::WBP_PictoIcon_C_GetLearntNewLuminaThisBattle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LearntNewLuminaThisBattle_0 != nullptr)
		*LearntNewLuminaThisBattle_0 = Parms.LearntNewLuminaThisBattle_0;
}


// Function WBP_PictoIcon.WBP_PictoIcon_C.TransitionToNextStep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Progression                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PictoIcon_C::TransitionToNextStep(double Progression)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PictoIcon_C", "TransitionToNextStep");

	Params::WBP_PictoIcon_C_TransitionToNextStep Parms{};

	Parms.Progression = Progression;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PictoIcon.WBP_PictoIcon_C.LoadPictoIconColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FS_PictoIconsDataRow&      PictoIconData                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// const struct FFPassiveEffect&           PassiveEffectDefinition                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_PictoIcon_C::LoadPictoIconColor(const struct FS_PictoIconsDataRow& PictoIconData, const struct FFPassiveEffect& PassiveEffectDefinition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PictoIcon_C", "LoadPictoIconColor");

	Params::WBP_PictoIcon_C_LoadPictoIconColor Parms{};

	Parms.PictoIconData = std::move(PictoIconData);
	Parms.PassiveEffectDefinition = std::move(PassiveEffectDefinition);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PictoIcon.WBP_PictoIcon_C.LoadPictoIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             PictoID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PictoIcon_C::LoadPictoIcon(class FName PictoID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PictoIcon_C", "LoadPictoIcon");

	Params::WBP_PictoIcon_C_LoadPictoIcon Parms{};

	Parms.PictoID = PictoID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PictoIcon.WBP_PictoIcon_C.LoadPassiveEffectLearnState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FFPassiveEffectProgression&PassiveEffectProgression                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PictoIcon_C::LoadPassiveEffectLearnState(const struct FFPassiveEffectProgression& PassiveEffectProgression)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PictoIcon_C", "LoadPassiveEffectLearnState");

	Params::WBP_PictoIcon_C_LoadPassiveEffectLearnState Parms{};

	Parms.PassiveEffectProgression = std::move(PassiveEffectProgression);

	UObject::ProcessEvent(Func, &Parms);
}

}

