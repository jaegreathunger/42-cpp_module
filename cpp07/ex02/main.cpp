#include <iostream>
#include "Array.hpp"

#define MAX_VAL 10
int main(void)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));

	// access
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
		std::cout << numbers[i] << " ";
        mirror[i] = value;
		std::cout << mirror[i] << " ";
		std::cout << std::endl;
    }

    //SCOPE
    {
		Array<int> emptyArray;
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

	// out of bounds
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	// out of bounds
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	// const operator[]
	Array<int> const temp(numbers);
    for (int i = 0; i < MAX_VAL; i++)
    {
		//temp[i] = rand();
        std::cout << "temp: " << temp[i] << std::endl;
    }

    delete [] mirror;
    return 0;
}
