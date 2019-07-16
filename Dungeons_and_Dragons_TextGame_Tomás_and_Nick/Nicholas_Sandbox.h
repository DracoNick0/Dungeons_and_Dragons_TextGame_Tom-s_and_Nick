#pragma once
struct Knight
{
	float PlayerHP = 10;
	float PlayerArmor = 10;
	float PlayerHitChance = (rand() % 10) + 1;
	float PlayerHitDamage = (rand() % 5) + 1;
	float PlayerCritChance = (rand() % 20) + 1;
	float PlayerCritDamage = (rand() % 5) + 1;
	float PlayerDodge;
	float Playerisdead = false;
};
struct Asssassin
{
	float PlayerHP = 5;
	float PlayerArmor = 0;
	float PlayerHitChance = (rand() % 5) + 1;
	float PlayerHitDamage = (rand() % 3) + 1;
	float PlayerCritChance = (rand() % 20) + 1;
	float PlayerCritDamage = (rand() % 5) + 1;
	float PlayerDodge;
	float Playerisdead = false;
};
struct Tank
{
	float PlayerHP = 20;
	float PlayerArmor = 20;
	float PlayerHitChance = (rand() % 20) + 1;
	float PlayerHitDamage = (rand() % 25) + 1;
	float PlayerCritChance = (rand() % 30) + 1;
	float PlayerCritDamage = (rand() % 10) + 1;
	float PlayerDodge;
	float Playerisdead = false;
};
struct Mage
{
	float PlayerHP = 5;
	float PlayerArmor = 10;
	float PlayerHitChance = (rand() % 10) + 1;
	float PlayerHitDamage;
	float PlayerCritChance;
	float PlayerCritDamage;
	float PlayerDodge = 0;
	float Playerisdead = false;
};
struct tempplayer
{
	float PlayerHP = 10;
	float PlayerArmor = 10;
	float PlayerHitChance = (rand() % 1) + 1;
	float PlayerHitDamage = (rand() % 1) + 1;
	float PlayerCritChance = (rand() % 1) + 1;
	float PlayerCritDamage = (rand() % 1) + 1;
	float PlayerDodge = (rand() % 1) + 1;
	float Playerisdead = false;
};
void AttackSystem();