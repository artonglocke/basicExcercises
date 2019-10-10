#include <iostream>
#include <vector>
#include <string>

#include "IShape.h"
#include "Cube.h"
#include "Sphere.h"



/* Napišite interface za geometrijsko tijelo i implementacije za kuglu i kocku.
	Napišite funkciju koja prima polje tijela i
	ispisuje naziv svakog tijela i njegov volumen. 
	U programu stavite u polje kocku stranice 5 i kuglu polumjera 5 i pozovite funkciju*/
/*
	LIVE WORLD
	|	|	|
	M	P	A
*/

void print(std::vector<IShape*> shapes)
{
	for (IShape* shape : shapes)
	{
		std::cout << "Shape: " << shape->getName() << " Volumen: " << shape->getVolume() << std::endl;
	}
}

int main()
{
	std::vector<IShape*> shapes;
	shapes.push_back(new Cube("Cube", 5.0f));
	shapes.push_back(new Sphere("Sphere", 5.0f));
	print(shapes);


	system("pause");
}
