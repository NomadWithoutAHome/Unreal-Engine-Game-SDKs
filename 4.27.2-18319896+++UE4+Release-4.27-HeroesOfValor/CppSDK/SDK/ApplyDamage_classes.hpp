﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ApplyDamage

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "E_DamageTypes_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ApplyDamage.ApplyDamage_C
// 0x0000 (0x0000 - 0x0000)
class IApplyDamage_C final
{
public:
	void ApplyDamage(int32 DamageAmount, const struct FVector& DamageHitLocation, const struct FVector& DamageDirection, class APawn* AttackerPawn, class UClass* Debuff, E_DamageTypes DamageType, int32 PlayerIndex, bool IsCriticalHit, bool IgnoreTeamProtection, const class FText& SpecialKillMessage, bool ShouldBreakInvisibility, bool IsPiercingDamage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ApplyDamage_C">();
	}
	static class IApplyDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IApplyDamage_C>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};
static_assert(alignof(IApplyDamage_C) == 0x000001, "Wrong alignment on IApplyDamage_C");
static_assert(sizeof(IApplyDamage_C) == 0x000001, "Wrong size on IApplyDamage_C");

}

