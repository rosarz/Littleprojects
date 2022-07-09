#pragma once
#include "Number.h"
#include "betType.h"
#include "SetPosition.h"

class Win:public SetPosition
{
	int winNum;
public:
	bool isWin(int& betAmount, int& typeOfBet);
	void summary(int& betAmount, int& typeOfBet);
	int winByType(int& typeOfBet, int& balance, int& betAmount);
	int addSubBalance(int& betAmount, int& balance);
	void chooseBet(int& typeOfBet, int& betAmount);
	int curBalance(int& balance); 
protected: 
	int multi;
	int straightBet;
	int splitBet;
	int splitBet2;
	int streetBet;
	int sixBet;
	int dozenBet;
	int lowhighBet;
	int colorBet;
	int evenoddBet;
	int yWL = 11; 
	int xWL = 44; 
};