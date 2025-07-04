﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UniqueMechanic_Charge_Component

#include "Basic.hpp"

#include "BP_UniqueMechanic_Charge_Component_classes.hpp"
#include "BP_UniqueMechanic_Charge_Component_parameters.hpp"


namespace SDK
{

// Function BP_UniqueMechanic_Charge_Component.BP_UniqueMechanic_Charge_Component_C.AddCharge
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_UniqueMechanic_Charge_Component_C::AddCharge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueMechanic_Charge_Component_C", "AddCharge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UniqueMechanic_Charge_Component.BP_UniqueMechanic_Charge_Component_C.ChangeCharge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Delta                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueMechanic_Charge_Component_C::ChangeCharge(int32 Delta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueMechanic_Charge_Component_C", "ChangeCharge");

	Params::BP_UniqueMechanic_Charge_Component_C_ChangeCharge Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UniqueMechanic_Charge_Component.BP_UniqueMechanic_Charge_Component_C.CreatePortraitWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget**                     CreatedUserWidget                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32*                                  SlotIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueMechanic_Charge_Component_C::CreatePortraitWidget(class UUserWidget** CreatedUserWidget, int32* SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueMechanic_Charge_Component_C", "CreatePortraitWidget");

	Params::BP_UniqueMechanic_Charge_Component_C_CreatePortraitWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CreatedUserWidget != nullptr)
		*CreatedUserWidget = Parms.CreatedUserWidget;

	if (SlotIndex != nullptr)
		*SlotIndex = Parms.SlotIndex;
}


// Function BP_UniqueMechanic_Charge_Component.BP_UniqueMechanic_Charge_Component_C.ExecuteUbergraph_BP_UniqueMechanic_Charge_Component
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueMechanic_Charge_Component_C::ExecuteUbergraph_BP_UniqueMechanic_Charge_Component(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueMechanic_Charge_Component_C", "ExecuteUbergraph_BP_UniqueMechanic_Charge_Component");

	Params::BP_UniqueMechanic_Charge_Component_C_ExecuteUbergraph_BP_UniqueMechanic_Charge_Component Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UniqueMechanic_Charge_Component.BP_UniqueMechanic_Charge_Component_C.GetCurrentChargeCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_UniqueMechanic_Charge_Component_C::GetCurrentChargeCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueMechanic_Charge_Component_C", "GetCurrentChargeCount");

	Params::BP_UniqueMechanic_Charge_Component_C_GetCurrentChargeCount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_UniqueMechanic_Charge_Component.BP_UniqueMechanic_Charge_Component_C.GetMaxChargeCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_UniqueMechanic_Charge_Component_C::GetMaxChargeCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueMechanic_Charge_Component_C", "GetMaxChargeCount");

	Params::BP_UniqueMechanic_Charge_Component_C_GetMaxChargeCount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_UniqueMechanic_Charge_Component.BP_UniqueMechanic_Charge_Component_C.GetWBP_UniqueMechanic_Charge
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_UniqueMechanic_Charge_C**    WBP_UniqueMechanic_Charge_0                            (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueMechanic_Charge_Component_C::GetWBP_UniqueMechanic_Charge(class UWBP_UniqueMechanic_Charge_C** WBP_UniqueMechanic_Charge_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueMechanic_Charge_Component_C", "GetWBP_UniqueMechanic_Charge");

	Params::BP_UniqueMechanic_Charge_Component_C_GetWBP_UniqueMechanic_Charge Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (WBP_UniqueMechanic_Charge_0 != nullptr)
		*WBP_UniqueMechanic_Charge_0 = Parms.WBP_UniqueMechanic_Charge_0;
}


// Function BP_UniqueMechanic_Charge_Component.BP_UniqueMechanic_Charge_Component_C.IsCharacterOwner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_jRPG_Character_Battle_Base_C* CharacterBattle                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_UniqueMechanic_Charge_Component_C::IsCharacterOwner(class ABP_jRPG_Character_Battle_Base_C* CharacterBattle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueMechanic_Charge_Component_C", "IsCharacterOwner");

	Params::BP_UniqueMechanic_Charge_Component_C_IsCharacterOwner Parms{};

	Parms.CharacterBattle = CharacterBattle;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_UniqueMechanic_Charge_Component.BP_UniqueMechanic_Charge_Component_C.IsFullyCharged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_UniqueMechanic_Charge_Component_C::IsFullyCharged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueMechanic_Charge_Component_C", "IsFullyCharged");

	Params::BP_UniqueMechanic_Charge_Component_C_IsFullyCharged Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_UniqueMechanic_Charge_Component.BP_UniqueMechanic_Charge_Component_C.OnCharacterReceivedDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_BattleDamages_C*              BattleDamage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueMechanic_Charge_Component_C::OnCharacterReceivedDamage(class UBP_BattleDamages_C* BattleDamage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueMechanic_Charge_Component_C", "OnCharacterReceivedDamage");

	Params::BP_UniqueMechanic_Charge_Component_C_OnCharacterReceivedDamage Parms{};

	Parms.BattleDamage = BattleDamage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UniqueMechanic_Charge_Component.BP_UniqueMechanic_Charge_Component_C.OnDodgeSuccessful_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_jRPG_Character_Battle_Base_C* Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_jRPG_Character_Battle_Base_C* Enemy                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueMechanic_Charge_Component_C::OnDodgeSuccessful_Event(class ABP_jRPG_Character_Battle_Base_C* Character, class ABP_jRPG_Character_Battle_Base_C* Enemy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueMechanic_Charge_Component_C", "OnDodgeSuccessful_Event");

	Params::BP_UniqueMechanic_Charge_Component_C_OnDodgeSuccessful_Event Parms{};

	Parms.Character = Character;
	Parms.Enemy = Enemy;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UniqueMechanic_Charge_Component.BP_UniqueMechanic_Charge_Component_C.OnParrySuccessful_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_jRPG_Character_Battle_Base_C* Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_jRPG_Character_Battle_Base_C* Enemy                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueMechanic_Charge_Component_C::OnParrySuccessful_Event(class ABP_jRPG_Character_Battle_Base_C* Character, class ABP_jRPG_Character_Battle_Base_C* Enemy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueMechanic_Charge_Component_C", "OnParrySuccessful_Event");

	Params::BP_UniqueMechanic_Charge_Component_C_OnParrySuccessful_Event Parms{};

	Parms.Character = Character;
	Parms.Enemy = Enemy;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UniqueMechanic_Charge_Component.BP_UniqueMechanic_Charge_Component_C.OnTurnEnd
// (BlueprintCallable, BlueprintEvent)

void UBP_UniqueMechanic_Charge_Component_C::OnTurnEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueMechanic_Charge_Component_C", "OnTurnEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UniqueMechanic_Charge_Component.BP_UniqueMechanic_Charge_Component_C.OnTurnStart
// (BlueprintCallable, BlueprintEvent)

void UBP_UniqueMechanic_Charge_Component_C::OnTurnStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueMechanic_Charge_Component_C", "OnTurnStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UniqueMechanic_Charge_Component.BP_UniqueMechanic_Charge_Component_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_UniqueMechanic_Charge_Component_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueMechanic_Charge_Component_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_UniqueMechanic_Charge_Component.BP_UniqueMechanic_Charge_Component_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueMechanic_Charge_Component_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueMechanic_Charge_Component_C", "ReceiveEndPlay");

	Params::BP_UniqueMechanic_Charge_Component_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UniqueMechanic_Charge_Component.BP_UniqueMechanic_Charge_Component_C.SetChargeCountInternal
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ChargeCount_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueMechanic_Charge_Component_C::SetChargeCountInternal(int32 ChargeCount_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueMechanic_Charge_Component_C", "SetChargeCountInternal");

	Params::BP_UniqueMechanic_Charge_Component_C_SetChargeCountInternal Parms{};

	Parms.ChargeCount_0 = ChargeCount_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UniqueMechanic_Charge_Component.BP_UniqueMechanic_Charge_Component_C.TryFlushCharge
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UniqueMechanic_Charge_Component_C::TryFlushCharge(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UniqueMechanic_Charge_Component_C", "TryFlushCharge");

	Params::BP_UniqueMechanic_Charge_Component_C_TryFlushCharge Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}

}

