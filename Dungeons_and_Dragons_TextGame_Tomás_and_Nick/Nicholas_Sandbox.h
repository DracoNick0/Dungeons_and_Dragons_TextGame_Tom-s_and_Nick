#pragma once

enum PlayerType
{
	cKnight,
	cAssassin,
	cTank,
	cMage
};

struct tempenemy
{
	float EnemyHP = 10;
	float EnemyArmor = 10;
	float EnemyHitChance = (rand() % 1) + 1;
	float EnemyHitDamage = (rand() % 1) + 1;
	float EnemyCritChance = (rand() % 1) + 1;
	float EnemyCritDamage = (rand() % 1) + 1;
	float EnemyDodge = (rand() % 1) + 1;
	float Enemyisdead = false;
};
void AttackSystem();