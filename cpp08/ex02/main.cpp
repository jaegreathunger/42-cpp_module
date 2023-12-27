#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	for (int i = 42; i < 50; i++)
	{
		mstack.push(i);
	}

	std::cout << "Size: " << mstack.size() << std::endl;
	std::cout << "Top: " << mstack.top() << std::endl;

	mstack.pop();
	std::cout << "Top number is gone" << std::endl;

	std::cout << "Size: " << mstack.size() << std::endl;
	std::cout << "Top: " << mstack.top() << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	std::cout << *it << std::endl;
	--it;
	std::cout << *it << std::endl;

	std::cout << "--Stack--" << std::endl;
	while (it != ite)
	{
		--ite;
		std::cout << *ite << std::endl;
	}
	std::cout << "--Stack--" << std::endl;


	std::stack<int> s(mstack);
	std::cout << "--Copied Stack--" << std::endl;
	while (!s.empty())
	{
		std::cout << s.top() << std::endl;
		s.pop();
	}
	std::cout << "--Copied Stack--" << std::endl;
	return 0;
}

//int main()
//{
//	MutantStack<int> mstack;

//	mstack.push(5);
//	mstack.push(17);

//	std::cout << mstack.top() << std::endl;
//	mstack.pop();
//	std::cout << mstack.size() << std::endl;

//	mstack.push(3);
//	mstack.push(5);
//	mstack.push(737);
//	//[...]
//	mstack.push(0);

//	MutantStack<int>::iterator it = mstack.begin();
//	MutantStack<int>::iterator ite = mstack.end();

//	++it;
//	--it;

//	while (it != ite)
//	{
//		std::cout << *it << std::endl;
//		++it;
//	}

//	std::stack<int> s(mstack);
//	return 0;
//}
