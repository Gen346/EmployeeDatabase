#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vec;

	std::cout << "vec.size() = " << vec.size() << std::endl;

	vec.push_back(4);

	std::cout << "vec.size() = " << vec.size() << std::endl;
}