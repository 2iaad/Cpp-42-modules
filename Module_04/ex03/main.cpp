#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

/**
 * @brief small main fih leaks fm7fada d charachter(li fiha created materias) oma3rftch wach khass nhandlihom
 * 
 * @return int 
 */

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());

	// std::cout << "*******************\n" << std::endl;
	// src->learnMateria(new Cure());
	// std::cout << "*******************\n" << std::endl;

	Character a("A");
	Character b("B");

	AMateria *tmp;
	tmp = src->createMateria("ice");
	a.equip(tmp);
	tmp = src->createMateria("ice");
	a.equip(tmp);
	tmp = src->createMateria("ice");
	a.equip(tmp);
	tmp = src->createMateria("ice");
	a.equip(tmp);
	tmp = src->createMateria("ice");
	a.equip(tmp);

	// tmp = src->createMateria("cure");
	// a.equip(tmp);
	// tmp = src->createMateria("ice");
	// a.equip(tmp);
	// tmp = src->createMateria("ice");
	// a.equip(tmp);
	// a.use(2, b); // i used third materia here

	// tmp = src->createMateria("cure");
	// b.equip(tmp);
	// tmp = src->createMateria("ice");
	// b.equip(tmp);


	std::cout << "*******************\n" << std::endl;

	// b = a;
	a.use(3, b);

	std::cout << "\n*******************\n" << std::endl;

	delete src;

	return 0;
}
