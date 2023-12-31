#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>

class BitcoinExchange
{
	private:
		std::vector<std::string> _dataVec;
		std::vector<std::string> _inputVec;

	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &obj);
		BitcoinExchange &operator=(BitcoinExchange const &rhs);
		~BitcoinExchange();

		std::vector<std::string> getDataVec() const;
		std::vector<std::string> getInputVec() const;

		void storeDataVec(std::string const &fileName);
		void storeInputVec(std::string const &fileName);

		void perform(void) const;

		void printVec(void);
		void printInputVec(void);
};
