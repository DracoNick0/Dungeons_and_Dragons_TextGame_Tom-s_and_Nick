#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;


 void AttackSystem();

enum PlayerType
{
	cKnight,
	cAssassin,
	cTank,
	cMage
};

enum EnemyType
{
	cEasy,
	cMedium,
	cHard,
	cBoss
};

struct tempplayer
{
	bool PlayerisDead = false;
	int PlayerHP         = 0;
	int PlayerArmor      = 0;
	int PlayerHitChance  = 0;
	int PlayerHitDamage  = 0;
	int PlayerAddHitDamage = 0;
	int PlayerCritChance = 0;
	int PlayerCritDamage = 0;
	int PlayerAddCritDamage = 0;
	int PlayerDodge      = 0;
	int PlayerSkillCharge = 0;
	string PlayerSkill1;
	string PlayerSkill2;
	string PlayerSkill3;
	int PlayerSkill1Damage = 0;
	int PlayerSkill2Damage = 0;
	int PlayerSkill3Damage = 0;

	PlayerType playerType;
};

struct tempenemy
{
	bool EnemyisDead = false;
	int EnemyHP          = 0;
	int EnemyArmor       = 0;
	int EnemyHitChance   = 0;
	int EnemyHitDamage   = 0;
	int EnemyAddHitDamage = 0;
	int EnemyCritChance  = 0;
	int EnemyCritDamage  = 0;
	int EnemyAddCritDamage = 0;
	int EnemyDodge       = 0;
	EnemyType enemyType;
};
