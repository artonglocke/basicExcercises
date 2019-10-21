#include <iostream>
#include <list>
#include <vector>
#include <deque>

enum Suite
{
	Hearts,
	Spades,
	Diamonds,
	Clubs
};

enum class Organs : char
{
	Hearts = 'h',
	Livers = 'l'
};

class Card
{
public:
	Card();
	~Card();

private:
	std::string _name;
	std::string _value;
	Suite _suite;
};

class Player
{
public:
	Player();
	~Player();

private:
	std::string _name;
	std::vector<Card> _hand;
};

int main()
{
	std::list<int> listExample;
	std::vector<int> vectorExample;
	std::deque<int> dequeExample;
	
	//std::vector<Player> players;
	//std::deque<Card> cards;

	// Pohrana
	listExample.push_back(7);
	vectorExample.push_back(7);

	listExample.push_back(8);
	vectorExample.push_back(8);

	listExample.push_back(2);
	listExample.push_back(4);
	listExample.push_back(1);
	listExample.push_back(9);

	dequeExample.push_back(7);
	dequeExample.push_front(8);

	dequeExample.pop_back();
	//std::cout << "List output: " << listExample[1] << std::endl;

	for (int i = 0; i < vectorExample.size(); i++)
	{
		std::cout << "Vector output: " << vectorExample[i] << std::endl;
	}

	for (auto it = listExample.begin(); it != listExample.end(); ++it)
	{
		std::cout << "List output: " << *it << std::endl;
	}

	for (auto it = vectorExample.begin(); it != vectorExample.end(); it++)
	{
		std::cout << "Vector output: " << *it << std::endl;
	}

	std::list<int>::iterator it = listExample.begin();
	std::advance(it, 3);
	std::cout << "current value: " << *it << std::endl;
	--it;
	std::cout << "current value: " << *it << std::endl;
	*it = 16;
	std::cout << "current value: " << *it << std::endl;
	std::cout << "#####################################" << std::endl;
	// Wont work!
	/*for (auto it = listExample.end(); it != listExample.begin(); it--)
	{
		std::cout << "Vector output: " << *it << std::endl;
	}*/

	Suite randomsuit = Hearts;
	system("pause");
}