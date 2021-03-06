#include "Tile.h"
#include <SFML\Graphics.hpp>

Tile::Tile(sf::Texture& texture) {
	baseSprite.setTexture(texture, true);
}

Tile::~Tile() {

}

void Tile::draw(int x, int y, sf::RenderWindow* rw) {
	baseSprite.setPosition(x, y);
	rw->draw(baseSprite);
}