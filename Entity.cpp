#include "Entity.h"

Entity::Entity(std::string texturePath, sf::Vector2f size, Controls controls)
{
	_texture = new sf::Texture();
	_texture->loadFromFile(TEX_PATH + texturePath);

	_rect = new sf::RectangleShape(size);
	_rect->setTexture(_texture);
	_controls = controls;
}

Entity::~Entity()
{
	delete _rect;
	delete _texture;
}

void Entity::draw(sf::RenderTarget& window)
{
	window.draw(*_rect);
}

void Entity::update()
{
	switch (_controls)
	{
	case Entity::Controls::Arrows:
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left))
		{
			_rect->move(-MOVE_SPEED, 0.0f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right))
		{
			_rect->move(MOVE_SPEED, 0.0f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up))
		{
			_rect->move(0.0f, -MOVE_SPEED);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down))
		{
			_rect->move(0.0f, MOVE_SPEED);
		}
		break;
	case Entity::Controls::Wasd:
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
		{
			_rect->move(-MOVE_SPEED, 0.0f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
		{
			_rect->move(MOVE_SPEED, 0.0f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
		{
			_rect->move(0.0f, -MOVE_SPEED);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
		{
			_rect->move(0.0f, MOVE_SPEED);
		}
		break;
	default:
		break;
	}
	
}
