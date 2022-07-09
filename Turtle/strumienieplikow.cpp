/**
 * @file strumienieplikow.cpp
 * @author Filip Soltysik
 * @brief 
 * @version 0.1
 * @date 2022-02-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "header.h"

void zapisz(int argc, char** argv, char** tablica, const int n, stanzolwia pocz)
{
	std::ofstream plikwy(argv[6]);
	std::string aktualne;
	for (int i = 0; i < argc - 1; ++i)
	{
		aktualne = argv[i];
	}

	if (aktualne == "-o")
	{
		if (plikwy.is_open())
			std::cout << "Plik wyjsciowy jest otwarty" << std::endl; 
		
		for (int a = 0; a < n; a++)
		{
			for (int b = 0; b < n; b++){
				pocz.x = a; 
				pocz.y = b;
				plikwy << tablica[a][b];
			if (b == n - 1)
				plikwy << std::endl;
			}
		}
	} 
	plikwy.close();
}

char** utworzTab(const int n) 
{
	char** tablica = new char*[n];
	for (int rzad = 0; rzad < n; rzad++)
	{
		tablica[rzad] = new char[n];
	}
	return tablica; 
}

void uzupelnijTab(char** tablica, const int n) {
	for (int a = 0; a < n; a++)
	{
		for (int b = 0; b < n; b++)
			tablica[a][b] = '.';
	}
}

void wypiszTab(char** tablica, const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << tablica[i][j];
			if (j == n - 1)
				std::cout << std::endl;
		}
	}
}

void odczyt(int argc, char** argv, std::string& komendaString, std::vector<std::string>& komendaVec, std::vector<int>& wartosc)
{
	std::ifstream plikwe(argv[2]);
	std::string wartoscString;
	std::string linia;
	int v; 
	while (plikwe >> linia)
	{
		//std::string wartosc;
		//std::string komenda; //lewo, prawo, przyod, tyl
		std::istringstream ss(linia);
		std::getline(ss, komendaString, '(');
		std::getline(ss, wartoscString, ')');
		v = atoi(wartoscString.c_str());
		std::cout << "V:" << v << std::endl;
		std::cout << "Komenda_F(Odczyt): "<< komendaString << std::endl;

		komendaVec.push_back(komendaString);
		for (std::string c : komendaVec)
			std::cout << "Wektor c:" << c << std::endl;

		wartosc.push_back(v); 

		//v - wartosc w nawiasie 
		//komenda - przod, tyl, lewo, prawo
	}
}

void start(char** tablica, const int n, stanzolwia& stan, std::string& komenda)
{
	std::cout << "Wykonano start" << std::endl;
	stan.x = n/2;
	stan.y = n/2;
}

void rusz_zolwia(char** tablica, stanzolwia& stan)
{
	tablica[stan.x][stan.y] = '$';
}

void przod(char** tablica, stanzolwia& stan, std::vector<int>& wartosc)
{
	for (int k = 0; k < wartosc.front(); k++)
	{		
		rusz_zolwia(tablica, stan);
		--stan.x;
	}

	std::cout << "Przod Stan x:" << stan.x << " Przod Stan y:" << stan.y << std::endl;
}

void tyl(char** tablica, stanzolwia& stan, std::vector<int>& wartosc)
{
	for (int k = 0; k < wartosc.front(); k++)
	{		
		rusz_zolwia(tablica, stan);
		++stan.x;
	}

	std::cout << "Tyl Stan x:" << stan.x << " Tyl Stan y:" << stan.y << std::endl;
}	

void lewo(char** tablica, stanzolwia& stan, std::vector<int>& wartosc)
{
	for (int k = 0; k < wartosc.front(); k++)
	{
		rusz_zolwia(tablica, stan);
		--stan.y;
	}

	std::cout << "Lewo Stan x:" << stan.x << " Lewo Stan y:" << stan.y << std::endl;
}

void prawo(char** tablica, stanzolwia& stan, std::vector<int>& wartosc)
{
	for (int k = 0; k < wartosc.front(); k++)
	{
		rusz_zolwia(tablica, stan);
		++stan.y;
	}

	std::cout << "Prawo Stan x:" << stan.x << " Prawo Stan y:" << stan.y << std::endl;
}

void rekurencja(int argc, char** argv, std::vector<std::string>& komendaVec, std::vector<int>& wartosc, std::string& komendaString, stanzolwia& stan, char** tablica, int& sot)
{
	std::vector<std::string> komendaVecReku;
	std::vector<int> wartoscReku; 
	odczyt(argc, argv, komendaString, komendaVecReku, wartoscReku);
	for (int i = 0; i < komendaVecReku.size()-1; i++)
	{
		if (komendaVecReku[i] == "start") 
		{
		komendaVecReku.erase(komendaVecReku.begin() + i);
		wartoscReku.erase(wartoscReku.begin() + i);
		}
		if (komendaVecReku[i] == "zolw") 
		{
		komendaVecReku.erase(komendaVecReku.begin() + i); 
		wartoscReku.erase(wartoscReku.begin() + i);
		}
		if (komendaVecReku[i] == "koniec")
		{
			komendaVecReku.erase(komendaVecReku.begin() + i); 
			wartoscReku.erase(wartoscReku.begin() + i);
		}
	}
	zolw(argc, argv, komendaVecReku, wartoscReku, komendaString, stan, tablica, sot);
}

void zolw(int argc, char** argv, std::vector<std::string>& komendaVec, std::vector<int>& wartosc, std::string& komendaString, stanzolwia& zapis, char** tablica, int& sot)
{
	int mozliwe_kierunki = 0;
	while (!komendaVec.empty())
	{
		if (komendaVec.front() == "start")
		{
			mozliwe_kierunki = 1;
			komendaVec.erase(komendaVec.begin());
		}
		else if (komendaVec.front() == "przod")
		{
			mozliwe_kierunki = 2;
			komendaVec.erase(komendaVec.begin());
		}
		else if (komendaVec.front() == "tyl")
		{
			mozliwe_kierunki = 3;
			komendaVec.erase(komendaVec.begin());
		}
		else if (komendaVec.front() == "lewo")
		{
			mozliwe_kierunki = 4;
			komendaVec.erase(komendaVec.begin());
		}
		else if (komendaVec.front() == "prawo")
		{
			mozliwe_kierunki = 5;
			komendaVec.erase(komendaVec.begin());
		}
		else if (komendaVec.front() == "zolw")
		{
			mozliwe_kierunki = 6;
			komendaVec.erase(komendaVec.begin());
		}
		else if (komendaVec.front() == "koniec")
		{
			mozliwe_kierunki = 7;
			komendaVec.erase(komendaVec.begin());
		}

		switch (mozliwe_kierunki)
		{
		case 1:
			start(tablica, sot, zapis, komendaString);
			wartosc.erase(wartosc.begin());
			break;
		case 2:
			przod(tablica, zapis, wartosc);
			wartosc.erase(wartosc.begin());
			break;
		case 3:
			tyl(tablica, zapis, wartosc);
			wartosc.erase(wartosc.begin());
			break;
		case 4:
			lewo(tablica, zapis, wartosc);
			wartosc.erase(wartosc.begin());
			break;
		case 5:
			prawo(tablica, zapis, wartosc);
			wartosc.erase(wartosc.begin());
			break;
		case 6:
			rekurencja(argc, argv, komendaVec, wartosc, komendaString, zapis, tablica, sot);
			wartosc.erase(wartosc.begin());
			break;
		case 7:
			std::cout << "Koniec" << std::endl;
			wartosc.erase(wartosc.begin());
			break;
		default:
			std::cout << "Nie rozpoznano komendy";
			break;
		}
	}
}
	