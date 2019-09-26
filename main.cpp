#include <iostream>
#include <string>

/*
napisati prvi broj koji je djeljiv sa svim brojevima u intervalu od 0-10
*/

/*
		nadopuniti program tako da ovo radi : 
		int main()
		{
			std::coun<< number++ << std::endl;
			std::cout<<++number<<std::endl;
		}

*/
int main()
{
	int i = 12;
	for ( ; ; ++i)
	{
		bool ivanovaCigareta = true;
		for (int j = 1; j <= 4; ++j)
		{
			if (i % j != 0)
			{
				ivanovaCigareta = false;
				break;
			}
		}
		if (ivanovaCigareta == true)
		{
			std::cout << i << std::endl;
			break;
		}
	}
}