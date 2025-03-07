#include "Character.hpp"

Character::Character(std::string _name) : name(_name) {
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	for (int i = 0; i < 4; i++)
		unequipped[i] = NULL;
	std::cout << "Character Default Constructor called" << std::endl;
}

Character::Character(const Character &other) : name(other.name) {
	std::cout << "Character Copy Constructor called" << std::endl;
	*this = other;
}

Character	&Character::operator=(const Character &other) {
	std::cout << "Character Copy Assignment Operator called" << std::endl;
	
	this->name = other.name;
    if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
			{
				delete this->inventory[i];
				this->inventory[i] = NULL;
			}
			if (other.inventory[i])
				this->inventory[i] = other.inventory[i]->clone();
		}
	}
    return *this;
}

Character::~Character() {
	std::cout << "Character Destructor called" << std::endl;
	    for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
			{
				delete this->inventory[i];
				this->inventory[i] = NULL;
			}
			if (this->unequipped[i])
			{
				delete this->unequipped[i];
				this->unequipped[i] = NULL;
			}
		}
}

// 			######################################################

std::string const&  Character::getName() const {
	return this->name;
}

bool	Character::dupCheck(AMateria *m, AMateria *ptr[4]) const {
	for (int i = 0; i < 4; i++)
		if (m == ptr[i])
			return true;
	return false;
}

void	Character::freeUnequipped() {
	for (int i = 0; i < 4; i++)
	{
		if (this->unequipped[i])
		{
			delete this->unequipped[i];
			this->unequipped[i] = NULL;
		}
	}
}

void	Character::equip(AMateria* m) {
	if (!m || dupCheck(m, this->inventory))
		return (void)(std::cout << "Can't equip Matria!" << std::endl);

	freeUnequipped();
    for (int i = 0; i < 4; i++)
        if (!this->inventory[i])
        {
            this->inventory[i] = m;
            std::cout << "Character " << this->name << " equipped with " << m->getType() << std::endl;
            return ;
        }
    std::cout << "Character " << this->name << " can't equip " << m->getType() << std::endl;
}

void	Character::unequip(int index) {
	if ((index < 0 || index > 3) || !this->inventory[index])
	{
		std::cout << "Character " << this->name << " can't unequip the slot!" << std::endl;
		return ;
	}

	if (!dupCheck(this->inventory[index], this->unequipped)) // ila maknch f unequipped inventory nzido
	{
		this->unequipped[index] = this->inventory[index];
		this->inventory[index] = NULL;
	}
	std::cout << "Character " << this->name << " unequipped the slot." << std::endl;
}

void	Character::use(int index, ICharacter& target) {
	if ((index < 0 || index > 3) || !this->inventory[index])
	{
		std::cout << "Character " << this->name << " can't use slot!" << std::endl;
		return ;
	}

	std::cout << "Character " << this->name << " using " << this->inventory[index]->getType() << std::endl;
	this->inventory[index]->use(target);
	delete this->inventory[index]; // delete after using the slot.
	this->inventory[index] = NULL;
}
