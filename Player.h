#pragma once
#include "Entity.h"
#include "Sphere.h"

class Player : public Entity
{
public:
	Player();
	~Player();

	Sphere* sphere;
	void printName() override;
};

