#pragma once
#include <iostream>
#include "SFML/Graphics.hpp"
#include "Animator.h"

#define TEX_PATH "textures\\player\\"

enum class Direction
{
	Up = 8,
	Down = 2,
	Left = 4,
	Right = 6
};

class Player
{
public:
	Player(std::string textureName);
	~Player();

	void update();
	void draw(sf::RenderTarget* window);

private:
	sf::Texture* _texture;
	sf::Sprite* _sprite;
	Animator* _animator;
	bool _moving;
	float _speed = 0.05f;

	void _checkInput();
};

