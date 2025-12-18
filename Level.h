#pragma once
#include <vector>
#include <string>

class Level {
public:
	bool loadFromFile(const std::string& filename);
	void draw() const;

	char getTile(int x, int y) const;
	void setTile(int x, int y, char tile);

	int getWidth() const;
	int getHeight() const;

	int playerStartX;
	int playerStartY;

private:
	std::vector<std::string> map;
	int width = 0;
	int height = 0;
};