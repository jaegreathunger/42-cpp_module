#include "iter.hpp"

int main()
{
	int intArray[] = {1, 2, 3, 4, 5};
	char charArray[] = {'a', 'b', 'c', 'd', 'e'};

	std::cout << "int array - ";
	::iter(intArray, 5, ::increment<int>);
	std::cout << std::endl;

	std::cout << "int array - ";
	::iter(intArray, 5, ::decrement<int>);
	std::cout << std::endl;

	std::cout << "char array - ";
	::iter(charArray, 5, ::increment<char>);
	std::cout << std::endl;

	std::cout << "char array - ";
	::iter(charArray, 5, ::decrement<char>);
	std::cout << std::endl;
}
