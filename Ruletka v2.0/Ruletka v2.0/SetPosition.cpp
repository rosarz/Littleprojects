#include "SetPosition.h"

void SetPosition::setXY(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void SetPosition::setX(int x)
{
	COORD c;
	c.X = x;
	c.Y = STD_OUTPUT_HANDLE;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void SetPosition::setY(int y)
{
	COORD c;
	c.X = STD_OUTPUT_HANDLE;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}