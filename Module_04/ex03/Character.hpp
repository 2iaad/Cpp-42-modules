#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string	name;
	AMateria	*inventory[4];
	AMateria	*unequipped[4];

	void				freeUnequipped();
	bool				dupCheck(AMateria *m, AMateria *ptr[4]) const;
public:
	Character(std::string _name);
	Character(Character const &other);
	Character& operator=(Character const &other);
	~Character();

    std::string const	&getName() const;
	void				equip(AMateria* m);
	void				unequip(int index);
	void				use(int index, ICharacter& target);
};
