#pragma once

#include <iostream>
#include <iomanip> // fixed, precision
#include <limits> // data limits

class ScalarConverter
{
	private:
		ScalarConverter();

	public:
		~ScalarConverter();

		static void convertToChar(std::string const &input);
		static void convertToInt(std::string const &input);
		static void convertToFloat(std::string const &input);
		static void convertToDouble(std::string const &input);

		static void convert(std::string const &input);
};
