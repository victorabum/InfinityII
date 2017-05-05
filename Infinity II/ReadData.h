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



class ReadData
{

public:
	ReadData();
	~ReadData();

	//One piece structure
	struct one_piece {
		int botton;
		int left;
		int top;
		int right;
	};
	
	void GeneralDataRead(const char* filename);

	vector <one_piece> v_Pieces; //vector of all pieces

	int m; //Board rows
	int n; //Board collumns

};