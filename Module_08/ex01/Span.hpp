#pragma once

#include <iostream>
#include <algorithm>

class Span {
private:
	std::vector < int > storage;
	unsigned int		max;
public:
	Span(unsigned int	N);
	Span(const Span	&other);
	Span	&operator=(const Span &other);
	~Span();

	void	addNumber(int number);
	int		shortestSpan() const ;
	int		longestSpan() const ;
};