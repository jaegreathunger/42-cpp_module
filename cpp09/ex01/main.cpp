#include "RPN.hpp"

int main(int argc, char **argv) {
	RPN rpn;
	rpn.perform(argc, argv[1]);
	return 0;
}
