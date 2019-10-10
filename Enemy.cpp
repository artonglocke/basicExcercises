#include "Enemy.h"



Enemy::Enemy()
{
	sphere = new Sphere();
}


Enemy::~Enemy()
{
	std::cout << "Destroying Enemy" << std::endl;
	delete sphere;
}

void Enemy::printName()
{
	std::cout << "Enemy" << std::endl;
}
