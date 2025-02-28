#include "Character.hpp"

Character::Character(std::string _name) : name(_name) {

	for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
	std::cout << "Character Default Constructor called" << std::endl;
}

Character::Character(const Character &other) : name(other.name) {
	std::cout << "Character Copy Constructor called" << std::endl;
	*this = other;
}

Character	&Character::operator=(const Character &other) {
	std::cout << "Character Copy Assignment Operator called" << std::endl;
	if (this != &other)
    {
        this->name = other.name;
        for (int i = 0; i < 4; i++)
            this->inventory[i] = other.inventory[i];
    }
    return *this;
}

Character::~Character() {
	std::cout << "Character Destructor called" << std::endl;
	    for (int i = 0; i < 4; i++)
			if (this->inventory[i])
				delete this->inventory[i];
}

// 			######################################################

std::string const&  Character::getName() const {
	return this->name;
}

void	Character::equip(AMateria* m) {
	if (index < 0 || index > 49)
	{
		std::cout << "Invalid floor index!" << std::endl;
		return;
	}
}

void	Character::unequip(int index) {
	if (index < 0 || index > 3)
	{
		std::cout << "Invalid inventory index!" << std::endl;
		return ;
	}
	if (!this->inventory[index])
	{
		std::cout << "Inventory slot already empty!" << std::endl;
		return ;
	}
}

void	Character::use(int index, ICharacter& target) {
	if (index < 0 || index > 3)
	{
		std::cout << "Invalid inventory index!" << std::endl;
		return ;
	}
	if (!this->inventory[index])
	{
		std::cout << "Slot " << index << " is empty!" << std::endl;
		return;
	}
	std::cout << name << ": ";
	this->inventory[index]->use(target);
	delete this->inventory[index];
	this->inventory[index] = NULL;
}
