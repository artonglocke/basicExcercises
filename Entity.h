#pragma once
#include <iostream>

class Entity
{
public:
	Entity();
	virtual ~Entity();

	virtual void printName() = 0;
};