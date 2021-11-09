#include <iostream>
#include <string>
#include <vector>

#include "calculate.h"
#include "playerInfo.h"
#include "monsterInfo.h"

using namespace std;

string calculatedDifficulty(int numPlayers, int playerLevel, vector<pair<double, int>> *allMonsters)
{
	vector<int> expPlayerThresholds = getPlayerExpThresh(playerLevel, numPlayers);
	vector<int> monsterExps = getMonsterExps(allMonsters);

	int totalMonsterExps = 0;
	double monsterMultiplier = getMonsterMultiplier(allMonsters);

	for (int i = 0; i < allMonsters->size(); i++)
	{
		totalMonsterExps += allMonsters->at(i).second * monsterExps[i] * monsterMultiplier;
	}

	cout << "\n total monster exp = " << totalMonsterExps << endl;
	cout << "\n the exp thresholds for players are the following: \n"
		<< " easy = " << expPlayerThresholds[0]
		<< " medium = " << expPlayerThresholds[1]
		<< " hard = " << expPlayerThresholds[2]
		<< " deadly = " << expPlayerThresholds[3]
		<< endl;

	if (expPlayerThresholds[0] > totalMonsterExps)
	{
		return "Trivial";
	}
	else if (expPlayerThresholds[0] <= totalMonsterExps && expPlayerThresholds[1] > totalMonsterExps)
	{
		return "Easy";
	}
	else if (expPlayerThresholds[1] <= totalMonsterExps && expPlayerThresholds[2] > totalMonsterExps)
	{
		return "Medium";
	}
	else if (expPlayerThresholds[2] <= totalMonsterExps && expPlayerThresholds[3] > totalMonsterExps)
	{
		return "Hard";
	}
	else if (expPlayerThresholds[3] <= totalMonsterExps)
	{
		return "Deadly";
	}

	return "-- could not calculate, please double check inputs";
	
}
