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
		player->PlayerArmor = newPlayer.PlayerArmor;
		player->PlayerCritChance = newPlayer.PlayerCritChance;
		player->PlayerCritDamage = newPlayer.PlayerCritDamage;
		player->PlayerDodge = newPlayer.PlayerDodge;
		player->PlayerHitChance = newPlayer.PlayerHitChance;
		player->PlayerHitDamage = newPlayer.PlayerHitDamage;
		player->PlayerHP = newPlayer.PlayerHP;
		player->Playerisdead = newPlayer.PlayerHP;
		player->playerType = newPlayer.playerType;
	}
}