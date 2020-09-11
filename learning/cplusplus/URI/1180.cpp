#include <iostream>

int main ()
{
	int n, x, i, menor, posMenor;

	std::cin >> n;
	if(n>0)
		std::cin >> x;
	menor = x;
	posMenor = 0;
	for(i = 1; i < n; i++)
	{
		std::cin >> x;
		if(x < menor)
		{
			menor = x;
			posMenor = i;
		}
	}

	std::cout << "Menor valor: " << menor << std::endl;
	std::cout << "Posicao: " << posMenor << std::endl;

	return 0;
}