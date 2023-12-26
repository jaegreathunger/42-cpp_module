#pragma once

#include <iostream>
#include <exception>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <iterator>

class Span
{
	private:
		std::vector<int> _data;
		unsigned int N;

		Span();

	public:
		Span(unsigned int const n);
		Span(Span const &obj);
		Span &operator=(Span const &rhs);
		int &operator[](unsigned int i);
		~Span();

		unsigned int getN() const;
		std::vector<int> getVec() const;

		void addNumber(int nbr);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		unsigned int shortestSpan(void) const;
		unsigned int longestSpan(void) const;

	class OutOfBounds: public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return "Error:: Out of Bounds!";
			}
	};

	class NotEnoughElement: public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return "Error:: Not Enough Element!";
			}
	};
};

std::ostream &operator<<(std::ostream &os, const Span &span);
