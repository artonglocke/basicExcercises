#include <iostream>
#include <string>
//5. Napisati program koji će od korisnika učitati dva pozitivna cijela broja te provjeriti da li im je suma
//znamenki jednaka i u skladu s tim ispisati odgovarajuću poruku.
//Npr.
//- Za brojeve 123 i 33 potrebno je ispisati : „Brojevi 123 i 33 imaju isti zbroj znamenki i on iznosi 6.“
//- Za brojeve 123 i 58 potrebno je ispisati „Brojevi 123 i 58 nemaju isti zbroj znamenki“

//8. Proširite sljedečći program :
//int main() {
//	unsigned int arr[] = { 10,17,13,15 };
//}
//Da pronalazi i ispisuje prvi prosti broj u polju.
//Prosti broj je prirodni broj veći od 1, djeljiv bez ostatka samo s brojem 1 i sa samim sobom.

//9. Nadopuniti klasu byte koja podržava jednostavne računske operacije sa malim cijelim brojevima,
//klasa kao privatni član ima char.
//Za provjeru da li je broj veći od dozvoljene granice možete iskoristit CHAR_MAX ili
//std::numeric_limits<char>::max();
//U slučaju prekoračenja ispisati poruku o grešci te završiti izvođenje programa.
//class byte {
//	/*overload operatore-> istream, ostream, +, i ++
//	potpis za operator ++
//	byte operator++()(int){ TODO..}
//	*/
//};
//int main() {
//	byte a, b;
//	std::cin >> a >> b;
//	byte c = a + b;
//	std::cout << c++;
//}
//
//10. Napišite funkciju foo koja prima &std::string(referenca na string) te obavlja sljedeće operacije :
//• Izbacuje sve znamenke
//• Pretvara sve u velika slova
//• Zamjenjuje sve samoglasnike sa crticom,

void foo(std::string &value)
{
	for (int i = value.size() - 1; i >= 0; i--)
	{
		if (value[i] >= '0' && value[i] <= '9')
		{
			value.erase(value.begin() + i);
		}
	}
	for (int i = 0; i < value.size(); i++)
	{
		if (value[i] >= 'a' && value[i] <= 'z')
		{
			value[i] -= ' ';
		}
	}

	for (int i = 0; i < value.size(); i++)
	{
		if (value[i] == 'A' || value[i] == 'E' || value[i] == 'I'
			|| value[i] == 'O' || value[i] == 'U')
		{
			value[i] = '-';
		}
	}
}

class byte
{
public:
	byte operator+(byte other)
	{
		byte result;
		result._value = _value + other._value;
		return result;
	}

	byte operator++(int)
	{
		byte result;
		result._value = ++_value;
		return result;
	}

	friend std::ostream &operator<<(std::ostream &out, const byte &current)
	{
		out << current._value;
		return out;
	}

	friend std::istream &operator>>(std::istream &input, byte &current)
	{
		int temp;
		input >> temp;

		if (temp > std::numeric_limits<char>::max())
		{
			std::cout << "Error: char numeric limit breached!" << std::endl;
		}
		else
		{
			current._value = temp;
			std::cin.ignore(1000, '\n');
			std::cin.clear();
		}
		return input;
	}

private:
	char _value;
};


int main()
{
	//byte a, b;
	//std::cin >> a >> b;
	//byte c = a + b;
	//std::cout << c++;

	std::string value = "neKi rAnDom 5triNg!11111111112232153642542";
	foo(value);
	std::cout << value << std::endl;
	system("pause");
}