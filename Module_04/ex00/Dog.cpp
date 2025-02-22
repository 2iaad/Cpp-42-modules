#include "Dog.hpp"

Dog::Dog() : Animal() {
	this->type = "Dog";
	std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other.type)  {
	this->type = other.type;
	std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &other) {
    if (this != &other)
	{
		type = other.type;
    }
	std::cout << "Dog Copy Assignment Operator called" << std::endl;
    return *this;
}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
}

// 			######################################################

const	std::string	 	&Dog::getType() const {
    return this->type;
}

void	Dog::makeSound() const {
    std::cout << "Dog makeSound() called." << std::endl;
}
