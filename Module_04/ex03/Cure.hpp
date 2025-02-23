#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(Cure const &other);
	Cure& operator=(Cure const &other);
	~Cure();

	virtual AMateria*   clone() const;
	virtual void        use(ICharacter& target);
};
