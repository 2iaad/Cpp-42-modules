#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

int main()
{
	/**
	 * @brief subject's test mixed with mine
	 * 
	 */

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	std::cout << "******\n";
	me->unequip(2);
	me->unequip(3);
	std::cout << "******\n";

	ICharacter* bob = new Character("bob");
	
	std::cout << "******\n";
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	std::cout << "******\n";
	
	delete bob;
	delete me;
	delete src;
	
	return 0;
}
