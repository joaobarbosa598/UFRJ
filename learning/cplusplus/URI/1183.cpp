#include <iostream>
#include <string.h>

// 	Acima da Diagonal Principal
int main ()
{
	float matrix[12][12];
	int i, j, div = 0;

	char operation, average = 'M', sum1 = 'S';

	float sum = 0.0;

	std::cin >> operation;

	for(i = 0; i < 12; i++)
	{
		for(j = 0; j < 12; j++)
		{
			std::cin >> matrix[i][j];
			if(i < j)
			{
				sum+=matrix[i][j];
				div++;
			}
		}
	}

	if(operation==sum1)
	{
		std::cout.precision(1);
		std::cout << std::fixed << sum << std::endl;
	}
	else if(operation==average)
	{
		std::cout.precision(1);
		std::cout << std::fixed << sum/div << std::endl;
	}
	else
		std::cout << "Invalid operation" << std::endl;

	return 0;
}