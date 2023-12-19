#include "ex02.hpp"

Base *generate(void)
{
	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	int randomNumber = (std::rand() % 3) + 1;

	switch (randomNumber)
	{
		case 1:
			return new A();
		case 2:
			return new B();
		default:
			return new C();
	}
}
