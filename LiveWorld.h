#pragma once
#include <string>
class LiveWorld
{
public:
	LiveWorld() = default;
	~LiveWorld() = default;

	virtual int Age() = 0;
	virtual std::string Name() = 0;
	virtual int Legs() = 0;
};

