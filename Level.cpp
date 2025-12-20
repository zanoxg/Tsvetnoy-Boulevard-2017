#include "Level.h"
#include <fstream>
#include <iostream>

bool Level::loadFromFile(const std::string& filename)
{
	std::ifstream file(filename);
	if (!file.is_open())
	{
		std::cout << "ошибка в чтении файла: " << filename << std::endl;
		return false;
	}

	map.clear();
	std::string line;

	while (std::getline(file, line))
	{
		map.push_back(line);
	}

	file.close();

	height = map.size();
	width = map[0].size();
	for (int y = 0; y < height; ++y)
	{
		for (int x = 0; x < width; ++x)
		{
			if (map[y][x] == '@')
			{
				playerStartX = x;
				playerStartY = y;
				map[y][x] = '.';
			}
		}
	}
	return true;
}

void Level::draw() const
{
	for (const auto& row : map)
	{
		std::cout << row << std::endl;
	}
	
}

char Level::getTile(int x, int y) const
{
	return map[y][x];
}

void Level::setTile(int x, int y, char tile)
{
	map[y][x] = tile;
}

int Level::getWidth() const
{
	return width;
}

int Level::getHeight() const
{
	return height;
}
