#include <iostream>
#include "Level.h"
#include <conio.h>

int main()
{
	Level level;
	level.loadFromFile("levels/level1.txt");

	int playerX = level.playerStartX;
	int playerY = level.playerStartY;

	while (true)
	{
		system("cls");
		level.drawWithPlayer(playerX, playerY);

		char input = _getch();
		if (input == 'q')
		{
			break;
		}
		
		int xx = 0, yy = 0;
		if (input == 'w')
		{
			yy = -1;
		}
		if (input == 's')
		{
			yy = 1;
		}
		if (input == 'a')
		{
			xx = -1;
		}
		if (input == 'd')
		{
			xx = 1;
		}

		int newX = playerX + xx;
		int newY = playerY + yy;

		if (newX < 0 || newX >= level.getWidth())
		{
			continue;
		}
		if (newY < 0 || newY >= level.getHeight()) 
		{ 
			continue;
		}

		if (level.getTile(newX, newY) == '#')
		{
			continue;
		}

		playerX = newX;
		playerY = newY;
	}

	

	return 0;
}