#pragma once

#include <iostream>
#include <ctime>
#include <list>
#include <deque>
#include <string>
#include <sstream>

class PmergeMe {
	private:
		std::list<int> _unsortedList;
		std::list<int> _sortedList;
		std::deque<int> _unsortedDeque;
		std::deque<int> _sortedDeque;

	public:
		PmergeMe();
		PmergeMe(std::list<int> const &usList, std::deque<int> const &usDeque);
		PmergeMe(PmergeMe const &obj);
		PmergeMe &operator=(PmergeMe const &rhs);
		~PmergeMe();

		//getters
		std::list<int> &getUnsortedList(void);
		std::list<int> &getSortedList(void);
		std::deque<int> &getUnsortedDeque(void);
		std::deque<int> &getSortedDeque(void);

		//utils
		void generateLD(int argc, char **argv);
		template <typename T>
		void print(T &container);

		//list sort
		std::list<int> insertionList(std::list<int> &curList);
		std::list<int> mergeList(std::list<int> &left, std::list<int> &right);
		std::list<int> mergeInsertList(std::list<int> &curList);

		//deque sort
		std::deque<int> insertionDeque(std::deque<int> &curDeque);
		std::deque<int> mergeDeque(std::deque<int> &left, std::deque<int> &right);
		std::deque<int> mergeInsertDeque(std::deque<int> &curDeque);
};
