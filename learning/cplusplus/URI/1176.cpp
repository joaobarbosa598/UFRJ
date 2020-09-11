#include <iostream>
#include <vector>

int main()
{
	int T, n, i;
	long long int f0, f1, fn;
	std::vector<long long int> fibo;

	std::cin >> T;

	fibo.push_back(0);
	fibo.push_back(1);
	for(i = 2, f0 = 0, f1= 1, fn = 0; i <= 62; i++)
	{
		fn = f0+f1;
		f0 = f1;
		f1 = fn;
		fibo.push_back(fn);
	}

	for(i = 0; i < T; i++)
	{
		std::cin >> n;		
		std::cout << "Fib(" << n << ") = " << fibo.at(n) << std::endl;
	}
	return 0;

}

/*
0 	0
1 	0+1
2	1+1
3 	2+1
4	3+2
*/