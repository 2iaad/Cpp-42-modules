#include "Cat.hpp"

Cat::Cat() : Animal() {
	this->type = "Cat";
	std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal() {
	this->type = other.type;
	std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &other) {
    if (this != &other)
		type = other.type;
	std::cout << "Cat Copy Assignment Operator called" << std::endl;
    return *this;
}

Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
}

// 			######################################################

const	std::string	 	&Cat::getType() const {
    return this->type;
}

void	Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}
