#pragma once

#include <iostream>
#include <exception>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <iterator>

class OccurrenceNotFound: public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return "Error: Occurrence Not Found!";
		}
};

// typename T::iterator == this allows the associative containers
template <typename T>
typename T::iterator easyfind(T &container, int target)
{
	typename T::iterator it = std::find(container.begin(), container.end(), target);
	if (it != container.end())
		return it;
	else
		throw OccurrenceNotFound();
}
