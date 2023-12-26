#include "Span.hpp"

int main(void)
{
	try
	{
		std::srand((unsigned int)time(NULL));
		std::vector<int> vec(5);
		//std::vector<int> vec(100);
		//std::vector<int> vec(10000);
		std::generate(vec.begin(), vec.end(), rand);

		Span sp = Span(vec.size());
		sp.addNumber(vec.begin(), vec.end());

		std::cout << sp << std::endl;

		try
		{
			std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
