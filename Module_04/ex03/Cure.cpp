#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure Default Constructor called" << std::endl;
}

Cure::Cure(const Cure &other) : AMateria("cure") {
	std::cout << "Cure Copy Constructor called" << std::endl;
	*this = other;
}

Cure	&Cure::operator=(const Cure &other) {
	std::cout << "Cure Copy Assignment Operator called" << std::endl;
	if (this != &other)
        this->type = other.type;
    return *this;
}

Cure::~Cure() {
	std::cout << "Cure Destructor called" << std::endl;
}

// 			######################################################

AMateria*	Cure::clone() const {
	    return (new Cure(*this));
}

void	Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}