// dndEncounterCalculator.cpp : Defines the entry point for the application.
//

#include <iostream>
#include <string>
#include <vector>

#include "calculate.h"

using namespace std;

int main()
{
	cout << "Welcome to Kate's D&D Encounter Calculator! "
		<< "\nUse this tool to find out if the combat you've planned is too easy or too difficult" << endl;

	bool moreEncounters = true;
	while (moreEncounters)
	{
		vector<pair<double, int>> allMonsters;
		int numPlayers;
		int playerLevel;
		int numMonsters;
		double monsterCR;

		cout << "Enter the number of players: ";
		cin >> numPlayers;

		cout << "Enter the level of the players: ";
		cin >> playerLevel;

		bool moreMonsters = true;
		char additionalMonsters;

		while (moreMonsters)
		{
			cout << "Number of Monsters: ";
			cin >> numMonsters;

			cout << "Monster Challenge Rating (for any fraction, use the decimal equivalent: 1/8 = 0.125, 1/4 = 0.25, 1/2 = 0.5: ";
			cin >> monsterCR;

			allMonsters.push_back(make_pair(monsterCR, numMonsters));

			cout << "Do you have any more monsters to enter? (Y for yes, N for no)";
			cin >> additionalMonsters;

			additionalMonsters = toupper(additionalMonsters);

			if (additionalMonsters == 'N')
			{
				moreMonsters = false;
			}
		}

		cout << "With " << numPlayers << " players at level " << playerLevel << " fighting the following combination of monsters: " << endl;
		for (int i = 0; i < allMonsters.size(); i++)
		{
			cout << allMonsters.at(i).second << " monsters with CR " << allMonsters.at(i).first << endl;
		}

		string difficulty = calculatedDifficulty(numPlayers, playerLevel, &allMonsters);
		cout << "The difficulty rating is: " << difficulty << endl;

		char additionalEncounters;
		cout << "\n\nWould you like to enter in a new encounter? (Y for yes, N for no): ";
		cin >> additionalEncounters;

		additionalEncounters = toupper(additionalEncounters);

		if (additionalEncounters == 'N')
		{
			moreEncounters = false;
		}
		else
		{
			allMonsters.clear();
		}

	}
	return 0;
}
