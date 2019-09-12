#include <iostream>
#include <vector>
#include <string>

// Logicke operatore
// == - ispitivanje jednakosti
// && - logicki operator AND
// || - logicki OR 
// ^^ - logicki XOR
// < - operator LESS THAN
// > - operator GREATER THAN
// <= - operator LESS THAN OR EQUAL
// >= - operator GREATER THAN OR EQUAL
// != - operator DIFFERENT

// 1 1 2 3 5 8 13 21

/* 
object
|_object
	|_object
		|_object
*/

/*
1
11
111
1111
11111
111111
*/
// int first = 3
// int var = first
// var * 10 + first

// Namespace excercise
namespace machina
{
	void cout(const char* value)
	{
		std::cout << value << std::endl;
	}
}

void PrintNumbers(int iterator, int count)
{
	if (iterator < count)
	{
		std::cout << iterator << std::endl;
		++iterator;
		PrintNumbers(iterator, count);
	}
}

void FibonacciArray(int max, int count = 0, int previous = 0, int current = 1)
{
	if (count == 0)
	{
		std::cout << count << " : " << current << std::endl;
	}
	if (count < max - 1)
	{
		int nextNumber = previous + current;
		std::cout << count + 1  << " : " << nextNumber << std::endl;
		previous = current;
		++count;
		FibonacciArray(max, count, previous, nextNumber);
	}
}

int Sum(int numberOne, int numberTwo)
{
	int result = numberOne + numberTwo;
	return result;
}

int Subtract(int numberOne, int numberTwo)
{
	int result = numberOne - numberTwo;
	std::cout << "Resultat oduzimanja " << numberOne << " i " << numberTwo << " je " << result << std::endl;
	return result;
}

int Divide(int numberOne, int numberTwo)
{
	if (numberTwo != 0)
	{
		int result = numberOne / numberTwo;
		std::cout << "Resultat dijeljenja " << numberOne << " i " << numberTwo << " je " << result << std::endl;
		return result;
	}
	std::cout << "Error: Cannot divide by Zero" << std::endl;
	return -1;
}

int Multiply(int numberOne, int numberTwo)
{
	int result = numberOne * numberTwo;
	std::cout << "Rezultat mnozenja " << numberOne << " i " << numberTwo << " je " << result << std::endl;
	return result;
}

/*
   0    1   2    3
| 115 | 5 | 6 | 10 |
*/
int main()
{
	machina::cout("Machina output string");
	int twoDimensionalArray[3][3] =
	{	// y os
		{1, 5, 7}, // x os
		{8, 3, 9},
		{2, 4, 6}
	};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << "[" << twoDimensionalArray[i][j] << "] ";
		}
		std::cout << std::endl;
	}

	int threeDimensionalArray[3][3][3] =
	{	
		{
			{1, 5, 7},
			{8, 3, 9},
			{2, 4, 6}
		},
		{
			{10, 50, 70},
			{80, 30, 90},
			{20, 40, 60}
		},
		{
			{100, 500, 700},
			{800, 300, 900},
			{200, 400, 600}
		},
	};

	std::cout << threeDimensionalArray[1][2][0] << std::endl;
	int unos;
	std::cin >> unos;


	int matrix[4][4] =
	{	// y os
		{1, 5, 7, 4}, // x os
		{8, 3, 9, -1},
		{2, 4, 6, -15},
		{5, -3, 6, 12}
	};

	int leftDiagonal = 0;
	int rightDiagonal = 0;
	int size = 4;
	for ( int i = 0; i < 4; i++)
	{
		leftDiagonal += matrix[i][i];
		rightDiagonal += matrix[--size][i];
	}

	std::cout << leftDiagonal - rightDiagonal << std::endl;
	if (leftDiagonal - rightDiagonal == 0)
	{
		std::cout << "Matrica je najljepsa!" << std::endl;
	}
	else
	{
		std::cout << "Matrica je losa!" << std::endl;
	}

	system("pause");
}