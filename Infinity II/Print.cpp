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
#include "Solution.h"
#include "Print.h"

using namespace std;

Print::Print()
{
}

Print::~Print()
{
}


void Print::csvPrint(Solution SolRoute, ReadData Data)
{
	ofstream outfile;
	int i, j;
	outfile.open("..\\Output.csv");


	for (int i = 0; i < 9; i++)
	{
		cout << "Piece: " << i + 1 << ": ";
		for (int j = 0; j < 4; j++) {

			cout << Data.m_Pieces[i][j] << " - ";
		}
		cout << endl;
	}


}