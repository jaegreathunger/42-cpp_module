#pragma once

#include <iostream>

template <typename T, typename Func>
void iter(T* array, size_t length, Func function)
{
	for (size_t i = 0; i < length; i++)
	{
		function(array[i]);
	}
}

template <typename T>
void increment(T &element)
{
	element++;
	std::cout << element << " ";
}

template <typename T>
void decrement(T &element)
{
	element--;
	std::cout << element << " ";
}
