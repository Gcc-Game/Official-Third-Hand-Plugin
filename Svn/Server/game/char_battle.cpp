// Search:
void CHARACTER::RewardGold(LPCHARACTER pkAttacker)

// Find in:
	bool isAutoLoot = 
		(pkAttacker->GetPremiumRemainSeconds(PREMIUM_AUTOLOOT) > 0 ||
		pkAttacker->IsEquipUniqueGroup(UNIQUE_GROUP_AUTOLOOT))

// Change:
#ifdef ENABLE_OFFICIAL_THIRD_HAND
	bool isAutoLoot = 
		(pkAttacker->GetPremiumRemainSeconds(PREMIUM_AUTOLOOT) > 0 ||
		pkAttacker->IsEquipUniqueGroup(UNIQUE_GROUP_AUTOLOOT) || pkAttacker->IsEquipUniqueItem(UNIQUE_ITEM_AUTOLOOT_GOLD))
#else
	bool isAutoLoot = 
		(pkAttacker->GetPremiumRemainSeconds(PREMIUM_AUTOLOOT) > 0 ||
		pkAttacker->IsEquipUniqueGroup(UNIQUE_GROUP_AUTOLOOT))
#endif
