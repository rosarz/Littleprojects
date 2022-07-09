#include "Win.h"

bool Win::isWin(int& betAmount, int& typeOfBet)
{
	Number number;

	//Wylosowana liczba
	winNum = 10; //number.drawNumber();
	setXY(45,10);
	std::cout << "Wylosowano liczbe: " << winNum << std::endl;

//=============================================================//
//					ROZPISANIE BETOW						   //
//=============================================================//

	if (typeOfBet == 1) // Przypadek Straight betu
	{
		if (winNum == straightBet)
		{
			setXY(xWL, yWL);
			std::cout << "Wygrales, twoj bet: " << straightBet;
			return true;
		}
		else
		{
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << straightBet;
			return false;
		}
	}

//=============================================================
//=============================================================
//=============================================================

	if (typeOfBet == 2) //Przypadek Split betu
	{
		if (winNum == splitBet || winNum == splitBet2)
		{
			setXY(xWL, yWL);
			std::cout << "Wygrales, twoj bet: " << splitBet << "-" << splitBet2;
			return true;
		}
		else
		{
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << splitBet << "-" << splitBet2;
			return false;
		}
	}

//=============================================================
//=============================================================
//=============================================================

	if (typeOfBet == 3) // Przypadek Street betu
	{
		if (streetBet == 1)
		{
			int x[3] = { 1, 2, 3 };
			for (int i = 0; i < 3; ++i)
			{
				if (winNum == x[i]) {
					setXY(xWL, yWL);
					std::cout << "Wygrales, twoj bet: " << streetBet;
					return true;
				}
			}
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << streetBet;
			return false;
		}

		if (streetBet == 2)
		{
			int x[3] = { 4, 5, 6 };
			for (int i = 0; i < 3; ++i)
			{
				if (winNum == x[i]) {
					setXY(xWL, yWL);
					std::cout << "Wygrales, twoj bet: " << streetBet;
					return true;
				}
			}
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << streetBet;
			return false;
		}

		if (streetBet == 3)
		{
			int x[3] = { 7, 8, 9 };
			for (int i = 0; i < 3; ++i)
			{
				if (winNum == x[i]) {
					setXY(xWL, yWL);
					std::cout << "Wygrales, twoj bet: " << streetBet;
					return true;
				}
			}
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << streetBet;
			return false;
		}

		if (streetBet == 4)
		{
			int x[3] = { 10, 11, 12 };
			for (int i = 0; i < 3; ++i)
			{
				if (winNum == x[i]) {
					setXY(xWL, yWL);
					std::cout << "Wygrales, twoj bet: " << streetBet;
					return true;
				}
			}
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << streetBet;
			return false;
		}

		if (streetBet == 5)
		{
			int x[3] = { 13, 14, 15 };
			for (int i = 0; i < 3; ++i)
			{
				if (winNum == x[i]) {
					setXY(xWL, yWL);
					std::cout << "Wygrales, twoj bet: " << streetBet;
					return true;
				}
			}
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << streetBet;
			return false;
		}

		if (streetBet == 6)
		{
			int x[3] = { 16, 17, 18 };
			for (int i = 0; i < 3; ++i)
			{
				if (winNum == x[i]) {
					setXY(xWL, yWL);
					std::cout << "Wygrales, twoj bet: " << straightBet;
					return true;
				}
			}
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << streetBet;
			return false;
		}

		if (streetBet == 7)
		{
			int x[3] = { 19, 20, 21 };
			for (int i = 0; i < 3; ++i)
			{
				if (winNum == x[i]) {
					setXY(xWL, yWL);
					std::cout << "Wygrales, twoj bet: " << straightBet;
					return true;
				}
			}
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << streetBet;
			return false;
		}

		if (streetBet == 8)
		{
			int x[3] = { 22, 23, 24 };
			for (int i = 0; i < 3; ++i)
			{
				if (winNum == x[i]) {
					setXY(xWL, yWL);
					std::cout << "Wygrales, twoj bet: " << straightBet;
					return true;
				}
			}
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << streetBet;
			return false;
		}

		if (streetBet == 9)
		{
			int x[3] = { 25, 26, 27 };
			for (int i = 0; i < 3; ++i)
			{
				if (winNum == x[i]) {
					setXY(xWL, yWL);
					std::cout << "Wygrales, twoj bet: " << straightBet;
					return true;
				}
			}
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << streetBet;
			return false;
		}

		if (streetBet == 10)
		{
			int x[3] = { 28, 29, 30 };
			for (int i = 0; i < 3; ++i)
			{
				if (winNum == x[i]) {
					setXY(xWL, yWL);
					std::cout << "Wygrales, twoj bet: " << straightBet;
					return true;
				}
			}
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << streetBet;
			return false;
		}

		if (streetBet == 11)
		{
			int x[3] = { 31, 32, 33 };
			for (int i = 0; i < 3; ++i)
			{
				if (winNum == x[i]) {
					setXY(xWL, yWL);
					std::cout << "Wygrales, twoj bet: " << straightBet;
					return true;
				}
			}
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << streetBet;
			return false;
		}

		if (streetBet == 12)
		{
			int x[3] = { 34, 35, 36 };
			for (int i = 0; i < 3; ++i)
			{
				if (winNum == x[i]) {
					setXY(xWL, yWL);
					std::cout << "Wygrales, twoj bet: " << straightBet;
					return true;
				}
			}
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << streetBet;
			return false;
		}
	}

//=============================================================
//=============================================================
//=============================================================

	if (typeOfBet == 4) // Przypadek Six line betu
	{
		if (sixBet == 1)
		{
			int x[6] = { 1, 2, 3, 4, 5, 6 };
			for (int i = 0; i < 6; ++i)
			{
				if (winNum == x[i]) {
					setXY(xWL, yWL);
					std::cout << "Wygrales, twoj bet: " << sixBet;
					return true;
				}
			}
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << lowhighBet;
			return false;
		}

		if (sixBet == 2)
		{
			int x[6] = { 7, 8, 9, 10, 11, 12 };
			for (int i = 0; i < 6; ++i)
			{
				if (winNum == x[i]) {
					setXY(xWL, yWL);
					std::cout << "Wygrales, twoj bet: " << sixBet;
					return true;
				}
			}
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << lowhighBet;
			return false;
		}

		if (sixBet == 3)
		{
			int x[6] = { 13, 14, 15, 16, 17, 18 };
			for (int i = 0; i < 6; ++i)
			{
				if (winNum == x[i]) {
					setXY(xWL, yWL);
					std::cout << "Wygrales, twoj bet: " << sixBet;
					return true;
				}
			}
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << lowhighBet;
			return false;
		}

		if (sixBet == 4)
		{
			int x[6] = { 19, 20, 21, 22, 23, 24 };
			for (int i = 0; i < 6; ++i)
			{
				if (winNum == x[i]) {
					setXY(xWL, yWL);
					std::cout << "Wygrales, twoj bet: " << sixBet;
					return true;
				}
			}
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << lowhighBet;
			return false;
		}

		if (sixBet == 5)
		{
			int x[6] = { 25, 26, 27, 28, 29, 30 };
			for (int i = 0; i < 6; ++i)
			{
				if (winNum == x[i]) {
					setXY(xWL, yWL);
					std::cout << "Wygrales, twoj bet: " << sixBet;
					return true;
				}
			}
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << lowhighBet;
			return false;
		}

		if (sixBet == 6)
		{
			int x[6] = { 31, 32, 33, 34, 35, 36 };
			for (int i = 0; i < 6; ++i)
			{
				if (winNum == x[i]) {
					setXY(xWL, yWL);
					std::cout << "Wygrales, twoj bet: " << sixBet;
					return true;
				}
			}
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << lowhighBet;
			return false;
		}
	}

//=============================================================
//=============================================================
//=============================================================

	if (typeOfBet == 5) // Przypadek Dozen betu
	{
		if (dozenBet == 1)
		{
			int x[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
			for (int i = 0; i < 12; ++i)
			{
				if (winNum == x[i]) {
					setXY(xWL, yWL);
					std::cout << "Wygrales, twoj bet: " << dozenBet;
					return true;
				}
			}
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << lowhighBet;
			return false;
		}

		if (dozenBet == 2)
		{
			int x[12] = { 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24 };
			for (int i = 0; i < 12; ++i)
			{
				if (winNum == x[i]) {
					setXY(xWL, yWL);
					std::cout << "Wygrales, twoj bet: " << dozenBet;
					return true;
				}
			}
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << lowhighBet;
			return false;
		}

		if (dozenBet == 3)
		{
			int x[12] = { 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36 };
			for (int i = 0; i < 12; ++i)
			{
				if (winNum == x[i]) {
					setXY(xWL, yWL);
					std::cout << "Wygrales, twoj bet: " << dozenBet;
					return true;
				}
			}
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << lowhighBet;
			return false;
		}
	}

//=============================================================
//=============================================================
//=============================================================
	
	if (typeOfBet == 6) // Przypadek Low High betu
	{
		if (lowhighBet == 1)
		{
			int x[18] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18 };
			for (int i = 0; i < 18; ++i)
			{
				if (winNum == x[i]) {
					setXY(xWL, yWL);
					std::cout << "Wygrales, twoj bet: " << lowhighBet;
					return true;
				}
			}
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << lowhighBet;
			return false;
		}

		if (lowhighBet == 2)
		{
			int x[18] = { 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36};
			for (int i = 0; i < 18; ++i)
			{
				if (winNum == x[i]) {
					setXY(xWL, yWL);
					std::cout << "Wygrales, twoj bet: " << lowhighBet;
					return true;
				}
			}
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << lowhighBet;
			return false;
		}
	}

//=============================================================
//=============================================================
//=============================================================

	if (typeOfBet == 7) // Przypadek Color betu
	{
		if (colorBet == 1) // Czerwone 
		{
			int x[18] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35};
			for (int i = 0; i < 18; ++i)
			{
				if (winNum == x[i]) {
					setXY(xWL, yWL);
					std::cout << "Wygrales, twoj bet: " << colorBet;
					return true;
				}
			}
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << lowhighBet;
			return false;
		}

		if (colorBet == 2) // Czarne
		{
			int x[18] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36 };
			for (int i = 0; i < 18; ++i)
			{
				if (winNum == x[i]) {
					setXY(xWL, yWL);
					std::cout << "Wygrales, twoj bet: " << colorBet;
					return true;
				}
			}
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << lowhighBet;
			return false;
		}
	}

