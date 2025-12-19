#include <iostream>
#include "Level.h"

int main()
{
	Level level;
	level.loadFromFile("levels/level1.txt");

	int playerX = level.playerStartX;
	int playerY = level.playerStartY;

	level.drawWithPlayer(playerX, playerY);

	return 0;
}