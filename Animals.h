#pragma once
#include "LiveWorld.h"

class Animals : public LiveWorld
{
public:
	Animals(int age, std::string name, int legs);
	~Animals();
	int Age() override;
	std::string Name() override;
	int Legs() override;
private:
	int mAge;
	std::string mName;
	int mLegs;
};

