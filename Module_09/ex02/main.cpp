#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	PmergeMe	pmergeMe;

	if (ac < 2)
		return std::cout << AC_ERR << std::endl, 1;
	if (!pmergeMe.init_data(ac, av))
		return std::cout << AV_ERR << std::endl, 1;
	pmergeMe.sortVector();
	pmergeMe.sortDeque();
}
