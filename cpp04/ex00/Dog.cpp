#include "Dog.hpp"

Dog::Dog() {
	this->type = "Default_name";
	std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(std::string _type) : type(_type) {
	std::cout << "Dog Parametrized Constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : type(other.type) {
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
