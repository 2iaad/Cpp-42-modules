#pragma once

#include <iostream>

/**
 * @brief 
 * 
 * @param T: means that the type thats going to be held is unknow until
 * the compile time. the compiler replace the T with the data type of the object
 * declared.
 * 
 * @param Container: means that the default value of Container is std::deque
 * 	-> which is also the default underlaying container that runs the std::stack
 * 				-> (if not specifiyed ofc)
 * 
 * Chnou huma nested types?
 * 		->  A type defined inside another class/template
 * 				(Ex: Container::iterator).
 */

template < typename T, typename Container=std::deque < T > >
class MutantStack : public std::stack < T, Container > {
public:
	MutantStack()										{}
	~MutantStack()										{}
	MutantStack(const MutantStack &other)				{ *this = other; }
	MutantStack	&operator=(const MutantStack &other)	{
		std::stack< T, Container >::operator=( other );
        return *this;
	}
	// typedef typename Container::const_iterator it;

	/**
	 * @brief begin(): return pointer to the first element of the container
	 * 
	 * @return		Container::const_iterator 
	 * 					|
	 * 					v
	 *       std::deque < T >::const_iterator
	 * 
	 * 	why we do typename before the return of begin() && end() ?
	 * 		-> to informe the compiler that the return value is a data type 
	 * 		not a static member variable. because static member variables
	 * 		are declared in the same syntax. so we differenciate between the two.
	 */

	typename Container::const_iterator	begin()	{ return this->c.begin(); }
    typename Container::const_iterator	end()	{ return this->c.end(); }
};