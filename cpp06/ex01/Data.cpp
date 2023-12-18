#include "Data.hpp"

Data::Data() {}

Data::Data(int value): _value(value) {}

Data::~Data() {}

int Data::getValue() const
{
	return _value;
}
