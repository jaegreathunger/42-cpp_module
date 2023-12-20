#include "easyfind.hpp"

int main(void)
{
	std::vector<int> vec;
	std::list<int> list;
	std::deque<int> deque;
	for (int i = 1; i < 6; i++)
	{
		vec.push_back(i);
		list.push_back(i);
		deque.push_back(i);
	}

	try
	{
		std::vector<int>::iterator result = easyfind(vec, 5);
		std::cout << "result: " << *result << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "vector: " << e.what() << std::endl;
	}

	try
	{
		std::list<int>::iterator resultList = easyfind(list, 1);
		std::cout << "result: " << *resultList << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "list: " << e.what() << std::endl;
	}

	try
	{
		std::deque<int>::iterator resultDeque = easyfind(deque, 3);
		std::cout << "result: " << *resultDeque << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "deque: " << e.what() << std::endl;
	}
	return 0;
}
