#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ExplosiveStake_InteractionType_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ExplosiveStake_InteractionType.ExplosiveStake_InteractionType_C
// 0x0000 (0x0328 - 0x0328)
class UExplosiveStake_InteractionType_C : public UInteractionTypeBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ExplosiveStake_InteractionType.ExplosiveStake_InteractionType_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
