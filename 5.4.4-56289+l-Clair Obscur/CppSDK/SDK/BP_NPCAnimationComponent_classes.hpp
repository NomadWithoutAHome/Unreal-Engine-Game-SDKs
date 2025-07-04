﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPCAnimationComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "E_Facial_LookAt_structs.hpp"
#include "S_IdleNpcParameters_structs.hpp"
#include "E_NPC_Body_IdleType_structs.hpp"
#include "E_LookAtEndBones_structs.hpp"
#include "S_NPCAnimations_structs.hpp"
#include "E_Expressions_Metahuman_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "E_NPC_ForceHeadDirection_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NPCAnimationComponent.BP_NPCAnimationComponent_C
// 0x01E8 (0x0288 - 0x00A0)
class UBP_NPCAnimationComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FS_IdleNpcParameters                   IdleOverride;                                      // 0x00A8(0x0058)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_NPCAnimations                       NPCAnimationStruct;                                // 0x0100(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance, Deprecated, HasGetValueTypeHash)
	bool                                          KeepWorldIdleInDialogue;                           // 0x0158(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AllowNPCLookAt;                                    // 0x0159(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_Expressions_Metahuman                       FacialExpression;                                  // 0x015A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15B[0x5];                                      // 0x015B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        FacialExpressionStrength;                          // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LookAtOnlyWhenTalking;                             // 0x0168(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTalking;                                         // 0x0169(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldLookAt;                                      // 0x016A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16B[0x5];                                      // 0x016B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                LookAtLocation;                                    // 0x0170(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LookAtMaxDistance;                                 // 0x0188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_Facial_LookAt                               EyesLook;                                          // 0x0190(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_NPC_Body_IdleType                           IdleType;                                          // 0x0191(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_192[0x2];                                      // 0x0192(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   LookAtEndBone;                                     // 0x0194(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19C[0x4];                                      // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<E_LookAtEndBones, class FName>           LookAtBoneMap;                                     // 0x01A0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	E_LookAtEndBones                              LookAtBone;                                        // 0x01F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInDialogue;                                      // 0x01F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_NPC_ForceHeadDirection                      ForceHeadDirection;                                // 0x01F2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_NPC_ForceHeadDirection                      BaseForceHeadDirection;                            // 0x01F3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_Expressions_Metahuman                       Basexpression;                                     // 0x01F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_NPC_Body_IdleType                           BaseIdleType;                                      // 0x01F5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_NPC_Body_IdleType                           PreviousIdleType;                                  // 0x01F6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IdleChanged;                                       // 0x01F7(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PreviousIdleIsSimilar;                             // 0x01F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldPauseIdleWhenInDialogue;                     // 0x01F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldAddHandAdditiveOnBaseIdle;                   // 0x01FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableIK;                                          // 0x01FB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FC[0x4];                                      // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              UpdateCustomIdle;                                  // 0x0200(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FS_IdleNpcParameters                   CustomIdle;                                        // 0x0210(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	double                                        BaseFacialExpressionStrength;                      // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OwnerIsCharacterWorld;                             // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_271[0x7];                                      // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        EnvelopeVolume;                                    // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_jRPG_NPC_Dialog_C*                  InteractingNPC;                                    // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ResetLookAtLocation();
	void UpdateLookAtData();
	void SetInteractingNPC(class ABP_jRPG_NPC_Dialog_C* InteractingNPC_0);
	void GetEnvelopeVolume(double* EnvelopeVolume_0);
	void UpdateEnvelopeVolume(double SoundWaveVolume);
	void SetIdleBase(const struct FS_IdleNpcParameters& IdleOverride_0);
	void SetIsInDialogue(bool IsInDialogue_0);
	void GetBaseAnimationStatus(E_Expressions_Metahuman* Basexpression_0, double* BaseFacialExpressionStrength_0, E_NPC_Body_IdleType* BaseIdleType_0);
	void ResetAnimationState();
	void SetForceHeadDirection(E_NPC_ForceHeadDirection ForceHeadDirection_0);
	void SetEnableLookAt(bool AllowNPCLookAt_0);
	void SetLookAtEndBone();
	void SetFacialExpression(E_Expressions_Metahuman FacialExpression_0, double FacialExpressionStrength_0, E_Facial_LookAt EyesLook_0);
	void SetIdleType(E_NPC_Body_IdleType IdleType_0);
	void SetIsTalking(bool IsTalking_0);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void HasChangedIdle();
	void PreviousIdleIsTheSame();
	void UpdateCustomIdleAndSendToABP(const struct FS_IdleNpcParameters& CustomIdle_0);
	void ExecuteUbergraph_BP_NPCAnimationComponent(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NPCAnimationComponent_C">();
	}
	static class UBP_NPCAnimationComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_NPCAnimationComponent_C>();
	}
};
static_assert(alignof(UBP_NPCAnimationComponent_C) == 0x000008, "Wrong alignment on UBP_NPCAnimationComponent_C");
static_assert(sizeof(UBP_NPCAnimationComponent_C) == 0x000288, "Wrong size on UBP_NPCAnimationComponent_C");
static_assert(offsetof(UBP_NPCAnimationComponent_C, UberGraphFrame) == 0x0000A0, "Member 'UBP_NPCAnimationComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, IdleOverride) == 0x0000A8, "Member 'UBP_NPCAnimationComponent_C::IdleOverride' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, NPCAnimationStruct) == 0x000100, "Member 'UBP_NPCAnimationComponent_C::NPCAnimationStruct' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, KeepWorldIdleInDialogue) == 0x000158, "Member 'UBP_NPCAnimationComponent_C::KeepWorldIdleInDialogue' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, AllowNPCLookAt) == 0x000159, "Member 'UBP_NPCAnimationComponent_C::AllowNPCLookAt' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, FacialExpression) == 0x00015A, "Member 'UBP_NPCAnimationComponent_C::FacialExpression' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, FacialExpressionStrength) == 0x000160, "Member 'UBP_NPCAnimationComponent_C::FacialExpressionStrength' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, LookAtOnlyWhenTalking) == 0x000168, "Member 'UBP_NPCAnimationComponent_C::LookAtOnlyWhenTalking' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, IsTalking) == 0x000169, "Member 'UBP_NPCAnimationComponent_C::IsTalking' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, ShouldLookAt) == 0x00016A, "Member 'UBP_NPCAnimationComponent_C::ShouldLookAt' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, LookAtLocation) == 0x000170, "Member 'UBP_NPCAnimationComponent_C::LookAtLocation' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, LookAtMaxDistance) == 0x000188, "Member 'UBP_NPCAnimationComponent_C::LookAtMaxDistance' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, EyesLook) == 0x000190, "Member 'UBP_NPCAnimationComponent_C::EyesLook' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, IdleType) == 0x000191, "Member 'UBP_NPCAnimationComponent_C::IdleType' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, LookAtEndBone) == 0x000194, "Member 'UBP_NPCAnimationComponent_C::LookAtEndBone' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, LookAtBoneMap) == 0x0001A0, "Member 'UBP_NPCAnimationComponent_C::LookAtBoneMap' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, LookAtBone) == 0x0001F0, "Member 'UBP_NPCAnimationComponent_C::LookAtBone' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, IsInDialogue) == 0x0001F1, "Member 'UBP_NPCAnimationComponent_C::IsInDialogue' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, ForceHeadDirection) == 0x0001F2, "Member 'UBP_NPCAnimationComponent_C::ForceHeadDirection' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, BaseForceHeadDirection) == 0x0001F3, "Member 'UBP_NPCAnimationComponent_C::BaseForceHeadDirection' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, Basexpression) == 0x0001F4, "Member 'UBP_NPCAnimationComponent_C::Basexpression' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, BaseIdleType) == 0x0001F5, "Member 'UBP_NPCAnimationComponent_C::BaseIdleType' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, PreviousIdleType) == 0x0001F6, "Member 'UBP_NPCAnimationComponent_C::PreviousIdleType' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, IdleChanged) == 0x0001F7, "Member 'UBP_NPCAnimationComponent_C::IdleChanged' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, PreviousIdleIsSimilar) == 0x0001F8, "Member 'UBP_NPCAnimationComponent_C::PreviousIdleIsSimilar' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, ShouldPauseIdleWhenInDialogue) == 0x0001F9, "Member 'UBP_NPCAnimationComponent_C::ShouldPauseIdleWhenInDialogue' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, ShouldAddHandAdditiveOnBaseIdle) == 0x0001FA, "Member 'UBP_NPCAnimationComponent_C::ShouldAddHandAdditiveOnBaseIdle' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, EnableIK) == 0x0001FB, "Member 'UBP_NPCAnimationComponent_C::EnableIK' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, UpdateCustomIdle) == 0x000200, "Member 'UBP_NPCAnimationComponent_C::UpdateCustomIdle' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, CustomIdle) == 0x000210, "Member 'UBP_NPCAnimationComponent_C::CustomIdle' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, BaseFacialExpressionStrength) == 0x000268, "Member 'UBP_NPCAnimationComponent_C::BaseFacialExpressionStrength' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, OwnerIsCharacterWorld) == 0x000270, "Member 'UBP_NPCAnimationComponent_C::OwnerIsCharacterWorld' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, EnvelopeVolume) == 0x000278, "Member 'UBP_NPCAnimationComponent_C::EnvelopeVolume' has a wrong offset!");
static_assert(offsetof(UBP_NPCAnimationComponent_C, InteractingNPC) == 0x000280, "Member 'UBP_NPCAnimationComponent_C::InteractingNPC' has a wrong offset!");

}

