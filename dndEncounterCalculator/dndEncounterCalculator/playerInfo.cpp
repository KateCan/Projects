#include <vector>

#include "playerInfo.h"

vector<int> getPlayerExpThresh(int level, int numPlayers)
{
	vector<int> expPlayerThresholds;

	expPlayerThresholds.push_back(expThresholds[level - 1][0] * numPlayers); // easy
	expPlayerThresholds.push_back(expThresholds[level - 1][1] * numPlayers); // med
	expPlayerThresholds.push_back(expThresholds[level - 1][2] * numPlayers); // hard
	expPlayerThresholds.push_back(expThresholds[level - 1][3] * numPlayers); // deadly
	
	return expPlayerThresholds;
}
