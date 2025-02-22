#include "Ice.hpp"

Ice::Ice() {
	std::cout << "Ice Default Constructor called" << std::endl;
}

Ice::Ice(const Ice &other)  {
	std::cout << "Ice Copy Constructor called" << std::endl;
	*this = other;
}

Ice	&Ice::operator=(const Ice &other) {
	std::cout << "Ice Copy Assignment Operator called" << std::endl;
    return *this;
}

Ice::~Ice() {
	std::cout << "Ice Destructor called" << std::endl;
}

// 			######################################################
