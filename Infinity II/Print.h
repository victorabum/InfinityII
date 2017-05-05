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

class Print{


public:

	Print();
	~Print();

	void csvPrint(Solution Sol, ReadData Data);

};