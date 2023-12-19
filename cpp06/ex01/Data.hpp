#pragma once

#include <iostream>

class Data
{
	private:
		int _iValue;
		float _fValue;
		double _dValue;

		Data();

	public:
		Data(int iValue, float _fValue, double _dValue);
		Data(Data const &obj);
		Data &operator=(Data const &rhs);
		~Data();

		int getIntValue() const;
		float getFloatValue() const;
		double getDoubleValue() const;
};
