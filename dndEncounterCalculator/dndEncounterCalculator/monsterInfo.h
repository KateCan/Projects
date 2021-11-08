#pragma once

#include <iostream>
#include <vector>

using namespace std;

// exp thresholds for characters based on their levels
const int monsterExps[34] =
{ 10, 25, 50, 100, 200, 450, 700, 1100,
  1800, 2300, 2900, 3900, 5000, 5900, 7200,
  8400, 10000, 11500, 13000, 15000, 18000,
  20000, 22000, 25000, 33000, 41000, 50000,
  6200, 75000, 90000, 105000, 120000, 135000, 155000};

vector<int> getMonsterExps(vector<pair<int, int>> *allMonsters);