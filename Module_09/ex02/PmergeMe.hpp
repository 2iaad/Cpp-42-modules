#pragma once

#include <iostream>
#include <limits>
#include <vector>
#include <deque>

#include <stdio.h>

#define	ARG_ERR1 "Wrong number of arguments."
#define	ARG_ERR2 "Bad arguments."

template <typename T>
void printElement(const T& element) {
    std::cout << " " << element;
}

template <>
inline void printElement<std::pair<int, int> >(const std::pair<int, int>& p) {
    std::cout << "(" << p.first << ", " << p.second << ")";
}

template <typename Container>
void printer(const Container& c) {
    std::cout << "\033[1;33m-------\033[0m" << std::endl;

    typename Container::const_iterator it = c.begin();
    while (it != c.end())
	{
        printElement(*it);
        ++it;
        if (it != c.end())
			std::cout << "\t";
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
	// void	sortDeque( void );
};