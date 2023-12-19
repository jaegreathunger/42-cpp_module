#pragma once

#include <iostream>

template <typename T>
class Array
{
	private:
		T 				*_data;
		unsigned int	_length;

	public:
		Array(): _data(nullptr), _length(0)
		{
			std::cout << "Empty Array created" << std::endl;
		}

		Array(unsigned int const n): _length(n)
		{
			_data = new T[n];
			std::cout << "Array created" << std::endl;
		}

		Array(Array const &obj): _length(obj._length)
		{
			_data = new T[_length];
			for (unsigned int i = 0; i < _length; i++)
			{
				_data[i] = obj._data[i];
			}
			std::cout << "Copy constructor Array" << std::endl;
		}

		Array &operator=(Array const &rhs)
		{
			_length = rhs._length;
			delete[] _data;
			_data = new T[_length];
			for (unsigned int i = 0; i < _length; i++)
			{
				_data[i] = rhs._data[i];
			}
			std::cout << "Copy operator= Array" << std::endl;
			return *this;
		}

		~Array()
		{
			if (_data != NULL)
				delete[] _data;
			std::cout << "Array _data deleted" << std::endl;
		}

		T &operator[](unsigned int i)
		{
			if (i >= _length)
			{
				throw OutOfBounds();
			}
			return _data[i];
		}

		T const &operator[](unsigned int i) const
		{
			if (i >= _length)
			{
				throw OutOfBounds();
			}
			return _data[i];
		}

		int size(void) const
		{
			return _length;
		}

		class OutOfBounds: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Out of Bounds!";
				}
		};
};
