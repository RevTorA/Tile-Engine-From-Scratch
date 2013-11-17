#ifndef _TILE_H
#define _TILE_H

#include <SFML\Graphics.hpp>

class Tile {
private:
	sf::Sprite baseSprite;

public:
	Tile(sf::Texture& texture);
	~Tile();

	void draw(int x, int y, sf::RenderWindow* rw);
};

#endif