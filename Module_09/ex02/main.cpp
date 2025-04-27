#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	PmergeMe	pmergeMe;
	if (ac < 2)
		return std::cout << ARG_ERR1 << std::endl, 1;

	pmergeMe.init_data(ac, av);
	pmergeMe.sortVector();
}