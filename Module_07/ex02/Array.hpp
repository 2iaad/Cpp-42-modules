#pragma once

#include <iostream>

template < typename T >
class Array {
private:
	T				*arr;
	unsigned int	_size;
public:
	Array()						: arr( new T() ), _size( 0 )	{}
	Array(unsigned int	n)		: arr( new T[n] ), _size( n )	{}
	Array(const Array &other)	: arr( new T[other.size()] ), _size( other.size() )
	{
		for (unsigned int i = 0; i < _size; i++)
			arr[i] = other.arr[i];
	}
	Array	&operator=(const Array &other)
	{
		if (this != &other)
		{
			delete [] arr;
			arr		= new T[other.size()];
			_size	= other.size();
			for (unsigned int i = 0; i < _size; i++)
				arr[i] = other.arr[i];
		}
		return *this ;
	}
	T		&operator[](unsigned int i) const
	{
        return (i >= _size) ?
				throw std::out_of_range("Index is out of bounds") : arr[i];
    }
	~Array() {	delete [] arr;  };

	unsigned int	size() const {	return	_size;  }
};