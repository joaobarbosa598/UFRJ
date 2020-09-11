#include <iostream>
#include <vector>
//using namespace std;	//usar essa linha importa todo o namespace, porem eu nao preciso usar o std::cout

int main()
{
	std::vector<int> v = {1, 2, 3, 4, 5};

	for(std::vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); ++it)
	{
		std::cout << *it << std::endl;
	}
}