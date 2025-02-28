#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice Default Constructor called" << std::endl;
}

Ice::Ice(const Ice &other) : AMateria("ice") {
	std::cout << "Ice Copy Constructor called" << std::endl;
	*this = other;
}

Ice	&Ice::operator=(const Ice &other) {
	std::cout << "Ice Copy Assignment Operator called" << std::endl;
	if (this != &other)
        this->type = other.type;
    return *this;
}

Ice::~Ice() {
	std::cout << "Ice Destructor called" << std::endl;
}

// 			######################################################

AMateria*	Ice::clone() const {
	return NULL;
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *";
}