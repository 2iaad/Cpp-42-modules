#pragma once

#include <iostream>

template < typename T >
void	iter( T *arr, size_t length, void (*applier)(T &) )
{
    for (size_t i = 0; i < length; i++)
        applier( arr[i] );
}

template < typename T >
void	applier(T &element)
{
	std::cout << element << std::endl;
}
