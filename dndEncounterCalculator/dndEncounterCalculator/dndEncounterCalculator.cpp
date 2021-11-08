// dndEncounterCalculator.cpp : Defines the entry point for the application.
//

#include <iostream>
#include <string>
#include <vector>

#include "dndEncounterCalculator.h"
#include "calculate.h"

using namespace std;

int main()
{
	cout << "Welcome to Kate's D&D Encounter Calculator! Use this tool to find out if what you've planned is too difficult..." << endl;

	vector<pair<int,int>> allMonsters;
	int numPlayers;
	int playerLevel;
	int numMonsters;
	int monsterCR;

	cout << "Enter the number of players: ";
	cin >> numPlayers;

	cout << "Enter the level of the players: ";
	cin >> playerLevel;

	bool moreMonsters = true;
	string additionalMonsters = "";

	while (moreMonsters)
	{
		cout << "Number of Monsters: ";
		cin >> numMonsters;

		cout << "Monster CR: ";
		cin >> monsterCR;

		allMonsters.push_back(make_pair(numMonsters, monsterCR));

		cout << "Do you have any more monsters to enter? (Y for yes, N for no)";
		cin >> additionalMonsters;

		if(additionalMonsters == "N")
		{
			moreMonsters = false;
		}
	}

	cout << "So you've entered " << numPlayers << " players at level " << playerLevel << " fighting " << numMonsters << " monsters at CR " << monsterCR << endl;

	//string doubleCheck;
	//cout << "Is this correct? (Y for yes, N for no)";
	//cin >> doubleCheck;

	string difficulty = calculatedDifficulty(numPlayers, playerLevel, &allMonsters);
	cout << "The difficulty rating is: " << difficulty << endl;

	return 0;
}
