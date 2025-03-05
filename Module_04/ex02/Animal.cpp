#include "Animal.hpp"

Animal::Animal() {
	this->type = "Default_name";
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type) {
	std::cout << "Animal Copy Constructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &other) {
    if (this != &other)
	{
		type = other.type;
    }
	std::cout << "Animal Copy Assignment Operator called" << std::endl;
    return *this;
}

Animal::~Animal() {
	std::cout << "Animal Destructor called" << std::endl;
}

// 			######################################################

const	std::string	 	&Animal::getType() const {
    return this->type;
}

