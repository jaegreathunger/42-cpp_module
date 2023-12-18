#pragma once

#include <iostream>
#include "Data.hpp"

class Data;

class Serialization
{
	private:
		Serialization();

	public:
		~Serialization();

		static uintptr_t serialize(Data *ptr);

		static Data* deserialize(uintptr_t raw);
};
