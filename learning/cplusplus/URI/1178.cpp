#include <iostream>
#include <vector>

int main()
{
	double x;
	int i;
	std::vector<double> myVector;

	std::cin >> x;

	for(i = 0; i < 100; i++, x=x/2)
	{
		myVector.push_back(x);
	}

	for(i = 0; i < 100; i++)
	{
		std::cout.precision(4);
		std::cout << "N[" << i << "] = " << std::fixed << myVector[i] << std::endl;
	}

	return 0;
}