//=============================================================
//=============================================================
//=============================================================

	if (typeOfBet == 8) // Przypadek Even/Odd betu
	{
		if (evenoddBet == 1) // Patrzyste 
		{
			int x[18] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36 };
			for (int i = 0; i < 18; ++i)
			{
				if (winNum == x[i]) {
					setXY(xWL, yWL);
					std::cout << "Wygrales, twoj bet: " << evenoddBet;
					return true;
				}
			}
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << lowhighBet;
			return false;
		}

		else if (evenoddBet == 2) // Nieparzyste
		{
			int x[18] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 };
			for (int i = 0; i < 18; ++i)
			{
				if (winNum == x[i]) {
					setXY(xWL, yWL);
					std::cout << "Wygrales, twoj bet: " << evenoddBet;
					return true;
				}
			}
			setXY(xWL, yWL);
			std::cout << "Przegrales, twoj bet: " << lowhighBet;
			return false;
		}
	}

//=============================================================//
//					ROZPISANIE BETOW						   //
//=============================================================//
}

void Win::summary(int& betAmount, int& typeOfBet)
{
	system("cls");
	setXY(49, 6);
	std::cout << "Postawiles " << betAmount << "$"; 
	setXY(39, 7);
	std::cout << "Krupier/-ka kreci kolem ruletki ..."; 
	Sleep(1000); 
	setXY(48, 8);
	std::cout << "*W tle werble*";
	Sleep(4000);
}

