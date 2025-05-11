#pragma once

#include <iostream>
#include <algorithm>	// inplace_merge()
#include <cstdlib>		// std::strtod()
#include <cmath>		// std::pow()
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

typedef	std::vector <int>					Vector;
typedef	std::vector <std::pair<int, int> >	VectorPair;

typedef	std::deque <int>					Deque;
typedef	std::deque <std::pair<int, int> >	DequePair;

class PmergeMe
{
private:
	size_t	ArgsNumber;
	Vector	JSequence;
	Vector	vec;
	Deque	deq;

 	Vector	JacobSthalSequence( void );

	template < typename Container, typename PairedContainer>
	PairedContainer	makePairs(const Container &C, PairedContainer &pairs);

	template < typename Container, typename PairedContainer>
	void	splitPairs	(	PairedContainer &,
							Container &,
							Container &
						);

	void	mergeSortVector	(	Vector::iterator begin,
								Vector::iterator end
							);
	void	insertSmallElementsVec	(	Vector &bigElements,
										const Vector &smallElements
									);

	void	mergeSortDeque	(	Deque::iterator begin,
								Deque::iterator end
							);
	void	insertSmallElementsDeq	(	Deque &bigElements,
										const Deque &smallElements
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