#include <vector>

#include "playerInfo.h"

vector<int> getPlayerExpThresh(int level, int numPlayers)
{
	vector<int> expPlayerThresholds;

	expPlayerThresholds.push_back(expThresholds[0][level - 1] * numPlayers); // easy
	expPlayerThresholds.push_back(expThresholds[1][level - 1] * numPlayers); // med
	expPlayerThresholds.push_back(expThresholds[2][level - 1] * numPlayers); // hard
	expPlayerThresholds.push_back(expThresholds[3][level - 1] * numPlayers); // deadly
	
	return expPlayerThresholds;
}
