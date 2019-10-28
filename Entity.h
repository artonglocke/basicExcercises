#pragma once
#include <iostream>
#include <string>
#include "SFML/Graphics.hpp"

#define MOVE_SPEED 0.1f
#define TEX_PATH "textures\\"


class Entity
{
public:
	enum class Controls
	{
		Arrows,
		Wasd
	};

	Entity(std::string texturePath, sf::Vector2f size, Controls controls);
	~Entity();

	void draw(sf::RenderTarget& window);
	void update();

private:
	sf::Texture* _texture;
	sf::RectangleShape* _rect;
	Controls _controls;
};

