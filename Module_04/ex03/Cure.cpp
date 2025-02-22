#include "Cure.hpp"

Cure::Cure() {
	std::cout << "Cure Default Constructor called" << std::endl;
}

Cure::Cure(const Cure &other)  {
	std::cout << "Cure Copy Constructor called" << std::endl;
	*this = other;
}

Cure	&Cure::operator=(const Cure &other) {
	std::cout << "Cure Copy Assignment Operator called" << std::endl;
    return *this;
}

Cure::~Cure() {
	std::cout << "Cure Destructor called" << std::endl;
}

// 			######################################################
