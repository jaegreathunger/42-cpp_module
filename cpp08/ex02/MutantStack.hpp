#pragma once

#include <iostream>
#include <exception>
#include <vector>
#include <stack>
#include <list>
#include <deque>
#include <algorithm>
#include <iterator>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(): std::stack<T>() {}
		MutantStack(MutantStack const &obj) { *this = obj; }
		MutantStack &operator=(MutantStack const &rhs)
		{
			if (this != rhs)
				std::stack<T>::operator=(rhs);
			return *this;
		}
		~MutantStack() {}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin()
		{
			return std::stack<T>::c.begin();
		}

		iterator end()
		{
			return std::stack<T>::c.end();
		}
};
