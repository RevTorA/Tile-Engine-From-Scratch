#ifndef _TEXTURE_MANAGER_H
#define _TEXTURE_MANAGER_H

#include <vector>
#include <SFML\Graphics.hpp>

class TextureManager {
private:
	std::vector<sf::Texture> textureList;

public:
	TextureManager();
	~TextureManager();

	void addTexture(sf::Texture& texture);
	sf::Texture& getTexture(int index);
};

#endif