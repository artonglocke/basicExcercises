#include <iostream>

#include <vector>
#include <unordered_map>

int main()
{
	std::unordered_map<int, int> brojevi;

	for (int i = 0; i != 10; ++i)
	{
		int c = 0;
		std::cin >> c;
		brojevi[c]++;
	}
	
	for (const auto& i : brojevi)
	{
		std::cout << "Key: " << i.first << " value:" << i.second << std::endl;
	}



}
