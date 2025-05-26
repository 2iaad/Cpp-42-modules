#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
	// std::cout << "PmergeMe Constructor called!" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &other) : vec(other.vec), deq(other.deq) {
	// std::cout << "PmergeMe Copy Constructor called" << std::endl;
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &other) {
    if (this != &other) {
		vec = other.vec;
		deq = other.deq;
	}
	// std::cout << "PmergeMe Copy Assignment Operator called" << std::endl;
    return *this;
}

PmergeMe::~PmergeMe() {
	// std::cout << "PmergeMe Destructor called" << std::endl;
}

/*	|#------------------------------------------------------#|
	|#			 		Public Member functions    			#|
	|#------------------------------------------------------#|
*/

bool	PmergeMe::init_data(int ac, char **av)
{
	double	tmp = 0;

	this->ArgsNumber = ac - 1;
	this->JSequence = JacobSthalSequence();
	for (int i = 1; i < ac; i++)
	{
		tmp = std::strtod(av[i], NULL);

		for (int j = 0; av[i][j]; j++)
			if (!std::isdigit(av[i][j]))
				return false;
		if (!(*av[i]) || tmp < 0 || tmp > std::numeric_limits<int>::max() ||
			std::find(vec.begin(), vec.end(), tmp) != vec.end()	)
			return false;
		this->vec.push_back(tmp);
		this->deq.push_back(tmp);
	}
	return true;
}

Vector PmergeMe::JacobSthalSequence()
{
	size_t	n = 0, PreviousN = 0, CurrentN = 0;

	JSequence.push_back(0);

	for (size_t i = 0; i < ArgsNumber; i++, n++)
	{
		CurrentN = std::pow(2,n) - PreviousN; // J (n + 1) = 2^(n) - J(n)
 
		for (size_t j = CurrentN; j > PreviousN; j--, i++)
			JSequence.push_back(j);
		PreviousN = CurrentN; // next loop PreviousN
	}
	return JSequence;
}

void	PmergeMe::sortVector( void )
{
	std::cout << "Before:	"; printer(this->vec);
	double	start = std::clock();
	{
		VectorPair pairs;
		makePairs(this->vec, pairs); // i can remove the f<vector, VectorPair>() here since the compiler will know the type of each one via the function arguments

		Vector bigElements, smallElements;
		splitPairs(pairs, bigElements, smallElements);

		mergeSortVector(bigElements.begin(), bigElements.end());

		insertSmallElementsVec(bigElements, smallElements);

		this->vec = bigElements;
	}
	double	duration = (std::clock() - start) / CLOCKS_PER_SEC * 1000000;
	std::cout << "After:	"; printer(this->vec);
	std::cout	<< "Time to process a range of " << this->vec.size()
				<< " elements with std::vector : " << duration << " µs" << std::endl;
}

void	PmergeMe::sortDeque( void )
{
	std::cout << "Before:	"; printer(this->deq);
	double	start = std::clock();
	{
		DequePair pairs;
		makePairs(this->deq, pairs); // i can remove the f<Deque, DequePair>() here since the compiler will know the type of each one via the function arguments

		Deque bigElements, smallElements;
		splitPairs(pairs, bigElements, smallElements);

		mergeSortDeque(bigElements.begin(), bigElements.end());

		insertSmallElementsDeq(bigElements, smallElements);

		this->deq = bigElements;
	}
	double	duration = (std::clock() - start) / CLOCKS_PER_SEC * 1000000;
	std::cout << "After:	"; printer(this->deq);
	std::cout	<< "Time to process a range of " << this->deq.size()
				<< " elements with std::deque : " << duration << " µs" << std::endl;
}

/*	|#------------------------------------------------------#|
	|#			 	Private Member functions    			#|
	|#------------------------------------------------------#|
*/

template < typename Container, typename PairedContainer>
PairedContainer	PmergeMe::makePairs(const Container &C, PairedContainer &pairs)
{
	int	first, second;

	for (size_t i = 0; i + 1 < C.size(); i += 2)
	{
		first = C[i];
		second = C[i + 1];
		if (first > second)
			std::swap(first, second);

		pairs.push_back(std::make_pair(first, second));
	}

	if (C.size() % 2 != 0) // if odd number of elements -> push struggler with -1
		pairs.push_back(std::make_pair(C.back(), -1));

	return pairs;
}

template < typename Container, typename PairedContainer>
void	PmergeMe::splitPairs	(	PairedContainer &pairs,
									Container &bigElements,
									Container &smallElements
								)
{
	for (size_t i = 0; i < pairs.size(); i++)
	{
		smallElements.push_back(pairs[i].first); // .first huwa small element mn koula pair
		if (pairs[i].second != -1) // ila makanch struggler
			bigElements.push_back(pairs[i].second); // .second huwa big element mn koula pair
	}
	bigElements.insert(bigElements.begin(), smallElements.front());
	smallElements.erase(smallElements.begin());
}

/*	|#------------------------------------------------------#|
	|#			 			Vector Sorter		   			#|
	|#------------------------------------------------------#|
*/

void	PmergeMe::mergeSortVector	(	Vector::iterator begin,
										Vector::iterator end
									)
{
	if (std::distance(begin, end) <= 1) // Base case: yb9a element wa7d f vector
		return;

	Vector::iterator mid = begin + std::distance(begin, end) / 2;

	mergeSortVector(begin, mid);
	mergeSortVector(mid, end);

	std::inplace_merge(begin, mid, end);
}

/**
 * 
 *	Element to insert:{[1]    34531 abort      ./PmergeMe 9 8 2 77 55 7777
 *	Element to insert:{[1]    34531 abort      ./PmergeMe 1 4 2 9 3 8 7 5
 *  the jacobsthal be like 0 1 {3} the index 3 isnt available so the system aborts
 */

void	PmergeMe::insertSmallElementsVec	(	Vector &bigElements,
												const Vector &smallElements
											)
{
	for (unsigned int i = 0; i < smallElements.size(); i++)
	{
		while (i < JSequence.size() && JSequence[i] >= (int)smallElements.size())
			i++;
		Vector::iterator insertionPoint = std::lower_bound(	bigElements.begin(),
															bigElements.end(),
															smallElements[JSequence[i]]);
		bigElements.insert(insertionPoint, smallElements[JSequence[i]]);
	}
}

/*	|#------------------------------------------------------#|
	|#			 			Deque Sorter	    			#|
	|#------------------------------------------------------#|
*/

void	PmergeMe::mergeSortDeque	(	Deque::iterator begin,
										Deque::iterator end
									)
{
	if (std::distance(begin, end) <= 1) // Base case: yb9a element wa7d f Deque
		return;

	Deque::iterator mid = begin + std::distance(begin, end) / 2;

	mergeSortDeque(begin, mid);
	mergeSortDeque(mid, end);

	std::inplace_merge(begin, mid, end);
}

void	PmergeMe::insertSmallElementsDeq	(	Deque &bigElements,
												const Deque &smallElements
											)
{
	Deque::iterator	insertionPoint;

	for (unsigned int i = 0; i < smallElements.size(); i++)
	{
		while (i < JSequence.size() && JSequence[i] >= (int)smallElements.size())
			i++;
		Deque::iterator	insertionPoint = std::lower_bound(bigElements.begin(), // look for the smallest element in the bigElement
														  bigElements.end(),
														  smallElements[JSequence[i]]);
		bigElements.insert(insertionPoint, smallElements[JSequence[i]]);	// then insert the small element right before it
	}
}