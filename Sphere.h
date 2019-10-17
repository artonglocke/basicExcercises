#pragma once
#include "IShape.h"

class Sphere : public IShape
{
public:
	Sphere();
	Sphere(std::string name, float radius);
	~Sphere();

	float getVolume() override;
	std::string getName() override;

private:
	float _radius;
	std::string _name;
};

