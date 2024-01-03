#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(std::stack<int> const &numStack): _numStack(numStack) {}

RPN::RPN(RPN const &obj) {
	*this = obj;
}

RPN &RPN::operator=(RPN const &rhs) {
	_numStack = rhs._numStack;
	return *this;
}

RPN::~RPN() {}

std::stack<int> RPN::getStack(void) const {
	return _numStack;
}

bool RPN::isInteger(std::string str) {
	try {
		std::stoi(str);
		return true;
	} catch (...) {
		return false;
	}
}

bool RPN::isOperation(std::string str) {
	if (str == "+" || str == "-" || str == "*" || str == "/") {
		return true;
	}
	return false;
}

void RPN::checkValidity(int argc, std::string argv) {
	if (argc != 2) {
		std::cerr << "Wrong arguments" << std::endl;
		exit(1);
	}

	std::istringstream iss(argv);
	std::string token;
	int numOfDigits = 0;
	int numOfOperations = 0;

	while (std::getline(iss, token, ' ')) {
		if (isInteger(token)) {
			numOfDigits++;
		} else if (isOperation(token)) {
			numOfOperations++;
		} else {
			std::cerr << "Error" << std::endl;
			exit(1);
		}
	}

	if (numOfDigits != numOfOperations + 1) {
		std::cerr << "Error" << std::endl;
		exit(1);
	}
}

int operate(std::string operation, int lhs, int rhs) {
	if (operation == "+") {
		return lhs + rhs;
	} else if (operation == "-") {
		return lhs - rhs;
	} else if (operation == "*") {
		return lhs * rhs;
	} else {
		return lhs / rhs;
	}
}

void RPN::perform(int argc, std::string input) {
	checkValidity(argc, input);

	std::istringstream iss(input);
	std::string token;
	int result = 0;

	while (std::getline(iss, token, ' ')) {
		if (isInteger(token)) {
			_numStack.push(std::stoi(token));
		} else if (isOperation(token)) {
			int rhs = _numStack.top();
			_numStack.pop();
			int lhs = _numStack.top();
			_numStack.pop();
			result = operate(token, lhs, rhs);
			_numStack.push(result);
		}
	}
	std::cout << result << std::endl;
}
