#include <iostream>
#include <vector>
#include <sstream> 
#include <iterator>

int main()
{
	std::istringstream istr("1\t 2     3 4");
	std::vector<int> v;

	std::copy(
		std::istream_iterator<int>(istr),
		std::istream_iterator<int>(),
		std::back_inserter(v)
		);

	std::copy(
		v.begin(),
		v.end(),
		std::ostream_iterator<int>(std::cout, " -- ")
		);

}