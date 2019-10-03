#pragma once
#include "LiveWorld.h"

class Plants : public LiveWorld
{
public:
	Plants(int age, std::string name, int legs);
	~Plants();
	int Age() override;
	std::string Name() override;
	int Legs() override;
private:
	int mAge;
	std::string mName;
	int mLegs;
};

