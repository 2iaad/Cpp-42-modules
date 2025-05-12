#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {	std::cout << "PmergeMe Constructor called!" << std::endl; }

PmergeMe::PmergeMe(const PmergeMe &other) : vec(other.vec), deq(other.deq) {
	std::cout << "PmergeMe Copy Constructor called" << std::endl;
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &other) {
    if (this != &other) {
		vec = other.vec;
		deq = other.deq;
	}
	std::cout << "PmergeMe Copy Assignment Operator called" << std::endl;
    return *this;
}

PmergeMe::~PmergeMe() {	std::cout << "PmergeMe Destructor called" << std::endl; }

/*	|#------------------------------------------------------#|
	|#			 		Public Member functions    			#|
	|#------------------------------------------------------#|
*/

void	PmergeMe::init_data(int ac, char **av)
{
	double	tmp = 0;
	char	*end = NULL;

	this->ArgsNumber = ac - 1;
	this->JSequence = JacobSthalSequence();
	for (int i = 1; i < ac; i++)
	{
		tmp = std::strtod(av[i], &end);

		if (!(*av[i]) || *end || tmp < 0 || tmp > std::numeric_limits<int>::max()) // ila kant number negative ola invalide arg
			throw std::invalid_argument("Error");
		this->vec.push_back(tmp);
		this->deq.push_back(tmp);
	}
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
	//		1	-	Make the pairs
	VectorPair pairs;
	makePairs(this->vec, pairs); // i can remove the f<vector, VectorPair>() here since the compiler will know the type of each one via the function arguments

	//		2	-	Split big and small
	Vector bigElements, smallElements;
	splitPairs(pairs, bigElements, smallElements);

	std::cout << "\033[1;31mbig elements:   " << std::endl; printer(bigElements);
	std::cout << "\033[1;31msmall elements:   " << std::endl; printer(smallElements);

	//		3	-	Sort bigElements
	mergeSortVector(bigElements.begin(), bigElements.end());

	//		4	-	Insert small
	insertSmallElementsVec(bigElements, smallElements);

	this->vec = bigElements;
	std::cout << "\033[1;31m#######----> Final result:   " << std::endl; printer(this->vec);
}

void	PmergeMe::sortDeque( void )
{
	DequePair pairs;
	makePairs(this->deq, pairs); // i can remove the f<Deque, DequePair>() here since the compiler will know the type of each one via the function arguments

	Deque bigElements, smallElements;
	splitPairs(pairs, bigElements, smallElements);

	mergeSortDeque(bigElements.begin(), bigElements.end());

	insertSmallElementsDeq(bigElements, smallElements);

	this->deq = bigElements;
	std::cout << "\033[1;31m#######----> Final result:   " << std::endl; printer(this->deq);
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
	for (size_t i = 0; i < pairs.size(); ++i)
	{
		smallElements.push_back(pairs[i].first); // .first huwa small element mn koula pair
		if (pairs[i].second != -1) // ila makanch struggler
			bigElements.push_back(pairs[i].second); // .second huwa big element mn koula pair
	}
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

void	PmergeMe::insertSmallElementsVec	(	Vector &bigElements,
												const Vector &smallElements
											)
{
	Vector::iterator	insertionPoint;

	for (unsigned int i = 0; i < smallElements.size(); ++i)
	{
		insertionPoint = std::lower_bound(	bigElements.begin(), // look for the smallest element in the bigElement
											bigElements.end(),
											smallElements[JSequence[i]]);
		bigElements.insert(insertionPoint, smallElements[JSequence[i]]);	// then insert the small element right before it
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

	for (unsigned int i = 0; i < smallElements.size(); ++i)
	{
		insertionPoint = std::lower_bound(	bigElements.begin(), // look for the smallest element in the bigElement
											bigElements.end(),
											smallElements[JSequence[i]]);
		bigElements.insert(insertionPoint, smallElements[JSequence[i]]);	// then insert the small element right before it
	}
}