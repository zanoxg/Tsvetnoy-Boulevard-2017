#include <iostream>
#include "Level.h"

int main()
{
	Level level;

	if (!level.loadFromFile("levels/level1.txt"))
	{
		return 1;
	}

	level.draw();
	return 0;
}