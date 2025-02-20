#pragma once

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal {
public:
	Cat();
	Cat(std::string _type);
	Cat(const Cat &other);
	Cat	&operator=(const Cat &other);
	virtual	~Cat();

	const	std::string	 	&getType() const;
	virtual	void			makeSound() const;
};