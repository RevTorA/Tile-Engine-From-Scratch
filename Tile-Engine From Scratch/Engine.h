#ifndef _ENGINE_H
#define _ENGINE_H

#include <SFML/Graphics.hpp>
#include "TextureManager.h"
#include "Tile.h"

class Engine {
private:
	//SFML Render Window
	sf::RenderWindow* window;

	TextureManager textureManager;

	//Initializes the engine
	bool init();
	//Main game loop
	void mainLoop();
	//Renders one frame
	void renderFrame();
	//Processes user input
	void processInput();
	//Updates all engine internals
	void update();
	//Load all textures
	void loadTextures();

	//Temporary tile
	Tile* testTile;
public:
	Engine();
	~Engine();

	void go();				//Starts the engine
};

#endif