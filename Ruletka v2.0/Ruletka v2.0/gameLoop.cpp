#include "gameLoop.h"


void gameLoop::game_Loop()
{
	Menu menu;
	betType BetType;
	Win win;

	menu.menuFunc();
	//player.typeName();
	BetType.typeName(player.playerName);
	while(a == true){
		win.curBalance(player.balance);
		BetType.chooseBet(player.typeBet, player.playerName);
		win.chooseBet(player.typeBet, player.bet);
		BetType.enterBetAmount(player.balance, player.bet);
		win.summary(player.bet, player.typeBet);
		win.winByType(player.typeBet, player.balance, player.bet);
		anotherOne(); 
		system("cls");
	}

}

void gameLoop::game_Loop_C()
{
	betType BetType;
	Win win;
	system("cls");
	win.curBalance(player.balance);
	std::cout << "\nWcisnij ESC aby powrocic do gry."; 
	//BetType.typeName();
	bool a = true; 
	while (a == true)
	{
		if (GetAsyncKeyState(VK_ESCAPE))
		{
			a = false;
		}
	}
	BetType.chooseBet(player.typeBet, player.playerName);
	win.chooseBet(player.typeBet, player.bet);
	BetType.enterBetAmount(player.balance, player.bet);
	win.winByType(player.typeBet, player.balance, player.bet);
}

bool gameLoop::anotherOne()
{
	gameLoop _gameLoop;
	setXY(40, 14);
	std::cout << "Czy chcialbys zagrac jeszcze raz?"; 
	setXY(49, 15);
	std::cout << "Wpisz Y/N: ";
	std::cin >> yesOrNo;
	if (yesOrNo == 'Y' || yesOrNo == 'y') {
		setXY(49, 17);
		std::cout << "Grajmy wiec!"; 
		setXY(26, 18);
		std::cout << "Za 5 sekund nastapi kontynuacja oraz wyswietlenie twojego salda";
		Sleep(5000);
	}
	else 
	{
		std::cout << "Dziekuje za gre!\n";
		exit(0);
	}
}