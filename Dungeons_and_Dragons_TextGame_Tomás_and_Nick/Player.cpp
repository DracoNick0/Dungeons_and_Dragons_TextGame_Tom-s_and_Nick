#include "Player.h"

PlayerManager::PlayerManager()
{

}

PlayerManager PlayerManager::GetPlayerManager()
{
	static PlayerManager manager;
	return manager;
}

tempplayer PlayerManager::GetPlayer()
{
	return player;
}

void PlayerManager::SetPlayer(tempplayer newPlayer)
{
	player = newPlayer;
}