#include "Span.hpp"

Span::Span(): N(0) {}

Span::Span(unsigned int const n): N(n) {}

Span::Span(Span const &obj)
{
	*this = obj;
}

Span &Span::operator=(Span const &rhs)
{
	this->N = rhs.N;
	for (unsigned int i = 0; i < rhs.N; i++)
		_data[i] = rhs._data[i];
	return *this;
}

int &Span::operator[](unsigned int i)
{
	if (i >= N)
		throw OutOfBounds();

	return _data[i];
}

Span::~Span() {}

unsigned int Span::getN() const
{
	return N;
}

std::vector<int> Span::getVec() const
{
	return _data;
}

void Span::addNumber(int nbr)
{
	if (_data.size() >= N)
		throw OutOfBounds();

	_data.push_back(nbr);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_data.size() >= N)
		throw OutOfBounds();

	_data.insert(_data.end(), begin, end);
}

unsigned int Span::shortestSpan(void) const
{
	std::vector<int> temp(this->_data);
	std::sort(temp.rbegin(), temp.rend());
	unsigned int result;

	if (_data.size() <= 1)
		throw NotEnoughElement();
	else if (_data.size() == 2)
		result = temp[0] - temp[1];
	else
	{
		result = temp[0] - temp[1];
		for (unsigned int i = 0; i < N - 1; i++)
		{
			unsigned int next = temp[i] - temp[i + 1];
			if (result > next)
				result = next;
		}
	}
	return result;
}

unsigned int Span::longestSpan(void) const
{
	std::vector<int> temp(this->_data);
	unsigned int result;

	if (_data.size() <= 1)
		throw NotEnoughElement();
	else if (_data.size() == 2)
	{
		std::sort(temp.rbegin(), temp.rend());
		result = temp[0] - temp[1];
	}
	else
	{
		unsigned int max = *std::max_element(_data.begin(), _data.end());
		unsigned int min = *std::min_element(_data.begin(), _data.end());

		result = max - min;
	}
	return result;
}

std::ostream &operator<<(std::ostream &os, const Span &span)
{
	std::vector<int> temp = span.getVec();
	std::vector<int>::iterator it;
	for (it = temp.begin(); it != temp.end(); it++)
	{
		os << *it << " ";
	}
	return os;
}
