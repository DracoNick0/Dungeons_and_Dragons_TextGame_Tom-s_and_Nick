#pragma once
class PlayerManager
{
private:
	tempplayer player;
	PlayerManager();
public:
	static PlayerManager GetPlayerManager();
	tempplayer GetPlayer();
	void SetPlayer(tempplayer newPlayer);
};
