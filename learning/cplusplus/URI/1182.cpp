#include <iostream>
#include <vector>
#include <string.h>

int main()
{
	std::vector<std::vector<float> > matrix(12, std::vector<float>(12));

	char operation[5], average[5] = "M", sum1[5] = "S";
	int column;
	float sum = 0.0;

	std::cin >> column;
	std::cin >> operation;

	for(int i = 0; i < 12; i ++)
	{
		for(int j = 0; j < 12; j++)
		{
			std::cin >> matrix[i][j];
			if(column==j)
			{
				sum+=matrix[i][j];
			}
		}
	}

	if(strcmp(operation,sum1)==0)
	{
		std::cout.precision(1);
		std::cout << std::fixed << sum << std::endl;
	}
	else if(strcmp(operation,average)==0)
	{
		std::cout.precision(1);
		std::cout << std::fixed << sum/12 << std::endl;
	}
	else
		std::cout << "Invalid operation" << std::endl;

	return 0;
}