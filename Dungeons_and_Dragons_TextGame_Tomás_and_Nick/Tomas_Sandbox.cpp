
#include <iostream>
#include <stdlib.h>
#include "Tomas_Sandbox.h"
#include <stdio.h>

using namespace std;


void Story1(string name)
{
	cout << "--THE STORY BEGINS--" << endl << endl;
	cout << "Hey, Wake up! Wake up! The contest is about to begin." << endl;
	cout << "The Grandmaster wants all champions to be ready for the big fight." << endl;
	cout << "Wait... You are the almighty " << name << " right? The Grandmaster was excited when you agreed to this." << endl;
	cout << "Oh, I'm sorry I haven't properly introduced myslef my name is Tomick your guide throughout the contest." << endl;
	cout << "Now look your first opponent is the a county champion from Greenwood. Good Luck." << endl;
	cout << "-Two guards grab your arms and shove you into the arena-" << endl << endl << endl;
	cout << "-The Gate slams behind you, and you hear the boo's coming from the audience-" << endl;
	cout << "-Another Gate slams close and you hear the cheer of the croud-" << endl;
	cout << "-Your heart beats faster and faster-" << endl;
	cout << "-And you are ready-" << endl << endl;
	cout << "READY... BEGIN!" << endl << endl;
}

void Story2(string name)
{
	int choice1 = 0;

	cout << "Great work " << name << " we still have one more fight before you reach the final." << endl;
	cout << "Now you might want to get yourself cleaned up the Grandmaster wants to see you." << endl << endl;
	cout << "-You arrive in the Grandmater's room-" << endl << endl;
	cout << "-As you walk around you find the Grandmaster at his desk sipping on some ginger beer-" << endl << endl;
	cout << "I've been expecting you, " << name << "Here take a seat" << endl << endl;
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
	cout << "-Tonick welcomes you back and tells you to geta full night of rest for your next fight-" << endl;
	cout << "-You wake up ready to fight-" << endl;
	
}