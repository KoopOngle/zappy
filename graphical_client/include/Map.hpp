//
// EPITECH PROJECT, 2018
// Map.hpp
// File description:
// Map class
//

#pragma once

#include <vector>

#include "Tiles.hpp"

namespace gpc {
	class Map {
		public:
		Map(int x, int y, sf::Sprite &floor, sf::RenderTexture &window);
		~Map();
		void draw();
		Tiles * getTiles(int x, int y);
		int getX();
		int getY();
		private:
		std::vector<Tiles *> getVectorTiles(int x, int y);
		std::vector<std::vector<Tiles *>> _map;
		int _x;
		int _y;
		sf::Sprite &_floor;
		sf::RenderTexture &_window;
	};
}