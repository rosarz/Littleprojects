#include "Players.h"

std::string Players::typeName()
{
	std::cout << "Wprowadz nazwe gracza: ";
	std::cin >> playerName;
	return playerName;
}
