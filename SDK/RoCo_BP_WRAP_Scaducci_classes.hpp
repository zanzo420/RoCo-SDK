#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BP_WRAP_Scaducci_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WRAP_Scaducci.BP_WRAP_Scaducci_C
// 0x0000 (0x01B0 - 0x01B0)
class UBP_WRAP_Scaducci_C : public UKSWeaponAttachmentCosmeticInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_WRAP_Scaducci.BP_WRAP_Scaducci_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
