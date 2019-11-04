#include "Animator.h"

Animator::Animator(sf::Texture* texture, sf::Sprite* sprite) :
	_texture(texture), _sprite(sprite)
{
	init();
}

Animator::~Animator()
{
}

void Animator::init()
{
	_running = false;
	sf::Vector2u size = _texture->getSize();
	int numFrames = 12;
	int frameWidth = 24;
	int frameHeight = 32;
	for (size_t i = 0; i < numFrames; i++)
	{
		_frames.push_back(sf::IntRect(frameWidth * i, 0, frameWidth, frameHeight));
	}
	_reset();
}

void Animator::startFrameAnimation()
{
	_running = true;
	_reset();
}

void Animator::stopFrameAnimation()
{
	_running = false;
	_reset();
}

void Animator::update()
{
	if (_running)
	{
		if (_timer.getElapsedTime().asSeconds() > ANIMATION_SPEED)
		{
			_nextFrame();
			_timer.restart();
		}
	}
}

bool Animator::isAnimationRunning()
{
	return _running;
}

void Animator::_nextFrame()
{
	++_currentFrame;
	if (_currentFrame >= _frames.size())
	{
		_currentFrame = 0;
	}
	_sprite->setTextureRect(_frames[_currentFrame]);
}

void Animator::_reset()
{
	_sprite->setTextureRect(_frames[0]);
	_timer.restart();
}
