#pragma once
#include <iostream>
#include "Menu.h"
#include "SetPosition.h"

class betType:public SetPosition
{
public: 
	std::string typeName(std::string& playerName);
	int enterBetAmount(int &balance, int &betAmount);
	int chooseBet(int& typeOfBet, std::string& playerName);
	bool anotherOne();
protected:
	int cpBet;
	char yesOrNo;
	
};

