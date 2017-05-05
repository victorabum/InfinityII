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


ReadData::ReadData()
{
}

ReadData::~ReadData()
{
}

void ReadData::GeneralDataRead(const char* filename)
{
	//const char* filename;
	//filename = "..\\..\\deslocamentos_modelo_127.csv";
		
	ifstream file(filename);
	string value;

	int num_pieces;
	int i, j;

	getline(file, value, ' ');
	m = atoi(value.c_str());

	getline(file, value, '\n');
	n = atoi(value.c_str());

	num_pieces = m * n;

	//Pieces natrix resize
	m_Pieces.resize(num_pieces, vector<int>(4, 0));


	for (i = 0; i < num_pieces; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (j == 3)
			{
				getline(file, value, '\n');
				m_Pieces[i][j] = atoi(value.c_str());
			}
			else
			{
				getline(file, value, ' ');
				m_Pieces[i][j] = atoi(value.c_str());
			}
		}
	}
}


