
#include <iostream>
#include <stdlib.h>
#include "Tomas_Sandbox.h"
#include <stdio.h>
#include "Player.h"
#include "Nicholas_Sandbox.h"

using namespace std;


void Story1(string name)
{
	tempenemy Enemy = EnemyManager::GetEnemyManager().GetEnemy();
	cout << "--THE STORY BEGINS--" << endl << endl;
	cout << "Hey, Wake up! Wake up! The contest is about to begin." << endl;
	cout << "The Grandmaster wants all champions to be ready for the big fight." << endl;
	cout << "Wait... You are the almighty " << name << " right? The Grandmaster was excited when you agreed to this." << endl;
	cout << "Oh, I'm sorry I haven't properly introduced myslef my name is Tomick your guide throughout the contest." << endl;
	cout << "Now look your first opponent is the a county champion from Greenwood. Good Luck." << endl;
	cout << "-Two guards grab your arms and shove you into the arena-" << endl;
	cout << "-The Gate slams behind you, and you hear the boo's coming from the audience-" << endl;
	cout << "-Another gate closes and you hear the cheer of the croud-" << endl;
	cout << "-Your heart beats faster and faster-" << endl;
	cout << "-And you are ready-" << endl << endl;
	cout << "READY... BEGIN!" << endl << endl;
	cout << "The enemy is ready to fight, what do you do?" << endl;
	Enemy.enemyType = cEasy;
	Enemy.EnemyisDead = false;
	Enemy.EnemyHP = 70;
	Enemy.EnemyArmor = 0;
	Enemy.EnemyHitChance = 80;
	Enemy.EnemyHitDamage = 5;
	Enemy.EnemyAddHitDamage = 1;
	Enemy.EnemyCritChance = 10;
	Enemy.EnemyCritDamage = 8;
	Enemy.EnemyAddCritDamage = 2;
	Enemy.EnemyDodge = 10;
	EnemyManager::GetEnemyManager().SetEnemy(Enemy);
}

