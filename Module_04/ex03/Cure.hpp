#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure( Cure const & );
	Cure& operator=( Cure const & );
	~Cure();

	virtual AMateria*   clone() const;
	virtual void        use(ICharacter& target);
};
