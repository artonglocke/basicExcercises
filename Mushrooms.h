#pragma once
#include "LiveWorld.h"

class Mushrooms : public LiveWorld
{
public:
	Mushrooms(int age, std::string name, int legs);
	~Mushrooms();
	int Age() override;
	std::string Name() override;
	int Legs() override;
private:
	int mAge;
	std::string mName;
	int mLegs;
};

