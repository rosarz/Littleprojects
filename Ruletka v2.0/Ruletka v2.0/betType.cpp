#include "betType.h"

std::string betType::typeName(std::string& playerName)
{
	setXY(48,7);
	std::cout << "Wprowadz nazwe gracza \n";
	setXY(38, 9);
	std::cout << "Twoja nazwa: ";
	setXY(38, 10);
	std::cout << "=========================================";
	setXY(51, 9);
	std::cin >> playerName;


	return playerName;
}

int betType::enterBetAmount(int& balance, int& betAmount)
{
	std::cin >> betAmount;
	while (betAmount > balance)
	{
		setXY(30,19);
		std::cout << "Twoj balans jest zbyt maly: " << balance << "$, postaw mniej aby zagrac";
		setXY(44, 20);
		std::cout << "Ile chcialbys postawic?: ";
		std::cin >> betAmount;
	}
	return betAmount;
}

int betType::chooseBet(int& typeOfBet, std::string& playerName)
{
	setXY(32, 6);
	std::cout << "Okej " << playerName << ", wybierz zaklad na ktory chcialbys postawic:";
	setXY(44, 8);
	std::cout << "=== Zaklady wewnetrzne ===\n";
	setXY(38, 9);
	std::cout << "1. Straight - Pojedynczy numer || 35:1\n";
	setXY(37, 10);
	std::cout << "2. Split - dwa sasiadujace numery || 17:1\n";
	setXY(39, 11);
	std::cout << "3. Street - rzad po 3 numery || 11:1\n";
	setXY(34, 12);
	std::cout << "4. Six line - dwie sasiadujace ze sobia linie || 5:1\n" << std::endl;
	setXY(44, 14);
	std::cout << "=== Zaklady zewnetrzne ===\n";
	setXY(34, 15);
	std::cout << "5. Dozen czyli 1-12 lub 13-24 lub 25-36 || 2:1\n";
	setXY(37, 16);
	std::cout << "6. Low/High czyli 1-18 lub 19-36 || 1:1\n";
	setXY(42, 17);
	std::cout << "7. Czerwone lub czarne || 1:1\n";
	setXY(40, 18);
	std::cout << "8. Parzyste lub nieparzyste || 1:1\n";
	
	setXY(46, 22);
	std::cout << "Wybierz typ zakladu: ";
	std::cin >> typeOfBet;
	return typeOfBet; 
}

bool betType::anotherOne()
{
	gameLoop _gameLoop;
	std::cout << "Czy chcialbys zagrac jeszcze raz?" << std::endl << "Wpisz Y/N: ";
	std::cin >> yesOrNo;
	if (yesOrNo == 'Y' || yesOrNo == 'y') {
		std::cout << "Grajmy wiec!\n" << "Za 5 sekund nastapi kontynuacja oraz wyswietlenie twojego salda";
		Sleep(5000);
	}
	else
	{
		exit(0);
	}
}