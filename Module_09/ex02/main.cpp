#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac < 2)
		return std::cout << ARG_ERR1 << std::endl, 1;

	PmergeMe	pmergeMe;
	pmergeMe.init_data(ac, av);
	pmergeMe.sortVector();
	pmergeMe.sortDeque();
}