int Win::winByType(int& typeOfBet, int& balance, int& betAmount)
{ 
	if (typeOfBet == 1)
		multi = 35; //Straight
	else if (typeOfBet == 2)
		multi = 17; //Split
	else if (typeOfBet == 3)
		multi = 11;	//Street
	else if (typeOfBet == 4)
		multi = 5;	//Six line
	else if (typeOfBet == 5)
		multi = 2;	//Dozen
	else if (typeOfBet == 6)
		multi = 1;	//Low High
	else if (typeOfBet == 7)
		multi = 1;	//Color
	else if (typeOfBet == 8)
		multi = 1;	//Even odd

	if (isWin(betAmount, typeOfBet) == true)
	{
		balance = balance + (multi * betAmount);
		setXY(47,13);
		std::cout << "Twoj balans = " << balance << "$";
		return balance;
	}
	else
	{
		balance = balance - betAmount;
		setXY(47, 13);
		std::cout << "Twoj balans = " << balance << "$";
		return balance;
	}
}

int Win::addSubBalance(int& betAmount, int& balance)
{
	std::cout << "Masz: " << balance - betAmount;
	return balance; 
}

void Win::chooseBet(int& typeOfBet, int& betAmount)
{
	switch (typeOfBet) {
	case 1: //Straight
		system("cls");
		setXY(38, 8);
		std::cout << "Wybrales zaklad numer 1 czyli Straight";
		setXY(37, 9);
		std::cout << "Na jaki numer chcesz postawic (1-36): ";
		std::cin >> straightBet;
		while ((straightBet < 0) || (straightBet > 36))
		{
			setXY(41, 11);
			std::cout << "Musisz wybrac liczbe z zakresu 1-36\n";
			setXY(36, 12);
			std::cout << "Jeszcze raz, na jaki numer chcesz postawic?: ";
			std::cin >> straightBet;
		}
		setXY(46, 13);
		std::cout << "W jakiej wysokosci?: ";
		//std::cout << std::endl << "Okej postawiles " << bet << "$ na numer: " << straightBet << std::endl << "Wcisnij enter aby zakrecic!";
		//tutaj funkcja krecenia
		break;

	case 2: //Split
		system("cls");
		setXY(40, 8);
		std::cout << "Wybrales zaklad numer 2 czyli Split"; 
		setXY(42, 9);
		std::cout << "Na jakie liczby chcesz postawic:";
		setXY(49, 10);
		std::cout << "np. 1-2 lub 17-20\n";
		setXY(48,12);
		std::cout << "Pierwsza liczba: ";
		std::cin >> splitBet;
		setXY(47, 13);
		std::cout << "oraz druga liczba: ";
		std::cin >> splitBet2;
		while (((splitBet < 0) || (splitBet > 36)) && ((splitBet2 < 0) || (splitBet2 > 37)))
		{
			setXY(40, 12);
			std::cout << "Musisz wybrac liczby z zakresu 1-36";
			setXY(36, 13);
			std::cout << "Jeszcze raz, na jakie liczby chcesz postawic?";
			setXY(48, 14);
			std::cout << "Pierwsza liczba: ";
			std::cin >> splitBet;
			setXY(47, 15);
			std::cout << "oraz druga liczba: ";
			std::cin >> splitBet2;
		}
		setXY(45, 16);
		std::cout << "W jakiej wysokosci?: ";
		//tutaj funkcja krecenia
		break;

	case 3: // Street 
		system("cls");
		setXY(40, 4);
		std::cout << "Wybrales zaklad numer 3 czyli Street"; 
		setXY(42, 5);
		std::cout << "Na jakie linie chcesz postawic:";
		setXY(53, 6);
		std::cout << "1. (1-3)";
		setXY(53, 7);
		std::cout << "2. (4-6)";
		setXY(53, 8);
		std::cout << "3. (7-9)";
		setXY(52, 9);
		std::cout << "4. (10-12)";
		setXY(52, 10);
		std::cout << "5. (13-15)";
		setXY(52, 11);
		std::cout << "6. (16-18)";
		setXY(52, 12);
		std::cout << "7. (19-21)";
		setXY(52, 13);
		std::cout << "8. (22-24)";
		setXY(52, 14);
		std::cout << "9. (25-27)";
		setXY(51, 15);
		std::cout << "10. (28-30)";
		setXY(51, 16);
		std::cout << "11. (31-33)";
		setXY(51, 17);
		std::cout << "12. (34-36)";
		setXY(50, 19);
		std::cout << "Twoj wybor?: ";
		std::cin >> streetBet;
		while ((streetBet < 0) || (streetBet > 12))
		{
			setXY(40, 19);
			std::cout << "Musisz wybrac linie z zakresu 1-12";
			setXY(36, 20);
			std::cout << "Jeszcze raz, na jaka linie chcesz postawic?: ";
			std::cin >> streetBet;
		}
		setXY(46, 22);
		std::cout << "W jakiej wysokosci?: ";

		//tutaj funkcja krecenia
		break;

	case 4: //Six line
		system("cls");
		setXY(40, 8);
		std::cout << "Wybrales zaklad numer 4 czyli Six line"; 
		setXY(42, 9);
		std::cout << "Na jakie linie chcesz postawic:";
		setXY(51, 10);
		std::cout << "1. (1-6)";
		setXY(51, 11);
		std::cout << "2. (7-12)";
		setXY(50, 12);
		std::cout << "3. (13-18)";
		setXY(50, 13);
		std::cout << "4. (19-24)";
		setXY(50, 14);
		std::cout << "5. (25-30)";
		setXY(50, 15);
		std::cout << "6. (31-36)";
		setXY(49, 17);
		std::cout << "Twoj wybor?: ";
		std::cin >> sixBet;
		while ((sixBet < 0) || (sixBet > 6))
		{
			setXY(40, 17);
			std::cout << "Musisz wybrac linie z zakresu 1-6";
			setXY(34, 18);
			std::cout << "Jeszcze raz, na jakie linie chcesz postawic?: ";
			std::cin >> sixBet;
		}
		setXY(44, 19);
		std::cout << "W jakiej wysokosci?: ";
		//tutaj funkcja krecenia
		break;
	case 5: //Dozen
		system("cls");
		setXY(40, 8);
		std::cout << "Wybrales zaklad numer 5 czyli Dozen"; 
		setXY(42, 9);
		std::cout << "Na jakie linie chcesz postawic:";
		setXY(48, 10);
		std::cout << "1. 1st(1-12)";
		setXY(48, 11);
		std::cout << "2. 2nd(13-24)";
		setXY(48, 12);
		std::cout << "3. 3rd(25-36)";
		setXY(47, 14);
		std::cout << "Twoj wybor?: ";
		std::cin >> dozenBet;
		while ((dozenBet < 0) || (dozenBet > 4))
		{
			setXY(38, 14);
			std::cout << "Musisz wybrac liczbe z zakresu 1-3";
			setXY(33, 15);
			std::cout << "Jeszcze raz, na jakie liczby chcesz postawic?: ";
			std::cin >> dozenBet;
		}
		setXY(42, 16);
		std::cout << "W jakiej wysokosci?: ";
		//tutaj funkcja krecenia
		break;
	case 6: //Low/High
		system("cls");
		setXY(40, 8);
		std::cout << "Wybrales zaklad numer 6 czyli Low/High";
		setXY(43, 9);
		std::cout << "Na jakie linie chcesz postawic:";
		setXY(50, 10);
		std::cout << "1. 1st(1-18)";
		setXY(50, 11);
		std::cout << "2. 2nd(19-36)";
		setXY(49, 13);
		std::cout << "Twoj wybor?: ";
		std::cin >> lowhighBet;
		while ((lowhighBet < 0) || (lowhighBet > 3))
		{
			setXY(39, 13);
			std::cout << "Musisz wybrac liczbe z zakresu 1-2";
			setXY(34, 14);
			std::cout << "Jeszcze raz, na jakie liczby chcesz postawic?: ";
			std::cin >> lowhighBet;
		}
		setXY(44, 15);
		std::cout << "W jakiej wysokosci?: ";
		//tutaj funkcja krecenia
		break;
	case 7: //Kolory
		system("cls");
		setXY(37, 8);
		std::cout << "Wybrales zaklad numer 7 czyli Czerwone/Czarne";
		setXY(43, 9);
		std::cout << "Na jakie linie chcesz postawic:";
		setXY(50, 10);
		std::cout << "1. Czerwone";
		setXY(51, 11);
		std::cout << "2. Czarne";
		setXY(49, 13);
		std::cout << "Twoj wybor?: ";
		std::cin >> colorBet;
		while ((colorBet < 0) || (colorBet > 4))
		{
			setXY(39, 13);
			std::cout << "Musisz wybrac liczbe z zakresu 1-3" << std::endl;
			setXY(34, 14);
			std::cout << "Jeszcze raz, na jakie liczby chcesz postawic?: ";
			std::cin >> colorBet;
		}
		setXY(44, 15);
		std::cout << "W jakiej wysokosci?: ";
		//tutaj funkcja krecenia
		break;
	case 8: //Parzyste
		system("cls");
		setXY(37, 8);
		std::cout << "Wybrales zaklad numer 8 czyli Parzyste/Nieparzyste";
		setXY(45, 9);
		std::cout << "Na jakie linie chcesz postawic:";
		setXY(53, 10);
		std::cout << "1. Parzyste ";
		setXY(52, 11);
		std::cout << "2. Nieparzyste";
		setXY(52, 13);
		std::cout << "Twoj wybor?: ";
		std::cin >> dozenBet;
		while ((dozenBet < 0) || (dozenBet > 4))
		{
			setXY(43, 1);
			std::cout << "Musisz wybrac liczbe z zakresu 1-3";
			setXY(37, 14);
			std::cout << "Jeszcze raz, na jakie liczby chcesz postawic?: ";
			std::cin >> dozenBet;
		}
		setXY(47, 15);
		std::cout << "W jakiej wysokosci?: ";
		//tutaj funkcja krecenia
		break;
	}
}

int Win::curBalance(int& balance)
{
	system("cls");
	setXY(44,4);
	std::cout << "Twoje saldo wynosi: " << balance << "$";
	return balance; 
}
