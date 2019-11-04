#pragma once
#include <iostream>
#include "SFML/Graphics.hpp"
#define ANIMATION_SPEED 0.025f

class Animator
{
public:
	Animator(sf::Texture* texture, sf::Sprite* sprite);
	~Animator();

	void init();
	void startFrameAnimation();
	//void startFrameAnimation(std::string name);
	void stopFrameAnimation();
	void update();
	bool isAnimationRunning();

private:
	sf::Texture* _texture;
	sf::Sprite* _sprite;
	bool _running = false;
	sf::Clock _timer;
	std::vector<sf::IntRect> _frames;
	int _currentFrame = 0;

	void _nextFrame();
	void _reset();
};

