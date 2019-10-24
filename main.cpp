#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include "Suit.h"


class Card
{
public:
	Card(int value, Suit suit)
	{
		if (value == 0)
		{
			_value = 11;
			_name = "Ace";
		}
		else if (value == 10)
		{
			_value = 10;
			_name = "Jack";
		}
		else if (value == 11)
		{
			_value = 10;
			_name = "Queen";
		}
		else if (value == 12)
		{
			_value = 10;
			_name = "King";
		}
		else
		{
			_value = ++value;
			_name = value;
		}
		_suit = suit;
	}
	~Card() {}

	void displayCard()
	{
		std::cout << _name << std::endl;
		std::cout << "Suit: ";
		switch (_suit)
		{
		case Suit::Hearts:
			std::cout << "Hearts";
			break;
		case Suit::Spades:
			std::cout << "Spades";
			break;
		case Suit::Diamonds:
			std::cout << "Diamonds";
			break;
		case Suit::Clubs:
			std::cout << "Clubs";
			break;
		default:
			break;
		}
		std::cout << std::endl;
		std::cout << "Value: " << _value << std::endl;
	}

	int getValue()
	{
		return _value;
	}

private:
	std::string _name;
	int _value;
	Suit _suit;

};

class Player
{
public:

	void showHand()
	{
		for (auto it : _hand)
		{
			it.displayCard();
		}
	}
	
	void addCard(Card card) 
	{
		_hand.push_back(card);
	}

	int handValue()
	{
		int result = 0;
		for (auto it : _hand)
		{
			result += it.getValue();
		}
		return result;
	}
private:
	std::vector<Card> _hand;
};


int main()
{
	std::deque<Card> cards;
	for (int i = 0; i < 13; i++)
	{
		cards.push_back(Card(i, Suit::Hearts));
		cards.push_back(Card(i, Suit::Spades));
		cards.push_back(Card(i, Suit::Diamonds));
		cards.push_back(Card(i, Suit::Clubs));
	}

	char choice = 'y';
	Player firstPlayer = Player();
	while (choice == 'y')
	{
		Card card = cards[cards.size() - 1];
		card.displayCard();
		firstPlayer.addCard(card);
		cards.pop_back();
		if (firstPlayer.handValue() > 21)
		{
			std::cout << "Sorry you failed, loser!" << std::endl;
			break;
		}

		std::cout << "Would you like another card? ";

		std::cin >> choice;
		std::cout << std::endl;
	}
	
	firstPlayer.showHand();
	system("pause");
}