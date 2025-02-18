#include "Cat.hpp"

Cat::Cat() : Animal() {
	this->type = "Cat";
	std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(std::string _type) : Animal(_type) {
	this->type = _type;
	std::cout << "Cat Parametrized Constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other.type) {
	this->type = other.type;
	std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &other) {
    if (this != &other)
	{
		type = other.type;
    }
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
    std::cout << "Cat makeSound() called." << std::endl;
}
