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
