#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Tomas_Sandbox.h"
#include "Nicholas_Sandbox.h"
using namespace std;

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

void characterselection()
{
	while (characterchoice == 0)
}