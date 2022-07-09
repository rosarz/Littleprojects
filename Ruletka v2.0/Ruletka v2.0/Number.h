#pragma once
#include "Table.h"
#include <random>

class Number
{
public: 
	int drawNumber(); 
private: 
	int winningNumber;
	int low = 1;
	int high = 36;
};

