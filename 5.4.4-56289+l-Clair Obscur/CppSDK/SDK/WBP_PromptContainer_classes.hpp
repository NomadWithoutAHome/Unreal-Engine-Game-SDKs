﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PromptContainer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FPromptActorAttachmentInfo_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PromptContainer.WBP_PromptContainer_C
// 0x0170 (0x0450 - 0x02E0)
class UWBP_PromptContainer_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_ExplorationPrompt_C*               TwoDPrompt;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class UWBP_ExplorationPrompt_C*, struct FVector> WorldPositionPrompts;                      // 0x02F8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class UWBP_ExplorationPrompt_C*, struct FFPromptActorAttachmentInfo> ActorPrompts;          // 0x0348(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<struct FGuid, class UWBP_ExplorationPrompt_C*> PromptsByGUID;                               // 0x0398(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FGuid                                  local_GUID;                                        // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ExplorationPromptHintPool_C*        DistantPromptPool;                                 // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<struct FGuid, class UWBP_ExplorationPromptHint_C*> DistantPromptsByGUID;                    // 0x0400(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	class UWBP_ExplorationPromptHint_C* AddDistantPromptToWorldPosition(const struct FVector& WorldPosition, struct FFPromptID* PromptID);
	void AddPromptToActor(class AActor* Actor, const struct FVector& Offset, const struct FFPromptParams& PromptParams, struct FFPromptID* PromptID);
	void AddPromptToWorldPosition(const struct FVector& Location, const struct FFPromptParams& PromptParams, struct FFPromptID* PromptID);
	struct FVector2D ClampToParentWidget(const struct FVector2D& ScreenPosition, class UWidget* ParentWidget, double Margin);
	class UWBP_ExplorationPrompt_C* CreatePromptWidget(const struct FFPromptParams& PromptParams, struct FFPromptID* PromptID);
	void ExecuteUbergraph_WBP_PromptContainer(int32 EntryPoint);
	void HidePrompt(const struct FFPromptID& PromptID);
	void OnInitialized();
	void OnPromptDisappeared(class UWBP_ExplorationPrompt_C* PromptWidget);
	void RemoveDistantPrompt(const struct FFPromptID& PromptID);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateActorPrompts();
	void UpdatePromptsWithWorldPositions();
	void UpdatePromptWidget(const struct FFPromptParams& PromptParams, const struct FFPromptID& PromptID, bool IsInteraction3D);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PromptContainer_C">();
	}
	static class UWBP_PromptContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PromptContainer_C>();
	}
};
static_assert(alignof(UWBP_PromptContainer_C) == 0x000008, "Wrong alignment on UWBP_PromptContainer_C");
static_assert(sizeof(UWBP_PromptContainer_C) == 0x000450, "Wrong size on UWBP_PromptContainer_C");
static_assert(offsetof(UWBP_PromptContainer_C, UberGraphFrame) == 0x0002E0, "Member 'UWBP_PromptContainer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PromptContainer_C, TwoDPrompt) == 0x0002E8, "Member 'UWBP_PromptContainer_C::TwoDPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_PromptContainer_C, CanvasPanel_0) == 0x0002F0, "Member 'UWBP_PromptContainer_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWBP_PromptContainer_C, WorldPositionPrompts) == 0x0002F8, "Member 'UWBP_PromptContainer_C::WorldPositionPrompts' has a wrong offset!");
static_assert(offsetof(UWBP_PromptContainer_C, ActorPrompts) == 0x000348, "Member 'UWBP_PromptContainer_C::ActorPrompts' has a wrong offset!");
static_assert(offsetof(UWBP_PromptContainer_C, PromptsByGUID) == 0x000398, "Member 'UWBP_PromptContainer_C::PromptsByGUID' has a wrong offset!");
static_assert(offsetof(UWBP_PromptContainer_C, local_GUID) == 0x0003E8, "Member 'UWBP_PromptContainer_C::local_GUID' has a wrong offset!");
static_assert(offsetof(UWBP_PromptContainer_C, DistantPromptPool) == 0x0003F8, "Member 'UWBP_PromptContainer_C::DistantPromptPool' has a wrong offset!");
static_assert(offsetof(UWBP_PromptContainer_C, DistantPromptsByGUID) == 0x000400, "Member 'UWBP_PromptContainer_C::DistantPromptsByGUID' has a wrong offset!");

}

