#include <iostream>
#include <vector>

#define TESTS 5

int main()
{
	int i;
	float n;
	std::vector<float> myVector;

	for(i = 0; i < TESTS; i++)
	{
		std::cin >> n;
		myVector.push_back(n);
		

		/*if(n <= 10)	//solucao sem o segundo for
		{	
			std::cout.precision(1);
			std::cout << "A[" << i << "] = " << std::fixed << n <<  std::endl; 
		}*/
	}

	for(i = 0; i < TESTS; i++)
	{
		if(myVector.at(i) <= 10)
		{
			std::cout.precision(1);
			std::cout << "A[" << i << "] = " << std::fixed << myVector.at(i) <<  std::endl; 
		}
	}

	return 0;

}