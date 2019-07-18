#include "Player.h"

PlayerManager::PlayerManager()
{
	player = new tempplayer;
}

PlayerManager::~PlayerManager()
{
	if (player != nullptr)
	{
		//delete player;
	}
}

PlayerManager PlayerManager::GetPlayerManager()
{
	static PlayerManager manager;
	return manager;
}

tempplayer PlayerManager::GetPlayer()
{
	return *player;
}

void PlayerManager::SetPlayer(tempplayer newPlayer)
{
	if (player != nullptr)
	{
		player->playerType = newPlayer.playerType;
		player->PlayerisDead = newPlayer.PlayerisDead;
		player->PlayerHP = newPlayer.PlayerHP;
		player->PlayerArmor = newPlayer.PlayerArmor;
		player->PlayerHitChance = newPlayer.PlayerHitChance;
		player->PlayerHitDamage = newPlayer.PlayerHitDamage;
		player->PlayerAddHitDamage = newPlayer.PlayerAddHitDamage;
		player->PlayerCritChance = newPlayer.PlayerCritChance;
		player->PlayerCritDamage = newPlayer.PlayerCritDamage;
		player->PlayerAddCritDamage = newPlayer.PlayerAddCritDamage;
		player->PlayerDodge = newPlayer.PlayerDodge;
		player->PlayerSkill1 = newPlayer.PlayerSkill1;
		player->PlayerSkill2 = newPlayer.PlayerSkill2;
		player->PlayerSkill3 = newPlayer.PlayerSkill3;
	}
}

//Enemy

EnemyManager::EnemyManager()
{
	enemy = new tempenemy;
}

EnemyManager::~EnemyManager()
{
	if (enemy != nullptr)
	{
		//delete enemy;
	}
}

EnemyManager EnemyManager::GetEnemyManager()
{
	static EnemyManager manager;
	return manager;
}

tempenemy EnemyManager::GetEnemy()
{
	return *enemy;
}

void EnemyManager::SetEnemy(tempenemy newEnemy)
{
	if (enemy != nullptr)
	{
		enemy->EnemyArmor = newEnemy.EnemyArmor;
		enemy->EnemyCritChance = newEnemy.EnemyCritChance;
		enemy->EnemyCritDamage = newEnemy.EnemyCritDamage;
		enemy->EnemyDodge = newEnemy.EnemyDodge;
		enemy->EnemyHitChance = newEnemy.EnemyHitChance;
		enemy->EnemyHitDamage = newEnemy.EnemyHitDamage;
		enemy->EnemyHP = newEnemy.EnemyHP;
		enemy->EnemyisDead = newEnemy.EnemyisDead;
		enemy->enemyType = newEnemy.enemyType;
	}
}