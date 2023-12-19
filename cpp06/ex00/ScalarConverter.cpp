#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const &obj)
{
	*this = obj;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &rhs)
{
	(void)rhs;
	return *this;
}

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convertToChar(std::string const &input)
{
	double temp = atof(input.c_str());

	if (isnan(temp))
		std::cout << "char: impossible" << std::endl;
	else if (temp >= 32 && temp <= 126)
		std::cout << "char: '" << static_cast<char>(temp) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void ScalarConverter::convertToInt(std::string const &input)
{
	double temp = atof(input.c_str());

	if (isnan(temp) || (temp == 0 && input[0] != '0'))
		std::cout << "int: impossible" << std::endl;
	else if (temp > std::numeric_limits<int>::max())
		std::cout << "int: +inf" << std::endl;
	else if (temp < std::numeric_limits<int>::lowest())
		std::cout << "int: -inf" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(temp) << std::endl;
}

void ScalarConverter::convertToFloat(std::string const &input)
{
	double temp = atof(input.c_str());

	if (isnan(temp) || (temp == 0 && input[0] != '0'))
		std::cout << "float: nanf" << std::endl;
	else if (temp > std::numeric_limits<float>::max())
		std::cout << "float: +inf" << std::endl;
	else if (temp < std::numeric_limits<float>::lowest())
		std::cout << "float: -inf" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(temp) << "f" << std::endl;
}

void ScalarConverter::convertToDouble(std::string const &input)
{
	double temp = atof(input.c_str());

	if (isnan(temp) || (temp == 0 && input[0] != '0'))
		std::cout << "double: nan" << std::endl;
	else if (temp > std::numeric_limits<double>::max())
		std::cout << "double: +inf" << std::endl;
	else if (temp < std::numeric_limits<double>::lowest())
		std::cout << "double: -inf" << std::endl;
	else
		std::cout << "double: " << std::fixed << std::setprecision(1) << (temp) << std::endl;
}

void ScalarConverter::convert(std::string const &input)
{
	convertToChar(input);
	convertToInt(input);
	convertToFloat(input);
	convertToDouble(input);
}
