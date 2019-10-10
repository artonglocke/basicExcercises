#include "Player.h"



Player::Player()
{
	sphere = new Sphere();
}


Player::~Player()
{
	std::cout << "Destroying player!" << std::endl;
	delete sphere;
}

void Player::printName()
{
	std::cout << "Player" << std::endl;
}
