#include <iostream>

#include <vector>
#include <list>

using data = int;
using cont = std::list<data>;

/*   [prvi] [] [] [] [] [] [] [zadnji] [end]*/
void ispisi_bez_kopije(const cont& v)
{
	for (const auto& i : v)
	{
		std::cout << i << std::endl;
	}
}


int main()
{
	cont lista;
	for (int i = 0; i != 20; ++i)
	{
		if (i % 3 == 0)
		{
			lista.push_back(i);
		}
	}
	ispisi_bez_kopije(lista);
}
