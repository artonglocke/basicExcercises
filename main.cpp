#include <iostream>
#include <string>

		/*nadopuniti program tako da ovo radi :*/
class number
{
public:
	number(int i):
		mNumber(i)
	{}
	number operator++(int)
	{
		int newNumber = mNumber;
		++mNumber;
		return newNumber;
	}
	number operator++()
	{
		++mNumber;
		return mNumber;
	}
	friend std::ostream& operator<<(std::ostream& os, const number& n);
private:
	int mNumber;
};
std::ostream& operator<<(std::ostream& outputStream, const number& n)
{
	return outputStream <<"["<< n.mNumber<<"]"<<std::endl;
}
int main()
{
	number num(2);


	std::cout << num++ << std::endl;
	std::cout << ++num << std::endl;

}

