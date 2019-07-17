#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "Tomas_Sandbox.h"
#include "Nicholas_Sandbox.h"
#include "Player.h"


using namespace std;

float character;
float player;
string name;

void CharacterChoice()
{
	tempplayer Player = PlayerManager::GetPlayerManager().GetPlayer();


	cout << "Welcome my child, I shall grant you a name. What will your name be." << endl;
	cin >> name;
	if (name == "keegan" || name == "Keegan" || name == "Cass" || name == "cass" || name == "Will" || name == "will" )
	{
		cout << "You Cheater! How dare you use this cheat code!";
		exit(0);
	}
	
	cout << "Fine, I shall grant you the name, " << name << "." << endl;
	cout << "I will give you a decision, a choice! What will you be? A warrior? An asssassin? A tank? Or a Mage?" << endl;
	cout << "1. Knight" << endl;
	cout << "2. Assassin" << endl;
	cout << "3. Tank" << endl;
	cout << "4. Mage" << endl;

	float temp = 0;
	while (temp == 0)
	{
		cin >> character;
		if (character == 1)
		{
			cout << "Exellent choice! You have chosen to become a knight. I shall grant you with a variety of skills, a starter sword and a set of armor and your desposal!" << endl;
			temp = 1;
			Player.playerType = cKnight;
			Player.PlayerHP = 25;
			///Player.PlayerArmor = 10;
			Player.PlayerHitChance = 90;
			Player.PlayerHitDamage = 10;
			Player.PlayerCritChance = 20;
			Player.PlayerCritDamage = 20;
			Player.PlayerAddCritDamage = 5;
			Player.PlayerAddCritDamage = 5;
			Player.PlayerDodge = 15;
			Player.Playerisdead = false;
		}
		else if (character == 2)
		{
			cout << "Exellent choice! You have chosen to become an assassin. I shall grant you with a steathy body, sneaky hands and a starter pair of daggers at your desposal!" << endl;
			temp = 1;
			Player.playerType = cAssassin;
			Player.PlayerHP = 15;
			//Player.PlayerArmor = 5;
			Player.PlayerHitChance = 98;
			Player.PlayerHitDamage = 8;
			Player.PlayerCritChance = 25;
			Player.PlayerCritDamage = 8;
			Player.PlayerAddCritDamage = 4;
			Player.PlayerAddHitDamage = 8;
			Player.PlayerDodge = 45;
			Player.Playerisdead = false;
		}
		else if (character == 3)
		{
			cout << "Exellent choice! You have chosen to become a tank. I shall grant you with a sturdy body, knowlage of support skills and a heavy starter shield at your desposal!" << endl;
			temp = 1;
			Player.playerType = cTank;
			Player.PlayerHP = 40;
			//Player.PlayerArmor = 20;
			Player.PlayerHitChance = 70;
			Player.PlayerHitDamage = 12;
			Player.PlayerCritChance = 20;
			Player.PlayerCritDamage = 16;
			Player.PlayerAddCritDamage = 15;
			Player.PlayerAddHitDamage = 8 ;
			Player.PlayerDodge = 2;
			Player.Playerisdead = false;
		}
		else if (character == 4)
		{
			cout << "Fine, you have chosen to become a mage so I shall grant you the skill to converse with spirits, the power to enchant your voice with elements and the knowlage of ancient runes!" << endl;
			temp = 1;
			Player.playerType = cMage;
			Player.PlayerHP = 20;
			//Player.PlayerArmor = 10;
			Player.PlayerHitChance = 80;
			Player.PlayerHitDamage = 10;
			Player.PlayerCritChance = 35;
			Player.PlayerCritDamage = 15;
			Player.PlayerAddCritDamage = 12 ;
			Player.PlayerAddHitDamage = 4;
			Player.PlayerDodge = 12;
			Player.Playerisdead = false;
		}
		else
		{
			cout << "Please pick again, this is not a choice." << endl;
			temp = 0;
		}

		PlayerManager::GetPlayerManager().SetPlayer(Player);

		cout << "Now go to sleep my child the contest will begin soon." << endl << endl;
	}
}

int main()
{
	srand(time(NULL));
	CharacterChoice();
	Story1(name);
	AttackSystem();
	Story2(name);
	
	
}