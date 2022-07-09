#include <iostream>
#include "betType.h"
#include "gameLoop.h"
#include "Menu.h"
#include "Number.h"
#include "Table.h"
#include "Win.h"
#include "Players.h"
#include "SetPosition.h"

int main()
{
	betType BetType;
	gameLoop _gameLoop;
	
	_gameLoop.game_Loop();
	
	return 0; 
}