/**
 * @file main.cpp
 * @author Filip Sołtysik
 * @brief 
 * @version 0.1
 * @date 2022-02-16
 * 
 * @copyright Copyright (c) 2022
 * \UseRawInputEncoding
 */
#include "header.h"

int main(int argc, char* argv[])
{	 
	system("cls"); 
	std::cout << "argc:\t" << argc << std::endl; 
	std::cout << "argv:\t" << argv[4] << std::endl; 
	
	int sot = atoi(argv[4]);
	std::vector<std::string> komendyVector;
	std::vector<int> wartosc;
	std::string komendaString;
	stanzolwia zapis{};

	char** tablica;
	

	tablica = utworzTab(sot);
	uzupelnijTab(tablica, sot); 
	odczyt(argc, argv, komendaString, komendyVector, wartosc);
	
	zolw(argc, argv, komendyVector, wartosc, komendaString, zapis, tablica, sot); 

	wypiszTab(tablica, sot); 
	zapisz(argc, argv, tablica, sot, zapis);
	std::cout << "Koniec Stan x:" << zapis.x << " Koniec Stan y:" << zapis.y << std::endl;

	return 0;
}