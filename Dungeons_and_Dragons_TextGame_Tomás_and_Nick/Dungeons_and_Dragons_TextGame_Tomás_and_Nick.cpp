 #include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "Tomas_Sandbox.h"
#include "Player.h"

using namespace std;

float character;
float player;
char name[25];

void CharacterChoice()
{
	tempplayer Player = PlayerManager::GetPlayerManager().GetPlayer();


	cout << "Welcome my child, I shall grant you a name. What will your name be." << endl;
	cin.getline(name,25);
	if (name == "keegan" || name == "Keegan" || name == "Cass" || name == "cass" || name == "Will" || name == "will" || name == "tomick" || name == "Tomick" || name == "nick" || name == "Nick" || name == "Tomas" || name == "tomas")
	{
		cout << "You Cheater! How dare you use this cheat code!";
		exit(0);
	}
	if (name == "CharlieCharlie" || name == "Charlie")
	{
		cout << "ooooooOOOOOOOOOHHHHHhhhhh... OooooooohhhhHHHHHOOOOO..." << endl;
		cout << "-You become scared-";
		exit(0);
	}
	if (name == "tina" || name == "Tina" || name == "Jerry" || name == "jerry" || name == "Juan" || name == "juan" || name == "kelly" || name == "Kelly")
	{
		cout << "Ugh... Parents. Cya..."<< endl;
		cout << "--WAIT--" << endl;
		cout << "(Parents play video games? WTH?)";
		exit(0);
	}
	if (name == "[          ]")
	{
		cout << "Hahaha... you damn cheater..." << endl;
	}
	
	cout << endl << "Fine, I shall grant you the name, " << name << "." << endl;
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
			cout << endl << "Exellent choice! You have chosen to become a knight. I shall grant you with a variety of skills, a starter sword and a set of armor and your desposal!" << endl;
			cout << "Now go to sleep my child, you shall soon awake in a new bountiful world." << endl << endl;
			temp = 1;
			Player.PlayerisDead = false;
			Player.playerType = cKnight;
			Player.PlayerHP = 100;
			Player.PlayerArmor = 10;
			Player.PlayerHitChance = 90;
			Player.PlayerHitDamage = 10;
			Player.PlayerCritChance = 20;
			Player.PlayerCritDamage = 20;
			Player.PlayerAddCritDamage = 5;
			Player.PlayerAddHitDamage = 5;
			Player.PlayerDodge = 15;
			Player.PlayerSkill1 = "Fist_Bash";
			Player.PlayerSkill2 = "Iron_Slam";
			Player.PlayerSkill3 = "Running_Strike";
			Player.PlayerSkill1Damage = 24;
			Player.PlayerSkill2Damage = 28;
			Player.PlayerSkill3Damage = 35;
		}
		else if (character == 2)
		{
			cout << endl << "Exellent choice! You have chosen to become an assassin. I shall grant you with a steathy body, sneaky hands and a starter pair of daggers at your desposal!" << endl;
			cout << "Now go to sleep my child, you shall soon awake in a new bountiful world." << endl << endl;
			temp = 1;
			Player.PlayerisDead = false;
			Player.playerType = cAssassin;
			Player.PlayerHP = 75;
			Player.PlayerArmor = 5;
			Player.PlayerHitChance = 98;
			Player.PlayerHitDamage = 8;
			Player.PlayerCritChance = 25;
			Player.PlayerCritDamage = 15;
			Player.PlayerAddCritDamage = 10;
			Player.PlayerAddHitDamage = 8;
			Player.PlayerDodge = 45;
			Player.PlayerSkill1 = "Napkin_Shank";
			Player.PlayerSkill2 = "Shadow_Leap";
			Player.PlayerSkill3 = "Smoke_Bomb";
			
			Player.PlayerSkill1Damage = 17;
			Player.PlayerSkill2Damage = 22;
			Player.PlayerSkill3Damage = 30;
		}
		else if (character == 3)
		{
			cout << endl << "Exellent choice! You have chosen to become a tank. I shall grant you with a sturdy body, knowlage of support skills and a heavy starter shield at your desposal!" << endl;
			cout << "Now go to sleep my child, you shall soon awake in a new bountiful world." << endl << endl;
			temp = 1;
			Player.PlayerisDead = false;
			Player.playerType = cTank;
			Player.PlayerHP = 150;
			Player.PlayerArmor = 20;
			Player.PlayerHitChance = 70;
			Player.PlayerHitDamage = 12;
			Player.PlayerAddHitDamage = 8 ;
			Player.PlayerCritChance = 20;
			Player.PlayerCritDamage = 16;
			Player.PlayerAddCritDamage = 15;
			Player.PlayerDodge = 2;
			Player.PlayerSkill1 = "Upper_Cut";
			Player.PlayerSkill2 = "Belly_Slam";
			Player.PlayerSkill3 = "Earthquake";
			Player.PlayerSkill1Damage = 24;
			Player.PlayerSkill2Damage = 38;
			Player.PlayerSkill3Damage = 58;
		}
		else if (character == 4)
		{
			cout << endl << "Fine, you have chosen to become a Mage so I shall grant you the skill to converse with spirits, the power to enchant your voice with elements and the knowlage of ancient runes!" << endl;
			cout << "Now go to sleep my child, you shall soon awake in a new bountiful world." << endl << endl;
			temp = 1;
			Player.PlayerisDead = false;
			Player.playerType = cMage;
			Player.PlayerHP = 90;
			Player.PlayerArmor = 10;
			Player.PlayerHitChance = 80;
			Player.PlayerHitDamage = 10;
			Player.PlayerAddHitDamage = 4;
			Player.PlayerCritChance = 35;
			Player.PlayerCritDamage = 15;
			Player.PlayerAddCritDamage = 12;
			Player.PlayerDodge = 12;
			Player.PlayerSkill1 = "Fire_Ball";
			Player.PlayerSkill2 = "Nature's_Touch";
			Player.PlayerSkill3 = "Mage's_Trance";
			Player.PlayerSkill1Damage = 10;
			Player.PlayerSkill2Damage = 25;
			Player.PlayerSkill3Damage = 35;
		}
		else if (character == 666)
		{
			cout << endl << "You vile DEMON SPAWN cheat code user! I shall expell you from this bountiful universe. BEGONE!" << endl;
			temp = 1;
			Player.PlayerisDead = false;
			Player.playerType = cDemonGod;
			Player.PlayerHP = 666;
			Player.PlayerArmor = 666;
			Player.PlayerHitChance = 666;
			Player.PlayerHitDamage = 666;
			Player.PlayerAddHitDamage = 666;
			Player.PlayerCritChance = 666;
			Player.PlayerCritDamage = 666;
			Player.PlayerAddCritDamage = 666;
			Player.PlayerDodge = 666;
			Player.PlayerSkill1 = "Soul_Absorption";
			Player.PlayerSkill2 = "Hell's_Wrath";
			Player.PlayerSkill3 = "Soul_Shatter";
			Player.PlayerSkill1Damage = 666;
			Player.PlayerSkill2Damage = 666;
			Player.PlayerSkill3Damage = 666;
		}
		else if (character == 420)
		{
		cout << endl << "Who do you think you are? Well first of all I'ma take this... and that... aight cya!" << endl;
		cout << "You have lost your vaap, jule, and your wead." << endl;
		temp = 1;
		Player.PlayerisDead = false;
		Player.playerType = cAddict;
		Player.PlayerHP = 420;
		Player.PlayerArmor = 420;
		Player.PlayerHitChance = 420;
		Player.PlayerHitDamage = 420;
		Player.PlayerAddHitDamage = 420;
		Player.PlayerCritChance = 420;
		Player.PlayerCritDamage = 420;
		Player.PlayerAddCritDamage = 420;
		Player.PlayerDodge = 420;
		Player.PlayerSkill1 = "Vaap_Ring";
		Player.PlayerSkill2 = "Pls_just_one_hit_brooo";
		Player.PlayerSkill3 = "Paasssss_the_Weeeeeeaaaaaaaad";
		Player.PlayerSkill1Damage = 420;
		Player.PlayerSkill2Damage = 420;
		Player.PlayerSkill3Damage = 420;
		}
		else
		{
			cout << "This is not a choice, please pick again." << endl;
			temp = 0;
		}

		PlayerManager::GetPlayerManager().SetPlayer(Player);
	}
}

int main()
{
	srand(time(NULL));
	CharacterChoice();
	Story1(name);
	AttackSystem();
	Story2(name);
	AttackSystem();
	Story3(name);
	AttackSystem();
	Story4(name);
	
	return 0;
}