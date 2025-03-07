#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	this->type = "WrongCat";
	std::cout << "WrongCat Default Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal() {
	this->type = other.type;
	std::cout << "WrongCat Copy Constructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &other) {
    if (this != &other)
		type = other.type;
	std::cout << "WrongCat Copy Assignment Operator called" << std::endl;
    return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor called" << std::endl;
}

// 			######################################################

const	std::string	 	&WrongCat::getType() const {
    return this->type;
}

void	WrongCat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}
