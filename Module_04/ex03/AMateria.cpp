#include "AMateria.hpp"

AMateria::AMateria() : type("") {
	std::cout << "AMateria Default Constructor called" << std::endl;
}

AMateria::AMateria(std::string const &_type) : type(_type) {
	std::cout << "AMateria Parameterized Constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other)  {
	std::cout << "AMateria Copy Constructor called" << std::endl;
	*this = other;
}

AMateria	&AMateria::operator=(const AMateria &other) {
	std::cout << "AMateria Copy Assignment Operator called" << std::endl;
	this->type = other.type;
    return *this;
}

AMateria::~AMateria() {
	std::cout << "AMateria Destructor called" << std::endl;
}

// 			######################################################

std::string const &AMateria::getType() const {
	return this->type;
}

void	AMateria::use(ICharacter& target) {
    std::cout << "AMateria " << this->type << " used on " << target.getName() << std::endl;
}