#include <iostream>
#include "SFML/Graphics.hpp"
#include "Player.h"


// rect width 24
// rect height 32
int main()
{
	sf::RenderWindow window(sf::VideoMode(1024, 768), "Animations Demo!");
	sf::Event sfEvent;

	Player* player = new Player("player_animation_sheet.png");
	

	while (window.isOpen())
	{
		while (window.pollEvent(sfEvent))
		{
			if (sfEvent.type == sf::Event::EventType::Closed)
			{
				window.close();
			}
		}

		player->update();

		window.clear();
		
		player->draw(&window);

		window.display();
	}
}
