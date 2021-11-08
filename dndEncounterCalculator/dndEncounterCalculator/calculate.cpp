#include <iostream>
#include <string>
#include <vector>

#include "calculate.h"
#include "playerInfo.h"
#include "monsterInfo.h"

using namespace std;

string calculatedDifficulty(int numPlayers, int playerLevel, vector<pair<int, int>> *allMonsters)
{
	vector<int> expPlayerThresholds = getPlayerExpThresh(playerLevel, numPlayers);
	vector<int> monsterExps = getMonsterExps(allMonsters);

	string difficulty = "easy";
	// build up an algorithm to this
	
	

	return difficulty;
}
