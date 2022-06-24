#include "Map.h"
#include <iostream>
#include<fstream>

void Map::print()
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			printf("%c", this->map[i][j]);
		}
		printf("\n");
	}
}
Map::Map()
{
	std::ifstream f("map.txt");
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			f >> this->map[i][j];
		}
	}
	f.close();
}