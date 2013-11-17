#include "TextureManager.h"
#include <vector>
#include <SFML\Graphics.hpp>

TextureManager::TextureManager() {

}

TextureManager::~TextureManager() {

}

void TextureManager::addTexture(sf::Texture& texture) {
	textureList.push_back(texture);
}

sf::Texture& TextureManager::getTexture(int index) {
	return textureList[index];
}