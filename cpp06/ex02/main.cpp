#include "ex02.hpp"

int main()
{
	Base *temp = generate();
	identify(temp);
	identify(*temp);

	delete temp;
	return 0;
}
