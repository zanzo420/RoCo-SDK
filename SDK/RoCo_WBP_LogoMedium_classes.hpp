#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_LogoMedium_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_LogoMedium.WBP_LogoMedium_C
// 0x0008 (0x04E8 - 0x04E0)
class UWBP_LogoMedium_C : public UKSWidget
{
public:
	class UImage*                                      logo;                                                     // 0x04E0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_LogoMedium.WBP_LogoMedium_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
