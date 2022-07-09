#include "Menu.h"

void Menu::color(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void Menu::setXY(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void Menu::title()
{
	int x = 22;
	setXY(x, 2);
	std::cout << "8888888b.  888     888 888      8888888888 88888888888 888    d8P         d8888";
	setXY(x, 3);
	std::cout << "888   Y88b 888     888 888      888            888     888   d8P         d88888";
	setXY(x, 4);
	std::cout << "888    888 888     888 888      888            888     888  d8P         d88P888";
	setXY(x, 5);
	std::cout << "888   d88P 888     888 888      8888888        888     888d88K         d88P 888";
	setXY(x, 6);
	std::cout << "8888888P   888     888 888      888            888     8888888b       d88P  888";
	setXY(x, 7);
	std::cout << "888 T88b   888     888 888      888            888     888  Y88b     d88P   888";
	setXY(x, 8);
	std::cout << "888  T88b   Y88b..d88P 888      888            888     888   Y88b   d8888888888";
	setXY(x, 9);
	std::cout << "888   T88b    Y88888P  88888888 8888888888     888     888    Y88b d88P     888";


}

bool Menu::helpFunc()
{
	system("cls");
	this->title();
	setXY(52, 12);
	std::cout << "==================";
	setXY(52, 13);
	std::cout << "Pomoc i ustawienia";
	setXY(42, 15);
	std::cout << "1. Twoje poczatkowe saldo wynosi 500$";
	setXY(39, 16);
	std::cout << "2. Mozesz obstawic tylko jeden rodzaj zakladu";
	setXY(32, 17);
	std::cout << "3. Gra nie posiada zapisu wiec jest to jednorazowe przejscie";
	setXY(30, 18);
	std::cout << "oraz kazde nastepne bedzie sie zaczynac od tego poczatkowego balansu";
	setXY(56, 20);
	std::cout << "Autor gry:";
	setXY(54, 21);
	std::cout << "Filip Soltysik";
	setXY(46, 25);
	std::cout << "Wcisnij ESC aby wrocic do menu";
	while(true)
	{
		if (GetAsyncKeyState(VK_ESCAPE))
		{
			Menu::menuFunc();
			return false;
		}
	}
}

void Menu::toPlay()
{
	system("cls");
}

void Menu::menuFunc() //rozpoczęcie gry z funkcji do funkcji
{
	system("cls");

	this->title(); 
	bool quit = false; 

	int Set[] = { 7,7,7 };  //domyslny kolor		
	counter = 2; 

	while(quit == false)
	{
		this->setXY(55, 15);
		this->color(Set[0]);
		std::cout << "1. Graj" << std::endl;

		this->setXY(55, 16);
		this->color(Set[1]);
		std::cout << "2. Pomoc" << std::endl;

		this->setXY(55, 17);
		this->color(Set[2]);
		std::cout << "3. Wyjdz" << std::endl;

		key = _getch();

		if (key == 72 && (counter >= 2 && counter <= 3)) //72 strzalka w gore
		{
			counter--;
		}
		if (key == 80 && (counter >= 1 && counter <= 2)) //80 strzalka w dol
		{
			counter++;
		}
		if (key == '\r') // przycisk enter
		{
			if (counter == 1) // przycisk enter
			{
				system("cls");
				Menu::title();
				setXY(55, 12);
				std::cout << "Graj" << std::endl;
				this->toPlay();
				quit = true;
				
			}
			if (counter == 2) // przycisk enter
			{
				system("cls");
				this->title();
				setXY(55, 13);
				std::cout << "Pomoc i ustawienia";
				this->helpFunc();
				quit = true;
				

			}
			if (counter == 3) // przycisk enter
			{
				system("cls");
				this->title();
				setXY(55, 14);
				system("cls");
				exit(0);
			}
		}
		Set[0] = 7; //7 - podstawowy bialy
		Set[1] = 7; //7 - podstawowy bialy
		Set[2] = 7; //7 - podstawowy bialy
		if (counter == 1)
		{
			Set[0] = 12; //12 = czerwony

		}
		if (counter == 2)
		{
			Set[1] = 12; //12 = czerwony

		}
		if (counter == 3)
		{
			Set[2] = 12; //12 = czerwony

		}
	}
}
