#include <iostream>
using namespace std;

int main()
{
	//metodos possiveis de inicializacao de um array, todos estao corretos

	//int arrayOfInts[5];
	int arrayOfInts[5] = {10,20,30,40,50};
	//int arrayOfInts[] = {10,20,30,40,50};
	//int arrayOfInts[5] = {10,20};

	for(int i = 0; i < 5; i++)
		std::cout << arrayOfInts[i] << " ";
	std::cout << std::endl;

}