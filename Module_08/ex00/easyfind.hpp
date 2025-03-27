#pragma once

#include <iostream>
#include <vector>

template < typename	T >
void	easyfind(const T &haystack, const int &needle)
{
	if ( std::find(haystack.begin(), haystack.end(), needle) == haystack.end() )
		throw std::runtime_error("Occurrence not found!");
	else
		std::cout << "Occurrence has been found!" << std::endl;
}