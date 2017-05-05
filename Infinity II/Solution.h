#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <random>
#include <algorithm>
#include "ReadData.h"

using namespace std;


class Solution
{

public:
	Solution();
	~Solution();

	struct piece_on_board {
		int piece_num;
		int rotation;

	};

	vector<vector<int> > m_solution;

	void GenerateRandomSolution(ReadData Data);
	

};