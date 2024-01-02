#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &obj)
{
	*this = obj;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
	if (this->_dataVec != rhs._dataVec || this->_inputVec != rhs._inputVec)
		*this = rhs;
	return *this;
}

BitcoinExchange::~BitcoinExchange() {}

std::vector<std::string> BitcoinExchange::getDataVec() const
{
	return _dataVec;
}

std::vector<std::string> BitcoinExchange::getInputVec() const
{
	return _inputVec;
}

void BitcoinExchange::storeDataVec(std::string const &fileName)
{
	std::ifstream dataFile(fileName);
	if (dataFile.is_open()) {
		std::string line;
		while (std::getline(dataFile, line)) {
			_dataVec.push_back(line);
		}
		//printVec();
		dataFile.close();
	} else {
		std::cerr << "Unable to open the dataFile." << std::endl;
		exit(1);
	}
}

void BitcoinExchange::storeInputVec(std::string const &fileName)
{
	std::ifstream inputFile(fileName);
	if (inputFile.is_open()) {
		std::string line;
		while (std::getline(inputFile, line)) {
			_inputVec.push_back(line);
		}
		//printInputVec();
		inputFile.close();
	} else {
		std::cerr << "Unable to open the dataFile." << std::endl;
		exit(1);
	}
}

std::vector<std::string> generateStrVec(std::vector<std::string> vec, char divider, size_t i) {
	std::vector<std::string> result;
	std::string token;
	std::stringstream ss(vec[i]);

	while (std::getline(ss, token, divider))
		result.push_back(token);
	return result;
}

bool validInput(std::vector<std::string> input) {
	if (input[1].length() == 0 || input.size() < 2) {
		return false;
	}
	return true;
}

int convertToInt(std::string const &input)
{
	double temp = atof(input.c_str());

	return static_cast<int>(temp);
}

float convertToFloat(std::string const &input)
{
	double temp = atof(input.c_str());

	return static_cast<float>(temp);
}

void BitcoinExchange::perform(void) const
{
	for (size_t i = 0; i < _inputVec.size(); i++) {
		if (!isdigit(_inputVec[i][0]))
			i++;

		std::vector<std::string> input = generateStrVec(_inputVec, '|', i);
		std::vector<std::string> inputDate = generateStrVec(input, '-', 0);

		if (!validInput(input)) {
			std::cout << "Error: bad input => " << input[0] << std::endl;
			continue;
		} else if (convertToFloat(inputDate[1]) > 12 || convertToFloat(inputDate[2]) > 31) {
			std::cout << "Error: bad input => " << input[0] << std::endl;
			continue;
		}

		try
		{
			if (std::stod(input[1]) < 0) {
				std::cout << "Error: not a positive number." << std::endl;
				continue;
			}
			else if (std::stod(input[1]) > 1000) {
				std::cout << "Error: too large a number." << std::endl;
				continue;
			}
		}
		catch(const std::exception& e)
		{
			std::cout << "Error: Input Not A Number" << std::endl;
			continue;
		}

		for (size_t j = 0; j < _dataVec.size(); j++) {
			std::vector<std::string> data = generateStrVec(_dataVec, ',', j);
			std::vector<std::string> dataDate = generateStrVec(data, '-', 0);

			if ((convertToFloat(inputDate[0]) < convertToFloat(dataDate[0])) ||\
				(convertToFloat(inputDate[0]) == convertToFloat(dataDate[0]) &&\
				convertToFloat(inputDate[1]) < convertToFloat(dataDate[1])) ||\
				(convertToFloat(inputDate[0]) == convertToFloat(dataDate[0]) &&\
				convertToFloat(inputDate[1]) == convertToFloat(dataDate[1]) &&\
				convertToFloat(inputDate[2]) <= convertToFloat(dataDate[2]))) {
				std::cout << input[0] << "=>" << input[1] << " = " \
					<< convertToFloat(input[1]) * convertToFloat(data[1]) << std::endl;
				break;
			}

			if (inputDate[0] == dataDate[0] && inputDate[1] == dataDate[1]) {
				std::vector<std::string> before = generateStrVec(_dataVec, ',', j - 1);
				std::vector<std::string> beforeDate = generateStrVec(before, '-', 0);
				if ((convertToFloat(inputDate[2]) > convertToFloat(beforeDate[2]) &&
					convertToFloat(inputDate[2]) < convertToFloat(dataDate[2])) ||
					(convertToFloat(inputDate[2]) < convertToFloat(dataDate[2]) &&
					convertToFloat(inputDate[1]) > convertToFloat(beforeDate[1])) ||
					(convertToFloat(inputDate[2]) < convertToFloat(dataDate[2]) &&
					convertToFloat(inputDate[1]) < convertToFloat(beforeDate[1]) &&
					convertToFloat(inputDate[0]) > convertToFloat(beforeDate[0]))) {
					std::cout << input[0] << "=>" << input[1] << " = " \
						<< convertToFloat(input[1]) * convertToFloat(before[1]) << std::endl;
					break;
				} else if (j == _dataVec.size() - 1 && inputDate[2] > dataDate[2]) {
					std::cout << input[0] << "=>" << input[1] << " = " \
						<< convertToFloat(input[1]) * convertToFloat(data[1]) << std::endl;
					break;
				}
			} else if (j == _dataVec.size() - 1) {
				std::cout << input[0] << "=>" << input[1] << " = " \
					<< convertToFloat(input[1]) * convertToFloat(data[1]) << std::endl;
				break;
			}
		}
	}
}

void BitcoinExchange::printVec(void)
{
	std::vector<std::string>::iterator it;
	for (it = _dataVec.begin(); it != _dataVec.end(); ++it) {
		std::cout << *it << std::endl;
	}
}

void BitcoinExchange::printInputVec(void)
{
	std::vector<std::string>::iterator it;
	for (it = _inputVec.begin(); it != _inputVec.end(); ++it) {
		std::cout << *it << std::endl;
	}
}

