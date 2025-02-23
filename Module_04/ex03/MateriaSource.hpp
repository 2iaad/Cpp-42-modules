#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*materias[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const &other);
	MateriaSource	&operator=(MateriaSource const &other);
	~MateriaSource();

	AMateria*	getMateria(std::string const &type);
	AMateria*	createMateria(std::string const &type);
	void		learnMateria(AMateria*);
};