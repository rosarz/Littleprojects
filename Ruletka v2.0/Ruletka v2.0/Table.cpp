#include "Table.h"

void Table::createTable()
{
	Menu menu;

	menu.setXY(x, y);
	for (int i = 0; i < 50; ++i)
	{
		x++;
		menu.setXY(x, y);
		std::cout << sign;
	}
	for (int i = 0; i < 10; ++i)
	{
		y++;
		menu.setXY(x, y);
		std::cout << sign << std::endl;
	}
	for (int i = 0; i < 50; ++i)
	{
		x--;
		menu.setXY(x, y);
		std::cout << sign << std::endl;
	}
	for (int i = 0; i < 10; ++i)
	{
		y--;
		menu.setXY(x, y);
		std::cout << sign << std::endl;
	}

	
}