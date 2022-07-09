#pragma once
#include "betType.h"
#include "Win.h"
#include "Players.h"

class gameLoop:public SetPosition
{
public: 
	void game_Loop(); 
	void game_Loop_C(); 
	bool anotherOne();
private:  
	Players player;
	bool a = true; 
	bool b = true;
	char yesOrNo; 
};

