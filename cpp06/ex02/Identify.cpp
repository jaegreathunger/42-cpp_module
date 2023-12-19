#include "ex02.hpp"

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A*" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B*" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C*" << std::endl;
	else
		std::cout << "Nullptr" << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A&" << std::endl;
		return;
	}
	catch(const std::exception& e) {}

	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B&" << std::endl;
		return;
	}
	catch(const std::exception& e) {}

	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C&" << std::endl;
		return;
	}
	catch(const std::exception& e) {}
}
