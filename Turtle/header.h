/** @file */

#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <chrono>
#include <thread>
#include <stdlib.h>
#include <vector>
#include <string>
#include <fstream>
#include <windows.h>
#include <cstdio> 
#include <iomanip>
#include <sstream>

/** Struktura przechowujaca stan zolwia w postaci wspolrzednych X i Y */
struct stanzolwia {
	int x;
	int y;
	int obrot = 0; 
};

/** Funkcja zapisujaca tablice 2-wymiarowa do pliku tekstowego.
@param  argc liczba argumentow
@param  argv wskaznik do tablicy tekstow zawierajacej argumenty
@param	tablica tablica na ktorej operujemy zolwikiem
@param	n rozmiar tablicy 
@param	pocz stan zolwia
@return tablice 2-wymiarowa do pliku tekstowego
*/
void zapisz(int argc, char** argv, char** tablica, const int n, stanzolwia pocz);

/** Funkcja tworzy tablice 2 wymiarowa.
@param  n rozmiar tablicy
@return tablice 2-wymiarowa
*/
char** utworzTab(const int n);

/** Funkcja wypisuje tablice 2-wymiarowa na konsole.
@param  tablica tablica na ktorej operujemy zolwiem
@param  n rozmiar tablicy
@return tablice 2-wymiarowa na konsole
*/
void wypiszTab(char** tablica, const int n);

/** Funkcja uzupelnia tablice podanymi znakami.
@param  tablica tablica na ktorej operujemy zolwiem
@param  n rozmiar tablicy
@return uzupelniona tablice 2-wymiarowa
*/
void uzupelnijTab(char** tablica, const int n);

/** Funkcja odczytuje dane z pliku tekstowego oraz dzieli je na komende+wartosc.
@param  argc liczba argumentow
@param  argv wskaznik do tablicy tekstow zawierajacej argumenty
@param[out]	komendaString zmienna string przechowujaca komende z pliku tekstowego
@param[out]	komendaVec wektor do ktorego przekazywane sa komendy ze zmiennej komendaString
@param[out] wartosc wektor typu int przechowujacy wartosci z nawiasow 
@return wektory uzupelnione o zawartosc wejsciowego pliku tekstowego 
*/
void odczyt(int argc, char** argv, std::string& komendaString, std::vector<std::string>& komendaVec, std::vector<int>& wartosc);

/** Funkcja ustawiajaca stan zolwia w samym srodku tablicy.
@param	tablica tablica na ktorej operujemy zolwikiem
@param	n rozmiar tablicy
@param[out]	stan stan zolwia w postaci wspolrzednych X i Y
@param[out]	komenda komenda sluzaca do wykonania funkcji startowej
@return stan zolwia w polowie osi X i Y
*/
void start(char** tablica, const int n, stanzolwia& stan, std::string& komenda);

/** Funkcja przesuwajaca zolwia do przodu o podana wartosc.
@param	tablica tablica na ktorej operujemy zolwikiem
@param[out]	stan stan zolwia w postaci wspolrzednych X i Y
@param[out]	wartosc wartosc o ile powinien zostac przesuniety zolwik 
@return stan zolwia przesuniety o dana wartosc do przodu
*/
void przod(char** tablica, stanzolwia& stan, std::vector<int>& wartosc);

/** Funkcja przesuwajaca zolwia do tylu o podana wartosc.
@param	tablica tablica na ktorej operujemy zolwikiem
@param[out]	stan stan zolwia w postaci wspolrzednych X i Y
@param[out]	wartosc wartosc o ile powinien zostac przesuniety zolwik
@return stan zolwia przesuniety o dana wartosc do tylu
*/
void tyl(char** tablica, stanzolwia& stan, std::vector<int>& wartosc);

/** Funkcja przesuwajaca zolwia w lewo o podana wartosc.
@param	tablica tablica na ktorej operujemy zolwikiem
@param[out]	stan stan zolwia w postaci wspolrzednych X i Y
@param[out]	wartosc wartosc o ile powinien zostac przesuniety zolwik
@return stan zolwia przesuniety o dana wartosc w lewo
*/
void lewo(char** tablica, stanzolwia& stan, std::vector<int>& wartosc);

/** Funkcja przesuwajaca zolwia w prawo o podana wartosc.
@param	tablica tablica na ktorej operujemy zolwikiem
@param[out]	stan stan zolwia w postaci wspolrzednych X i Y
@param[out]	wartosc wartosc o ile powinien zostac przesuniety zolwik
@return stan zolwia przesuniety o dana wartosc w prawo
*/
void prawo(char** tablica, stanzolwia& stan, std::vector<int>& wartosc);

/** Funkcja w ktorej na podanym "polu" zmieniamy znak.
@param	tablica tablica na ktorej operujemy zolwikiem
@param[out]	stan stan zolwia w postaci wspolrzednych X i Y
@return zmienione pole w postaci znaku 
*/
void rusz_zolwia(char** tablica, stanzolwia& stan);

/** Funkcja glowna polegajaca na wczytywaniu funkcji kierunkowych zolwika oraz ich wartosci wedlug procedury zawartej w pliku tekstowym.
@param  argc liczba argumentow
@param  argv wskaznik do tablicy tekstow zawierajacej argumenty
@param[out]	komendaVec korzystamy z wektora aby sprawdzic jaki bedzie kolejny ruch dla zolwika
@param[out] wartosc wektor przechowujacy wartosci w nawiasach
@param[out]	komendaString komendy w ktorym kierunku ma sie poruszyc zolwik
@param[out]	zapis stan zolwia dzieki ktoremu poruszamy sie po tablicy 
@param tablica tablica na ktorej operujemy zolwikiem
@param[out] sot rozmiar tablicy
@return tablice 2-wymiarowa przesunieta o cala procedure zawarta w pliku tekstowym
*/
void zolw(int argc, char** argv, std::vector<std::string>& komendaVec, std::vector<int>& wartosc, std::string& komendaString, stanzolwia& zapis, char** tablica, int& sot);

