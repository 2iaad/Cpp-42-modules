#pragma once

#include <iostream>
#include <limits>
#include <vector>
#include <deque>

#include <stdio.h>

#define	ARG_ERR1 "Wrong number of arguments."
#define	ARG_ERR2 "Bad arguments."

template <typename Container>
void	printer(Container _c)
{
	typename Container::iterator it = _c.begin();

	std::cout << "\033[1;33m-------\033[0m" << std::endl;
	while (it != _c.end())
	{
		std::cout << *it;
		it++;

		if (it != _c.end())
            std::cout << " ";
		else
            std::cout << std::endl;
	}
	std::cout << "\033[1;33m-------\033[0m" << std::endl;
}

class PmergeMe
{
private:
	std::vector	< int >	vec;
	std::deque	< int >	deq;

	std::vector <std::pair<int, int> >	makeVectorPairs( void );
	void	splitVectorPairs(	std::vector <std::pair<int, int> > &,
								std::vector <int> &,
								std::vector <int> &
							);
	void	fusionSortVector(
								std::vector<int>::iterator begin,
								std::vector<int>::iterator end
							);
	void	insertSmallElementsVec	(	std::vector<int> &bigElements,
										const std::vector<int> &smallElements
									);

public:
	PmergeMe();
	PmergeMe(const PmergeMe &other);
	PmergeMe	&operator=(const PmergeMe	&other);
	~PmergeMe();

	void	init_data(int ac, char **av);
	void	sortVector( void );
	void	sortDeque( void );
};