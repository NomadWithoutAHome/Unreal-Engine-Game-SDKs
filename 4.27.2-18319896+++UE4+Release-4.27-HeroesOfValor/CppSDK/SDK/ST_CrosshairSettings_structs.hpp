﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ST_CrosshairSettings

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct ST_CrosshairSettings.ST_CrosshairSettings
// 0x0020 (0x0020 - 0x0000)
struct FST_CrosshairSettings final
{
public:
	bool                                          EnableCenterDot_1_9CBBD3E24DC4F22973260EB9088EB9B0; // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseStaticCrosshair_3_A7210C1544C45AD202BA5087D9EE05B9; // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          EnableShadow_26_8F56D01A44B400AA927B399482FA9497;  // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3[0x1];                                        // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StaticCrosshairSpread_24_6BBB215D45ACF27348AFA599EC868F60; // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CrosshairRedColor_10_E1834F0F4E93EAC7EFB9D58A08C72EF5; // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CrosshairGreenColor_11_566286C3444BC5E7E661CDA8D95F0997; // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CrosshairBlueColor_12_839A0422486DA0C035335CB8AF8770B7; // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CrosshairLineLength_14_8B8C12A84B96CD02C9371EADB361AC0B; // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CrosshairLineWidth_22_3AE0EB264284E0EC4B7BDEBB9C3F2E49; // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BorderThickness_23_0DB8A5204D4B26365D1844922F8FD700; // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FST_CrosshairSettings) == 0x000004, "Wrong alignment on FST_CrosshairSettings");
static_assert(sizeof(FST_CrosshairSettings) == 0x000020, "Wrong size on FST_CrosshairSettings");
static_assert(offsetof(FST_CrosshairSettings, EnableCenterDot_1_9CBBD3E24DC4F22973260EB9088EB9B0) == 0x000000, "Member 'FST_CrosshairSettings::EnableCenterDot_1_9CBBD3E24DC4F22973260EB9088EB9B0' has a wrong offset!");
static_assert(offsetof(FST_CrosshairSettings, UseStaticCrosshair_3_A7210C1544C45AD202BA5087D9EE05B9) == 0x000001, "Member 'FST_CrosshairSettings::UseStaticCrosshair_3_A7210C1544C45AD202BA5087D9EE05B9' has a wrong offset!");
static_assert(offsetof(FST_CrosshairSettings, EnableShadow_26_8F56D01A44B400AA927B399482FA9497) == 0x000002, "Member 'FST_CrosshairSettings::EnableShadow_26_8F56D01A44B400AA927B399482FA9497' has a wrong offset!");
static_assert(offsetof(FST_CrosshairSettings, StaticCrosshairSpread_24_6BBB215D45ACF27348AFA599EC868F60) == 0x000004, "Member 'FST_CrosshairSettings::StaticCrosshairSpread_24_6BBB215D45ACF27348AFA599EC868F60' has a wrong offset!");
static_assert(offsetof(FST_CrosshairSettings, CrosshairRedColor_10_E1834F0F4E93EAC7EFB9D58A08C72EF5) == 0x000008, "Member 'FST_CrosshairSettings::CrosshairRedColor_10_E1834F0F4E93EAC7EFB9D58A08C72EF5' has a wrong offset!");
static_assert(offsetof(FST_CrosshairSettings, CrosshairGreenColor_11_566286C3444BC5E7E661CDA8D95F0997) == 0x00000C, "Member 'FST_CrosshairSettings::CrosshairGreenColor_11_566286C3444BC5E7E661CDA8D95F0997' has a wrong offset!");
static_assert(offsetof(FST_CrosshairSettings, CrosshairBlueColor_12_839A0422486DA0C035335CB8AF8770B7) == 0x000010, "Member 'FST_CrosshairSettings::CrosshairBlueColor_12_839A0422486DA0C035335CB8AF8770B7' has a wrong offset!");
static_assert(offsetof(FST_CrosshairSettings, CrosshairLineLength_14_8B8C12A84B96CD02C9371EADB361AC0B) == 0x000014, "Member 'FST_CrosshairSettings::CrosshairLineLength_14_8B8C12A84B96CD02C9371EADB361AC0B' has a wrong offset!");
static_assert(offsetof(FST_CrosshairSettings, CrosshairLineWidth_22_3AE0EB264284E0EC4B7BDEBB9C3F2E49) == 0x000018, "Member 'FST_CrosshairSettings::CrosshairLineWidth_22_3AE0EB264284E0EC4B7BDEBB9C3F2E49' has a wrong offset!");
static_assert(offsetof(FST_CrosshairSettings, BorderThickness_23_0DB8A5204D4B26365D1844922F8FD700) == 0x00001C, "Member 'FST_CrosshairSettings::BorderThickness_23_0DB8A5204D4B26365D1844922F8FD700' has a wrong offset!");

}

