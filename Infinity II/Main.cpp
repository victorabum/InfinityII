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

int main(int argc, char *argv[])
{
	const clock_t time_start = clock();
	
	const char* filename;
	filename = argv[1]; //Receive file path from arguments

	ReadData Data;
	Print printSol;
	Solution Sol;

	Data.GeneralDataRead(filename); //Read Data from file
	printSol.csvPrint(Sol, Data);

	
	
	



	const clock_t time_end = clock();

	cout << "Tempo de Execucao Total: " << float(time_end - time_start) / CLOCKS_PER_SEC << endl;

	//printSol.csvPrint(RouteSol);
	cout << "fim" << endl;


}


