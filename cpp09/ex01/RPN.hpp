#pragma once

#include <iostream>
#include <stack>
#include <algorithm>
#include <sstream>
#include <string>

class RPN {
	private:
		std::stack<int> _numStack;

	public:
		RPN();
		RPN(std::stack<int> const &numStack);
		RPN(RPN const &obj);
		RPN &operator=(RPN const &rhs);
		~RPN();

		std::stack<int> getStack(void) const;

		bool isInteger(std::string str);
		bool isOperation(std::string str);
		void checkValidity(int argc, std::string argv);

		void perform(int argc, std::string input);
};
