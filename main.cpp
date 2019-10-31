#include <iostream>
#include <vector>
/*vektor intova, u vektor cete staviti brojeve od 1 do 20 koji su djeljivi sa brojem 3,
  napisati funkciju koja ce ispisati taj vektor, *na to da ne smije se taj vektor 
  kopirati prilikom slanja u funkciju*
  */

void ipsisi_bez_kopije(const std::vector<int>& v)
{
	for (const auto& i : v)
	{
		std::cout << i << std::endl;
	}
}
int main()
{
	std::vector<int> v;



	for (int i = 0; i != 20; ++i)
	{
		if (i % 3 == 0)
		{
			v.push_back(i);
		}
	}

	ipsisi_bez_kopije(v);

}
