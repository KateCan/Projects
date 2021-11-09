#include <iostream>
#include <vector>

#include "monsterInfo.h"

using namespace std;

vector<int> getMonsterExps(vector<pair<double, int>>* allMonsters) {
	vector<int> allMonsterExps;

	// the position in the const int array is the CR of the monster
	for (int i = 0; i < allMonsters->size(); i++)
	{
		if (allMonsters->at(i).first == 0.0)
		{
			allMonsterExps.push_back(monsterExps[0]);
		}
		else if (allMonsters->at(i).first < 1.0)
		{
			// convert CRs that are less than 1 to the appropriate position in the const array
			if (allMonsters->at(i).first == 0.125)
			{
				allMonsterExps.push_back(monsterExps[0]);
			}
			else if (allMonsters->at(i).first == 0.25)
			{
				allMonsterExps.push_back(monsterExps[1]);
			}
			else if (allMonsters->at(i).first == 0.5)
			{
				allMonsterExps.push_back(monsterExps[2]);
			}
		}
		else
		{
			int monsterCR = (int)allMonsters->at(i).first; // convert to int to find place in array
			allMonsterExps.push_back(monsterExps[monsterCR + 3]); // all other CRs should be shifted - where CR 1 is at monsterExps[4]
		}
	}

	return allMonsterExps;
}

double getMonsterMultiplier(vector<pair<double,int>> *allMonsters)
{
	int totalMonsters = 0;
	for (int i = 0; i < allMonsters->size(); i++)
	{
		totalMonsters += allMonsters->at(i).second;
	}

	if (totalMonsters == 1) return 1.0;
	else if (totalMonsters == 2) return 1.5;
	else if (totalMonsters >= 3 && totalMonsters <= 6) return 2.0;
	else if (totalMonsters >= 7 && totalMonsters <= 10) return 2.5;
	else if (totalMonsters >= 11 && totalMonsters <= 14) return 3.0;
	else return 4.0;
}