#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_SettingsInfo_BindPushToTalk_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SettingsInfo_BindPushToTalk.SettingsInfo_BindPushToTalk_C
// 0x0000 (0x0128 - 0x0128)
class USettingsInfo_BindPushToTalk_C : public UKSSettingsInfo_Binding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass SettingsInfo_BindPushToTalk.SettingsInfo_BindPushToTalk_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
