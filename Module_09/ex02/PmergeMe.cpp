#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
	std::cout << "PmergeMe Constructor called!" << std::endl;
}

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

PmergeMe::~PmergeMe() {
	std::cout << "PmergeMe Destructor called" << std::endl;
}

/*	|#------------------------------------------------------#|
	|#			 		Public Member functions    			#|
	|#------------------------------------------------------#|
*/

void	PmergeMe::init_data(int ac, char **av)
{
	double	tmp = 0;
	char	*end = NULL;

	for (int i = 1; i < ac; i++)
	{
		tmp = std::strtod(av[i], &end);

		if (!(*av[i]) || *end || tmp < 0 || tmp > std::numeric_limits<int>::max()) // ila kant number negative ola invalide arg
			throw std::invalid_argument("Error");
		this->vec.push_back(tmp);
		this->deq.push_back(tmp);
	}
	// printer(vec);
	// printer(deq);
}

void	PmergeMe::sortVector( void )
{
	//		1	-	Make the pairs
	std::vector <std::pair<int, int> > pairs = makeVectorPairs();
	printer(pairs);

	//		2	-	Split big and small
	std::vector<int> bigElements, smallElements;
	splitVectorPairs(pairs, bigElements, smallElements);

	std::cout << "\033[1;31mbig elements:   " << std::endl; printer(bigElements);
	std::cout << "\033[1;31msmall elements:   " << std::endl; printer(smallElements);

	//		3	-	Sort bigElements
	fusionSortVector(bigElements.begin(), bigElements.end());

	// //		4	-	Insert small
	insertSmallElementsVec(bigElements, smallElements);

	this->vec = bigElements;
	std::cout << "\033[1;31m#######----> Final result:   " << std::endl; printer(this->vec);
}

/*	|#------------------------------------------------------#|
	|#			 	Private Member functions    			#|
	|#------------------------------------------------------#|
*/

std::vector <std::pair<int, int> >	PmergeMe::makeVectorPairs( void )
{
	int	first, second;
	std::vector <std::pair<int, int> > pairs;

	for (size_t i = 0; i + 1 < this->vec.size(); i += 2)
	{
		first = this->vec[i];
		second = this->vec[i + 1];
		if (first > second)
			std::swap(first, second);

		pairs.push_back(std::make_pair(first, second));
	}

	if (this->vec.size() % 2 != 0) // if odd number of elements -> push struggler with -1
		pairs.push_back(std::make_pair(this->vec.back(), -1));

	return pairs;
}

void	PmergeMe::splitVectorPairs	(	std::vector <std::pair<int, int> > &pairs,
										std::vector <int> &bigElements,
										std::vector <int> &smallElements
									)
{
	for (size_t i = 0; i < pairs.size(); ++i)
	{
		smallElements.push_back(pairs[i].first); // .first huwa small element mn koula pair
		if (pairs[i].second != -1) // ila makanch struggler
			bigElements.push_back(pairs[i].second); // .second huwa big element mn koula pair
	}
}

/*
	FusionSortVector on this : {14, 11, 3, 12, 1, 4, 25, 24, 30, 2}

	FusionSortVector on this : [14 12 4 25 30]

		 [14 12 4 25 30]
				|
			 [14 12]        
			 /      \       
		 [14]        [12]

			[4 25 30]
			/       \
		 [4]	   [25 30]
				   /     \
		    	[25]     [30]

	Recursion while going back :

	[12, 14]						[25, 30]
	[12, 14]				[4]		[25, 30]
	[12, 14]					[4, 25, 30]
	[4, 12, 14, 25, 30]	
*/

void	PmergeMe::fusionSortVector	(	std::vector<int>::iterator begin,
										std::vector<int>::iterator end
									)
{
	if (std::distance(begin, end) <= 1) // Base case: yb9a element wa7d f vector
		return;

	std::vector<int>::iterator mid = begin + std::distance(begin, end) / 2;
	// std::cout << "{" << *mid << "}\t --- > Range: {";
	// std::vector<int>::iterator tmp(begin);
	// while (tmp != end)
	// {
	// 	std::cout << " " << *tmp << " ";
	// 	tmp++;
	// }
	// std::cout << "}" << std::endl;
	fusionSortVector(begin, mid);
	fusionSortVector(mid, end);

	std::inplace_merge(begin, mid, end);
}

void	PmergeMe::insertSmallElementsVec	(	std::vector<int> &bigElements,
												const std::vector<int> &smallElements
											)
{
	std::vector<int>::iterator insertionPoint;

	for (unsigned int i = 0; i < smallElements.size(); ++i)
	{
		insertionPoint = std::lower_bound(	bigElements.begin(), // look for the smallest element in the bigElement
											bigElements.end(),
											smallElements[i]);
		bigElements.insert(insertionPoint, smallElements[i]);	// then insert the small element right before it
	}
}


// template <typename Container>
// int_vector PmergeMe<Container>::generate_indexes(size_t size) {
//     int_vector indexes;
//     int jacobsthalSequence[size + 1];

//     jacobsthalSequence[0] = 0;
//     jacobsthalSequence[1] = 1;
//     int lastJacobsthalNumber = 2;

//     for (size_t i = 2; indexes.size() < size; i++)
//     {
			// Eror mzl f had loop!
//         // Generate the next Jacobsthal number
//         jacobsthalSequence[i] = jacobsthalSequence[i - 1] + 2 * jacobsthalSequence[i - 2];

//         // Push the jacobsthal number
//         if (i != 2) indexes.push_back(jacobsthalSequence[i]);

//         // Push back the indexes between the last Jacobsthal number and the current one
//         for (int j = jacobsthalSequence[i] - 1; j > lastJacobsthalNumber; j--)
//             indexes.push_back(j);

//         // Update akhir Jacobsthal number
//         lastJacobsthalNumber = jacobsthalSequence[i];
//     }
//     return (indexes);
// }