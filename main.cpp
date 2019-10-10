#include <iostream>
#include <vector>
#include <string>

#include "Entity.h"
#include "Enemy.h"
#include "Player.h"

int main()
{
	Entity* enemy = new Enemy();
	Entity* player = new Player();

	enemy->printName();
	player->printName();

	delete enemy;
	delete player;
	while (true)
	{
		Entity* playerTwo = new Player();
		delete playerTwo;
	}
	system("pause");
}
