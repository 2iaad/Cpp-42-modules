#pragma once

#include <iostream>

/*
	why functions don't work without the Reference ?

	what does template < typename T > do exactly ?
*/

template < typename T >
T	max(T &x, T &y) {
	return (x > y) ? x : y;
}

template < typename T >
T	min(T &x, T &y) {
	return (x < y) ? x : y;
}

template < typename T >
void	swap(T &x, T &y) {
	T	tmp;

	tmp = x;
	x = y;
	y = tmp;
}

