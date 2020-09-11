#include <iostream>
#include <vector>

int main()
{
	int T, i, Tcopy;
	std::vector<int> myVector;

	std::cin >> T;
	Tcopy = T;
	for(i = 0; i < 1000; i++, Tcopy--)
	{
		myVector.push_back(T - Tcopy);
		std::cout << "N[" << i << "] = " << myVector.at(i) << std::endl;
		if(Tcopy==1)
			Tcopy=T+1;
	}

	return 0;
}