#pragma once

#include <iostream>
#include <algorithm>	// inplace_merge()
#include <cstdlib>		// std::strtod()
#include <cmath>		// std::pow()
#include <ctime>		// std::clock
#include <limits>
#include <vector>
#include <deque>

#include <stdio.h>

#define	AC_ERR	"Wrong number of arguments."
#define	AV_ERR	"Bad arguments."

template <typename Container>
inline void printer(const Container& c) {

    for (typename Container::const_iterator it = c.begin(); it != c.end(); it++)
        std::cout << *it << " ";
	std::cout << std::endl;
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
	void	splitPairs	(PairedContainer &, Container &, Container &);

	void	mergeSortVector	(Vector::iterator begin, Vector::iterator end);
	void	mergeSortDeque	(Deque::iterator begin, Deque::iterator end);
	void	insertSmallElementsVec	(Vector &bigElements, const Vector &smallElements);
	void	insertSmallElementsDeq	(Deque &bigElements, const Deque &smallElements);

public:
	PmergeMe();
	PmergeMe(const PmergeMe &other);
	PmergeMe	&operator=(const PmergeMe	&other);
	~PmergeMe();

	bool	init_data(int ac, char **av);
	void	sortVector( void );
	void	sortDeque( void );
};