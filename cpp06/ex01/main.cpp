#include "Serialization.hpp"

int main()
{
	Data *temp = new Data(42);
	uintptr_t serializedPtr = Serialization::serialize(temp);
	std::cout << serializedPtr << std::endl;
	Data *deserializedPtr = Serialization::deserialize(serializedPtr);
	std::cout << deserializedPtr->getValue() << std::endl;

	delete temp;
	return 0;
}
