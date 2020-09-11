#include <iostream>
using namespace std;

int add2(int i);

int main()
{
	std::cout << add2(10) << "\n";

	return 0;
}

int add2(int i)
{
	return i+2;
}