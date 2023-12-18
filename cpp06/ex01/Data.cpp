#include "Data.hpp"

Data::Data() {}

Data::Data(int iValue, float _fValue, double _dValue): _iValue(iValue), _fValue(_fValue), _dValue(_dValue) {}

Data::~Data() {}

int Data::getIntValue() const
{
	return _iValue;
}

float Data::getFloatValue() const
{
	return _fValue;
}

double Data::getDoubleValue() const
{
	return _dValue;
}
