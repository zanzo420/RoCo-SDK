#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_WBP_GuidedCalloutViewRedirector_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WBP_GuidedCalloutViewRedirector.WBP_GuidedCalloutViewRedirector_C
// 0x0000 (0x0038 - 0x0038)
class UWBP_GuidedCalloutViewRedirector_C : public UGuidedMenuCalloutsViewRedirector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass WBP_GuidedCalloutViewRedirector.WBP_GuidedCalloutViewRedirector_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
