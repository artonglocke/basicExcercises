#include "Animals.h"
#include <iostream>


Animals::Animals(int age, std::string name, int legs)
	: mAge(age)
	, mName(name)
	, mLegs(legs)
{
}

Animals::~Animals()
{
}
int Animals::Age()
{
	return mAge;
}

std::string Animals::Name()
{
	return mName;
}

int Animals::Legs()
{
	return mLegs;
}

