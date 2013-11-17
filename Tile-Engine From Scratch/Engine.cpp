#include "Engine.h"
#include <SFML\Graphics.hpp>

Engine::Engine() {

}

Engine::~Engine() {

}

bool Engine::init() {
	window = new sf::RenderWindow(sf::VideoMode(800, 600, 32), "Tile-Engine From Scratch");

	if (!window) {
		return false;
	}

	loadTextures();
	return true;
}

void Engine::renderFrame() {
	window->clear();
	testTile->draw(0, 0, window);
	window->display();
}

void Engine::processInput() {
	sf::Event e;

	//Loop through all window events
	while (window->pollEvent(e)) {
		if (e.type == sf::Event::Closed)
			window->close();
	}
}

void Engine::update() {

}

void Engine::loadTextures() {
	sf::Texture sprite;
	sprite.loadFromFile("sprite1.png");

	textureManager.addTexture(sprite);
	testTile = new Tile(textureManager.getTexture(0));
}

void Engine::mainLoop() {
	//Loop until our window is closed
	while (window->isOpen()) {
		processInput();
		update();
		renderFrame();
	}
}

void Engine::go() {
	if (!init()) {
		throw "Could not initialize Engine";
	}

	mainLoop();
}