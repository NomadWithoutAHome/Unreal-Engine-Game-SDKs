﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CableComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Class CableComponent.CableActor
// 0x0008 (0x0298 - 0x0290)
class ACableActor final : public AActor
{
public:
	class UCableComponent*                        CableComponent;                                    // 0x0290(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CableActor">();
	}
	static class ACableActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACableActor>();
	}
};
static_assert(alignof(ACableActor) == 0x000008, "Wrong alignment on ACableActor");
static_assert(sizeof(ACableActor) == 0x000298, "Wrong size on ACableActor");
static_assert(offsetof(ACableActor, CableComponent) == 0x000290, "Member 'ACableActor::CableComponent' has a wrong offset!");

// Class CableComponent.CableComponent
// 0x00B0 (0x0610 - 0x0560)
class UCableComponent final : public UMeshComponent
{
public:
	bool                                          bAttachStart;                                      // 0x0560(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAttachEnd;                                        // 0x0561(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_562[0x6];                                      // 0x0562(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FComponentReference                    AttachEndTo;                                       // 0x0568(0x0028)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   AttachEndToSocketName;                             // 0x0590(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                EndLocation;                                       // 0x0598(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CableLength;                                       // 0x05B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumSegments;                                       // 0x05B4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SubstepTime;                                       // 0x05B8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SolverIterations;                                  // 0x05BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableStiffness;                                  // 0x05C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseSubstepping;                                   // 0x05C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSkipCableUpdateWhenNotVisible;                    // 0x05C2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSkipCableUpdateWhenNotOwnerRecentlyRendered;      // 0x05C3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableCollision;                                  // 0x05C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5C5[0x3];                                      // 0x05C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CollisionFriction;                                 // 0x05C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5CC[0x4];                                      // 0x05CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CableForce;                                        // 0x05D0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CableGravityScale;                                 // 0x05E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CableWidth;                                        // 0x05EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumSides;                                          // 0x05F0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TileMaterial;                                      // 0x05F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5F8[0x18];                                     // 0x05F8(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetAttachEndTo(class AActor* Actor, class FName ComponentProperty, class FName SocketName);
	void SetAttachEndToComponent(class USceneComponent* Component, class FName SocketName);

	class AActor* GetAttachedActor() const;
	class USceneComponent* GetAttachedComponent() const;
	void GetCableParticleLocations(TArray<struct FVector>* Locations) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CableComponent">();
	}
	static class UCableComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCableComponent>();
	}
};
static_assert(alignof(UCableComponent) == 0x000010, "Wrong alignment on UCableComponent");
static_assert(sizeof(UCableComponent) == 0x000610, "Wrong size on UCableComponent");
static_assert(offsetof(UCableComponent, bAttachStart) == 0x000560, "Member 'UCableComponent::bAttachStart' has a wrong offset!");
static_assert(offsetof(UCableComponent, bAttachEnd) == 0x000561, "Member 'UCableComponent::bAttachEnd' has a wrong offset!");
static_assert(offsetof(UCableComponent, AttachEndTo) == 0x000568, "Member 'UCableComponent::AttachEndTo' has a wrong offset!");
static_assert(offsetof(UCableComponent, AttachEndToSocketName) == 0x000590, "Member 'UCableComponent::AttachEndToSocketName' has a wrong offset!");
static_assert(offsetof(UCableComponent, EndLocation) == 0x000598, "Member 'UCableComponent::EndLocation' has a wrong offset!");
static_assert(offsetof(UCableComponent, CableLength) == 0x0005B0, "Member 'UCableComponent::CableLength' has a wrong offset!");
static_assert(offsetof(UCableComponent, NumSegments) == 0x0005B4, "Member 'UCableComponent::NumSegments' has a wrong offset!");
static_assert(offsetof(UCableComponent, SubstepTime) == 0x0005B8, "Member 'UCableComponent::SubstepTime' has a wrong offset!");
static_assert(offsetof(UCableComponent, SolverIterations) == 0x0005BC, "Member 'UCableComponent::SolverIterations' has a wrong offset!");
static_assert(offsetof(UCableComponent, bEnableStiffness) == 0x0005C0, "Member 'UCableComponent::bEnableStiffness' has a wrong offset!");
static_assert(offsetof(UCableComponent, bUseSubstepping) == 0x0005C1, "Member 'UCableComponent::bUseSubstepping' has a wrong offset!");
static_assert(offsetof(UCableComponent, bSkipCableUpdateWhenNotVisible) == 0x0005C2, "Member 'UCableComponent::bSkipCableUpdateWhenNotVisible' has a wrong offset!");
static_assert(offsetof(UCableComponent, bSkipCableUpdateWhenNotOwnerRecentlyRendered) == 0x0005C3, "Member 'UCableComponent::bSkipCableUpdateWhenNotOwnerRecentlyRendered' has a wrong offset!");
static_assert(offsetof(UCableComponent, bEnableCollision) == 0x0005C4, "Member 'UCableComponent::bEnableCollision' has a wrong offset!");
static_assert(offsetof(UCableComponent, CollisionFriction) == 0x0005C8, "Member 'UCableComponent::CollisionFriction' has a wrong offset!");
static_assert(offsetof(UCableComponent, CableForce) == 0x0005D0, "Member 'UCableComponent::CableForce' has a wrong offset!");
static_assert(offsetof(UCableComponent, CableGravityScale) == 0x0005E8, "Member 'UCableComponent::CableGravityScale' has a wrong offset!");
static_assert(offsetof(UCableComponent, CableWidth) == 0x0005EC, "Member 'UCableComponent::CableWidth' has a wrong offset!");
static_assert(offsetof(UCableComponent, NumSides) == 0x0005F0, "Member 'UCableComponent::NumSides' has a wrong offset!");
static_assert(offsetof(UCableComponent, TileMaterial) == 0x0005F4, "Member 'UCableComponent::TileMaterial' has a wrong offset!");

}

