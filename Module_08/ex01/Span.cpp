#include "Span.hpp"

Span::Span(unsigned int	N)
{
	max = N;
	std::cout << "Span Parametrized Constructor called" << std::endl;
}

Span::Span(const Span &other)
{
	*this = other;
	std::cout << "Span Copy Constructor called" << std::endl;
}

Span	&Span::operator=(const Span &other)
{
	if (this != &other) {
		max = other.max;
		storage = other.storage;
	}
	std::cout << "Span Copy Assignment Operator called" << std::endl;
	return *this;
}

Span::~Span()
{
	std::cout << "Span Destructor called" << std::endl;
}

/*	|#------------------------------------------------------#|
	|#				    Member functions    				#|
	|#------------------------------------------------------#|
*/

void	Span::addNumber(int number)
{
	(storage.size() == max) ?
		throw std::runtime_error("Storage filled") : storage.push_back(number);
}

/**
 * @brief Ila kan it1 = v.end() o it2 = v.begin()
 * 				---> storage.insert() won't insert
 */

void	Span::addNumber(	std::vector <int>::const_iterator it1, 
							std::vector <int>::const_iterator it2 )
{
	if (storage.size() + (it2 - it1) > max) // check if storage.size() + range.size() > allowed capacity
		throw std::runtime_error("Can't handle this range");

	try {
		storage.insert(storage.end(), it1, it2);
	} catch (std::exception &e) {
		std::cout << "Exception caught from insert: " << e.what() << std::endl;
	}
}

int		Span::shortestSpan() const // i still allow {1, 2, 3, 1...}
{
	int shortest = Span::longestSpan();

	if (storage.size() < 2)
		throw std::runtime_error("Less than 2 elements in vector");

	/**
	 * @brief tari9a lwla deyal lhard code lol
	 */

	// int	tmp = 0;

	// for (unsigned int i(0); i < storage.size(); i++)
	// {
	// 	for (unsigned int j(0); j < storage.size(); j++)
	// 	{
	// 		if (storage[i] == storage[j]) continue;
	// 		tmp = std::abs (storage[i] - storage[j]);
	// 		if (tmp < shortest)
	// 			shortest = tmp;
	// 	}
	// }

	/**
	 * @brief tari9a tanya using std::sort
	 * ila bghit nkhdm biha khass darouri ndir copy dstorage
	 * 		-> bach kmanbedelch f actual storage deyali
	 */

	std::vector < int > tmp(storage);

	std::sort(tmp.begin(), tmp.end());
	for (unsigned int i(0); i < tmp.size() - 1; i++) // - 1 becuse deja kandir tmp[i + 1]
	{
		if (tmp[i + 1] - tmp[i] < shortest)
			shortest = tmp[i + 1] - tmp[i];
	}

	return shortest;
}

int		Span::longestSpan() const
{
	if (storage.size() < 2)
		throw std::runtime_error("Less than 2 elements in vector");

	return (*std::max_element(storage.begin(), storage.end()) - \
			*std::min_element(storage.begin(), storage.end()));
}

void	Span::getStorage() const
{
	for (size_t i = 0; i < storage.size(); i++)
		std::cout << storage[i] << "\t";
	std::cout << std::endl;
}