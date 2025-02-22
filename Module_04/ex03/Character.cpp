#include "Character.hpp"

Character::Character(std::string _name) name(_name) {

	for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
	std::cout << "Character Default Constructor called" << std::endl;
}

Character::Character(const Character &other) name(other.name) {
	std::cout << "Character Copy Constructor called" << std::endl;
	*this = other;
}

Character	&Character::operator=(const Character &other) {
	std::cout << "Character Copy Assignment Operator called" << std::endl;
	if (this != &other)
    {
        this->_name = other._name;
        for (int i = 0; i < 4; i++)
            this->inventory[i] = other.inventory[i];
    }
    return *this;
}

Character::~Character() {
	std::cout << "Character Destructor called" << std::endl;
	    for (int i = 0; i < 4; i++)
			if (this->_inventory[i])
				delete this->_inventory[i];
}

// 			######################################################

std::string const&  Character::getName() const {
	return this->name;
}

void	Character::equip(AMateria* m) {

}

void	Character::unequip(int idx) {

}

void	Character::use(int idx, ICharacter& target) {

}
