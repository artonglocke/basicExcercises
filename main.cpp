#include <iostream>
#include <vector>
#include "SFML/Graphics.hpp"
#include "Entity.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Yay!");
	std::vector<Entity*> entities;
	entities.push_back(new Entity("better_tank.png", sf::Vector2f(64.0f, 64.0f), Entity::Controls::Arrows));
	entities.push_back(new Entity("better_tank.png", sf::Vector2f(64.0f, 64.0f), Entity::Controls::Wasd));

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		window.clear();

		for (auto entity : entities)
		{
			entity->update();
			entity->draw(window);
		}
		window.display();
	}
}