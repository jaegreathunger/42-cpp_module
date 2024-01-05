#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(std::list<int> const &usList, std::deque<int> const &usDeque)\
	: _unsortedList(usList), _unsortedDeque(usDeque) {}

PmergeMe::PmergeMe(PmergeMe const &obj) {
	*this = obj;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &rhs) {
	_unsortedList = rhs._unsortedList;
	return *this;
}

PmergeMe::~PmergeMe() {}

std::list<int> &PmergeMe::getUnsortedList(void) {
	return _unsortedList;
}

std::list<int> &PmergeMe::getSortedList(void) {
	return _sortedList;
}

std::deque<int> &PmergeMe::getUnsortedDeque(void) {
	return _unsortedDeque;
}

std::deque<int> &PmergeMe::getSortedDeque(void) {
	return _sortedDeque;
}

void PmergeMe::generateLD(int argc, char **argv) {
	if (argc < 2) {
		std::cerr << "Error: Wrong Arguments" << std::endl;
		exit(1);
	}

	int i = 1;
	while (i < argc) {
		try
		{
			int temp = std::stoi(argv[i]);
			if (temp < 0) {
				std::cerr << "Error: Positive Only" << std::endl;
				exit(1);
			}
			_unsortedList.push_back(temp);
			_unsortedDeque.push_back(temp);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error: Wrong input" << std::endl;
			exit(1);
		}
		i++;
	}
	std::cout << "List Before: ";
	print(_unsortedList);
	std::cout << "Deque Before: ";
	print(_unsortedDeque);
}

template <typename T>
void PmergeMe::print(T &container) {
	for (typename T::iterator it = container.begin(); it != container.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

std::list<int> PmergeMe::insertionList(std::list<int> &curList) {
	std::list<int>::iterator it1, it2;

	for (it1 = ++curList.begin(); it1 != curList.end(); ++it1) {
		int temp = *it1;
		it2 = it1;
		while (it2 != curList.begin() && *(std::prev(it2)) > temp) {
			*it2 = *(std::prev(it2));
			std::advance(it2, -1);
		}
		*it2 = temp;
	}

	_sortedList = curList;
	return curList;
}

std::list<int> PmergeMe::mergeList(std::list<int> &left, std::list<int> &right) {
	std::list<int> result;

	while (!left.empty() && !right.empty()) {
		if (left.front() <= right.front()) {
			result.push_back(left.front());
			left.pop_front();
		} else {
			result.push_back(right.front());
			right.pop_front();
		}
	}

	while (!left.empty()) {
		result.push_back(left.front());
		left.pop_front();
	}

	while (!right.empty()) {
		result.push_back(right.front());
		right.pop_front();
	}

	_sortedList = result;
	return result;
}

std::list<int> PmergeMe::mergeInsertList(std::list<int> &curList) {
	if (curList.size() > 100) {
		std::list<int> left, right;
		int mid = curList.size() / 2;

		std::list<int>::iterator it = curList.begin();
		for (int i = 0; i < mid; i++) {
			left.push_back(*it);
			++it;
		}

		for (size_t j = mid; j < curList.size(); j++) {
			right.push_back(*it);
			++it;
		}

		left = mergeInsertList(left);
		right = mergeInsertList(right);
		return mergeList(left, right);
	}
	return insertionList(curList);
}

std::deque<int> PmergeMe::insertionDeque(std::deque<int> &curDeque) {
	std::deque<int>::iterator it1, it2;

	for (it1 = ++curDeque.begin(); it1 != curDeque.end(); ++it1) {
		int temp = *it1;
		it2 = it1;
		while (it2 != curDeque.begin() && *(std::prev(it2)) > temp) {
			*it2 = *(std::prev(it2));
			std::advance(it2, -1);
		}
		*it2 = temp;
	}

	_sortedDeque = curDeque;
	return curDeque;
}

std::deque<int> PmergeMe::mergeDeque(std::deque<int> &left, std::deque<int> &right) {
	std::deque<int> result;

	while (!left.empty() && !right.empty()) {
		if (left.front() <= right.front()) {
			result.push_back(left.front());
			left.pop_front();
		} else {
			result.push_back(right.front());
			right.pop_front();
		}
	}

	while (!left.empty()) {
		result.push_back(left.front());
		left.pop_front();
	}

	while (!right.empty()) {
		result.push_back(right.front());
		right.pop_front();
	}

	_sortedDeque = result;
	return result;
}

std::deque<int> PmergeMe::mergeInsertDeque(std::deque<int> &curDeque) {
	if (curDeque.size() > 80) {
		std::deque<int> left, right;
		int mid = curDeque.size() / 2;

		std::deque<int>::iterator it = curDeque.begin();
		for (int i = 0; i < mid; i++) {
			left.push_back(*it);
			++it;
		}

		for (size_t j = mid; j < curDeque.size(); j++) {
			right.push_back(*it);
			++it;
		}

		left = mergeInsertDeque(left);
		right = mergeInsertDeque(right);
		return mergeDeque(left, right);
	}
	return insertionDeque(curDeque);
}
