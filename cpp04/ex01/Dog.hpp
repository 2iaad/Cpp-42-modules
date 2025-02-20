#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal {
private:
	Brain *B_ptr;
public:
	Dog();
	Dog(std::string _type);
	Dog(const Dog &other);
	Dog	&operator=(const Dog &other);
	virtual	~Dog();

	void	makeSound() const;
};