#include "Mushrooms.h"
#include <iostream>

Mushrooms::Mushrooms(int age, std::string name, int legs)
	: mAge(age)
	, mName(name)
	, mLegs(legs)

{
}


Mushrooms::~Mushrooms()
{
	std::cout << "Unistio sam se " << std::endl;

}

int Mushrooms::Age()
{
	return mAge;
}

std::string Mushrooms::Name()
{
	return mName;
}

int Mushrooms::Legs()
{
	return mLegs;
}


