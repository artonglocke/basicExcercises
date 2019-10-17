#pragma once
#include <iostream>
class IShape
{
public:
	IShape() = default;
	~IShape() = default;

	virtual float getVolume() = 0;
	virtual std::string getName() = 0;

};