#include <iostream>
#include <vector>

int main()
{
	int i, j, n, cont;

	std::cin >> n;

	do
	{
		std::vector< std::vector<int> > myVector( n, std::vector<int>(n));

		for(i = 0, cont = 1; i < n; i++)
		{
			for(j = 0; j < n; j++)
			{
				if(i==n-1 || i==0 || j==n-1 || j==0)
					myVector[i][j] = cont;
				else
					myVector[i][j] = cont+1;
			}
		}

		for(i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
			{
				if(j==0)
					std::cout << std::right << myVector[i][j];
				else 
					std::cout << std::right << "   " << myVector[i][j];
			}
			std::cout << std::endl;
		}

		myVector.clear();
		
		std::cin >> n;
	}
	while(n > 0);
}