void Story2(string name)
{
	int choice1 = 0;

	cout << "Great work " << name << " we still have one more fight before you reach the final." << endl;
	cout << "Now you might want to get yourself cleaned up the Grandmaster wants to see you." << endl << endl;
	cout << "-You arrive in the Grandmater's room-" << endl << endl;
	cout << "-As you walk around you find the Grandmaster at his desk sipping on some ginger beer-" << endl << endl;
	cout << "I've been expecting you, " << name << " here take a seat" << endl << endl;
	cout << "-You sit down-" << endl << endl;

	cout << "Here let me give you drink, sorry I dont have any no no juice, Dr.Mairio said that I shoudn't get dizzy on a weekday." << endl << endl;
	cout << "-You sip on your drink-" << endl << endl;
	cout << "I've been thinking about your performance in the contest you are doing good, too good..." << endl << endl;
	cout << "-The grandmaster grabs a suitcase and opens it, it is full of money-" << endl << endl;
	cout << "I am proposing you an offer, you can continue in this dreadful contest for the reward of glory or you can take the money and leave the contest." << endl;
	cout << "If you want to contiue through the contest then press 1." << endl << endl;
	cout << "If you want to leave with the money press 2." << endl;
	cin >> choice1;
	
	if (choice1 == 2)
	{
		cout << "-As you are about to grab the suitcase the Grandmaster stops you-" << endl;
		cout << "Sorry friend you made the worng choice this is all the money I bet on you losing." << endl << endl;
		cout << "-The Grandmaster grabs you by the neck-" << endl;
		cout << "It was nice knowing you " << name << endl << endl;
		cout << "YEET!" << endl;
		cout << "-The Grandmaster throws you out the window-" << endl;
		cout << "-You fall to your death-" << endl;
		cout << "GAME OVER" << endl;
		exit(0);
	}
	else if (choice1 == 1)
	{
		cout << "Ok you have made your descision, good luck I will watch you from the stands." << endl << endl;
		cout << "-The guards walk you out of the room-" << endl;
	}
	cout << "-You walk back to your chambers-" << endl;
	cout << "-Tonick welcomes you back and tells you to get a full night of rest for your next fight-" << endl;
	cout << "-You wake up ready to fight-" << endl;
	cout << "READY...BEGIN!" << endl;
	tempenemy Enemy = EnemyManager::GetEnemyManager().GetEnemy();
	Enemy.enemyType = cMedium;
	Enemy.EnemyisDead = false;
	Enemy.EnemyHP = 100;
	Enemy.EnemyArmor = 0;
	Enemy.EnemyHitChance = 85;
	Enemy.EnemyHitDamage = 10;
	Enemy.EnemyAddHitDamage = 4;
	Enemy.EnemyCritChance = 30;
	Enemy.EnemyCritDamage = 20;
	Enemy.EnemyAddCritDamage = 7;
	Enemy.EnemyDodge = 15;
	EnemyManager::GetEnemyManager().SetEnemy(Enemy);
}
void Story3(string name)
{
	cout << "-You win the fight and Tonick comes to help you up-" << endl;
	cout << "Wow " << name << " I didn't know you had it in you." << endl;
	cout << "Since you won the battle you are moving onto the final!" << endl;
	cout << "Now you must get some rest, you need all your energy for the final of the contest." << endl << endl;
	cout << "-You go to sleep-" << endl;
	cout << "-When you wake up the guards acompany you to the arena-" << endl;
	cout << "-You see that you are going to fight against...-" << endl << endl;
	cout << "-THE GRANDMASTER!-" << endl << endl;
	cout << "-The Grandmaster walks up to you-" << endl;
	cout << "Since you declined my money offer I thought I would show you, " << name << " some manners on how to treat your master!" << endl << endl;
	cout << "ARE YOU READY FOR THE FINAL OF THE CONTEST OF CHAMPIONS!" << endl;
	cout << "-The crowd cheers-" << endl;
	cout << "READY...FIGHT!" << endl << endl;
	tempenemy Enemy = EnemyManager::GetEnemyManager().GetEnemy();
	Enemy.enemyType = cHard;
	Enemy.EnemyisDead = false;
	Enemy.EnemyHP = 200;
	Enemy.EnemyArmor = 0;
	Enemy.EnemyHitChance = 75;
	Enemy.EnemyHitDamage = 10;
	Enemy.EnemyAddHitDamage = 8;
	Enemy.EnemyCritChance = 40;
	Enemy.EnemyCritDamage = 10;
	Enemy.EnemyAddCritDamage = 18;
	Enemy.EnemyDodge = 0;
	EnemyManager::GetEnemyManager().SetEnemy(Enemy);
}
void Story4(string name)
{
	string choice3;

	cout << "-The crowd is cheering-" << endl << endl;
	cout << "Ladies and Gentlemen please welcome our new champion!" << endl << endl;
	cout << "-You get yourself up and wave at the crowd-" << endl;
	cout << "-Tonick comes over with a medal and puts it over your head-" << endl << endl;
	cout << "Good job " << name << " you earned it" << endl << endl;
	cout << "-You leave the arena with Tonick-" << endl;
	cout << "-But as you are about to leave the campus of the contest, Tonick stops you-" << endl << endl;
	cout << "Before you go The Grandmaster has offered you a chance to compete in the Contest of the OG's?" << endl;
	cout << "-If you would like to compete write yes, if you would like to leave write no-" << endl << endl;
	cin >> choice3;
	if (choice3 == "yes" || choice3 == "Yes")
	{
		cout << "Hah! Just kidding, the producers of this game didn't have enough time to code more content, SEE YA!" << endl;
		cout << "GAME OVER!" << endl;
		exit(0);
		
	}
	else if (choice3 == "no" || choice3 == "No")
	{
		cout << "You go home and live a happy life!" << endl << endl;
		cout << "YOU WIN!" << endl;
	}
}