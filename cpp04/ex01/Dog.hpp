#pragma once

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal {
public:
	Dog();
	Dog(std::string _type);
	Dog(const Dog &other);
	Dog	&operator=(const Dog &other);
	virtual	~Dog();

	const	std::string	 	&getType() const;
	virtual	void			makeSound() const;
};