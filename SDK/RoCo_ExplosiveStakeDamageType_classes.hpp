#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ExplosiveStakeDamageType_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ExplosiveStakeDamageType.ExplosiveStakeDamageType_C
// 0x0000 (0x0138 - 0x0138)
class UExplosiveStakeDamageType_C : public UMasterExplosion_DamageType_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ExplosiveStakeDamageType.ExplosiveStakeDamageType_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
