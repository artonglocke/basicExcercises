#pragma once
#include "Entity.h"
#include "Sphere.h"

class Enemy : public Entity
{
public:
	Enemy();
	~Enemy();
	Sphere* sphere;

	void printName() override;
};

