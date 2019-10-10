#include <iostream>
#include <vector>

#include "Animals.h"
#include "Mushrooms.h"
#include "Plants.h"



/* Napišite interface za geometrijsko tijelo i implementacije za kuglu i kocku.
	Napišite funkciju koja prima polje tijela i
	ispisuje naziv svakog tijela i njegov volumen. 
	U programu stavite u polje kocku stranice 5 i kuglu polumjera 5 i pozovite funkciju*/
/*
	LIVE WORLD
	|	|	|
	M	P	A
*/

int main()
{

	std::vector<LiveWorld*> creatures;
	for (int i = 0; i != 3; ++i)
	{
		creatures.push_back(new Animals(15, "Krc",3 ));
		creatures.push_back(new Mushrooms(2, "Muhara", 3));
		creatures.push_back(new Plants(1, "Kupus", 0));
	}

	for (LiveWorld* i : creatures)
	{
		std::cout << "My name is: " << i->Name() << " and im " << i->Age() << " old!!!" << std::endl;
		delete i;
	}

	system("pause");
}
