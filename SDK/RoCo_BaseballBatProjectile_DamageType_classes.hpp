#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_BaseballBatProjectile_DamageType_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BaseballBatProjectile_DamageType.BaseballBatProjectile_DamageType_C
// 0x0000 (0x0138 - 0x0138)
class UBaseballBatProjectile_DamageType_C : public UMasterMelee_DamageType_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BaseballBatProjectile_DamageType.BaseballBatProjectile_DamageType_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
