#include "Serialization.hpp"

int main()
{
	Data *temp = new Data(42, 123.123f, 456.456);

	uintptr_t serializedPtr = Serialization::serialize(temp);
	std::cout << serializedPtr << std::endl;

	Data *deserializedPtr = Serialization::deserialize(serializedPtr);
	std::cout << deserializedPtr->getIntValue() << std::endl;
	std::cout << deserializedPtr->getFloatValue() << std::endl;
	std::cout << deserializedPtr->getDoubleValue() << std::endl;

	delete temp;
	return 0;
}
