#include <iostream>

int main()
{
	int entradas, i, j;
	int  populacaoA, populacaoB;
	float taxaA, taxaB;
	std::cin >> entradas;

	for(i = 0; i < entradas; i++)
	{
		std::cin >> populacaoA;
		std::cin >> populacaoB;
		std::cin >> taxaA;
		std::cin >> taxaB;
		
		for(j = 0; populacaoA <= populacaoB; j++)
		{
			if(j>100)
				break;
			populacaoA = ((taxaA/100)*populacaoA)+populacaoA;
			populacaoB = ((taxaB/100)*populacaoB)+populacaoB;
		}

		if(j>100)
			std::cout << "Mais de 1 seculo." << std::endl;
		else
		{
			std::cout << j << " anos." << std::endl; 
		}
	
	}

	return 0;
}