#include <iostream>
#include <string>
/*napisati funkciju koja primi jedan pozitivan broj,
u slucaju da je broj djeljiv sa 3 neka vrati fizz
u slucaju da je broj djeljiv sa 5 neka vrati buzz
u slucaju da je broj djeljiv sa 3 i pet neka vrati fizz-buzz
u slucaju da nije djeljiv sa nijednim neka vrati " " (prazan string)*/


std::string myFoo(const int& i)
{
	if (i % 3 == 0)
	{
		if (i % 5 == 0)
		{
			return "fizz-buzz";
		}
		return "fizz";
	}
	if (i % 5 == 0)
		return "buzz";

	return " ";

}
int main()
{
	int i = 0;
	std::cin >> i;
	std::cout << myFoo(i) << std::endl;

}