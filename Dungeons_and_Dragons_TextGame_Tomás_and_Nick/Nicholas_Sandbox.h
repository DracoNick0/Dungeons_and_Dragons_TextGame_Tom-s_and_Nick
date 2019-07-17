#pragma once
#include <iostream>
#include <stdlib.h>


 void AttackSystem();

enum PlayerType
{
	cKnight,
	cAssassin,
	cTank,
	cMage
};

struct tempplayer
{
	int PlayerArmor =      0;
	int PlayerHitChance =  0;
	int PlayerHitDamage =  0;
	int PlayerCritChance = 0;
	int PlayerCritDamage = 0;
	int PlayerDodge =      0;
	int PlayerHP =         0;
	bool Playerisdead = false;
	PlayerType playerType;
};

struct tempenemy
{
	int EnemyHP         = 0;
	int EnemyArmor      = 0;
	int EnemyHitChance  = 0;
	int EnemyHitDamage  = 0;
	int EnemyCritChance = 0;
	int EnemyCritDamage = 0;
	int EnemyDodge      = 0;
	bool Enemyisdead = false;
};
