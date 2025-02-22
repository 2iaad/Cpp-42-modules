#pragma once

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal {
// protected:
	// std::string type;
public:
	Cat();
	Cat(const Cat &other);
	Cat	&operator=(const Cat &other);
	virtual	~Cat();

	const	std::string	 	&getType() const;
	virtual	void			makeSound() const;
};