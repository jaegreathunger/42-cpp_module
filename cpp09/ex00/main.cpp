#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	BitcoinExchange btc;
	if (argc != 2) {
		std::cerr << "Wrong Arguments." << std::endl;
		return 1;
	}
	btc.storeDataVec("data.csv");
	btc.storeInputVec(argv[1]);
	btc.perform();
	return 0;
}
