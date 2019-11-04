#include "Player.h"

Player::Player(std::string textureName)
{
	_texture = new sf::Texture();
	_texture->loadFromFile(TEX_PATH + textureName);
	_sprite = new sf::Sprite(*_texture);
	_animator = new Animator(_texture, _sprite);
}

Player::~Player()
{
}

void Player::update()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
	{
		_sprite->move(0.0f, -_speed);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
	{
		_sprite->move(0.0f, _speed);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
	{
		_sprite->move(-_speed, 0.0f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
	{
		_sprite->move(_speed, 0.0f);
	}
	
	_checkInput();

	if (_moving && !_animator->isAnimationRunning())
	{
		_animator->startFrameAnimation();
	}
	else if (!_moving)
	{
		_animator->stopFrameAnimation();
	}
	_animator->update();
}

void Player::draw(sf::RenderTarget* window)
{
	window->draw(*_sprite);
}

void Player::_checkInput()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
	{
		_moving = true;
		return;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
	{
		_moving = true;
		return;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
	{
		_moving = true;
		return;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
	{
		_moving = true;
		return;
	}
	_moving = false;
}
