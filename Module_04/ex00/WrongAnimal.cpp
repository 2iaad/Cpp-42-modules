#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->type = "Default_name";
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type) {
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other) {
    if (this != &other)
		type = other.type;
	std::cout << "WrongAnimal Copy Assignment Operator called" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

// 			######################################################

const	std::string	 	&WrongAnimal::getType() const {
    return this->type;
}

void	WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal makeSound() called." << std::endl;
}
