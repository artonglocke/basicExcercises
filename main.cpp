#include <iostream>
#include "Vehicle.h"

int main()
{
	Vehicle* car =  new Vehicle();
	
	while (true)
	{
		Vehicle* newCar = new Vehicle(); // this is truly bad!
	}
	std::cout << "Car has " << car->GetNumberOfWheels() << " wheels!" << std::endl;

	delete car;
	system("pause");
}