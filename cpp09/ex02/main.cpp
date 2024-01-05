#include "PmergeMe.hpp"

int main(int argc, char **argv) {
	PmergeMe pmm;
	pmm.generateLD(argc, argv);

	clock_t start1 = clock();
	pmm.mergeInsertList(pmm.getUnsortedList());
	clock_t end1 = clock();
	double time1 = static_cast<double>(end1 - start1) / CLOCKS_PER_SEC * 1000;

	clock_t start2 = clock();
	pmm.mergeInsertDeque(pmm.getUnsortedDeque());
	clock_t end2 = clock();
	double time2 = static_cast<double>(end2 - start2) / CLOCKS_PER_SEC * 1000;

	std::cout << "List After: ";
	pmm.print(pmm.getSortedList());
	std::cout << "Deque After: ";
	pmm.print(pmm.getSortedDeque());
	std::cout << "Time to process a range of " << pmm.getSortedList().size() << \
		" elements with std::list : " << time1 << " us" << std::endl;
	std::cout << "Time to process a range of " << pmm.getSortedDeque().size() << \
		" elements with std::deque : " << time2 << " us" << std::endl;
	return 0;
}
