#include <iostream>
using namespace std;

template <typename T>
T rightmostSetBitRemoved(T n)
{
	return n & (n-1);
	//no caso temos
	//5 = 0101
	//4 = 0100
	//0101 
	//0100 &
	//0100 como resultado 

}

int main()
{

	std::cout << rightmostSetBitRemoved<int>(5) << std::endl;
}