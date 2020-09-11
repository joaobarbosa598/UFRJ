#include <iostream>
using namespace std;

int main()
{
	float total = 0;
	for(float a = 0; a <=2 ; a+=0.01f)
	{
		total+= a;
	}

	std::cout << total << std::endl;

	double a = 0.1;
	double b = 0.2;
	double c = 0.3;

	if( a+b == c )
	{
		std::cout << "This computer is magic!!" << std::endl;
	}
	else
	{
		std::cout << "This computer is pretty normal, all things considered" << std::endl;
	}
}