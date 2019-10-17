#include "Plants.h"
#include <iostream>

Plants::Plants(int age, std::string name, int legs)
	: mAge(age)
	, mName(name)
	, mLegs(legs)
{
}

Plants::~Plants()
{
}

int Plants::Age()
{
	return mAge;
}

std::string Plants::Name()
{
	return mName;
}

int Plants::Legs()
{
	return mLegs;
}

