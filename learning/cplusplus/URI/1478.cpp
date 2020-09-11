#include <iostream>
#include <vector>

int main()
{
	
	int i, j, n, cont, quantSubtrai, operador = 1;

	std::cin >> n;
	do
	{
		std::vector< std::vector<int> > myVector(n, std::vector<int>(n));

		for(i = 0, cont=i+1, quantSubtrai = i; 	i < n;	i++, quantSubtrai = i, cont=i+1)
		{
			for(j = 0 	; j < n;	 j++, cont+=operador)
			{
				myVector[i][j] = cont;
				if(quantSubtrai>0)
				{
					operador=-1;
					quantSubtrai--;
				}
				else
					operador=1;

			}
		}

		for(i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
			{
				if(j==0)
					std::cout << std::right << "  " << myVector[i][j];
				else 
					std::cout << std::right << "   " << myVector[i][j];
			}
			std::cout << std::endl;
		}

		myVector.clear();
		
		std::cin >> n;
		if(n>0)
			std::cout << std::endl;
	}
	while(n>0);

	return 0;

}