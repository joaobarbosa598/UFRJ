#include <iostream>
#include <map>
//using namespace std;

int main()
{
	std::map<int,char> mymap; //um map sempre ordena seus elementos de acordo com seu primeiro elemento, o first

	mymap[300] = 'b';
	mymap[200] = 'a';
	mymap[100] = 'c';

	std::cout << mymap.begin()->first << " " << mymap.begin()->second << std::endl;

	for(std::map<int,char>::iterator it = mymap.begin(); it != mymap.end(); it++)
	{
		std::cout << it->first << " => " << it->second << '\n';
	}

}