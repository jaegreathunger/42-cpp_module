#pragma once

#include <iostream>

class Data
{
	private:
		int _value;

		Data();

	public:
		Data(int value);
		~Data();

		int getValue() const;
};
