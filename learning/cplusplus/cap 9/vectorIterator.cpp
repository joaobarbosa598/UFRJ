#include <vector>
#include <iostream>

int main()
{
	std::vector<int> v = { 1, 2, 3, 4, 5}; //initialize vector using an initializer_list

	int x = v[0];
	//int x = v.at(0); // outra maneira de acessar o elemento, usandou ma funcao
	std::cout << x << std::endl;
	for(std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)	//v.begin() retorna um iterador e nao um numero
	{
		std::cout << *it << " ";

	}
	return 0;
}