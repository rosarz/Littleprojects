#pragma once
#include <windows.h>
#include <conio.h>
#include <iostream>
#include "betType.h"
#include "Table.h"
#include "gameLoop.h"

class Menu
{
public:
	void color(int color);
	void setXY(int x, int y);
	void title();
	bool helpFunc();
	void toPlay();
	void menuFunc();
private:
	char counter;
	char key;
};

